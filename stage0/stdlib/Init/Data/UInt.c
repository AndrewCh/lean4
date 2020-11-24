// Lean compiler output
// Module: Init.Data.UInt
// Imports: Init.Data.Fin.Basic Init.System.Platform
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
lean_object* l_instHasLessUInt64;
lean_object* l_instDecidableLess__2___boxed(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_instOfNatUInt16___closed__1;
lean_object* l_instDivUSize;
lean_object* l_UInt16_modn___boxed(lean_object*, lean_object*);
lean_object* l_instSubUInt64___closed__1;
lean_object* l_instSubUInt32___closed__1;
lean_object* l_UInt8_modn___boxed(lean_object*, lean_object*);
size_t l_USize_div(size_t, size_t);
size_t l_UInt32_toUSize(uint32_t);
uint8_t l_instDecidableLess__4(size_t, size_t);
lean_object* l_instAddUInt8___closed__1;
uint32_t lean_uint32_modn(uint32_t, lean_object*);
lean_object* l_instAddUSize___closed__1;
lean_object* l_instDivUInt64___closed__1;
lean_object* l_instDecidableLessEq__3___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_shiftRight___boxed(lean_object*, lean_object*);
uint32_t l_UInt8_toUInt32(uint8_t);
uint8_t l_UInt8_decLe(uint8_t, uint8_t);
lean_object* l_instAddUInt16;
lean_object* l_USize_toNat___boxed(lean_object*);
lean_object* l_UInt64_toUInt32___boxed(lean_object*);
uint64_t l_UInt64_add(uint64_t, uint64_t);
lean_object* l_instModNUInt64___closed__1;
uint64_t l_Bool_toUInt64(uint8_t);
lean_object* l_USize_add___boxed(lean_object*, lean_object*);
lean_object* l_instModNUInt16___closed__1;
lean_object* l_UInt8_toNat___boxed(lean_object*);
lean_object* l_instOfNatUInt64___closed__1;
uint8_t l_UInt8_lor(uint8_t, uint8_t);
lean_object* l_UInt16_ofNat___boxed(lean_object*);
uint8_t l_UInt32_toUInt8(uint32_t);
size_t l_USize_sub(size_t, size_t);
lean_object* l_UInt8_lor___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_decLe___boxed(lean_object*, lean_object*);
lean_object* l_instModUInt8;
lean_object* l_instHasLessEqUInt64;
uint32_t l_UInt32_land(uint32_t, uint32_t);
lean_object* l_instDecidableLess__4___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_land___boxed(lean_object*, lean_object*);
lean_object* l_Nat_toUSize___boxed(lean_object*);
lean_object* l_instAddUSize;
uint32_t l_UInt32_shiftLeft(uint32_t, uint32_t);
lean_object* l_instSubUInt16;
lean_object* l_instModNUInt8___closed__1;
lean_object* l_UInt16_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_land___boxed(lean_object*, lean_object*);
lean_object* l_UInt16_div___boxed(lean_object*, lean_object*);
lean_object* l_instModUSize;
lean_object* l_USize_decLt___boxed(lean_object*, lean_object*);
uint16_t l_UInt16_land(uint16_t, uint16_t);
lean_object* l_UInt32_mul___boxed(lean_object*, lean_object*);
lean_object* l_instOfNatUInt16;
lean_object* l_USize_land___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_land___boxed(lean_object*, lean_object*);
lean_object* l_instAddUInt32___closed__1;
lean_object* l_instMulUInt32;
lean_object* l_UInt16_decLe___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableLess__1(uint8_t, uint8_t);
lean_object* l_UInt16_sub___boxed(lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
uint8_t l_UInt8_div(uint8_t, uint8_t);
lean_object* l_instOfNatUSize;
lean_object* l_instSubUSize;
lean_object* l_instModUInt16___closed__1;
lean_object* l_UInt8_toUInt32___boxed(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_instSubUInt8;
uint32_t l_UInt32_shiftRight(uint32_t, uint32_t);
lean_object* l_UInt32_shiftRight___boxed(lean_object*, lean_object*);
uint8_t l_UInt8_decLt(uint8_t, uint8_t);
uint8_t l_UInt8_add(uint8_t, uint8_t);
uint16_t l_UInt16_add(uint16_t, uint16_t);
lean_object* l_USize_div___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableLessEq__4___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_ofNat___boxed(lean_object*);
uint32_t l_UInt32_add(uint32_t, uint32_t);
lean_object* l_instModUInt64;
uint8_t l_instDecidableLessEq__1(uint8_t, uint8_t);
size_t l_UInt64_toUSize(uint64_t);
uint32_t l_UInt32_div(uint32_t, uint32_t);
lean_object* l_instDivUSize___closed__1;
lean_object* l_UInt32_ofNat_x27___boxed(lean_object*, lean_object*);
lean_object* l_instOfNatUSize___closed__1;
lean_object* l_USize_ofNat___boxed(lean_object*);
lean_object* l_UInt32_toUInt16___boxed(lean_object*);
lean_object* l_USize_shiftRight___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_instDivUInt64;
lean_object* l_UInt64_modn___boxed(lean_object*, lean_object*);
lean_object* l_instHasLessEqUSize;
lean_object* l_instModNUInt64;
uint16_t l_Nat_toUInt16(lean_object*);
lean_object* l_UInt64_sub___boxed(lean_object*, lean_object*);
lean_object* l_instHasLessUSize;
lean_object* l_instDivUInt32___closed__1;
uint16_t l_UInt32_toUInt16(uint32_t);
uint32_t l_UInt32_sub(uint32_t, uint32_t);
lean_object* l_instSubUSize___closed__1;
lean_object* l_UInt8_sub___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_add___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableLessEq__2(uint16_t, uint16_t);
lean_object* l_UInt8_mod___boxed(lean_object*, lean_object*);
lean_object* l_instModNUSize___closed__1;
uint32_t l_UInt64_toUInt32(uint64_t);
lean_object* l_UInt64_toUInt16___boxed(lean_object*);
lean_object* l_instOfNatUInt64;
lean_object* l_instSubUInt8___closed__1;
lean_object* l_UInt8_add___boxed(lean_object*, lean_object*);
uint32_t l_Nat_toUInt32(lean_object*);
lean_object* l_instModNUSize;
lean_object* l_instAddUInt64___closed__1;
lean_object* l_instMulUInt8___closed__1;
lean_object* l_Nat_toUInt16___boxed(lean_object*);
uint8_t l_UInt64_decLt(uint64_t, uint64_t);
lean_object* l_instDivUInt16___closed__1;
lean_object* l_instDecidableLess__3___boxed(lean_object*, lean_object*);
uint64_t l_Nat_toUInt64(lean_object*);
lean_object* l_instOfNatUInt8;
lean_object* l_UInt64_mul___boxed(lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_instMulUInt64;
lean_object* l_instAddUInt32;
lean_object* l_UInt16_decLt___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_instModNUInt8;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_instMulUInt16;
uint16_t l_UInt16_lor(uint16_t, uint16_t);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instModUSize___closed__1;
lean_object* l_instSubUInt64;
lean_object* l_USize_shiftLeft___boxed(lean_object*, lean_object*);
lean_object* l_instMulUInt64___closed__1;
size_t l_USize_mul(size_t, size_t);
uint64_t l_UInt64_land(uint64_t, uint64_t);
uint16_t l_UInt16_div(uint16_t, uint16_t);
lean_object* l_instMulUInt8;
uint8_t l_UInt8_land(uint8_t, uint8_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_instDivUInt32;
lean_object* l_UInt64_shiftLeft___boxed(lean_object*, lean_object*);
lean_object* l_instModUInt32___closed__1;
lean_object* l_UInt32_div___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_toUInt8___boxed(lean_object*);
uint64_t l_UInt64_mod(uint64_t, uint64_t);
lean_object* l_instAddUInt8;
lean_object* l_instMulUSize;
lean_object* l_UInt16_add___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint64_t l_UInt64_mul(uint64_t, uint64_t);
size_t l_USize_land(size_t, size_t);
lean_object* l_USize_mod___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableLessEq__3(uint64_t, uint64_t);
lean_object* l_instDivUInt16;
size_t l_USize_mod(size_t, size_t);
lean_object* l_instModUInt16;
uint8_t l_UInt8_sub(uint8_t, uint8_t);
lean_object* l_Nat_toUInt64___boxed(lean_object*);
lean_object* l_instModNUInt32___closed__1;
lean_object* l_instDecidableLess__1___boxed(lean_object*, lean_object*);
lean_object* l_USize_modn___boxed(lean_object*, lean_object*);
lean_object* l_instHasLessUInt16;
lean_object* l_instModUInt64___closed__1;
uint8_t l_UInt64_toUInt8(uint64_t);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_UInt64_decLe___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_mod___boxed(lean_object*, lean_object*);
lean_object* l_instModNUInt32;
uint64_t lean_uint64_modn(uint64_t, lean_object*);
uint8_t l_instDecidableLess__3(uint64_t, uint64_t);
lean_object* l_Bool_toUInt64___boxed(lean_object*);
uint32_t l_USize_toUInt32(size_t);
uint16_t l_UInt16_sub(uint16_t, uint16_t);
uint64_t l_UInt64_shiftLeft(uint64_t, uint64_t);
lean_object* l_UInt64_toNat___boxed(lean_object*);
lean_object* l_UInt16_toNat___boxed(lean_object*);
uint64_t l_UInt64_lor(uint64_t, uint64_t);
uint8_t l_UInt16_decLt(uint16_t, uint16_t);
lean_object* l_UInt32_ofNat___boxed(lean_object*);
lean_object* l_instHasLessEqUInt8;
uint64_t l_UInt32_toUInt64(uint32_t);
uint8_t lean_uint8_modn(uint8_t, lean_object*);
uint16_t lean_uint16_modn(uint16_t, lean_object*);
lean_object* l_USize_decLe___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_sub___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableLessEq__1___boxed(lean_object*, lean_object*);
uint8_t l_UInt8_mul(uint8_t, uint8_t);
lean_object* l_instDivUInt8;
lean_object* l_USize_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_decLt___boxed(lean_object*, lean_object*);
uint8_t l_Nat_toUInt8(lean_object*);
uint8_t l_UInt64_decLe(uint64_t, uint64_t);
uint32_t l_UInt32_mul(uint32_t, uint32_t);
size_t l_Nat_toUSize(lean_object*);
uint32_t l_UInt32_mod(uint32_t, uint32_t);
lean_object* l_instDecidableLessEq__2___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_toUSize___boxed(lean_object*);
size_t l_USize_lor(size_t, size_t);
lean_object* l_instMulUInt32___closed__1;
lean_object* l_instMulUSize___closed__1;
lean_object* l_UInt32_lor___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_div___boxed(lean_object*, lean_object*);
lean_object* l_Nat_toUInt32___boxed(lean_object*);
lean_object* l_UInt32_shiftLeft___boxed(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_instOfNatUInt32;
lean_object* l_UInt16_mod___boxed(lean_object*, lean_object*);
lean_object* l_USize_toUInt32___boxed(lean_object*);
uint32_t l_UInt32_lor(uint32_t, uint32_t);
lean_object* l_UInt16_lor___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_modn___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_decLt___boxed(lean_object*, lean_object*);
lean_object* l_USize_lor___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_mul___boxed(lean_object*, lean_object*);
lean_object* l_instModNUInt16;
uint8_t l_instDecidableLessEq__4(size_t, size_t);
lean_object* l_UInt64_add___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_lor___boxed(lean_object*, lean_object*);
lean_object* l_instDivUInt8___closed__1;
uint16_t l_UInt16_mod(uint16_t, uint16_t);
uint16_t l_UInt16_mul(uint16_t, uint16_t);
lean_object* l_Nat_toUInt8___boxed(lean_object*);
lean_object* l_instModUInt32;
uint16_t l_UInt64_toUInt16(uint64_t);
lean_object* l_UInt64_mod___boxed(lean_object*, lean_object*);
uint64_t l_UInt64_sub(uint64_t, uint64_t);
lean_object* l_UInt32_toUSize___boxed(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
uint64_t l_UInt64_div(uint64_t, uint64_t);
uint64_t l_UInt64_shiftRight(uint64_t, uint64_t);
lean_object* l_UInt32_toUInt64___boxed(lean_object*);
uint8_t l_UInt8_mod(uint8_t, uint8_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_instSubUInt16___closed__1;
uint8_t l_UInt16_decLe(uint16_t, uint16_t);
uint8_t l_instDecidableLess__2(uint16_t, uint16_t);
lean_object* l_instHasLessEqUInt16;
lean_object* l_instSubUInt32;
lean_object* l_UInt64_toUInt8___boxed(lean_object*);
lean_object* l_USize_sub___boxed(lean_object*, lean_object*);
lean_object* l_instMulUInt16___closed__1;
lean_object* l_instHasLessUInt8;
lean_object* l_instOfNatUInt32___closed__1;
lean_object* l_instAddUInt16___closed__1;
lean_object* l_instAddUInt64;
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_instOfNatUInt8___closed__1;
lean_object* l_UInt16_land___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_div___boxed(lean_object*, lean_object*);
lean_object* l_instModUInt8___closed__1;
lean_object* l_UInt8_ofNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_uint8_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Nat_toUInt8(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_uint8_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toUInt8___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Nat_toUInt8(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_UInt8_toNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = lean_uint8_to_nat(x_2);
return x_3;
}
}
lean_object* l_UInt8_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_modn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_uint8_modn(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_UInt8_land___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 & x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_lor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 | x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_instOfNatUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_ofNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instOfNatUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instOfNatUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instAddUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instSubUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instSubUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMulUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instModUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModNUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_modn___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModNUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instModNUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instDivUInt8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt8_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivUInt8() {
_start:
{
lean_object* x_1; 
x_1 = l_instDivUInt8___closed__1;
return x_1;
}
}
static lean_object* _init_l_instHasLessUInt8() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instHasLessEqUInt8() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_UInt8_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 < x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt8_decLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 <= x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLess__1(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_instDecidableLess__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLess__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLessEq__1(uint8_t x_1, uint8_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
lean_object* l_instDecidableLessEq__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLessEq__1(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_ofNat___boxed(lean_object* x_1) {
_start:
{
uint16_t x_2; lean_object* x_3; 
x_2 = lean_uint16_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint16_t l_Nat_toUInt16(lean_object* x_1) {
_start:
{
uint16_t x_2; 
x_2 = lean_uint16_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toUInt16___boxed(lean_object* x_1) {
_start:
{
uint16_t x_2; lean_object* x_3; 
x_2 = l_Nat_toUInt16(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_UInt16_toNat___boxed(lean_object* x_1) {
_start:
{
uint16_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = lean_uint16_to_nat(x_2);
return x_3;
}
}
lean_object* l_UInt16_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_modn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_uint16_modn(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_UInt16_land___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 & x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_lor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint16_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 | x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_instOfNatUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_ofNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instOfNatUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instOfNatUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instAddUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instSubUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instSubUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMulUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instModUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModNUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_modn___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModNUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instModNUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instDivUInt16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt16_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivUInt16() {
_start:
{
lean_object* x_1; 
x_1 = l_instDivUInt16___closed__1;
return x_1;
}
}
static lean_object* _init_l_instHasLessUInt16() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instHasLessEqUInt16() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_UInt16_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 < x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt16_decLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = x_3 <= x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLess__2(uint16_t x_1, uint16_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_instDecidableLess__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLess__2(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLessEq__2(uint16_t x_1, uint16_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
lean_object* l_instDecidableLessEq__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint16_t x_3; uint16_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLessEq__2(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt32_ofNat___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_uint32_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_UInt32_ofNat_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_uint32_of_nat(x_1);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
uint32_t l_Nat_toUInt32(lean_object* x_1) {
_start:
{
uint32_t x_2; 
x_2 = lean_uint32_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toUInt32___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_Nat_toUInt32(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_UInt32_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_modn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_uint32_modn(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
lean_object* l_UInt32_land___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 & x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_lor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 | x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_toUInt8___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = ((uint8_t)x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_UInt32_toUInt16___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint16_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = ((uint16_t)x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_UInt8_toUInt32___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint32_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = ((uint32_t)x_2);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
static lean_object* _init_l_instOfNatUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_ofNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instOfNatUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instOfNatUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instAddUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instSubUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instSubUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMulUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instModUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModNUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_modn___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModNUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instModNUInt32___closed__1;
return x_1;
}
}
static lean_object* _init_l_instDivUInt32___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt32_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivUInt32() {
_start:
{
lean_object* x_1; 
x_1 = l_instDivUInt32___closed__1;
return x_1;
}
}
lean_object* l_UInt32_shiftLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 << x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt32_shiftRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = x_3 >> x_4;
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
lean_object* l_UInt64_ofNat___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_uint64_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
uint64_t l_Nat_toUInt64(lean_object* x_1) {
_start:
{
uint64_t x_2; 
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toUInt64___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = l_Nat_toUInt64(x_1);
lean_dec(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
lean_object* l_UInt64_toNat___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = lean_uint64_to_nat(x_2);
return x_3;
}
}
lean_object* l_UInt64_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_modn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_uint64_modn(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box_uint64(x_4);
return x_5;
}
}
lean_object* l_UInt64_land___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 & x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_lor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 | x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_toUInt8___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = ((uint8_t)x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_UInt64_toUInt16___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; uint16_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = ((uint16_t)x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_UInt64_toUInt32___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; uint32_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = ((uint32_t)x_2);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* l_UInt32_toUInt64___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = ((uint64_t)x_2);
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
lean_object* l_UInt64_shiftLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 << x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
lean_object* l_UInt64_shiftRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint64_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 >> x_4;
x_6 = lean_box_uint64(x_5);
return x_6;
}
}
static lean_object* _init_l_instOfNatUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_ofNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instOfNatUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instOfNatUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instAddUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instSubUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instSubUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMulUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instModUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModNUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_modn___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModNUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instModNUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instDivUInt64___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_UInt64_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivUInt64() {
_start:
{
lean_object* x_1; 
x_1 = l_instDivUInt64___closed__1;
return x_1;
}
}
static lean_object* _init_l_instHasLessUInt64() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instHasLessEqUInt64() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Bool_toUInt64___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = (uint64_t)x_2;
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
lean_object* l_UInt64_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 < x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_UInt64_decLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = x_3 <= x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLess__3(uint64_t x_1, uint64_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_instDecidableLess__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLess__3(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLessEq__3(uint64_t x_1, uint64_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
lean_object* l_instDecidableLessEq__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint64_t x_3; uint64_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_4 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLessEq__3(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_USize_ofNat___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = lean_usize_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
size_t l_Nat_toUSize(lean_object* x_1) {
_start:
{
size_t x_2; 
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toUSize___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = l_Nat_toUSize(x_1);
lean_dec(x_1);
x_3 = lean_box_usize(x_2);
return x_3;
}
}
lean_object* l_USize_toNat___boxed(lean_object* x_1) {
_start:
{
size_t x_2; lean_object* x_3; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = lean_usize_to_nat(x_2);
return x_3;
}
}
lean_object* l_USize_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 / x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_4 == 0 ? 0 : x_3 % x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_modn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_usize_modn(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box_usize(x_4);
return x_5;
}
}
lean_object* l_USize_land___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 & x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_lor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 | x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_UInt32_toUSize___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; size_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = x_2;
x_4 = lean_box_usize(x_3);
return x_4;
}
}
lean_object* l_UInt64_toUSize___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; size_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_3 = ((size_t)x_2);
x_4 = lean_box_usize(x_3);
return x_4;
}
}
lean_object* l_USize_toUInt32___boxed(lean_object* x_1) {
_start:
{
size_t x_2; uint32_t x_3; lean_object* x_4; 
x_2 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_3 = (uint32_t)x_2;
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* l_USize_shiftLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 << x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_USize_shiftRight___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 >> x_4;
x_6 = lean_box_usize(x_5);
return x_6;
}
}
static lean_object* _init_l_instOfNatUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_ofNat___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instOfNatUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instOfNatUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instAddUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instSubUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instSubUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instMulUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_mod___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instModUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instModNUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_modn___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instModNUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instModNUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instDivUSize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_USize_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivUSize() {
_start:
{
lean_object* x_1; 
x_1 = l_instDivUSize___closed__1;
return x_1;
}
}
static lean_object* _init_l_instHasLessUSize() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instHasLessEqUSize() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_USize_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 < x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_USize_decLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = x_3 <= x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLess__4(size_t x_1, size_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_instDecidableLess__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLess__4(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_instDecidableLessEq__4(size_t x_1, size_t x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
lean_object* l_instDecidableLessEq__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_instDecidableLessEq__4(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init_Data_Fin_Basic(lean_object*);
lean_object* initialize_Init_System_Platform(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_UInt(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Fin_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instOfNatUInt8___closed__1 = _init_l_instOfNatUInt8___closed__1();
lean_mark_persistent(l_instOfNatUInt8___closed__1);
l_instOfNatUInt8 = _init_l_instOfNatUInt8();
lean_mark_persistent(l_instOfNatUInt8);
l_instAddUInt8___closed__1 = _init_l_instAddUInt8___closed__1();
lean_mark_persistent(l_instAddUInt8___closed__1);
l_instAddUInt8 = _init_l_instAddUInt8();
lean_mark_persistent(l_instAddUInt8);
l_instSubUInt8___closed__1 = _init_l_instSubUInt8___closed__1();
lean_mark_persistent(l_instSubUInt8___closed__1);
l_instSubUInt8 = _init_l_instSubUInt8();
lean_mark_persistent(l_instSubUInt8);
l_instMulUInt8___closed__1 = _init_l_instMulUInt8___closed__1();
lean_mark_persistent(l_instMulUInt8___closed__1);
l_instMulUInt8 = _init_l_instMulUInt8();
lean_mark_persistent(l_instMulUInt8);
l_instModUInt8___closed__1 = _init_l_instModUInt8___closed__1();
lean_mark_persistent(l_instModUInt8___closed__1);
l_instModUInt8 = _init_l_instModUInt8();
lean_mark_persistent(l_instModUInt8);
l_instModNUInt8___closed__1 = _init_l_instModNUInt8___closed__1();
lean_mark_persistent(l_instModNUInt8___closed__1);
l_instModNUInt8 = _init_l_instModNUInt8();
lean_mark_persistent(l_instModNUInt8);
l_instDivUInt8___closed__1 = _init_l_instDivUInt8___closed__1();
lean_mark_persistent(l_instDivUInt8___closed__1);
l_instDivUInt8 = _init_l_instDivUInt8();
lean_mark_persistent(l_instDivUInt8);
l_instHasLessUInt8 = _init_l_instHasLessUInt8();
lean_mark_persistent(l_instHasLessUInt8);
l_instHasLessEqUInt8 = _init_l_instHasLessEqUInt8();
lean_mark_persistent(l_instHasLessEqUInt8);
l_instOfNatUInt16___closed__1 = _init_l_instOfNatUInt16___closed__1();
lean_mark_persistent(l_instOfNatUInt16___closed__1);
l_instOfNatUInt16 = _init_l_instOfNatUInt16();
lean_mark_persistent(l_instOfNatUInt16);
l_instAddUInt16___closed__1 = _init_l_instAddUInt16___closed__1();
lean_mark_persistent(l_instAddUInt16___closed__1);
l_instAddUInt16 = _init_l_instAddUInt16();
lean_mark_persistent(l_instAddUInt16);
l_instSubUInt16___closed__1 = _init_l_instSubUInt16___closed__1();
lean_mark_persistent(l_instSubUInt16___closed__1);
l_instSubUInt16 = _init_l_instSubUInt16();
lean_mark_persistent(l_instSubUInt16);
l_instMulUInt16___closed__1 = _init_l_instMulUInt16___closed__1();
lean_mark_persistent(l_instMulUInt16___closed__1);
l_instMulUInt16 = _init_l_instMulUInt16();
lean_mark_persistent(l_instMulUInt16);
l_instModUInt16___closed__1 = _init_l_instModUInt16___closed__1();
lean_mark_persistent(l_instModUInt16___closed__1);
l_instModUInt16 = _init_l_instModUInt16();
lean_mark_persistent(l_instModUInt16);
l_instModNUInt16___closed__1 = _init_l_instModNUInt16___closed__1();
lean_mark_persistent(l_instModNUInt16___closed__1);
l_instModNUInt16 = _init_l_instModNUInt16();
lean_mark_persistent(l_instModNUInt16);
l_instDivUInt16___closed__1 = _init_l_instDivUInt16___closed__1();
lean_mark_persistent(l_instDivUInt16___closed__1);
l_instDivUInt16 = _init_l_instDivUInt16();
lean_mark_persistent(l_instDivUInt16);
l_instHasLessUInt16 = _init_l_instHasLessUInt16();
lean_mark_persistent(l_instHasLessUInt16);
l_instHasLessEqUInt16 = _init_l_instHasLessEqUInt16();
lean_mark_persistent(l_instHasLessEqUInt16);
l_instOfNatUInt32___closed__1 = _init_l_instOfNatUInt32___closed__1();
lean_mark_persistent(l_instOfNatUInt32___closed__1);
l_instOfNatUInt32 = _init_l_instOfNatUInt32();
lean_mark_persistent(l_instOfNatUInt32);
l_instAddUInt32___closed__1 = _init_l_instAddUInt32___closed__1();
lean_mark_persistent(l_instAddUInt32___closed__1);
l_instAddUInt32 = _init_l_instAddUInt32();
lean_mark_persistent(l_instAddUInt32);
l_instSubUInt32___closed__1 = _init_l_instSubUInt32___closed__1();
lean_mark_persistent(l_instSubUInt32___closed__1);
l_instSubUInt32 = _init_l_instSubUInt32();
lean_mark_persistent(l_instSubUInt32);
l_instMulUInt32___closed__1 = _init_l_instMulUInt32___closed__1();
lean_mark_persistent(l_instMulUInt32___closed__1);
l_instMulUInt32 = _init_l_instMulUInt32();
lean_mark_persistent(l_instMulUInt32);
l_instModUInt32___closed__1 = _init_l_instModUInt32___closed__1();
lean_mark_persistent(l_instModUInt32___closed__1);
l_instModUInt32 = _init_l_instModUInt32();
lean_mark_persistent(l_instModUInt32);
l_instModNUInt32___closed__1 = _init_l_instModNUInt32___closed__1();
lean_mark_persistent(l_instModNUInt32___closed__1);
l_instModNUInt32 = _init_l_instModNUInt32();
lean_mark_persistent(l_instModNUInt32);
l_instDivUInt32___closed__1 = _init_l_instDivUInt32___closed__1();
lean_mark_persistent(l_instDivUInt32___closed__1);
l_instDivUInt32 = _init_l_instDivUInt32();
lean_mark_persistent(l_instDivUInt32);
l_instOfNatUInt64___closed__1 = _init_l_instOfNatUInt64___closed__1();
lean_mark_persistent(l_instOfNatUInt64___closed__1);
l_instOfNatUInt64 = _init_l_instOfNatUInt64();
lean_mark_persistent(l_instOfNatUInt64);
l_instAddUInt64___closed__1 = _init_l_instAddUInt64___closed__1();
lean_mark_persistent(l_instAddUInt64___closed__1);
l_instAddUInt64 = _init_l_instAddUInt64();
lean_mark_persistent(l_instAddUInt64);
l_instSubUInt64___closed__1 = _init_l_instSubUInt64___closed__1();
lean_mark_persistent(l_instSubUInt64___closed__1);
l_instSubUInt64 = _init_l_instSubUInt64();
lean_mark_persistent(l_instSubUInt64);
l_instMulUInt64___closed__1 = _init_l_instMulUInt64___closed__1();
lean_mark_persistent(l_instMulUInt64___closed__1);
l_instMulUInt64 = _init_l_instMulUInt64();
lean_mark_persistent(l_instMulUInt64);
l_instModUInt64___closed__1 = _init_l_instModUInt64___closed__1();
lean_mark_persistent(l_instModUInt64___closed__1);
l_instModUInt64 = _init_l_instModUInt64();
lean_mark_persistent(l_instModUInt64);
l_instModNUInt64___closed__1 = _init_l_instModNUInt64___closed__1();
lean_mark_persistent(l_instModNUInt64___closed__1);
l_instModNUInt64 = _init_l_instModNUInt64();
lean_mark_persistent(l_instModNUInt64);
l_instDivUInt64___closed__1 = _init_l_instDivUInt64___closed__1();
lean_mark_persistent(l_instDivUInt64___closed__1);
l_instDivUInt64 = _init_l_instDivUInt64();
lean_mark_persistent(l_instDivUInt64);
l_instHasLessUInt64 = _init_l_instHasLessUInt64();
lean_mark_persistent(l_instHasLessUInt64);
l_instHasLessEqUInt64 = _init_l_instHasLessEqUInt64();
lean_mark_persistent(l_instHasLessEqUInt64);
l_instOfNatUSize___closed__1 = _init_l_instOfNatUSize___closed__1();
lean_mark_persistent(l_instOfNatUSize___closed__1);
l_instOfNatUSize = _init_l_instOfNatUSize();
lean_mark_persistent(l_instOfNatUSize);
l_instAddUSize___closed__1 = _init_l_instAddUSize___closed__1();
lean_mark_persistent(l_instAddUSize___closed__1);
l_instAddUSize = _init_l_instAddUSize();
lean_mark_persistent(l_instAddUSize);
l_instSubUSize___closed__1 = _init_l_instSubUSize___closed__1();
lean_mark_persistent(l_instSubUSize___closed__1);
l_instSubUSize = _init_l_instSubUSize();
lean_mark_persistent(l_instSubUSize);
l_instMulUSize___closed__1 = _init_l_instMulUSize___closed__1();
lean_mark_persistent(l_instMulUSize___closed__1);
l_instMulUSize = _init_l_instMulUSize();
lean_mark_persistent(l_instMulUSize);
l_instModUSize___closed__1 = _init_l_instModUSize___closed__1();
lean_mark_persistent(l_instModUSize___closed__1);
l_instModUSize = _init_l_instModUSize();
lean_mark_persistent(l_instModUSize);
l_instModNUSize___closed__1 = _init_l_instModNUSize___closed__1();
lean_mark_persistent(l_instModNUSize___closed__1);
l_instModNUSize = _init_l_instModNUSize();
lean_mark_persistent(l_instModNUSize);
l_instDivUSize___closed__1 = _init_l_instDivUSize___closed__1();
lean_mark_persistent(l_instDivUSize___closed__1);
l_instDivUSize = _init_l_instDivUSize();
lean_mark_persistent(l_instDivUSize);
l_instHasLessUSize = _init_l_instHasLessUSize();
lean_mark_persistent(l_instHasLessUSize);
l_instHasLessEqUSize = _init_l_instHasLessEqUSize();
lean_mark_persistent(l_instHasLessEqUSize);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif