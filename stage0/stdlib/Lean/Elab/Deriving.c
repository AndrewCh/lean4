// Lean compiler output
// Module: Lean.Elab.Deriving
// Imports: Init Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util Lean.Elab.Deriving.Inhabited Lean.Elab.Deriving.BEq Lean.Elab.Deriving.DecEq
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Inhabited(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_BEq(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_DecEq(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Inhabited(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_BEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_DecEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif