// Lean compiler output
// Module: Lean.Elab.Tactic.TreeTacAttr
// Imports: Lean.Meta.Tactic.Simp
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
LEAN_EXPORT lean_object* l_initFn____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_(lean_object*);
static lean_object* l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
static lean_object* l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
static lean_object* l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
lean_object* l_Lean_Meta_registerSimpAttr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
LEAN_EXPORT lean_object* l_treeTacExt;
static lean_object* l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
lean_object* l_Lean_Name_mkStr1(lean_object*);
static lean_object* l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
static lean_object* _init_l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Std", 3, 3);
return x_1;
}
}
static lean_object* _init_l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Internal", 8, 8);
return x_1;
}
}
static lean_object* _init_l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tree_tac", 8, 8);
return x_1;
}
}
static lean_object* _init_l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_2 = l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_3 = l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simp theorems used by internal DTreeMap lemmas", 46, 46);
return x_1;
}
}
static lean_object* _init_l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("treeTacExt", 10, 10);
return x_1;
}
}
static lean_object* _init_l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_initFn____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_3 = l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_4 = l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_;
x_5 = l_Lean_Meta_registerSimpAttr(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_TreeTacAttr(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__0____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__1____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__2____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__3____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__4____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__5____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_ = _init_l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_();
lean_mark_persistent(l_initFn___closed__6____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_);
if (builtin) {res = l_initFn____x40_Lean_Elab_Tactic_TreeTacAttr___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_treeTacExt = lean_io_result_get_value(res);
lean_mark_persistent(l_treeTacExt);
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
