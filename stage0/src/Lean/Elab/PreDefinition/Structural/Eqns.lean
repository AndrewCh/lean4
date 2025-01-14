/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Eqns
import Lean.Meta.Tactic.Split
import Lean.Meta.Tactic.Apply
import Lean.Elab.PreDefinition.Basic
import Lean.Elab.PreDefinition.Eqns
import Lean.Elab.PreDefinition.Structural.Basic

namespace Lean.Elab
open Meta
open Eqns

/-- Try to close goal using `rfl` with smart unfolding turned off. -/
def tryURefl (mvarId : MVarId) : MetaM Bool :=
  withOptions (smartUnfolding.set . false) do
    try applyRefl mvarId; return true catch _ => return false

/-- Delta reduce the equation left-hand-side -/
def deltaLHS (mvarId : MVarId) : MetaM MVarId := withMVarContext mvarId do
  let target ← getMVarType' mvarId
  let some (_, lhs, rhs) ← target.eq? | throwTacticEx `deltaLHS mvarId "equality expected"
  let some lhs ← delta? lhs | throwTacticEx `deltaLHS mvarId "failed to delta reduce lhs"
  replaceTargetDefEq mvarId (← mkEq lhs rhs)

def deltaRHS? (mvarId : MVarId) (declName : Name) : MetaM (Option MVarId) := withMVarContext mvarId do
  let target ← getMVarType' mvarId
  let some (_, lhs, rhs) ← target.eq? | throwTacticEx `deltaRHS mvarId "equality expected"
  let some rhs ← delta? rhs.consumeMData (. == declName) | return none
  replaceTargetDefEq mvarId (← mkEq lhs rhs)

private partial def whnfAux (e : Expr) : MetaM Expr := do
  let e ← whnfR e
  match e with
  | Expr.proj _ _ s _ => e.updateProj! (← whnfAux s)
  | _ => e

/-- Apply `whnfR` to lhs, return `none` if `lhs` was not modified -/
def whnfReducibleLHS? (mvarId : MVarId) : MetaM (Option MVarId) := withMVarContext mvarId do
  let target ← getMVarType' mvarId
  let some (_, lhs, rhs) ← target.eq? | throwTacticEx `whnfReducibleLHS mvarId "equality expected"
  let lhs' ← whnfAux lhs
  if lhs' != lhs then
    return some (← replaceTargetDefEq mvarId (← mkEq lhs' rhs))
  else
    return none

def tryContradiction (mvarId : MVarId) : MetaM Bool := do
  try contradiction mvarId { genDiseq := true }; return true catch _ => return false

namespace Structural

structure EqnInfo where
  declName    : Name
  levelParams : List Name
  type        : Expr
  value       : Expr
  recArgPos   : Nat
  deriving Inhabited

/-- Create a "unique" base name for equations and splitter -/
private def mkBaseNameFor (env : Environment) (declName : Name) : Name :=
  Lean.mkBaseNameFor env declName `eq_1 `_eqns

private partial def mkProof (declName : Name) (type : Expr) : MetaM Expr := do
  trace[Elab.definition.structural.eqns] "proving: {type}"
  withNewMCtxDepth do
    let main ← mkFreshExprSyntheticOpaqueMVar type
    let (_, mvarId) ← intros main.mvarId!
    unless (← tryURefl mvarId) do -- catch easy cases
      go (← deltaLHS mvarId)
    instantiateMVars main
where
  go (mvarId : MVarId) : MetaM Unit := do
    trace[Elab.definition.structural.eqns] "step\n{MessageData.ofGoal mvarId}"
    if (← tryURefl mvarId) then
      return ()
    else if (← tryContradiction mvarId) then
      return ()
    else if let some mvarId ← simpMatch? mvarId then
      go mvarId
    else if let some mvarId ← simpIf? mvarId then
      go mvarId
    else if let some mvarId ← whnfReducibleLHS? mvarId then
      go mvarId
    else if let some mvarId ← deltaRHS? mvarId declName then
      go mvarId
    else if let some mvarIds ← casesOnStuckLHS? mvarId then
      mvarIds.forM go
    else
      throwError "failed to generate equational theorem for '{declName}'\n{MessageData.ofGoal mvarId}"

def mkEqns (info : EqnInfo) : MetaM (Array Name) := do
  withOptions (tactic.hygienic.set . false) do
  let eqnTypes ← withNewMCtxDepth <| lambdaTelescope info.value fun xs body => do
    let us := info.levelParams.map mkLevelParam
    let target ← mkEq (mkAppN (Lean.mkConst info.declName us) xs) body
    let goal ← mkFreshExprSyntheticOpaqueMVar target
    mkEqnTypes #[info.declName] goal.mvarId!
  let baseName := mkBaseNameFor (← getEnv) info.declName
  let mut thmNames := #[]
  for i in [: eqnTypes.size] do
    let type := eqnTypes[i]
    trace[Elab.definition.structural.eqns] "{eqnTypes[i]}"
    let name := baseName ++ (`eq).appendIndexAfter (i+1)
    thmNames := thmNames.push name
    let value ← mkProof info.declName type
    addDecl <| Declaration.thmDecl {
      name, type, value
      levelParams := info.levelParams
    }
  return thmNames

builtin_initialize eqnInfoExt : MapDeclarationExtension EqnInfo ← mkMapDeclarationExtension `structEqInfo

def registerEqnsInfo (preDef : PreDefinition) (recArgPos : Nat) : CoreM Unit := do
  modifyEnv fun env => eqnInfoExt.insert env preDef.declName { preDef with recArgPos }

def getEqnsFor? (declName : Name) : MetaM (Option (Array Name)) := do
  let env ← getEnv
  if let some eqs := eqnsExt.getState env |>.map.find? declName then
    return some eqs
  else if let some info := eqnInfoExt.find? env declName then
    let eqs ← mkEqns info
    modifyEnv fun env => eqnsExt.modifyState env fun s => { s with map := s.map.insert declName eqs }
    return some eqs
  else
    return none

builtin_initialize
  registerGetEqnsFn getEqnsFor?
  registerTraceClass `Elab.definition.structural.eqns

end Structural
end Lean.Elab
