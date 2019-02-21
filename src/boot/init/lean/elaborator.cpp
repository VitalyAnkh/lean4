// Lean compiler output
// Module: init.lean.elaborator
// Imports: init.lean.parser.module init.lean.expander init.lean.expr init.lean.options
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_parser_token__map_insert___rarg(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
obj* l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
obj* l_lean_elaborator_locally___rarg___lambda__2(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_command_variables;
extern "C" obj* lean_expr_mk_pi(obj*, uint8, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj*);
obj* l_lean_elaborator_module_header_elaborate___closed__1;
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_level__get__app__args___main___closed__1;
obj* l_lean_elaborator_level__get__app__args___main(obj*, obj*, obj*);
obj* l_lean_elaborator_elab__def__like(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_sort(obj*);
obj* l_lean_elaborator_run___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj*);
obj* l_lean_elaborator_attrs__to__pexpr(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj*);
extern obj* l_lean_parser_command_attribute_has__view;
obj* l_lean_elaborator_namespace_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj*);
obj* l_lean_elaborator_match__spec___closed__1;
obj* l_lean_elaborator_resolve__context___main___closed__1;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj*, obj*);
extern obj* l_lean_parser_level_leading_has__view;
extern obj* l_lean_parser_command_reserve__notation_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj*, obj*);
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj*, obj*);
obj* l_list_foldl___main___at_lean_expr_mk__app___spec__1(obj*, obj*);
obj* l_lean_elaborator_run___lambda__5(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__2;
obj* l_lean_elaborator_end__scope___lambda__3___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_declaration;
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
obj* l_lean_elaborator_to__level(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj*);
obj* l_lean_elaborator_get__namespace(obj*);
obj* l_lean_elaborator_level__add(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__7;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj*, obj*, obj*);
extern obj* l_lean_parser_command_export_has__view;
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__33;
obj* l_lean_elaborator_to__pexpr___main___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
obj* l_lean_elaborator_include_elaborate(obj*, obj*, obj*);
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
obj* l_list_filter__map___main___rarg(obj*, obj*);
extern obj* l_lean_parser_term_match_has__view;
obj* l_lean_elaborator_current__command___rarg___closed__1;
obj* l_lean_elaborator_level__get__app__args(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
extern obj* l_lean_parser_command_open;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
obj* l_lean_elaborator_run___lambda__2___closed__1;
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___closed__1;
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj*, obj*, obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__26;
obj* l_lean_kvmap_set__string(obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___closed__1;
obj* l_lean_elaborator_mk__eqns___closed__2;
obj* l_lean_elaborator_locally___rarg___lambda__3(obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__4(obj*, obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__31;
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_register__notation__macro(obj*, obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj*, obj*, obj*);
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__state(obj*);
obj* l_lean_elaborator_variables_elaborate___closed__2;
uint8 l_lean_elaborator_match__precedence___main(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__39;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj*, obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_elaborator_run___closed__6;
extern obj* l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
extern obj* l_lean_parser_command_open_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj*, obj*, obj*, obj*);
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
extern "C" obj* lean_expr_mk_lit(obj*);
obj* l_lean_elaborator_run___lambda__8(obj*);
extern "C" obj* lean_expr_local(obj*, obj*, obj*, uint8);
extern obj* l_lean_expander_expand__bracketed__binder___main___closed__4;
obj* l_lean_parser_term_simple__binder_view_to__binder__info___main(obj*);
extern obj* l_lean_parser_command_set__option;
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj*, obj*);
obj* l_lean_elaborator_max__recursion;
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___closed__1;
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj*, obj*);
obj* l_lean_elaborator_elab__def__like___closed__1;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj*);
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation___closed__1;
obj* l_list_zip___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__6;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_check_elaborate(obj*, obj*, obj*);
extern obj* l_lean_expander_builtin__transformers;
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj*, obj*, obj*);
uint8 l_coe__decidable__eq(uint8);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation;
obj* l_lean_elaborator_elaborator__t;
obj* l_lean_elaborator_current__command(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj*, obj*, obj*);
obj* l_lean_kvmap_set__name(obj*, obj*, obj*);
uint8 l_lean_elaborator_is__open__namespace(obj*, obj*);
obj* l_lean_elaborator_elaborators;
obj* l_lean_elaborator_commands_elaborate(uint8, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_string__lit_has__view;
extern obj* l_lean_parser_term_pi_has__view;
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj*, obj*);
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj*, obj*);
extern obj* l_lean_parser_command_universe_has__view;
extern "C" obj* lean_expr_mk_mdata(obj*, obj*);
obj* l_lean_elaborator_locally___rarg(obj*, obj*, obj*);
obj* l_state__t_monad__state___rarg(obj*);
obj* l_lean_elaborator_elaborator__m;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
extern "C" obj* lean_expr_mk_lambda(obj*, uint8, obj*, obj*);
obj* l_reader__t_monad__reader__adapter(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_kvmap_set__nat(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
obj* l_lean_elaborator_declaration_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_to__level___main___closed__4;
obj* l_lean_elaborator_check_elaborate___closed__1;
extern obj* l_lean_parser_command_include;
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj*, obj*, obj*);
obj* l_lean_environment_contains___boxed(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj*, obj*, obj*, obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
extern "C" obj* lean_expr_mk_const(obj*, obj*);
extern obj* l_lean_parser_command_reserve__notation;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_except__t_monad__except___rarg(obj*);
extern obj* l_lean_parser_term_have_has__view;
obj* l_lean_elaborator_init__quot_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
extern obj* l_lean_parser_command_variables_has__view;
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l_lean_kvmap_set__bool(obj*, obj*, uint8);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__32;
obj* l_lean_elaborator_end__scope___lambda__1(obj*, obj*);
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_lean_parser_trie_insert___rarg(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2;
obj* l_lean_elaborator_preresolve___main(obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind___rarg___closed__1;
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj*, obj*);
uint8 l_option_is__some___main___rarg(obj*);
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__5;
obj* l_lean_elaborator_yield__to__outside___rarg(obj*);
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__3;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj*, obj*);
obj* l_lean_elaborator_expr_mk__annotation(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj*, obj*);
obj* l_lean_name_replace__prefix___main(obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj*, obj*);
obj* l_lean_elaborator_open_elaborate(obj*, obj*, obj*);
extern obj* l_lean_parser_command_section_has__view;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj*);
obj* l_list_join___main___rarg(obj*);
obj* l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(obj*, obj*);
obj* l_lean_elaborator_mangle__ident(obj*);
obj* l_lean_elaborator_universe_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__4;
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj*, obj*, obj*);
obj* l_lean_parser_syntax_get__pos(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__notation__kind(obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
extern "C" obj* level_mk_imax(obj*, obj*);
obj* l_lean_environment_mk__empty___boxed(obj*);
obj* l_lean_elaborator_attribute_elaborate___closed__2;
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
obj* l_list_zip__with___main___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
obj* l_lean_elaborator_run___closed__3;
obj* l_lean_elaborator_reserve__notation_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_simple__binders__to__pexpr(obj*, obj*, obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_is__open__namespace___boxed(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__47;
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj*, obj*, obj*);
obj* l_lean_elaborator_match__open__spec(obj*, obj*);
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__11;
obj* l_lean_elaborator_ordered__rbmap_empty(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__16;
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj*, obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_lean_name_to__string__with__sep___main(obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__17;
extern obj* l_lean_parser_module_header;
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__36;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj*);
obj* l_lean_elaborator_update__parser__config(obj*, obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_elaborator_run___lambda__4___closed__1;
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__46;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj*, obj*);
obj* l_monad__coroutine__trans___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj*, obj*);
obj* l_except__t_lift___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__10;
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj*, obj*, obj*);
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj*);
obj* l_lean_elaborator_run(obj*);
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj*);
obj* l_lean_elaborator_match__precedence___boxed(obj*, obj*);
extern obj* l_lean_message__log_empty;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_export_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__38;
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj*);
uint8 l_lean_elaborator_is__open__namespace___main(obj*, obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj*, obj*, obj*);
extern obj* l_char_has__repr___closed__1;
extern "C" obj* lean_environment_mk_empty(obj*);
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad__except(obj*);
obj* l_coroutine_bind___main___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_coelaborator;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj*, obj*, obj*);
extern obj* l_lean_expander_binding__annotation__update;
extern obj* l_lean_parser_command_attribute;
extern obj* l_lean_parser_term_let_has__view;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj*, obj*, obj*, obj*);
extern "C" obj* level_mk_succ(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__45;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__14;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj*);
obj* l_lean_elaborator_get__namespace___rarg(obj*);
obj* l_lean_elaborator_universe_elaborate___closed__2;
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_projection_has__view;
obj* l_lean_elaborator_variables_elaborate___closed__1;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_coelaborator__m;
obj* l_lean_elaborator_yield__to__outside___rarg___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__12;
obj* l_lean_elaborator_with__current__command(obj*);
obj* l_lean_parser_syntax_to__format___main(obj*);
obj* l_lean_name_append___main(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
extern obj* l_string_join___closed__1;
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__35;
obj* l_lean_elaborator_to__pexpr___main___closed__25;
obj* l_lean_elaborator_names__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_command_check_has__view;
obj* l_lean_elaborator_run___closed__4;
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_set__option_elaborate(obj*, obj*, obj*);
obj* l_reader__t_read___rarg(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj*, obj*, obj*);
obj* l_lean_elaborator_run___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_no__kind_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_resolve__context___main(obj*, obj*, obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_max__prec;
obj* l_lean_elaborator_notation_elaborate__aux(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__2;
extern obj* l_lean_options_mk;
obj* l_lean_parser_module_yield__command___lambda__3(obj*, obj*);
obj* l_lean_elaborator_universe_elaborate___closed__1;
obj* l_monad__state__trans___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__20;
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
obj* l_rbnode_balance2___main___rarg(obj*, obj*);
obj* l_lean_expander_get__opt__type___main(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj*, obj*);
extern obj* l_lean_parser_term_struct__inst_has__view;
obj* l_lean_elaborator_run___lambda__7(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_lambda_has__view;
obj* l_lean_elaborator_mk__eqns___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(uint8, obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj*);
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj*);
obj* l_lean_elaborator_commands_elaborate___main(uint8, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj*);
obj* l_lean_elaborator_run___lambda__3(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj*);
obj* l_lean_elaborator_resolve__context(obj*, obj*, obj*);
obj* l_except__t_monad___rarg(obj*);
extern "C" obj* lean_expr_mk_let(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_app_has__view;
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
obj* l_lean_elaborator_to__level___main(obj*, obj*, obj*);
extern obj* l_lean_parser_ident__univs_has__view;
obj* l_lean_elaborator_to__pexpr___main___closed__9;
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj*);
obj* l_state__t_monad__except___rarg(obj*, obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
obj* l_reader__t_monad__except___rarg(obj*);
extern obj* l_lean_parser_term_sort__app_has__view;
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj*);
extern obj* l_lean_parser_term_explicit_has__view;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj*, obj*);
obj* l_lean_elaborator_current__command___rarg(obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
obj* l_lean_elaborator_prec__to__nat(obj*);
obj* l_lean_parser_term_get__leading(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_end__scope___lambda__2___closed__1;
extern obj* l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__24;
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj*, obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_term_parser(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_notation_elaborate(obj*, obj*, obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__13;
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj*, obj*, obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__3;
obj* l_lean_elaborator_to__level___main___closed__1;
obj* l_lean_elaborator_to__pexpr___main___closed__27;
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__4(obj*, obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_state__t_monad___rarg(obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
obj* l_lean_format_pretty(obj*, obj*);
extern obj* l_lean_parser_command_namespace_has__view;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__15;
obj* l_lean_elaborator_notation_elaborate___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__18;
obj* l_lean_elaborator_elaborator__t_monad(obj*);
extern obj* l_lean_parser_term_inaccessible_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__2;
obj* l_lean_elaborator_dummy;
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__1___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj*, obj*);
obj* l_lean_elaborator_run___closed__5;
extern obj* l_coroutine_monad___closed__1;
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj*);
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_module_header_elaborate(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_lean_parser_syntax_kind___main(obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__2;
obj* l_lean_elaborator_section_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_preresolve(obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
extern obj* l_lean_parser_module_header_has__view;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj*, obj*, obj*);
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj*);
obj* l_lean_elaborator_infer__mod__to__pexpr___closed__1;
extern obj* l_lean_parser_command_section;
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj*, obj*, obj*);
obj* l_reader__t_lift(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__21;
extern "C" obj* level_mk_max(obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_term_struct__inst__item_has__view;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj*);
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj*, obj*, obj*);
obj* l_lean_elaborator_match__precedence___main___boxed(obj*, obj*);
extern obj* l_lean_parser_term_borrowed_has__view;
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj*);
obj* l_lean_parser_term_binders_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_find(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_universe;
obj* l_lean_elaborator_to__pexpr___main___closed__19;
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
extern obj* l_lean_parser_term_show_has__view;
obj* l_lean_elaborator_run___lambda__6(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj*, obj*, obj*);
obj* l_lean_elaborator_run___closed__1;
obj* l_except__t_lift___rarg___lambda__1(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj*);
obj* l_lean_level_of__nat___main(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
extern obj* l_lean_parser_syntax_reprint__lst___main___closed__1;
obj* l_lean_elaborator_end__scope___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__22;
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj*);
obj* l_lean_parser_term_binder__ident_parser(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj*, obj*, obj*);
obj* l_rbnode_balance1___main___rarg(obj*, obj*);
obj* l_lean_elaborator_coelaborator__m_monad__coroutine;
obj* l_list_length__aux___main___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__8;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__43;
obj* l_lean_elaborator_attribute_elaborate___closed__1;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj*);
uint8 l_lean_elaborator_match__precedence(obj*, obj*);
obj* l_lean_elaborator_elaborator;
obj* l_lean_elaborator_to__pexpr___main___closed__23;
obj* l_string_trim(obj*);
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__34;
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj*, obj*, obj*);
extern obj* l_lean_parser_term_sort_has__view;
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_locally(obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
obj* l_lean_elaborator_to__level___main___closed__2;
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj*, obj*, obj*);
extern obj* l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_match__spec(obj*, obj*);
obj* l_lean_expander_mk__notation__transformer(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_insert(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__30;
obj* l_lean_expr_local___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_mk__eqns(obj*, obj*);
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___lambda__1(obj*);
obj* l_lean_elaborator_level__add___main(obj*, obj*);
obj* l_lean_elaborator_elaborate__command___boxed(obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_lean_expr_mk__capp(obj*, obj*);
extern "C" obj* level_mk_mvar(obj*);
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj*, obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8, obj*, obj*, obj*, obj*);
extern "C" obj* lean_expr_mk_app(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj*);
obj* l_lean_elaborator_run___lambda__1___closed__1;
extern obj* l_lean_parser_command_declaration_has__view;
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
extern obj* l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
obj* l_lean_elaborator_run___closed__7;
obj* l_lean_kvmap_insert__core___main(obj*, obj*, obj*);
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__28;
obj* l_lean_elaborator_to__level___main___closed__3;
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_end_has__view;
obj* l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1(obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj*, obj*, obj*, obj*);
namespace lean {
uint32 uint32_of_nat(obj*);
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj*, obj*, obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
extern obj* l_lean_parser_term_anonymous__constructor_has__view;
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
obj* l_lean_elaborator_to__pexpr___main___closed__37;
obj* l_lean_elaborator_attribute_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj*);
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_command_init__quot;
obj* l_lean_elaborator_variables_elaborate(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__41;
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj*);
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj*);
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj*, obj*);
obj* l_rbtree_to__list___rarg(obj*);
obj* l_coroutine_pure___rarg(obj*, obj*);
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj*);
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj*, obj*, obj*);
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_yield__to__outside(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj*, obj*);
obj* l_lean_elaborator_section_elaborate___lambda__2(obj*, obj*, obj*);
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj*, obj*);
obj* l_lean_elaborator_postprocess__notation__spec(obj*);
obj* l_lean_elaborator_elab__def__like___closed__2;
extern obj* l_lean_parser_command_include_has__view;
extern obj* l_lean_parser_command_namespace;
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj*, obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj*);
obj* l_lean_elaborator_old__elab__command(obj*, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj*);
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj*);
obj* l_lean_file__map_to__position(obj*, obj*);
extern "C" obj* level_mk_param(obj*);
uint8 l_rbnode_is__red___main___rarg(obj*);
obj* l_lean_name_quick__lt___main(obj*, obj*);
obj* l_state__t_lift___rarg(obj*, obj*, obj*, obj*);
extern "C" obj* lean_elaborator_elaborate_command(obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj*, obj*, obj*);
extern obj* l_lean_expander_get__opt__type___main___closed__1;
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj*, obj*, obj*);
extern obj* l_lean_parser_level_trailing_has__view;
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_locally___rarg___closed__1;
obj* l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_list_append___rarg(obj*, obj*);
obj* l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__29;
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj*, obj*, obj*);
extern obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
obj* l_option_map___rarg(obj*, obj*);
extern obj* l_lean_expander_no__expansion___closed__1;
extern "C" obj* lean_expr_mk_bvar(obj*);
obj* l_coroutine_yield___rarg(obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__40;
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj*);
extern "C" obj* lean_expr_mk_mvar(obj*, obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj*);
obj* l_lean_elaborator_command_elaborate(obj*, obj*, obj*);
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj*, obj*, obj*);
obj* l_lean_elaborator_prec__to__nat___main(obj*);
obj* l_lean_elaborator_with__current__command___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value(obj*);
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj*, obj*, uint8, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__42;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
extern "C" uint8 lean_environment_contains(obj*, obj*);
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj*, obj*, obj*);
extern obj* l_lean_parser_command_notation_has__view;
extern obj* l_lean_parser_command_check;
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj*, obj*);
obj* l_lean_elaborator_max__commands;
extern obj* l_lean_parser_command_export;
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_elaborator_to__pexpr___main___closed__44;
obj* l_rbnode_set__black___main___rarg(obj*);
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj*, obj*, obj*);
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj*, obj*, obj*);
obj* l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
obj* l_lean_elaborator_init__quot_elaborate___closed__1;
obj* l_lean_elaborator_postprocess__notation__spec___closed__1;
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
extern obj* l_lean_parser_command_set__option_has__view;
obj* l_lean_environment_mk__empty___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* l_lean_environment_contains___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean_environment_contains(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_expr_local___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = lean::unbox(x_3);
x_5 = lean_expr_local(x_0, x_1, x_2, x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborate__command___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_elaborator_elaborate_command(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
return x_8;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_64; 
lean::inc(x_45);
x_64 = l_rbnode_is__red___main___rarg(x_45);
if (x_64 == 0)
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_66 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_66 = x_47;
}
lean::cnstr_set(x_66, 0, x_39);
lean::cnstr_set(x_66, 1, x_41);
lean::cnstr_set(x_66, 2, x_43);
lean::cnstr_set(x_66, 3, x_65);
lean::cnstr_set_scalar(x_66, sizeof(void*)*4, x_8);
x_67 = x_66;
return x_67;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_68 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_69 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_69 = x_47;
}
lean::cnstr_set(x_69, 0, x_39);
lean::cnstr_set(x_69, 1, x_41);
lean::cnstr_set(x_69, 2, x_43);
lean::cnstr_set(x_69, 3, x_68);
lean::cnstr_set_scalar(x_69, sizeof(void*)*4, x_8);
x_70 = x_69;
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_45, x_2, x_3);
x_72 = l_rbnode_balance2___main___rarg(x_70, x_71);
return x_72;
}
}
}
else
{
uint8 x_74; 
lean::inc(x_39);
x_74 = l_rbnode_is__red___main___rarg(x_39);
if (x_74 == 0)
{
obj* x_75; obj* x_76; obj* x_77; 
x_75 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_76 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_76 = x_47;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_41);
lean::cnstr_set(x_76, 2, x_43);
lean::cnstr_set(x_76, 3, x_45);
lean::cnstr_set_scalar(x_76, sizeof(void*)*4, x_8);
x_77 = x_76;
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_78 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_79 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_79 = x_47;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_41);
lean::cnstr_set(x_79, 2, x_43);
lean::cnstr_set(x_79, 3, x_45);
lean::cnstr_set_scalar(x_79, sizeof(void*)*4, x_8);
x_80 = x_79;
x_81 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_39, x_2, x_3);
x_82 = l_rbnode_balance1___main___rarg(x_80, x_81);
return x_82;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_64; 
lean::inc(x_45);
x_64 = l_rbnode_is__red___main___rarg(x_45);
if (x_64 == 0)
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_66 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_66 = x_47;
}
lean::cnstr_set(x_66, 0, x_39);
lean::cnstr_set(x_66, 1, x_41);
lean::cnstr_set(x_66, 2, x_43);
lean::cnstr_set(x_66, 3, x_65);
lean::cnstr_set_scalar(x_66, sizeof(void*)*4, x_8);
x_67 = x_66;
return x_67;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_68 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_69 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_69 = x_47;
}
lean::cnstr_set(x_69, 0, x_39);
lean::cnstr_set(x_69, 1, x_41);
lean::cnstr_set(x_69, 2, x_43);
lean::cnstr_set(x_69, 3, x_68);
lean::cnstr_set_scalar(x_69, sizeof(void*)*4, x_8);
x_70 = x_69;
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_45, x_2, x_3);
x_72 = l_rbnode_balance2___main___rarg(x_70, x_71);
return x_72;
}
}
}
else
{
uint8 x_74; 
lean::inc(x_39);
x_74 = l_rbnode_is__red___main___rarg(x_39);
if (x_74 == 0)
{
obj* x_75; obj* x_76; obj* x_77; 
x_75 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_76 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_76 = x_47;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_41);
lean::cnstr_set(x_76, 2, x_43);
lean::cnstr_set(x_76, 3, x_45);
lean::cnstr_set_scalar(x_76, sizeof(void*)*4, x_8);
x_77 = x_76;
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_78 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_79 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_79 = x_47;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_41);
lean::cnstr_set(x_79, 2, x_43);
lean::cnstr_set(x_79, 3, x_45);
lean::cnstr_set_scalar(x_79, sizeof(void*)*4, x_8);
x_80 = x_79;
x_81 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_39, x_2, x_3);
x_82 = l_rbnode_balance1___main___rarg(x_80, x_81);
return x_82;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; 
lean::inc(x_1);
x_5 = l_rbnode_is__red___main___rarg(x_1);
if (x_5 == 0)
{
obj* x_6; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_6;
}
else
{
obj* x_7; obj* x_8; 
x_7 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_insert___spec__4___rarg(x_0, x_1, x_2, x_3);
x_8 = l_rbnode_set__black___main___rarg(x_7);
return x_8;
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_insert___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_insert___spec__2___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_12);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_17);
lean::cnstr_set(x_21, 2, x_19);
return x_21;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_7; 
lean::dec(x_3);
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_20; uint8 x_21; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_2, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_2, 2);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_2, 3);
lean::inc(x_14);
lean::dec(x_2);
lean::inc(x_10);
lean::inc(x_3);
lean::inc(x_0);
x_20 = lean::apply_2(x_0, x_3, x_10);
x_21 = lean::unbox(x_20);
if (x_21 == 0)
{
obj* x_25; uint8 x_26; 
lean::dec(x_8);
lean::inc(x_3);
lean::inc(x_0);
x_25 = lean::apply_2(x_0, x_10, x_3);
x_26 = lean::unbox(x_25);
if (x_26 == 0)
{
obj* x_30; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_14);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_12);
return x_30;
}
else
{
lean::dec(x_12);
x_1 = x_0;
x_2 = x_14;
goto _start;
}
}
else
{
lean::dec(x_10);
lean::dec(x_12);
lean::dec(x_14);
x_1 = x_0;
x_2 = x_8;
goto _start;
}
}
}
}
obj* l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg), 4, 0);
return x_4;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_elaborator_ordered__rbmap_find___spec__1___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 1);
lean::inc(x_3);
lean::dec(x_1);
x_6 = l_rbnode_find___main___at_lean_elaborator_ordered__rbmap_find___spec__2___rarg(x_0, lean::box(0), x_3, x_2);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_find(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_find___rarg), 3, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_64; 
lean::inc(x_45);
x_64 = l_rbnode_is__red___main___rarg(x_45);
if (x_64 == 0)
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_66 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_66 = x_47;
}
lean::cnstr_set(x_66, 0, x_39);
lean::cnstr_set(x_66, 1, x_41);
lean::cnstr_set(x_66, 2, x_43);
lean::cnstr_set(x_66, 3, x_65);
lean::cnstr_set_scalar(x_66, sizeof(void*)*4, x_8);
x_67 = x_66;
return x_67;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_68 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_69 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_69 = x_47;
}
lean::cnstr_set(x_69, 0, x_39);
lean::cnstr_set(x_69, 1, x_41);
lean::cnstr_set(x_69, 2, x_43);
lean::cnstr_set(x_69, 3, x_68);
lean::cnstr_set_scalar(x_69, sizeof(void*)*4, x_8);
x_70 = x_69;
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_45, x_2, x_3);
x_72 = l_rbnode_balance2___main___rarg(x_70, x_71);
return x_72;
}
}
}
else
{
uint8 x_74; 
lean::inc(x_39);
x_74 = l_rbnode_is__red___main___rarg(x_39);
if (x_74 == 0)
{
obj* x_75; obj* x_76; obj* x_77; 
x_75 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_76 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_76 = x_47;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_41);
lean::cnstr_set(x_76, 2, x_43);
lean::cnstr_set(x_76, 3, x_45);
lean::cnstr_set_scalar(x_76, sizeof(void*)*4, x_8);
x_77 = x_76;
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_78 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_79 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_79 = x_47;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_41);
lean::cnstr_set(x_79, 2, x_43);
lean::cnstr_set(x_79, 3, x_45);
lean::cnstr_set_scalar(x_79, sizeof(void*)*4, x_8);
x_80 = x_79;
x_81 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_39, x_2, x_3);
x_82 = l_rbnode_balance1___main___rarg(x_80, x_81);
return x_82;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 0;
x_6 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_1);
lean::cnstr_set_scalar(x_6, sizeof(void*)*4, x_5);
x_7 = x_6;
return x_7;
}
else
{
uint8 x_8; 
x_8 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4);
if (x_8 == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_21; uint8 x_22; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
x_13 = lean::cnstr_get(x_1, 2);
x_15 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
lean::inc(x_11);
lean::inc(x_2);
lean::inc(x_0);
x_21 = lean::apply_2(x_0, x_2, x_11);
x_22 = lean::unbox(x_21);
if (x_22 == 0)
{
obj* x_26; uint8 x_27; 
lean::inc(x_2);
lean::inc(x_11);
lean::inc(x_0);
x_26 = lean::apply_2(x_0, x_11, x_2);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
if (lean::is_scalar(x_17)) {
 x_31 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_31 = x_17;
}
lean::cnstr_set(x_31, 0, x_9);
lean::cnstr_set(x_31, 1, x_2);
lean::cnstr_set(x_31, 2, x_3);
lean::cnstr_set(x_31, 3, x_15);
lean::cnstr_set_scalar(x_31, sizeof(void*)*4, x_8);
x_32 = x_31;
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
x_33 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_15, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_34 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_34 = x_17;
}
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_11);
lean::cnstr_set(x_34, 2, x_13);
lean::cnstr_set(x_34, 3, x_33);
lean::cnstr_set_scalar(x_34, sizeof(void*)*4, x_8);
x_35 = x_34;
return x_35;
}
}
else
{
obj* x_36; obj* x_37; obj* x_38; 
x_36 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_9, x_2, x_3);
if (lean::is_scalar(x_17)) {
 x_37 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_37 = x_17;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_11);
lean::cnstr_set(x_37, 2, x_13);
lean::cnstr_set(x_37, 3, x_15);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_8);
x_38 = x_37;
return x_38;
}
}
else
{
obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_51; uint8 x_52; 
x_39 = lean::cnstr_get(x_1, 0);
x_41 = lean::cnstr_get(x_1, 1);
x_43 = lean::cnstr_get(x_1, 2);
x_45 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_47 = x_1;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_1);
 x_47 = lean::box(0);
}
lean::inc(x_41);
lean::inc(x_2);
lean::inc(x_0);
x_51 = lean::apply_2(x_0, x_2, x_41);
x_52 = lean::unbox(x_51);
if (x_52 == 0)
{
obj* x_56; uint8 x_57; 
lean::inc(x_2);
lean::inc(x_41);
lean::inc(x_0);
x_56 = lean::apply_2(x_0, x_41, x_2);
x_57 = lean::unbox(x_56);
if (x_57 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_0);
lean::dec(x_41);
lean::dec(x_43);
if (lean::is_scalar(x_47)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_47;
}
lean::cnstr_set(x_61, 0, x_39);
lean::cnstr_set(x_61, 1, x_2);
lean::cnstr_set(x_61, 2, x_3);
lean::cnstr_set(x_61, 3, x_45);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_8);
x_62 = x_61;
return x_62;
}
else
{
uint8 x_64; 
lean::inc(x_45);
x_64 = l_rbnode_is__red___main___rarg(x_45);
if (x_64 == 0)
{
obj* x_65; obj* x_66; obj* x_67; 
x_65 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_45, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_66 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_66 = x_47;
}
lean::cnstr_set(x_66, 0, x_39);
lean::cnstr_set(x_66, 1, x_41);
lean::cnstr_set(x_66, 2, x_43);
lean::cnstr_set(x_66, 3, x_65);
lean::cnstr_set_scalar(x_66, sizeof(void*)*4, x_8);
x_67 = x_66;
return x_67;
}
else
{
obj* x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
x_68 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_69 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_69 = x_47;
}
lean::cnstr_set(x_69, 0, x_39);
lean::cnstr_set(x_69, 1, x_41);
lean::cnstr_set(x_69, 2, x_43);
lean::cnstr_set(x_69, 3, x_68);
lean::cnstr_set_scalar(x_69, sizeof(void*)*4, x_8);
x_70 = x_69;
x_71 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_45, x_2, x_3);
x_72 = l_rbnode_balance2___main___rarg(x_70, x_71);
return x_72;
}
}
}
else
{
uint8 x_74; 
lean::inc(x_39);
x_74 = l_rbnode_is__red___main___rarg(x_39);
if (x_74 == 0)
{
obj* x_75; obj* x_76; obj* x_77; 
x_75 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_39, x_2, x_3);
if (lean::is_scalar(x_47)) {
 x_76 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_76 = x_47;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_41);
lean::cnstr_set(x_76, 2, x_43);
lean::cnstr_set(x_76, 3, x_45);
lean::cnstr_set_scalar(x_76, sizeof(void*)*4, x_8);
x_77 = x_76;
return x_77;
}
else
{
obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_78 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_79 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_79 = x_47;
}
lean::cnstr_set(x_79, 0, x_78);
lean::cnstr_set(x_79, 1, x_41);
lean::cnstr_set(x_79, 2, x_43);
lean::cnstr_set(x_79, 3, x_45);
lean::cnstr_set_scalar(x_79, sizeof(void*)*4, x_8);
x_80 = x_79;
x_81 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_39, x_2, x_3);
x_82 = l_rbnode_balance1___main___rarg(x_80, x_81);
return x_82;
}
}
}
}
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg), 4, 0);
return x_6;
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; 
lean::inc(x_1);
x_5 = l_rbnode_is__red___main___rarg(x_1);
if (x_5 == 0)
{
obj* x_6; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__4___rarg(x_0, x_1, x_2, x_3);
return x_6;
}
else
{
obj* x_7; obj* x_8; 
x_7 = l_rbnode_ins___main___at_lean_elaborator_ordered__rbmap_of__list___spec__5___rarg(x_0, x_1, x_2, x_3);
x_8 = l_rbnode_set__black___main___rarg(x_7);
return x_8;
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg), 4, 0);
return x_6;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_insert___main___at_lean_elaborator_ordered__rbmap_of__list___spec__2___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
lean::inc(x_3);
lean::inc(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_7);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 2);
lean::inc(x_12);
lean::dec(x_1);
lean::inc(x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_12);
lean::cnstr_set(x_16, 1, x_3);
x_17 = l_rbnode_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__3___rarg(x_0, x_10, x_2, x_16);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_12, x_18);
lean::dec(x_12);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_17);
lean::cnstr_set(x_21, 2, x_19);
return x_21;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg), 4, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_ordered__rbmap_of__list___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
return x_8;
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_4; obj* x_6; obj* x_9; obj* x_11; obj* x_15; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
lean::dec(x_2);
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
lean::dec(x_4);
lean::inc(x_0);
x_15 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_ordered__rbmap_of__list___spec__1___rarg(x_0, x_1, x_9, x_11);
x_1 = x_15;
x_2 = x_6;
goto _start;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg), 3, 0);
return x_6;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l_lean_elaborator_ordered__rbmap_empty___closed__1;
x_3 = l_list_foldl___main___at_lean_elaborator_ordered__rbmap_of__list___spec__7___rarg(x_0, x_2, x_1);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_ordered__rbmap_of__list___rarg), 2, 0);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__config__coe__frontend__config(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_elaborator__t_monad___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = l_reader__t_monad___rarg(x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_read___rarg), 2, 1);
lean::closure_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_except__t_monad___rarg(x_0);
lean::inc(x_1);
x_3 = l_state__t_monad___rarg(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_4, 0, lean::box(0));
lean::closure_set(x_4, 1, lean::box(0));
lean::closure_set(x_4, 2, x_3);
x_5 = l_state__t_monad__state___rarg(x_1);
x_6 = l_monad__state__trans___rarg(x_4, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__t_monad__state(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__state___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
lean::inc(x_0);
x_2 = l_except__t_monad___rarg(x_0);
x_3 = l_except__t_monad__except___rarg(x_0);
x_4 = l_state__t_monad__except___rarg(x_2, lean::box(0), x_3);
x_5 = l_reader__t_monad__except___rarg(x_4);
return x_5;
}
}
obj* l_lean_elaborator_elaborator__t_monad__except(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__except___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_lean_elaborator_elaborator__t() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator__m() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_elaborator_coelaborator() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
return x_0;
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_3 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_5 = x_1;
} else {
 lean::inc(x_3);
 lean::dec(x_1);
 x_5 = lean::box(0);
}
if (lean::is_scalar(x_5)) {
 x_6 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_6 = x_5;
}
lean::cnstr_set(x_6, 0, x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; obj* x_11; 
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::apply_1(x_0, x_8);
return x_11;
}
}
}
obj* l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 0);
return x_4;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_3, x_0, x_1, x_5);
return x_8;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_7, 0, x_0);
lean::closure_set(x_7, 1, x_2);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_6);
lean::closure_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_lean_elaborator_command_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_3, x_0, x_1, x_2);
return x_4;
}
}
obj* _init_l_lean_elaborator_coelaborator__m_monad__coroutine() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_0 = l_coroutine_monad___closed__1;
x_1 = l_lean_elaborator_elaborator__t_monad___rarg(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_2, 0, lean::box(0));
lean::closure_set(x_2, 1, lean::box(0));
lean::closure_set(x_2, 2, x_1);
x_3 = l_except__t_monad___rarg(x_0);
lean::inc(x_3);
x_5 = l_state__t_monad___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift), 4, 3);
lean::closure_set(x_6, 0, lean::box(0));
lean::closure_set(x_6, 1, lean::box(0));
lean::closure_set(x_6, 2, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_state__t_lift___rarg), 4, 1);
lean::closure_set(x_7, 0, x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg), 3, 1);
lean::closure_set(x_8, 0, x_0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_yield___rarg), 2, 0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_11, 0, x_7);
lean::closure_set(x_11, 1, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_12, 0, x_6);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_monad__coroutine__trans___rarg), 3, 2);
lean::closure_set(x_13, 0, x_2);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_except__t_monad___rarg(x_0);
x_2 = l_state__t_monad___rarg(x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_monad__reader__adapter), 5, 4);
lean::closure_set(x_3, 0, lean::box(0));
lean::closure_set(x_3, 1, lean::box(0));
lean::closure_set(x_3, 2, lean::box(0));
lean::closure_set(x_3, 3, x_2);
return x_3;
}
}
obj* l_lean_elaborator_elaborator__t_monad__reader__adapter(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__t_monad__reader__adapter___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_elaborator_current__command___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
return x_4;
}
}
obj* _init_l_lean_elaborator_current__command___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__1), 1, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_current__command___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = l_lean_elaborator_current__command___rarg___closed__1;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_current__command(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg), 1, 0);
return x_4;
}
}
obj* l_lean_elaborator_with__current__command___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_7; 
lean::dec(x_5);
x_7 = lean::apply_4(x_1, x_2, x_3, x_4, x_0);
return x_7;
}
}
obj* l_lean_elaborator_with__current__command(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; 
lean::dec(x_1);
x_5 = lean::apply_2(x_0, x_2, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elaborator__m__coe__coelaborator__m(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__m__coe__coelaborator__m___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::apply_3(x_0, x_3, x_1, x_5);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
}
obj* l_lean_elaborator_elaborator__coe__coelaborator(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_1);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_elaborator__coe__coelaborator___lambda__1), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_2);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean_name_mk_numeral(x_0, x_2);
x_0 = x_7;
x_1 = x_4;
goto _start;
}
}
}
obj* l_lean_elaborator_mangle__ident(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 2);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 4);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_list_foldl___main___at_lean_elaborator_mangle__ident___spec__1(x_1, x_3);
return x_6;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_8; obj* x_10; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = l_lean_parser_syntax_get__pos(x_0);
x_14 = lean::mk_nat_obj(0u);
x_15 = l_option_get__or__else___main___rarg(x_13, x_14);
x_16 = l_lean_file__map_to__position(x_10, x_15);
x_17 = lean::box(0);
x_18 = 2;
x_19 = l_string_join___closed__1;
x_20 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_17);
lean::cnstr_set(x_20, 3, x_19);
lean::cnstr_set(x_20, 4, x_1);
lean::cnstr_set_scalar(x_20, sizeof(void*)*5, x_18);
x_21 = x_20;
x_22 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
}
obj* l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* _init_l_lean_elaborator_level__get__app__args___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("level_get_app_args: unexpected input: ");
return x_0;
}
}
obj* l_lean_elaborator_level__get__app__args___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::inc(x_0);
x_4 = l_lean_parser_syntax_kind___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
lean::inc(x_0);
x_6 = l_lean_parser_syntax_to__format___main(x_0);
x_7 = lean::mk_nat_obj(80u);
x_8 = l_lean_format_pretty(x_6, x_7);
x_9 = l_lean_elaborator_level__get__app__args___main___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_12 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_10, x_1, x_2);
return x_12;
}
else
{
obj* x_13; obj* x_16; uint8 x_17; 
x_13 = lean::cnstr_get(x_4, 0);
lean::inc(x_13);
lean::dec(x_4);
x_16 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_17 = lean_name_dec_eq(x_13, x_16);
if (x_17 == 0)
{
obj* x_18; uint8 x_19; 
x_18 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_19 = lean_name_dec_eq(x_13, x_18);
lean::dec(x_13);
if (x_19 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; 
lean::inc(x_0);
x_22 = l_lean_parser_syntax_to__format___main(x_0);
x_23 = lean::mk_nat_obj(80u);
x_24 = l_lean_format_pretty(x_22, x_23);
x_25 = l_lean_elaborator_level__get__app__args___main___closed__1;
x_26 = lean::string_append(x_25, x_24);
lean::dec(x_24);
x_28 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_26, x_1, x_2);
return x_28;
}
else
{
obj* x_29; obj* x_30; obj* x_34; 
x_29 = l_lean_parser_level_trailing_has__view;
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
lean::dec(x_29);
lean::inc(x_0);
x_34 = lean::apply_1(x_30, x_0);
if (lean::obj_tag(x_34) == 0)
{
obj* x_36; obj* x_39; obj* x_41; 
lean::dec(x_0);
x_36 = lean::cnstr_get(x_34, 0);
lean::inc(x_36);
lean::dec(x_34);
x_39 = lean::cnstr_get(x_36, 0);
lean::inc(x_39);
x_41 = l_lean_elaborator_level__get__app__args___main(x_39, x_1, x_2);
if (lean::obj_tag(x_41) == 0)
{
obj* x_43; obj* x_45; obj* x_46; 
lean::dec(x_36);
x_43 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_45 = x_41;
} else {
 lean::inc(x_43);
 lean::dec(x_41);
 x_45 = lean::box(0);
}
if (lean::is_scalar(x_45)) {
 x_46 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_46 = x_45;
}
lean::cnstr_set(x_46, 0, x_43);
return x_46;
}
else
{
obj* x_47; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_47 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_49 = x_41;
} else {
 lean::inc(x_47);
 lean::dec(x_41);
 x_49 = lean::box(0);
}
x_50 = lean::cnstr_get(x_47, 0);
x_52 = lean::cnstr_get(x_47, 1);
if (lean::is_exclusive(x_47)) {
 x_54 = x_47;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_47);
 x_54 = lean::box(0);
}
x_55 = lean::cnstr_get(x_50, 0);
x_57 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_59 = x_50;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_50);
 x_59 = lean::box(0);
}
x_60 = lean::cnstr_get(x_36, 1);
lean::inc(x_60);
lean::dec(x_36);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_60);
lean::cnstr_set(x_63, 1, x_57);
if (lean::is_scalar(x_59)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_59;
}
lean::cnstr_set(x_64, 0, x_55);
lean::cnstr_set(x_64, 1, x_63);
if (lean::is_scalar(x_54)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_54;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_52);
if (lean::is_scalar(x_49)) {
 x_66 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_66 = x_49;
}
lean::cnstr_set(x_66, 0, x_65);
return x_66;
}
}
else
{
obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_1);
lean::dec(x_34);
x_69 = lean::box(0);
x_70 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_70, 0, x_0);
lean::cnstr_set(x_70, 1, x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_2);
x_72 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_72, 0, x_71);
return x_72;
}
}
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_13);
lean::dec(x_1);
x_75 = lean::box(0);
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_0);
lean::cnstr_set(x_76, 1, x_75);
x_77 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_2);
x_78 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_78, 0, x_77);
return x_78;
}
}
}
}
obj* l_lean_elaborator_level__get__app__args(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_level__add___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_7; obj* x_8; 
x_4 = lean::mk_nat_obj(1u);
x_5 = lean::nat_sub(x_1, x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_level__add___main(x_0, x_5);
x_8 = level_mk_succ(x_7);
return x_8;
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_lean_elaborator_level__add(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_lean_elaborator_level__add___main(x_0, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_0, x_4);
x_8 = level_mk_max(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_0, x_4);
x_8 = level_mk_imax(x_2, x_7);
return x_8;
}
}
}
obj* l_rbmap_find___main___at_lean_elaborator_to__level___main___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_level: unexpected input: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed universe level");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = level_mk_mvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__level___main___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown universe variable '");
return x_0;
}
}
obj* l_lean_elaborator_to__level___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_elaborator_level__get__app__args___main(x_0, x_1, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_10; obj* x_11; 
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_11 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_11 = x_10;
}
lean::cnstr_set(x_11, 0, x_8);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_26; 
x_12 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_set(x_5, 0, lean::box(0));
 x_14 = x_5;
} else {
 lean::inc(x_12);
 lean::dec(x_5);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::dec(x_12);
x_20 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_set(x_15, 0, lean::box(0));
 lean::cnstr_set(x_15, 1, lean::box(0));
 x_24 = x_15;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_15);
 x_24 = lean::box(0);
}
lean::inc(x_20);
x_26 = l_lean_parser_syntax_kind___main(x_20);
if (lean::obj_tag(x_26) == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_38; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_20);
lean::dec(x_22);
lean::inc(x_0);
x_32 = l_lean_parser_syntax_to__format___main(x_0);
x_33 = lean::mk_nat_obj(80u);
x_34 = l_lean_format_pretty(x_32, x_33);
x_35 = l_lean_elaborator_to__level___main___closed__1;
x_36 = lean::string_append(x_35, x_34);
lean::dec(x_34);
x_38 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_36, x_1, x_17);
return x_38;
}
else
{
obj* x_39; obj* x_42; uint8 x_43; 
x_39 = lean::cnstr_get(x_26, 0);
lean::inc(x_39);
lean::dec(x_26);
x_42 = l_lean_parser_level_leading_has__view_x_27___lambda__1___closed__5;
x_43 = lean_name_dec_eq(x_39, x_42);
if (x_43 == 0)
{
obj* x_46; uint8 x_47; 
lean::dec(x_14);
lean::dec(x_24);
x_46 = l_lean_parser_level_trailing_has__view_x_27___lambda__1___closed__2;
x_47 = lean_name_dec_eq(x_39, x_46);
lean::dec(x_39);
if (x_47 == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_58; 
lean::dec(x_20);
lean::dec(x_22);
lean::inc(x_0);
x_52 = l_lean_parser_syntax_to__format___main(x_0);
x_53 = lean::mk_nat_obj(80u);
x_54 = l_lean_format_pretty(x_52, x_53);
x_55 = l_lean_elaborator_to__level___main___closed__1;
x_56 = lean::string_append(x_55, x_54);
lean::dec(x_54);
x_58 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_56, x_1, x_17);
return x_58;
}
else
{
obj* x_59; obj* x_60; obj* x_63; 
x_59 = l_lean_parser_level_trailing_has__view;
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
lean::dec(x_59);
x_63 = lean::apply_1(x_60, x_20);
if (lean::obj_tag(x_63) == 0)
{
obj* x_66; obj* x_67; 
lean::dec(x_22);
lean::dec(x_63);
x_66 = l_lean_elaborator_to__level___main___closed__2;
x_67 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_66, x_1, x_17);
return x_67;
}
else
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_69; obj* x_72; obj* x_74; 
lean::dec(x_0);
x_69 = lean::cnstr_get(x_63, 0);
lean::inc(x_69);
lean::dec(x_63);
x_72 = lean::cnstr_get(x_69, 0);
lean::inc(x_72);
x_74 = l_lean_elaborator_to__level___main(x_72, x_1, x_17);
if (lean::obj_tag(x_74) == 0)
{
obj* x_76; obj* x_78; obj* x_79; 
lean::dec(x_69);
x_76 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_78 = x_74;
} else {
 lean::inc(x_76);
 lean::dec(x_74);
 x_78 = lean::box(0);
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_76);
return x_79;
}
else
{
obj* x_80; obj* x_82; obj* x_83; obj* x_85; obj* x_87; obj* x_88; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_80 = lean::cnstr_get(x_74, 0);
if (lean::is_exclusive(x_74)) {
 x_82 = x_74;
} else {
 lean::inc(x_80);
 lean::dec(x_74);
 x_82 = lean::box(0);
}
x_83 = lean::cnstr_get(x_80, 0);
x_85 = lean::cnstr_get(x_80, 1);
if (lean::is_exclusive(x_80)) {
 x_87 = x_80;
} else {
 lean::inc(x_83);
 lean::inc(x_85);
 lean::dec(x_80);
 x_87 = lean::box(0);
}
x_88 = lean::cnstr_get(x_69, 2);
lean::inc(x_88);
lean::dec(x_69);
x_91 = l_lean_parser_number_view_to__nat___main(x_88);
x_92 = l_lean_elaborator_level__add___main(x_83, x_91);
if (lean::is_scalar(x_87)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_87;
}
lean::cnstr_set(x_93, 0, x_92);
lean::cnstr_set(x_93, 1, x_85);
if (lean::is_scalar(x_82)) {
 x_94 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_94 = x_82;
}
lean::cnstr_set(x_94, 0, x_93);
return x_94;
}
}
else
{
obj* x_97; obj* x_98; 
lean::dec(x_22);
lean::dec(x_63);
x_97 = l_lean_elaborator_to__level___main___closed__2;
x_98 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_97, x_1, x_17);
return x_98;
}
}
}
}
else
{
obj* x_100; obj* x_101; obj* x_104; 
lean::dec(x_39);
x_100 = l_lean_parser_level_leading_has__view;
x_101 = lean::cnstr_get(x_100, 0);
lean::inc(x_101);
lean::dec(x_100);
x_104 = lean::apply_1(x_101, x_20);
switch (lean::obj_tag(x_104)) {
case 0:
{
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_104);
if (lean::obj_tag(x_22) == 0)
{
obj* x_108; obj* x_109; 
x_108 = l_lean_elaborator_to__level___main___closed__2;
x_109 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_108, x_1, x_17);
return x_109;
}
else
{
obj* x_111; obj* x_113; obj* x_117; 
lean::dec(x_0);
x_111 = lean::cnstr_get(x_22, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_22, 1);
lean::inc(x_113);
lean::dec(x_22);
lean::inc(x_1);
x_117 = l_lean_elaborator_to__level___main(x_111, x_1, x_17);
if (lean::obj_tag(x_117) == 0)
{
obj* x_120; obj* x_122; obj* x_123; 
lean::dec(x_1);
lean::dec(x_113);
x_120 = lean::cnstr_get(x_117, 0);
if (lean::is_exclusive(x_117)) {
 x_122 = x_117;
} else {
 lean::inc(x_120);
 lean::dec(x_117);
 x_122 = lean::box(0);
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_120);
return x_123;
}
else
{
obj* x_124; obj* x_127; obj* x_129; obj* x_132; 
x_124 = lean::cnstr_get(x_117, 0);
lean::inc(x_124);
lean::dec(x_117);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
lean::dec(x_124);
x_132 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__1(x_113, x_1, x_129);
if (lean::obj_tag(x_132) == 0)
{
obj* x_134; obj* x_136; obj* x_137; 
lean::dec(x_127);
x_134 = lean::cnstr_get(x_132, 0);
if (lean::is_exclusive(x_132)) {
 x_136 = x_132;
} else {
 lean::inc(x_134);
 lean::dec(x_132);
 x_136 = lean::box(0);
}
if (lean::is_scalar(x_136)) {
 x_137 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_137 = x_136;
}
lean::cnstr_set(x_137, 0, x_134);
return x_137;
}
else
{
obj* x_138; obj* x_140; obj* x_141; obj* x_143; obj* x_145; obj* x_146; obj* x_147; obj* x_148; 
x_138 = lean::cnstr_get(x_132, 0);
if (lean::is_exclusive(x_132)) {
 x_140 = x_132;
} else {
 lean::inc(x_138);
 lean::dec(x_132);
 x_140 = lean::box(0);
}
x_141 = lean::cnstr_get(x_138, 0);
x_143 = lean::cnstr_get(x_138, 1);
if (lean::is_exclusive(x_138)) {
 x_145 = x_138;
} else {
 lean::inc(x_141);
 lean::inc(x_143);
 lean::dec(x_138);
 x_145 = lean::box(0);
}
x_146 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__2(x_127, x_141);
if (lean::is_scalar(x_145)) {
 x_147 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_147 = x_145;
}
lean::cnstr_set(x_147, 0, x_146);
lean::cnstr_set(x_147, 1, x_143);
if (lean::is_scalar(x_140)) {
 x_148 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_148 = x_140;
}
lean::cnstr_set(x_148, 0, x_147);
return x_148;
}
}
}
}
case 1:
{
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_104);
if (lean::obj_tag(x_22) == 0)
{
obj* x_152; obj* x_153; 
x_152 = l_lean_elaborator_to__level___main___closed__2;
x_153 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_152, x_1, x_17);
return x_153;
}
else
{
obj* x_155; obj* x_157; obj* x_161; 
lean::dec(x_0);
x_155 = lean::cnstr_get(x_22, 0);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_22, 1);
lean::inc(x_157);
lean::dec(x_22);
lean::inc(x_1);
x_161 = l_lean_elaborator_to__level___main(x_155, x_1, x_17);
if (lean::obj_tag(x_161) == 0)
{
obj* x_164; obj* x_166; obj* x_167; 
lean::dec(x_157);
lean::dec(x_1);
x_164 = lean::cnstr_get(x_161, 0);
if (lean::is_exclusive(x_161)) {
 x_166 = x_161;
} else {
 lean::inc(x_164);
 lean::dec(x_161);
 x_166 = lean::box(0);
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_164);
return x_167;
}
else
{
obj* x_168; obj* x_171; obj* x_173; obj* x_176; 
x_168 = lean::cnstr_get(x_161, 0);
lean::inc(x_168);
lean::dec(x_161);
x_171 = lean::cnstr_get(x_168, 0);
lean::inc(x_171);
x_173 = lean::cnstr_get(x_168, 1);
lean::inc(x_173);
lean::dec(x_168);
x_176 = l_list_mmap___main___at_lean_elaborator_to__level___main___spec__3(x_157, x_1, x_173);
if (lean::obj_tag(x_176) == 0)
{
obj* x_178; obj* x_180; obj* x_181; 
lean::dec(x_171);
x_178 = lean::cnstr_get(x_176, 0);
if (lean::is_exclusive(x_176)) {
 x_180 = x_176;
} else {
 lean::inc(x_178);
 lean::dec(x_176);
 x_180 = lean::box(0);
}
if (lean::is_scalar(x_180)) {
 x_181 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_181 = x_180;
}
lean::cnstr_set(x_181, 0, x_178);
return x_181;
}
else
{
obj* x_182; obj* x_184; obj* x_185; obj* x_187; obj* x_189; obj* x_190; obj* x_191; obj* x_192; 
x_182 = lean::cnstr_get(x_176, 0);
if (lean::is_exclusive(x_176)) {
 x_184 = x_176;
} else {
 lean::inc(x_182);
 lean::dec(x_176);
 x_184 = lean::box(0);
}
x_185 = lean::cnstr_get(x_182, 0);
x_187 = lean::cnstr_get(x_182, 1);
if (lean::is_exclusive(x_182)) {
 x_189 = x_182;
} else {
 lean::inc(x_185);
 lean::inc(x_187);
 lean::dec(x_182);
 x_189 = lean::box(0);
}
x_190 = l_list_foldr___main___at_lean_elaborator_to__level___main___spec__4(x_171, x_185);
if (lean::is_scalar(x_189)) {
 x_191 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_191 = x_189;
}
lean::cnstr_set(x_191, 0, x_190);
lean::cnstr_set(x_191, 1, x_187);
if (lean::is_scalar(x_184)) {
 x_192 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_192 = x_184;
}
lean::cnstr_set(x_192, 0, x_191);
return x_192;
}
}
}
}
case 2:
{
lean::dec(x_104);
if (lean::obj_tag(x_22) == 0)
{
obj* x_196; obj* x_197; obj* x_198; 
lean::dec(x_1);
lean::dec(x_0);
x_196 = l_lean_elaborator_to__level___main___closed__3;
if (lean::is_scalar(x_24)) {
 x_197 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_197 = x_24;
}
lean::cnstr_set(x_197, 0, x_196);
lean::cnstr_set(x_197, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_198 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_198 = x_14;
}
lean::cnstr_set(x_198, 0, x_197);
return x_198;
}
else
{
obj* x_202; obj* x_203; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
x_202 = l_lean_elaborator_to__level___main___closed__2;
x_203 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_202, x_1, x_17);
return x_203;
}
}
case 3:
{
obj* x_208; obj* x_209; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_104);
x_208 = l_lean_elaborator_to__level___main___closed__2;
x_209 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_208, x_1, x_17);
return x_209;
}
case 4:
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_212; obj* x_215; obj* x_216; obj* x_217; obj* x_218; 
lean::dec(x_1);
lean::dec(x_0);
x_212 = lean::cnstr_get(x_104, 0);
lean::inc(x_212);
lean::dec(x_104);
x_215 = l_lean_parser_number_view_to__nat___main(x_212);
x_216 = l_lean_level_of__nat___main(x_215);
if (lean::is_scalar(x_24)) {
 x_217 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_217 = x_24;
}
lean::cnstr_set(x_217, 0, x_216);
lean::cnstr_set(x_217, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_218 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_218 = x_14;
}
lean::cnstr_set(x_218, 0, x_217);
return x_218;
}
else
{
obj* x_223; obj* x_224; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_104);
x_223 = l_lean_elaborator_to__level___main___closed__2;
x_224 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_223, x_1, x_17);
return x_224;
}
}
default:
{
if (lean::obj_tag(x_22) == 0)
{
obj* x_225; obj* x_228; obj* x_229; obj* x_231; obj* x_235; 
x_225 = lean::cnstr_get(x_104, 0);
lean::inc(x_225);
lean::dec(x_104);
x_228 = l_lean_elaborator_mangle__ident(x_225);
x_229 = lean::cnstr_get(x_17, 4);
lean::inc(x_229);
x_231 = lean::cnstr_get(x_229, 1);
lean::inc(x_231);
lean::dec(x_229);
lean::inc(x_228);
x_235 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_231, x_228);
if (lean::obj_tag(x_235) == 0)
{
obj* x_238; obj* x_239; obj* x_240; obj* x_241; obj* x_243; obj* x_244; obj* x_245; 
lean::dec(x_14);
lean::dec(x_24);
x_238 = l_lean_name_to__string___closed__1;
x_239 = l_lean_name_to__string__with__sep___main(x_238, x_228);
x_240 = l_lean_elaborator_to__level___main___closed__4;
x_241 = lean::string_append(x_240, x_239);
lean::dec(x_239);
x_243 = l_char_has__repr___closed__1;
x_244 = lean::string_append(x_241, x_243);
x_245 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_244, x_1, x_17);
return x_245;
}
else
{
obj* x_249; obj* x_250; obj* x_251; 
lean::dec(x_235);
lean::dec(x_1);
lean::dec(x_0);
x_249 = level_mk_param(x_228);
if (lean::is_scalar(x_24)) {
 x_250 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_250 = x_24;
}
lean::cnstr_set(x_250, 0, x_249);
lean::cnstr_set(x_250, 1, x_17);
if (lean::is_scalar(x_14)) {
 x_251 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_251 = x_14;
}
lean::cnstr_set(x_251, 0, x_250);
return x_251;
}
}
else
{
obj* x_256; obj* x_257; 
lean::dec(x_14);
lean::dec(x_24);
lean::dec(x_22);
lean::dec(x_104);
x_256 = l_lean_elaborator_to__level___main___closed__2;
x_257 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_256, x_1, x_17);
return x_257;
}
}
}
}
}
}
}
}
obj* l_lean_elaborator_to__level(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__level___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_expr_mk__annotation___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("annotation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_expr_mk__annotation(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::box(0);
x_3 = l_lean_elaborator_expr_mk__annotation___closed__1;
x_4 = l_lean_kvmap_set__name(x_2, x_3, x_0);
x_5 = lean_expr_mk_mdata(x_4, x_1);
return x_5;
}
}
obj* _init_l_lean_elaborator_dummy() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = lean::mk_string("Prop");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::box(0);
x_4 = lean_expr_mk_const(x_2, x_3);
return x_4;
}
}
obj* _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_16; obj* x_20; uint8 x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_10 = x_1;
} else {
 lean::inc(x_8);
 lean::dec(x_1);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_4, 0);
lean::inc(x_11);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_6, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_6, 1);
lean::inc(x_16);
lean::dec(x_6);
lean::inc(x_0);
x_20 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_8);
x_21 = 4;
lean::inc(x_11);
x_23 = lean_expr_local(x_11, x_11, x_0, x_21);
x_24 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
x_25 = l_lean_elaborator_expr_mk__annotation(x_24, x_23);
x_26 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_25, x_14);
x_27 = lean_expr_mk_app(x_26, x_16);
if (lean::is_scalar(x_10)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_10;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_20);
return x_28;
}
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_mk__eqns___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("pre_equations");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__eqns(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1(x_0, x_1);
x_3 = l_lean_elaborator_mk__eqns___closed__1;
x_4 = l_lean_expr_mk__capp(x_3, x_2);
x_5 = l_lean_elaborator_mk__eqns___closed__2;
x_6 = l_lean_elaborator_expr_mk__annotation(x_5, x_4);
return x_6;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_0, x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_match_fn");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::inc(x_1);
x_15 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__2(x_12, x_1, x_2);
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_15, 0);
if (lean::is_exclusive(x_15)) {
 x_22 = x_15;
} else {
 lean::inc(x_20);
 lean::dec(x_15);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_36; 
x_24 = lean::cnstr_get(x_15, 0);
lean::inc(x_24);
lean::dec(x_15);
x_27 = lean::cnstr_get(x_24, 0);
x_29 = lean::cnstr_get(x_24, 1);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_set(x_24, 0, lean::box(0));
 lean::cnstr_set(x_24, 1, lean::box(0));
 x_31 = x_24;
} else {
 lean::inc(x_27);
 lean::inc(x_29);
 lean::dec(x_24);
 x_31 = lean::box(0);
}
x_32 = lean::cnstr_get(x_7, 2);
lean::inc(x_32);
lean::dec(x_7);
lean::inc(x_1);
x_36 = l_lean_elaborator_to__pexpr___main(x_32, x_1, x_29);
if (lean::obj_tag(x_36) == 0)
{
obj* x_42; obj* x_44; obj* x_45; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_27);
lean::dec(x_31);
x_42 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_44 = x_36;
} else {
 lean::inc(x_42);
 lean::dec(x_36);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_51; obj* x_53; obj* x_54; 
x_46 = lean::cnstr_get(x_36, 0);
lean::inc(x_46);
lean::dec(x_36);
x_49 = lean::cnstr_get(x_46, 0);
x_51 = lean::cnstr_get(x_46, 1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_set(x_46, 0, lean::box(0));
 lean::cnstr_set(x_46, 1, lean::box(0));
 x_53 = x_46;
} else {
 lean::inc(x_49);
 lean::inc(x_51);
 lean::dec(x_46);
 x_53 = lean::box(0);
}
x_54 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_9, x_1, x_51);
if (lean::obj_tag(x_54) == 0)
{
obj* x_60; obj* x_62; obj* x_63; 
lean::dec(x_11);
lean::dec(x_27);
lean::dec(x_31);
lean::dec(x_49);
lean::dec(x_53);
x_60 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 x_62 = x_54;
} else {
 lean::inc(x_60);
 lean::dec(x_54);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_63 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_63 = x_62;
}
lean::cnstr_set(x_63, 0, x_60);
return x_63;
}
else
{
obj* x_64; obj* x_66; obj* x_67; obj* x_69; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_64 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 x_66 = x_54;
} else {
 lean::inc(x_64);
 lean::dec(x_54);
 x_66 = lean::box(0);
}
x_67 = lean::cnstr_get(x_64, 0);
x_69 = lean::cnstr_get(x_64, 1);
if (lean::is_exclusive(x_64)) {
 x_71 = x_64;
} else {
 lean::inc(x_67);
 lean::inc(x_69);
 lean::dec(x_64);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_27);
lean::cnstr_set(x_72, 1, x_49);
x_73 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1;
if (lean::is_scalar(x_53)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_53;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_72);
if (lean::is_scalar(x_11)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_11;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_67);
if (lean::is_scalar(x_31)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_31;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_69);
if (lean::is_scalar(x_66)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_66;
}
lean::cnstr_set(x_77, 0, x_76);
return x_77;
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1, 0, x_0);
lean::cnstr_set(x_1, 1, x_0);
return x_1;
}
else
{
obj* x_2; obj* x_4; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; uint8 x_9; uint8 x_10; 
lean::dec(x_4);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = 1;
x_10 = l_coe__decidable__eq(x_9);
if (x_10 == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_0);
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_15 = x_0;
} else {
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_7);
x_17 = lean::cnstr_get(x_16, 0);
x_19 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 x_21 = x_16;
} else {
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_16);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_15)) {
 x_22 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_22 = x_15;
}
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_17);
if (lean::is_scalar(x_21)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_21;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_19);
return x_23;
}
}
else
{
obj* x_25; uint8 x_27; uint8 x_28; 
lean::dec(x_4);
x_25 = lean::cnstr_get(x_0, 1);
lean::inc(x_25);
x_27 = 0;
x_28 = l_coe__decidable__eq(x_27);
if (x_28 == 0)
{
obj* x_31; obj* x_32; 
lean::dec(x_2);
lean::dec(x_25);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_0);
return x_32;
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_40; obj* x_41; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_33 = x_0;
} else {
 lean::dec(x_0);
 x_33 = lean::box(0);
}
x_34 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_25);
x_35 = lean::cnstr_get(x_34, 0);
x_37 = lean::cnstr_get(x_34, 1);
if (lean::is_exclusive(x_34)) {
 x_39 = x_34;
} else {
 lean::inc(x_35);
 lean::inc(x_37);
 lean::dec(x_34);
 x_39 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_40 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_40 = x_33;
}
lean::cnstr_set(x_40, 0, x_2);
lean::cnstr_set(x_40, 1, x_35);
if (lean::is_scalar(x_39)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_39;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_37);
return x_41;
}
}
}
}
}
obj* l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1, 0, x_0);
lean::cnstr_set(x_1, 1, x_0);
return x_1;
}
else
{
obj* x_2; obj* x_4; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; uint8 x_9; uint8 x_10; 
lean::dec(x_4);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = 0;
x_10 = l_coe__decidable__eq(x_9);
if (x_10 == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_13);
lean::cnstr_set(x_14, 1, x_0);
return x_14;
}
else
{
obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_15 = x_0;
} else {
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_7);
x_17 = lean::cnstr_get(x_16, 0);
x_19 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 x_21 = x_16;
} else {
 lean::inc(x_17);
 lean::inc(x_19);
 lean::dec(x_16);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_15)) {
 x_22 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_22 = x_15;
}
lean::cnstr_set(x_22, 0, x_2);
lean::cnstr_set(x_22, 1, x_17);
if (lean::is_scalar(x_21)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_21;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_19);
return x_23;
}
}
else
{
obj* x_24; obj* x_27; 
x_24 = lean::cnstr_get(x_4, 0);
lean::inc(x_24);
lean::dec(x_4);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
if (lean::obj_tag(x_27) == 0)
{
obj* x_30; uint8 x_32; uint8 x_33; 
x_30 = lean::cnstr_get(x_0, 1);
lean::inc(x_30);
x_32 = 0;
x_33 = l_coe__decidable__eq(x_32);
if (x_33 == 0)
{
obj* x_36; obj* x_37; 
lean::dec(x_2);
lean::dec(x_30);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_0);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_38 = x_0;
} else {
 lean::dec(x_0);
 x_38 = lean::box(0);
}
x_39 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_30);
x_40 = lean::cnstr_get(x_39, 0);
x_42 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_44 = x_39;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_39);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_45 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_45 = x_38;
}
lean::cnstr_set(x_45, 0, x_2);
lean::cnstr_set(x_45, 1, x_40);
if (lean::is_scalar(x_44)) {
 x_46 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_46 = x_44;
}
lean::cnstr_set(x_46, 0, x_45);
lean::cnstr_set(x_46, 1, x_42);
return x_46;
}
}
else
{
obj* x_48; uint8 x_50; uint8 x_51; 
lean::dec(x_27);
x_48 = lean::cnstr_get(x_0, 1);
lean::inc(x_48);
x_50 = 1;
x_51 = l_coe__decidable__eq(x_50);
if (x_51 == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_2);
lean::dec(x_48);
x_54 = lean::box(0);
x_55 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_0);
return x_55;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_60; obj* x_62; obj* x_63; obj* x_64; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_56 = x_0;
} else {
 lean::dec(x_0);
 x_56 = lean::box(0);
}
x_57 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_48);
x_58 = lean::cnstr_get(x_57, 0);
x_60 = lean::cnstr_get(x_57, 1);
if (lean::is_exclusive(x_57)) {
 x_62 = x_57;
} else {
 lean::inc(x_58);
 lean::inc(x_60);
 lean::dec(x_57);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_56;
}
lean::cnstr_set(x_63, 0, x_2);
lean::cnstr_set(x_63, 1, x_58);
if (lean::is_scalar(x_62)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_62;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_60);
return x_64;
}
}
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unreachable");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_20; obj* x_23; 
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_11, 0);
lean::inc(x_17);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_17, 2);
lean::inc(x_20);
lean::inc(x_2);
x_23 = l_lean_elaborator_to__pexpr___main(x_20, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_17);
x_29 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_31 = x_23;
} else {
 lean::inc(x_29);
 lean::dec(x_23);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_38; obj* x_41; 
x_33 = lean::cnstr_get(x_23, 0);
lean::inc(x_33);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::dec(x_33);
x_41 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_14, x_2, x_38);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_16);
lean::dec(x_36);
lean::dec(x_17);
x_45 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_47 = x_41;
} else {
 lean::inc(x_45);
 lean::dec(x_41);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_49 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean::inc(x_49);
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
x_57 = lean::box(0);
x_58 = lean::cnstr_get(x_17, 0);
lean::inc(x_58);
lean::dec(x_17);
x_61 = l_lean_elaborator_mangle__ident(x_58);
x_62 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_63 = l_lean_kvmap_set__name(x_57, x_62, x_61);
x_64 = lean_expr_mk_mdata(x_63, x_36);
if (lean::is_scalar(x_16)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_16;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_56;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_51;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_75; 
lean::dec(x_11);
x_69 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_71 = x_1;
} else {
 lean::inc(x_69);
 lean::dec(x_1);
 x_71 = lean::box(0);
}
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_75 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_75) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_71);
lean::dec(x_69);
x_80 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_82 = x_75;
} else {
 lean::inc(x_80);
 lean::dec(x_75);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_75, 0);
lean::inc(x_84);
lean::dec(x_75);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_69, x_2, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_71);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_71;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
}
}
}
obj* _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_expr_mk_sort(x_0);
return x_1;
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; 
lean::dec(x_11);
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_21 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_18, x_2, x_3);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_15);
lean::dec(x_17);
lean::dec(x_0);
lean::dec(x_2);
x_26 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_28 = x_21;
} else {
 lean::inc(x_26);
 lean::dec(x_21);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
lean::dec(x_21);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_30, 1);
lean::inc(x_35);
lean::dec(x_30);
x_38 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_15, x_2, x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_17);
lean::dec(x_33);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_45, 0);
x_50 = lean::cnstr_get(x_45, 1);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_48);
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_33);
lean::cnstr_set(x_53, 1, x_48);
if (lean::is_scalar(x_52)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_52;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_50);
if (lean::is_scalar(x_47)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_47;
}
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
obj* x_56; obj* x_59; 
x_56 = lean::cnstr_get(x_11, 0);
lean::inc(x_56);
lean::dec(x_11);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_64; obj* x_65; obj* x_68; 
x_62 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_64 = x_1;
} else {
 lean::inc(x_62);
 lean::dec(x_1);
 x_64 = lean::box(0);
}
x_65 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_68 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_65, x_2, x_3);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_64);
lean::dec(x_62);
x_73 = lean::cnstr_get(x_68, 0);
if (lean::is_exclusive(x_68)) {
 x_75 = x_68;
} else {
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_85; 
x_77 = lean::cnstr_get(x_68, 0);
lean::inc(x_77);
lean::dec(x_68);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
lean::dec(x_77);
x_85 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_62, x_2, x_82);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_64);
lean::dec(x_80);
x_88 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_90 = x_85;
} else {
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_94; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_92 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_94 = x_85;
} else {
 lean::inc(x_92);
 lean::dec(x_85);
 x_94 = lean::box(0);
}
x_95 = lean::cnstr_get(x_92, 0);
x_97 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_99 = x_92;
} else {
 lean::inc(x_95);
 lean::inc(x_97);
 lean::dec(x_92);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_100 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_100 = x_64;
}
lean::cnstr_set(x_100, 0, x_80);
lean::cnstr_set(x_100, 1, x_95);
if (lean::is_scalar(x_99)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_99;
}
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
if (lean::is_scalar(x_94)) {
 x_102 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_102 = x_94;
}
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_110; 
x_103 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_105 = x_1;
} else {
 lean::inc(x_103);
 lean::dec(x_1);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_59, 0);
lean::inc(x_106);
lean::dec(x_59);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_105);
lean::dec(x_103);
x_115 = lean::cnstr_get(x_110, 0);
if (lean::is_exclusive(x_110)) {
 x_117 = x_110;
} else {
 lean::inc(x_115);
 lean::dec(x_110);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_122; obj* x_124; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
lean::dec(x_110);
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
lean::dec(x_119);
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_103, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_105);
lean::dec(x_122);
x_130 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_132 = x_127;
} else {
 lean::inc(x_130);
 lean::dec(x_127);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
return x_133;
}
else
{
obj* x_134; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
x_134 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_136 = x_127;
} else {
 lean::inc(x_134);
 lean::dec(x_127);
 x_136 = lean::box(0);
}
x_137 = lean::cnstr_get(x_134, 0);
x_139 = lean::cnstr_get(x_134, 1);
if (lean::is_exclusive(x_134)) {
 x_141 = x_134;
} else {
 lean::inc(x_137);
 lean::inc(x_139);
 lean::dec(x_134);
 x_141 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_142 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_142 = x_105;
}
lean::cnstr_set(x_142, 0, x_122);
lean::cnstr_set(x_142, 1, x_137);
if (lean::is_scalar(x_141)) {
 x_143 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_143 = x_141;
}
lean::cnstr_set(x_143, 0, x_142);
lean::cnstr_set(x_143, 1, x_139);
if (lean::is_scalar(x_136)) {
 x_144 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_144 = x_136;
}
lean::cnstr_set(x_144, 0, x_143);
return x_144;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_20; obj* x_23; 
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_11, 0);
lean::inc(x_17);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_17, 2);
lean::inc(x_20);
lean::inc(x_2);
x_23 = l_lean_elaborator_to__pexpr___main(x_20, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_17);
x_29 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_31 = x_23;
} else {
 lean::inc(x_29);
 lean::dec(x_23);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_38; obj* x_41; 
x_33 = lean::cnstr_get(x_23, 0);
lean::inc(x_33);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::dec(x_33);
x_41 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_14, x_2, x_38);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_16);
lean::dec(x_36);
lean::dec(x_17);
x_45 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_47 = x_41;
} else {
 lean::inc(x_45);
 lean::dec(x_41);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_49 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean::inc(x_49);
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
x_57 = lean::box(0);
x_58 = lean::cnstr_get(x_17, 0);
lean::inc(x_58);
lean::dec(x_17);
x_61 = l_lean_elaborator_mangle__ident(x_58);
x_62 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_63 = l_lean_kvmap_set__name(x_57, x_62, x_61);
x_64 = lean_expr_mk_mdata(x_63, x_36);
if (lean::is_scalar(x_16)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_16;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_56;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_51;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_75; 
lean::dec(x_11);
x_69 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_71 = x_1;
} else {
 lean::inc(x_69);
 lean::dec(x_1);
 x_71 = lean::box(0);
}
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_75 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_75) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_71);
lean::dec(x_69);
x_80 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_82 = x_75;
} else {
 lean::inc(x_80);
 lean::dec(x_75);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_75, 0);
lean::inc(x_84);
lean::dec(x_75);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_69, x_2, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_71);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_71;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; 
lean::dec(x_11);
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_21 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_18, x_2, x_3);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_15);
lean::dec(x_17);
lean::dec(x_0);
lean::dec(x_2);
x_26 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_28 = x_21;
} else {
 lean::inc(x_26);
 lean::dec(x_21);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
lean::dec(x_21);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_30, 1);
lean::inc(x_35);
lean::dec(x_30);
x_38 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_15, x_2, x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_17);
lean::dec(x_33);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_45, 0);
x_50 = lean::cnstr_get(x_45, 1);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_48);
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_33);
lean::cnstr_set(x_53, 1, x_48);
if (lean::is_scalar(x_52)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_52;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_50);
if (lean::is_scalar(x_47)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_47;
}
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
obj* x_56; obj* x_59; 
x_56 = lean::cnstr_get(x_11, 0);
lean::inc(x_56);
lean::dec(x_11);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_64; obj* x_65; obj* x_68; 
x_62 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_64 = x_1;
} else {
 lean::inc(x_62);
 lean::dec(x_1);
 x_64 = lean::box(0);
}
x_65 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_68 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_65, x_2, x_3);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_64);
lean::dec(x_62);
x_73 = lean::cnstr_get(x_68, 0);
if (lean::is_exclusive(x_68)) {
 x_75 = x_68;
} else {
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_85; 
x_77 = lean::cnstr_get(x_68, 0);
lean::inc(x_77);
lean::dec(x_68);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
lean::dec(x_77);
x_85 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_62, x_2, x_82);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_64);
lean::dec(x_80);
x_88 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_90 = x_85;
} else {
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_94; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_92 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_94 = x_85;
} else {
 lean::inc(x_92);
 lean::dec(x_85);
 x_94 = lean::box(0);
}
x_95 = lean::cnstr_get(x_92, 0);
x_97 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_99 = x_92;
} else {
 lean::inc(x_95);
 lean::inc(x_97);
 lean::dec(x_92);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_100 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_100 = x_64;
}
lean::cnstr_set(x_100, 0, x_80);
lean::cnstr_set(x_100, 1, x_95);
if (lean::is_scalar(x_99)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_99;
}
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
if (lean::is_scalar(x_94)) {
 x_102 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_102 = x_94;
}
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_110; 
x_103 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_105 = x_1;
} else {
 lean::inc(x_103);
 lean::dec(x_1);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_59, 0);
lean::inc(x_106);
lean::dec(x_59);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_105);
lean::dec(x_103);
x_115 = lean::cnstr_get(x_110, 0);
if (lean::is_exclusive(x_110)) {
 x_117 = x_110;
} else {
 lean::inc(x_115);
 lean::dec(x_110);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_122; obj* x_124; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
lean::dec(x_110);
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
lean::dec(x_119);
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_103, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_105);
lean::dec(x_122);
x_130 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_132 = x_127;
} else {
 lean::inc(x_130);
 lean::dec(x_127);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
return x_133;
}
else
{
obj* x_134; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
x_134 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_136 = x_127;
} else {
 lean::inc(x_134);
 lean::dec(x_127);
 x_136 = lean::box(0);
}
x_137 = lean::cnstr_get(x_134, 0);
x_139 = lean::cnstr_get(x_134, 1);
if (lean::is_exclusive(x_134)) {
 x_141 = x_134;
} else {
 lean::inc(x_137);
 lean::inc(x_139);
 lean::dec(x_134);
 x_141 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_142 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_142 = x_105;
}
lean::cnstr_set(x_142, 0, x_122);
lean::cnstr_set(x_142, 1, x_137);
if (lean::is_scalar(x_141)) {
 x_143 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_143 = x_141;
}
lean::cnstr_set(x_143, 0, x_142);
lean::cnstr_set(x_143, 1, x_139);
if (lean::is_scalar(x_136)) {
 x_144 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_144 = x_136;
}
lean::cnstr_set(x_144, 0, x_143);
return x_144;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_20; obj* x_23; 
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_11, 0);
lean::inc(x_17);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_17, 2);
lean::inc(x_20);
lean::inc(x_2);
x_23 = l_lean_elaborator_to__pexpr___main(x_20, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_17);
x_29 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_31 = x_23;
} else {
 lean::inc(x_29);
 lean::dec(x_23);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_38; obj* x_41; 
x_33 = lean::cnstr_get(x_23, 0);
lean::inc(x_33);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::dec(x_33);
x_41 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_14, x_2, x_38);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_16);
lean::dec(x_36);
lean::dec(x_17);
x_45 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_47 = x_41;
} else {
 lean::inc(x_45);
 lean::dec(x_41);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_49 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean::inc(x_49);
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
x_57 = lean::box(0);
x_58 = lean::cnstr_get(x_17, 0);
lean::inc(x_58);
lean::dec(x_17);
x_61 = l_lean_elaborator_mangle__ident(x_58);
x_62 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_63 = l_lean_kvmap_set__name(x_57, x_62, x_61);
x_64 = lean_expr_mk_mdata(x_63, x_36);
if (lean::is_scalar(x_16)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_16;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_56;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_51;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_75; 
lean::dec(x_11);
x_69 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_71 = x_1;
} else {
 lean::inc(x_69);
 lean::dec(x_1);
 x_71 = lean::box(0);
}
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_75 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_75) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_71);
lean::dec(x_69);
x_80 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_82 = x_75;
} else {
 lean::inc(x_80);
 lean::dec(x_75);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_75, 0);
lean::inc(x_84);
lean::dec(x_75);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_69, x_2, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_71);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_71;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; 
lean::dec(x_11);
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_21 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_18, x_2, x_3);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_15);
lean::dec(x_17);
lean::dec(x_0);
lean::dec(x_2);
x_26 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_28 = x_21;
} else {
 lean::inc(x_26);
 lean::dec(x_21);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
lean::dec(x_21);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_30, 1);
lean::inc(x_35);
lean::dec(x_30);
x_38 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_15, x_2, x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_17);
lean::dec(x_33);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_45, 0);
x_50 = lean::cnstr_get(x_45, 1);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_48);
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_33);
lean::cnstr_set(x_53, 1, x_48);
if (lean::is_scalar(x_52)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_52;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_50);
if (lean::is_scalar(x_47)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_47;
}
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
obj* x_56; obj* x_59; 
x_56 = lean::cnstr_get(x_11, 0);
lean::inc(x_56);
lean::dec(x_11);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_64; obj* x_65; obj* x_68; 
x_62 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_64 = x_1;
} else {
 lean::inc(x_62);
 lean::dec(x_1);
 x_64 = lean::box(0);
}
x_65 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_68 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_65, x_2, x_3);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_64);
lean::dec(x_62);
x_73 = lean::cnstr_get(x_68, 0);
if (lean::is_exclusive(x_68)) {
 x_75 = x_68;
} else {
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_85; 
x_77 = lean::cnstr_get(x_68, 0);
lean::inc(x_77);
lean::dec(x_68);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
lean::dec(x_77);
x_85 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_62, x_2, x_82);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_64);
lean::dec(x_80);
x_88 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_90 = x_85;
} else {
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_94; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_92 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_94 = x_85;
} else {
 lean::inc(x_92);
 lean::dec(x_85);
 x_94 = lean::box(0);
}
x_95 = lean::cnstr_get(x_92, 0);
x_97 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_99 = x_92;
} else {
 lean::inc(x_95);
 lean::inc(x_97);
 lean::dec(x_92);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_100 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_100 = x_64;
}
lean::cnstr_set(x_100, 0, x_80);
lean::cnstr_set(x_100, 1, x_95);
if (lean::is_scalar(x_99)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_99;
}
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
if (lean::is_scalar(x_94)) {
 x_102 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_102 = x_94;
}
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_110; 
x_103 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_105 = x_1;
} else {
 lean::inc(x_103);
 lean::dec(x_1);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_59, 0);
lean::inc(x_106);
lean::dec(x_59);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_105);
lean::dec(x_103);
x_115 = lean::cnstr_get(x_110, 0);
if (lean::is_exclusive(x_110)) {
 x_117 = x_110;
} else {
 lean::inc(x_115);
 lean::dec(x_110);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_122; obj* x_124; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
lean::dec(x_110);
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
lean::dec(x_119);
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_103, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_105);
lean::dec(x_122);
x_130 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_132 = x_127;
} else {
 lean::inc(x_130);
 lean::dec(x_127);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
return x_133;
}
else
{
obj* x_134; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
x_134 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_136 = x_127;
} else {
 lean::inc(x_134);
 lean::dec(x_127);
 x_136 = lean::box(0);
}
x_137 = lean::cnstr_get(x_134, 0);
x_139 = lean::cnstr_get(x_134, 1);
if (lean::is_exclusive(x_134)) {
 x_141 = x_134;
} else {
 lean::inc(x_137);
 lean::inc(x_139);
 lean::dec(x_134);
 x_141 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_142 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_142 = x_105;
}
lean::cnstr_set(x_142, 0, x_122);
lean::cnstr_set(x_142, 1, x_137);
if (lean::is_scalar(x_141)) {
 x_143 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_143 = x_141;
}
lean::cnstr_set(x_143, 0, x_142);
lean::cnstr_set(x_143, 1, x_139);
if (lean::is_scalar(x_136)) {
 x_144 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_144 = x_136;
}
lean::cnstr_set(x_144, 0, x_143);
return x_144;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_14; obj* x_16; obj* x_17; obj* x_20; obj* x_23; 
x_14 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_16 = x_1;
} else {
 lean::inc(x_14);
 lean::dec(x_1);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_11, 0);
lean::inc(x_17);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_17, 2);
lean::inc(x_20);
lean::inc(x_2);
x_23 = l_lean_elaborator_to__pexpr___main(x_20, x_2, x_3);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; obj* x_31; obj* x_32; 
lean::dec(x_14);
lean::dec(x_16);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_17);
x_29 = lean::cnstr_get(x_23, 0);
if (lean::is_exclusive(x_23)) {
 x_31 = x_23;
} else {
 lean::inc(x_29);
 lean::dec(x_23);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_29);
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_38; obj* x_41; 
x_33 = lean::cnstr_get(x_23, 0);
lean::inc(x_33);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_33, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
lean::dec(x_33);
x_41 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_14, x_2, x_38);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_16);
lean::dec(x_36);
lean::dec(x_17);
x_45 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_47 = x_41;
} else {
 lean::inc(x_45);
 lean::dec(x_41);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_49 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_51 = x_41;
} else {
 lean::inc(x_49);
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_49, 0);
x_54 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_56 = x_49;
} else {
 lean::inc(x_52);
 lean::inc(x_54);
 lean::dec(x_49);
 x_56 = lean::box(0);
}
x_57 = lean::box(0);
x_58 = lean::cnstr_get(x_17, 0);
lean::inc(x_58);
lean::dec(x_17);
x_61 = l_lean_elaborator_mangle__ident(x_58);
x_62 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1;
x_63 = l_lean_kvmap_set__name(x_57, x_62, x_61);
x_64 = lean_expr_mk_mdata(x_63, x_36);
if (lean::is_scalar(x_16)) {
 x_65 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_65 = x_16;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_52);
if (lean::is_scalar(x_56)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_56;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_54);
if (lean::is_scalar(x_51)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_51;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
}
else
{
obj* x_69; obj* x_71; obj* x_72; obj* x_75; 
lean::dec(x_11);
x_69 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_71 = x_1;
} else {
 lean::inc(x_69);
 lean::dec(x_1);
 x_71 = lean::box(0);
}
x_72 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_75 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_72, x_2, x_3);
if (lean::obj_tag(x_75) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_71);
lean::dec(x_69);
x_80 = lean::cnstr_get(x_75, 0);
if (lean::is_exclusive(x_75)) {
 x_82 = x_75;
} else {
 lean::inc(x_80);
 lean::dec(x_75);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; obj* x_89; obj* x_92; 
x_84 = lean::cnstr_get(x_75, 0);
lean::inc(x_84);
lean::dec(x_75);
x_87 = lean::cnstr_get(x_84, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_84, 1);
lean::inc(x_89);
lean::dec(x_84);
x_92 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_69, x_2, x_89);
if (lean::obj_tag(x_92) == 0)
{
obj* x_95; obj* x_97; obj* x_98; 
lean::dec(x_71);
lean::dec(x_87);
x_95 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_95);
return x_98;
}
else
{
obj* x_99; obj* x_101; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
x_102 = lean::cnstr_get(x_99, 0);
x_104 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_107 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_107 = x_71;
}
lean::cnstr_set(x_107, 0, x_87);
lean::cnstr_set(x_107, 1, x_102);
if (lean::is_scalar(x_106)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_106;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_104);
if (lean::is_scalar(x_101)) {
 x_109 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_109 = x_101;
}
lean::cnstr_set(x_109, 0, x_108);
return x_109;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_4);
x_8 = lean_expr_mk_app(x_2, x_7);
return x_8;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_17; obj* x_18; obj* x_21; 
lean::dec(x_11);
x_15 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_17 = x_1;
} else {
 lean::inc(x_15);
 lean::dec(x_1);
 x_17 = lean::box(0);
}
x_18 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_21 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_18, x_2, x_3);
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_29; 
lean::dec(x_15);
lean::dec(x_17);
lean::dec(x_0);
lean::dec(x_2);
x_26 = lean::cnstr_get(x_21, 0);
if (lean::is_exclusive(x_21)) {
 x_28 = x_21;
} else {
 lean::inc(x_26);
 lean::dec(x_21);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_26);
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_38; 
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
lean::dec(x_21);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_30, 1);
lean::inc(x_35);
lean::dec(x_30);
x_38 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_15, x_2, x_35);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_17);
lean::dec(x_33);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_45, 0);
x_50 = lean::cnstr_get(x_45, 1);
if (lean::is_exclusive(x_45)) {
 x_52 = x_45;
} else {
 lean::inc(x_48);
 lean::inc(x_50);
 lean::dec(x_45);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_33);
lean::cnstr_set(x_53, 1, x_48);
if (lean::is_scalar(x_52)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_52;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_50);
if (lean::is_scalar(x_47)) {
 x_55 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_55 = x_47;
}
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
obj* x_56; obj* x_59; 
x_56 = lean::cnstr_get(x_11, 0);
lean::inc(x_56);
lean::dec(x_11);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_59) == 0)
{
obj* x_62; obj* x_64; obj* x_65; obj* x_68; 
x_62 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_64 = x_1;
} else {
 lean::inc(x_62);
 lean::dec(x_1);
 x_64 = lean::box(0);
}
x_65 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_2);
lean::inc(x_0);
x_68 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_65, x_2, x_3);
if (lean::obj_tag(x_68) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_64);
lean::dec(x_62);
x_73 = lean::cnstr_get(x_68, 0);
if (lean::is_exclusive(x_68)) {
 x_75 = x_68;
} else {
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_85; 
x_77 = lean::cnstr_get(x_68, 0);
lean::inc(x_77);
lean::dec(x_68);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
lean::dec(x_77);
x_85 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_62, x_2, x_82);
if (lean::obj_tag(x_85) == 0)
{
obj* x_88; obj* x_90; obj* x_91; 
lean::dec(x_64);
lean::dec(x_80);
x_88 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_90 = x_85;
} else {
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_88);
return x_91;
}
else
{
obj* x_92; obj* x_94; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_101; obj* x_102; 
x_92 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_94 = x_85;
} else {
 lean::inc(x_92);
 lean::dec(x_85);
 x_94 = lean::box(0);
}
x_95 = lean::cnstr_get(x_92, 0);
x_97 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_99 = x_92;
} else {
 lean::inc(x_95);
 lean::inc(x_97);
 lean::dec(x_92);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_64)) {
 x_100 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_100 = x_64;
}
lean::cnstr_set(x_100, 0, x_80);
lean::cnstr_set(x_100, 1, x_95);
if (lean::is_scalar(x_99)) {
 x_101 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_101 = x_99;
}
lean::cnstr_set(x_101, 0, x_100);
lean::cnstr_set(x_101, 1, x_97);
if (lean::is_scalar(x_94)) {
 x_102 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_102 = x_94;
}
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
}
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_110; 
x_103 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_105 = x_1;
} else {
 lean::inc(x_103);
 lean::dec(x_1);
 x_105 = lean::box(0);
}
x_106 = lean::cnstr_get(x_59, 0);
lean::inc(x_106);
lean::dec(x_59);
lean::inc(x_2);
x_110 = l_lean_elaborator_to__pexpr___main(x_106, x_2, x_3);
if (lean::obj_tag(x_110) == 0)
{
obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_105);
lean::dec(x_103);
x_115 = lean::cnstr_get(x_110, 0);
if (lean::is_exclusive(x_110)) {
 x_117 = x_110;
} else {
 lean::inc(x_115);
 lean::dec(x_110);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_115);
return x_118;
}
else
{
obj* x_119; obj* x_122; obj* x_124; obj* x_127; 
x_119 = lean::cnstr_get(x_110, 0);
lean::inc(x_119);
lean::dec(x_110);
x_122 = lean::cnstr_get(x_119, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_119, 1);
lean::inc(x_124);
lean::dec(x_119);
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_103, x_2, x_124);
if (lean::obj_tag(x_127) == 0)
{
obj* x_130; obj* x_132; obj* x_133; 
lean::dec(x_105);
lean::dec(x_122);
x_130 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_132 = x_127;
} else {
 lean::inc(x_130);
 lean::dec(x_127);
 x_132 = lean::box(0);
}
if (lean::is_scalar(x_132)) {
 x_133 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_133 = x_132;
}
lean::cnstr_set(x_133, 0, x_130);
return x_133;
}
else
{
obj* x_134; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_143; obj* x_144; 
x_134 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_136 = x_127;
} else {
 lean::inc(x_134);
 lean::dec(x_127);
 x_136 = lean::box(0);
}
x_137 = lean::cnstr_get(x_134, 0);
x_139 = lean::cnstr_get(x_134, 1);
if (lean::is_exclusive(x_134)) {
 x_141 = x_134;
} else {
 lean::inc(x_137);
 lean::inc(x_139);
 lean::dec(x_134);
 x_141 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_142 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_142 = x_105;
}
lean::cnstr_set(x_142, 0, x_122);
lean::cnstr_set(x_142, 1, x_137);
if (lean::is_scalar(x_141)) {
 x_143 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_143 = x_141;
}
lean::cnstr_set(x_143, 0, x_142);
lean::cnstr_set(x_143, 1, x_139);
if (lean::is_scalar(x_136)) {
 x_144 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_144 = x_136;
}
lean::cnstr_set(x_144, 0, x_143);
return x_144;
}
}
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_4);
if (lean::is_scalar(x_6)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_6;
}
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
x_13 = lean_name_mk_numeral(x_12, x_7);
x_14 = l_lean_kvmap_set__name(x_0, x_13, x_9);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__level___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::box(0);
x_13 = lean_name_mk_numeral(x_12, x_7);
x_14 = l_lean_kvmap_set__name(x_0, x_13, x_9);
x_0 = x_14;
x_1 = x_4;
goto _start;
}
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_to__pexpr___main___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("column");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("row");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed choice");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("choice");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("ident_univs");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__8() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("lambda");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("pi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__10() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("sort_app");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__11() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("anonymous_constructor");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__12() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("hole");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("have");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__14() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("show");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__15() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("let");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__16() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("projection");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__17() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("explicit");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__18() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("inaccessible");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__19() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("borrowed");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__20() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("choice");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__21() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("struct_inst");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__22() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("term");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("match");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__23() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("to_pexpr: unexpected node: ");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__24() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("match");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__25() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("structure instance");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__26() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("catchall");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__27() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__28() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mangle__ident), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__29() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("struct");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__30() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unexpected item in structure instance notation");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__31() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("NOT_A_STRING");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__32() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("borrowed");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__33() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("innaccessible");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__34() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("@@");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__35() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("field_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__36() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed let");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__37() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("this");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__38() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean_expr_mk_bvar(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__39() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("show");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__40() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("have");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__41() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_to__pexpr___main___lambda__2), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__42() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_dummy;
x_2 = lean_expr_mk_mvar(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__43() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("anonymous_constructor");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__44() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = level_mk_succ(x_0);
x_2 = lean_expr_mk_sort(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__45() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed pi");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__46() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ill-formed lambda");
return x_0;
}
}
obj* _init_l_lean_elaborator_to__pexpr___main___closed__47() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("annotation");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("preresolved");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_to__pexpr___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
switch (lean::obj_tag(x_0)) {
case 2:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_16; obj* x_18; uint8 x_19; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_5, 1);
lean::inc(x_9);
lean::dec(x_5);
x_18 = l_lean_elaborator_to__pexpr___main___closed__7;
x_19 = lean_name_dec_eq(x_7, x_18);
if (x_19 == 0)
{
obj* x_20; uint8 x_21; 
x_20 = l_lean_elaborator_to__pexpr___main___closed__2;
x_21 = lean_name_dec_eq(x_7, x_20);
if (x_21 == 0)
{
obj* x_22; uint8 x_23; 
x_22 = l_lean_elaborator_to__pexpr___main___closed__8;
x_23 = lean_name_dec_eq(x_7, x_22);
if (x_23 == 0)
{
obj* x_24; uint8 x_25; 
x_24 = l_lean_elaborator_to__pexpr___main___closed__9;
x_25 = lean_name_dec_eq(x_7, x_24);
if (x_25 == 0)
{
obj* x_26; uint8 x_27; 
x_26 = l_lean_parser_term_sort_has__view_x_27___lambda__1___closed__4;
x_27 = lean_name_dec_eq(x_7, x_26);
if (x_27 == 0)
{
obj* x_28; uint8 x_29; 
x_28 = l_lean_elaborator_to__pexpr___main___closed__10;
x_29 = lean_name_dec_eq(x_7, x_28);
if (x_29 == 0)
{
obj* x_30; uint8 x_31; 
x_30 = l_lean_elaborator_to__pexpr___main___closed__11;
x_31 = lean_name_dec_eq(x_7, x_30);
if (x_31 == 0)
{
obj* x_32; uint8 x_33; 
x_32 = l_lean_elaborator_to__pexpr___main___closed__12;
x_33 = lean_name_dec_eq(x_7, x_32);
if (x_33 == 0)
{
obj* x_34; uint8 x_35; 
x_34 = l_lean_elaborator_to__pexpr___main___closed__13;
x_35 = lean_name_dec_eq(x_7, x_34);
if (x_35 == 0)
{
obj* x_36; uint8 x_37; 
x_36 = l_lean_elaborator_to__pexpr___main___closed__14;
x_37 = lean_name_dec_eq(x_7, x_36);
if (x_37 == 0)
{
obj* x_38; uint8 x_39; 
x_38 = l_lean_elaborator_to__pexpr___main___closed__15;
x_39 = lean_name_dec_eq(x_7, x_38);
if (x_39 == 0)
{
obj* x_40; uint8 x_41; 
x_40 = l_lean_elaborator_to__pexpr___main___closed__16;
x_41 = lean_name_dec_eq(x_7, x_40);
if (x_41 == 0)
{
obj* x_42; uint8 x_43; 
x_42 = l_lean_elaborator_to__pexpr___main___closed__17;
x_43 = lean_name_dec_eq(x_7, x_42);
if (x_43 == 0)
{
obj* x_44; uint8 x_45; 
x_44 = l_lean_elaborator_to__pexpr___main___closed__18;
x_45 = lean_name_dec_eq(x_7, x_44);
if (x_45 == 0)
{
obj* x_46; uint8 x_47; 
x_46 = l_lean_elaborator_to__pexpr___main___closed__19;
x_47 = lean_name_dec_eq(x_7, x_46);
if (x_47 == 0)
{
obj* x_48; uint8 x_49; 
x_48 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
x_49 = lean_name_dec_eq(x_7, x_48);
if (x_49 == 0)
{
obj* x_50; uint8 x_51; 
x_50 = l_lean_parser_curr__lbp___rarg___lambda__3___closed__1;
x_51 = lean_name_dec_eq(x_7, x_50);
if (x_51 == 0)
{
obj* x_52; uint8 x_53; 
x_52 = l_lean_elaborator_to__pexpr___main___closed__20;
x_53 = lean_name_dec_eq(x_7, x_52);
if (x_53 == 0)
{
obj* x_55; uint8 x_56; 
lean::dec(x_9);
x_55 = l_lean_elaborator_to__pexpr___main___closed__21;
x_56 = lean_name_dec_eq(x_7, x_55);
if (x_56 == 0)
{
obj* x_57; uint8 x_58; 
x_57 = l_lean_elaborator_to__pexpr___main___closed__22;
x_58 = lean_name_dec_eq(x_7, x_57);
if (x_58 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_66; 
x_59 = l_lean_name_to__string___closed__1;
x_60 = l_lean_name_to__string__with__sep___main(x_59, x_7);
x_61 = l_lean_elaborator_to__pexpr___main___closed__23;
x_62 = lean::string_append(x_61, x_60);
lean::dec(x_60);
lean::inc(x_1);
lean::inc(x_0);
x_66 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_62, x_1, x_2);
if (lean::obj_tag(x_66) == 0)
{
obj* x_69; obj* x_71; obj* x_72; 
lean::dec(x_1);
lean::dec(x_0);
x_69 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 x_71 = x_66;
} else {
 lean::inc(x_69);
 lean::dec(x_66);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_69);
return x_72;
}
else
{
obj* x_73; obj* x_75; 
x_73 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_set(x_66, 0, lean::box(0));
 x_75 = x_66;
} else {
 lean::inc(x_73);
 lean::dec(x_66);
 x_75 = lean::box(0);
}
if (x_21 == 0)
{
obj* x_76; obj* x_78; obj* x_80; obj* x_81; 
x_76 = lean::cnstr_get(x_73, 0);
x_78 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 lean::cnstr_set(x_73, 0, lean::box(0));
 lean::cnstr_set(x_73, 1, lean::box(0));
 x_80 = x_73;
} else {
 lean::inc(x_76);
 lean::inc(x_78);
 lean::dec(x_73);
 x_80 = lean::box(0);
}
x_81 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_81) == 0)
{
obj* x_83; obj* x_84; 
lean::dec(x_1);
if (lean::is_scalar(x_80)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_80;
}
lean::cnstr_set(x_83, 0, x_76);
lean::cnstr_set(x_83, 1, x_78);
if (lean::is_scalar(x_75)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_75;
}
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
else
{
obj* x_85; obj* x_88; obj* x_91; obj* x_94; obj* x_95; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; 
x_85 = lean::cnstr_get(x_81, 0);
lean::inc(x_85);
lean::dec(x_81);
x_88 = lean::cnstr_get(x_1, 0);
lean::inc(x_88);
lean::dec(x_1);
x_91 = lean::cnstr_get(x_88, 2);
lean::inc(x_91);
lean::dec(x_88);
x_94 = l_lean_file__map_to__position(x_91, x_85);
x_95 = lean::box(0);
x_96 = lean::cnstr_get(x_94, 1);
lean::inc(x_96);
x_98 = l_lean_elaborator_to__pexpr___main___closed__3;
x_99 = l_lean_kvmap_set__nat(x_95, x_98, x_96);
x_100 = lean::cnstr_get(x_94, 0);
lean::inc(x_100);
lean::dec(x_94);
x_103 = l_lean_elaborator_to__pexpr___main___closed__4;
x_104 = l_lean_kvmap_set__nat(x_99, x_103, x_100);
x_105 = lean_expr_mk_mdata(x_104, x_76);
if (lean::is_scalar(x_80)) {
 x_106 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_106 = x_80;
}
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_106, 1, x_78);
if (lean::is_scalar(x_75)) {
 x_107 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_107 = x_75;
}
lean::cnstr_set(x_107, 0, x_106);
return x_107;
}
}
else
{
obj* x_110; obj* x_112; obj* x_114; obj* x_115; obj* x_116; 
lean::dec(x_1);
lean::dec(x_0);
x_110 = lean::cnstr_get(x_73, 0);
x_112 = lean::cnstr_get(x_73, 1);
if (lean::is_exclusive(x_73)) {
 x_114 = x_73;
} else {
 lean::inc(x_110);
 lean::inc(x_112);
 lean::dec(x_73);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_110);
lean::cnstr_set(x_115, 1, x_112);
if (lean::is_scalar(x_75)) {
 x_116 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_116 = x_75;
}
lean::cnstr_set(x_116, 0, x_115);
return x_116;
}
}
}
else
{
obj* x_117; obj* x_118; obj* x_122; obj* x_123; obj* x_125; obj* x_127; 
x_117 = l_lean_parser_term_match_has__view;
x_118 = lean::cnstr_get(x_117, 0);
lean::inc(x_118);
lean::dec(x_117);
lean::inc(x_0);
x_122 = lean::apply_1(x_118, x_0);
x_123 = lean::cnstr_get(x_122, 5);
lean::inc(x_123);
x_125 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__3(x_123);
lean::inc(x_1);
x_127 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4(x_125, x_1, x_2);
if (lean::obj_tag(x_127) == 0)
{
obj* x_129; obj* x_131; obj* x_132; 
lean::dec(x_122);
x_129 = lean::cnstr_get(x_127, 0);
if (lean::is_exclusive(x_127)) {
 x_131 = x_127;
} else {
 lean::inc(x_129);
 lean::dec(x_127);
 x_131 = lean::box(0);
}
if (lean::is_scalar(x_131)) {
 x_132 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_132 = x_131;
}
lean::cnstr_set(x_132, 0, x_129);
x_12 = x_132;
goto lbl_13;
}
else
{
obj* x_133; obj* x_136; obj* x_138; obj* x_141; obj* x_143; obj* x_145; 
x_133 = lean::cnstr_get(x_127, 0);
lean::inc(x_133);
lean::dec(x_127);
x_136 = lean::cnstr_get(x_133, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_133, 1);
lean::inc(x_138);
lean::dec(x_133);
x_141 = lean::cnstr_get(x_122, 2);
lean::inc(x_141);
x_143 = l_lean_expander_get__opt__type___main(x_141);
lean::inc(x_1);
x_145 = l_lean_elaborator_to__pexpr___main(x_143, x_1, x_138);
if (lean::obj_tag(x_145) == 0)
{
obj* x_148; obj* x_150; obj* x_151; 
lean::dec(x_136);
lean::dec(x_122);
x_148 = lean::cnstr_get(x_145, 0);
if (lean::is_exclusive(x_145)) {
 x_150 = x_145;
} else {
 lean::inc(x_148);
 lean::dec(x_145);
 x_150 = lean::box(0);
}
if (lean::is_scalar(x_150)) {
 x_151 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_151 = x_150;
}
lean::cnstr_set(x_151, 0, x_148);
x_12 = x_151;
goto lbl_13;
}
else
{
obj* x_152; obj* x_155; obj* x_157; obj* x_160; 
x_152 = lean::cnstr_get(x_145, 0);
lean::inc(x_152);
lean::dec(x_145);
x_155 = lean::cnstr_get(x_152, 0);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_152, 1);
lean::inc(x_157);
lean::dec(x_152);
x_160 = l_lean_elaborator_mk__eqns(x_155, x_136);
switch (lean::obj_tag(x_160)) {
case 10:
{
obj* x_161; obj* x_163; obj* x_166; obj* x_170; 
x_161 = lean::cnstr_get(x_160, 0);
lean::inc(x_161);
x_163 = lean::cnstr_get(x_160, 1);
lean::inc(x_163);
lean::dec(x_160);
x_166 = lean::cnstr_get(x_122, 1);
lean::inc(x_166);
lean::dec(x_122);
lean::inc(x_1);
x_170 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__5(x_166, x_1, x_157);
if (lean::obj_tag(x_170) == 0)
{
obj* x_173; obj* x_175; obj* x_176; 
lean::dec(x_163);
lean::dec(x_161);
x_173 = lean::cnstr_get(x_170, 0);
if (lean::is_exclusive(x_170)) {
 x_175 = x_170;
} else {
 lean::inc(x_173);
 lean::dec(x_170);
 x_175 = lean::box(0);
}
if (lean::is_scalar(x_175)) {
 x_176 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_176 = x_175;
}
lean::cnstr_set(x_176, 0, x_173);
x_12 = x_176;
goto lbl_13;
}
else
{
obj* x_177; obj* x_179; obj* x_180; obj* x_182; obj* x_184; obj* x_185; uint8 x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; 
x_177 = lean::cnstr_get(x_170, 0);
if (lean::is_exclusive(x_170)) {
 x_179 = x_170;
} else {
 lean::inc(x_177);
 lean::dec(x_170);
 x_179 = lean::box(0);
}
x_180 = lean::cnstr_get(x_177, 0);
x_182 = lean::cnstr_get(x_177, 1);
if (lean::is_exclusive(x_177)) {
 x_184 = x_177;
} else {
 lean::inc(x_180);
 lean::inc(x_182);
 lean::dec(x_177);
 x_184 = lean::box(0);
}
x_185 = l_lean_elaborator_to__pexpr___main___closed__24;
x_186 = 1;
x_187 = l_lean_kvmap_set__bool(x_161, x_185, x_186);
x_188 = lean_expr_mk_mdata(x_187, x_163);
x_189 = l_list_foldl___main___at_lean_expr_mk__app___spec__1(x_188, x_180);
if (lean::is_scalar(x_184)) {
 x_190 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_190 = x_184;
}
lean::cnstr_set(x_190, 0, x_189);
lean::cnstr_set(x_190, 1, x_182);
if (lean::is_scalar(x_179)) {
 x_191 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_191 = x_179;
}
lean::cnstr_set(x_191, 0, x_190);
x_12 = x_191;
goto lbl_13;
}
}
default:
{
obj* x_194; obj* x_197; 
lean::dec(x_160);
lean::dec(x_122);
x_194 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2;
lean::inc(x_1);
lean::inc(x_0);
x_197 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_194, x_1, x_157);
x_12 = x_197;
goto lbl_13;
}
}
}
}
}
}
else
{
obj* x_198; obj* x_199; obj* x_203; obj* x_204; obj* x_206; obj* x_207; obj* x_209; obj* x_212; obj* x_213; 
x_198 = l_lean_parser_term_struct__inst_has__view;
x_199 = lean::cnstr_get(x_198, 0);
lean::inc(x_199);
lean::dec(x_198);
lean::inc(x_0);
x_203 = lean::apply_1(x_199, x_0);
x_204 = lean::cnstr_get(x_203, 3);
lean::inc(x_204);
x_206 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__6(x_204);
x_207 = lean::cnstr_get(x_206, 0);
lean::inc(x_207);
x_209 = lean::cnstr_get(x_206, 1);
lean::inc(x_209);
lean::dec(x_206);
x_212 = l_list_span___main___at_lean_elaborator_to__pexpr___main___spec__7(x_209);
x_213 = lean::cnstr_get(x_212, 1);
lean::inc(x_213);
if (lean::obj_tag(x_213) == 0)
{
obj* x_215; obj* x_220; 
x_215 = lean::cnstr_get(x_212, 0);
lean::inc(x_215);
lean::dec(x_212);
lean::inc(x_1);
lean::inc(x_0);
x_220 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8(x_0, x_207, x_1, x_2);
if (lean::obj_tag(x_220) == 0)
{
obj* x_226; obj* x_228; obj* x_229; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_215);
lean::dec(x_203);
x_226 = lean::cnstr_get(x_220, 0);
if (lean::is_exclusive(x_220)) {
 x_228 = x_220;
} else {
 lean::inc(x_226);
 lean::dec(x_220);
 x_228 = lean::box(0);
}
if (lean::is_scalar(x_228)) {
 x_229 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_229 = x_228;
}
lean::cnstr_set(x_229, 0, x_226);
return x_229;
}
else
{
obj* x_230; obj* x_233; obj* x_235; obj* x_238; obj* x_242; 
x_230 = lean::cnstr_get(x_220, 0);
lean::inc(x_230);
lean::dec(x_220);
x_233 = lean::cnstr_get(x_230, 0);
lean::inc(x_233);
x_235 = lean::cnstr_get(x_230, 1);
lean::inc(x_235);
lean::dec(x_230);
lean::inc(x_1);
lean::inc(x_0);
x_242 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__10(x_0, x_215, x_1, x_235);
if (lean::obj_tag(x_242) == 0)
{
obj* x_248; obj* x_250; obj* x_251; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_203);
lean::dec(x_233);
x_248 = lean::cnstr_get(x_242, 0);
if (lean::is_exclusive(x_242)) {
 x_250 = x_242;
} else {
 lean::inc(x_248);
 lean::dec(x_242);
 x_250 = lean::box(0);
}
if (lean::is_scalar(x_250)) {
 x_251 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_251 = x_250;
}
lean::cnstr_set(x_251, 0, x_248);
return x_251;
}
else
{
obj* x_252; obj* x_255; 
x_252 = lean::cnstr_get(x_242, 0);
lean::inc(x_252);
lean::dec(x_242);
x_255 = lean::cnstr_get(x_203, 2);
lean::inc(x_255);
if (lean::obj_tag(x_255) == 0)
{
obj* x_257; obj* x_259; obj* x_261; obj* x_262; 
x_257 = lean::cnstr_get(x_252, 0);
x_259 = lean::cnstr_get(x_252, 1);
if (lean::is_exclusive(x_252)) {
 x_261 = x_252;
} else {
 lean::inc(x_257);
 lean::inc(x_259);
 lean::dec(x_252);
 x_261 = lean::box(0);
}
if (lean::is_scalar(x_261)) {
 x_262 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_262 = x_261;
}
lean::cnstr_set(x_262, 0, x_257);
lean::cnstr_set(x_262, 1, x_259);
x_238 = x_262;
goto lbl_239;
}
else
{
obj* x_263; obj* x_265; obj* x_268; obj* x_271; obj* x_275; 
x_263 = lean::cnstr_get(x_252, 0);
lean::inc(x_263);
x_265 = lean::cnstr_get(x_252, 1);
lean::inc(x_265);
lean::dec(x_252);
x_268 = lean::cnstr_get(x_255, 0);
lean::inc(x_268);
lean::dec(x_255);
x_271 = lean::cnstr_get(x_268, 0);
lean::inc(x_271);
lean::dec(x_268);
lean::inc(x_1);
x_275 = l_lean_elaborator_to__pexpr___main(x_271, x_1, x_265);
if (lean::obj_tag(x_275) == 0)
{
obj* x_282; obj* x_284; obj* x_285; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_203);
lean::dec(x_263);
lean::dec(x_233);
x_282 = lean::cnstr_get(x_275, 0);
if (lean::is_exclusive(x_275)) {
 x_284 = x_275;
} else {
 lean::inc(x_282);
 lean::dec(x_275);
 x_284 = lean::box(0);
}
if (lean::is_scalar(x_284)) {
 x_285 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_285 = x_284;
}
lean::cnstr_set(x_285, 0, x_282);
return x_285;
}
else
{
obj* x_286; obj* x_289; obj* x_291; obj* x_293; obj* x_294; obj* x_295; obj* x_296; obj* x_297; 
x_286 = lean::cnstr_get(x_275, 0);
lean::inc(x_286);
lean::dec(x_275);
x_289 = lean::cnstr_get(x_286, 0);
x_291 = lean::cnstr_get(x_286, 1);
if (lean::is_exclusive(x_286)) {
 x_293 = x_286;
} else {
 lean::inc(x_289);
 lean::inc(x_291);
 lean::dec(x_286);
 x_293 = lean::box(0);
}
x_294 = lean::box(0);
x_295 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_295, 0, x_289);
lean::cnstr_set(x_295, 1, x_294);
x_296 = l_list_append___rarg(x_263, x_295);
if (lean::is_scalar(x_293)) {
 x_297 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_297 = x_293;
}
lean::cnstr_set(x_297, 0, x_296);
lean::cnstr_set(x_297, 1, x_291);
x_238 = x_297;
goto lbl_239;
}
}
}
lbl_239:
{
obj* x_298; obj* x_300; obj* x_302; obj* x_303; obj* x_304; obj* x_306; obj* x_307; obj* x_308; obj* x_309; uint8 x_310; obj* x_311; obj* x_312; obj* x_315; obj* x_316; obj* x_317; obj* x_318; obj* x_319; obj* x_320; obj* x_321; obj* x_322; obj* x_323; obj* x_324; obj* x_325; obj* x_326; 
x_298 = lean::cnstr_get(x_238, 0);
x_300 = lean::cnstr_get(x_238, 1);
if (lean::is_exclusive(x_238)) {
 x_302 = x_238;
} else {
 lean::inc(x_298);
 lean::inc(x_300);
 lean::dec(x_238);
 x_302 = lean::box(0);
}
x_303 = lean::box(0);
x_304 = lean::mk_nat_obj(0u);
lean::inc(x_233);
x_306 = l_list_length__aux___main___rarg(x_233, x_304);
x_307 = l_lean_elaborator_to__pexpr___main___closed__25;
x_308 = l_lean_kvmap_set__nat(x_303, x_307, x_306);
x_309 = l_lean_elaborator_to__pexpr___main___closed__26;
x_310 = 0;
x_311 = l_lean_kvmap_set__bool(x_308, x_309, x_310);
x_312 = lean::cnstr_get(x_203, 1);
lean::inc(x_312);
lean::dec(x_203);
x_315 = l_lean_elaborator_to__pexpr___main___closed__27;
x_316 = l_option_map___rarg(x_315, x_312);
x_317 = l_lean_elaborator_to__pexpr___main___closed__28;
x_318 = l_option_map___rarg(x_317, x_316);
x_319 = lean::box(0);
x_320 = l_option_get__or__else___main___rarg(x_318, x_319);
x_321 = l_lean_elaborator_to__pexpr___main___closed__29;
x_322 = l_lean_kvmap_set__name(x_311, x_321, x_320);
x_323 = l_list_append___rarg(x_233, x_298);
x_324 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9(x_323);
x_325 = lean_expr_mk_mdata(x_322, x_324);
if (lean::is_scalar(x_302)) {
 x_326 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_326 = x_302;
}
lean::cnstr_set(x_326, 0, x_325);
lean::cnstr_set(x_326, 1, x_300);
x_14 = x_326;
goto lbl_15;
}
}
}
else
{
obj* x_327; obj* x_329; 
x_327 = lean::cnstr_get(x_213, 0);
lean::inc(x_327);
x_329 = lean::cnstr_get(x_327, 0);
lean::inc(x_329);
lean::dec(x_327);
if (lean::obj_tag(x_329) == 0)
{
obj* x_332; obj* x_333; obj* x_336; obj* x_337; obj* x_340; obj* x_341; obj* x_343; 
if (lean::is_exclusive(x_213)) {
 lean::cnstr_release(x_213, 0);
 lean::cnstr_release(x_213, 1);
 x_332 = x_213;
} else {
 lean::dec(x_213);
 x_332 = lean::box(0);
}
x_333 = lean::cnstr_get(x_212, 0);
lean::inc(x_333);
lean::dec(x_212);
x_336 = l_lean_parser_term_struct__inst__item_has__view;
x_337 = lean::cnstr_get(x_336, 1);
lean::inc(x_337);
lean::dec(x_336);
x_340 = lean::apply_1(x_337, x_329);
x_341 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
x_343 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_340, x_341, x_1, x_2);
if (lean::obj_tag(x_343) == 0)
{
obj* x_351; obj* x_353; obj* x_354; 
lean::dec(x_332);
lean::dec(x_333);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_207);
lean::dec(x_203);
x_351 = lean::cnstr_get(x_343, 0);
if (lean::is_exclusive(x_343)) {
 x_353 = x_343;
} else {
 lean::inc(x_351);
 lean::dec(x_343);
 x_353 = lean::box(0);
}
if (lean::is_scalar(x_353)) {
 x_354 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_354 = x_353;
}
lean::cnstr_set(x_354, 0, x_351);
return x_354;
}
else
{
obj* x_355; obj* x_358; obj* x_360; obj* x_365; 
x_355 = lean::cnstr_get(x_343, 0);
lean::inc(x_355);
lean::dec(x_343);
x_358 = lean::cnstr_get(x_355, 0);
lean::inc(x_358);
x_360 = lean::cnstr_get(x_355, 1);
lean::inc(x_360);
lean::dec(x_355);
lean::inc(x_1);
lean::inc(x_0);
x_365 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__11(x_0, x_207, x_1, x_360);
if (lean::obj_tag(x_365) == 0)
{
obj* x_373; obj* x_375; obj* x_376; 
lean::dec(x_332);
lean::dec(x_333);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_358);
lean::dec(x_203);
x_373 = lean::cnstr_get(x_365, 0);
if (lean::is_exclusive(x_365)) {
 x_375 = x_365;
} else {
 lean::inc(x_373);
 lean::dec(x_365);
 x_375 = lean::box(0);
}
if (lean::is_scalar(x_375)) {
 x_376 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_376 = x_375;
}
lean::cnstr_set(x_376, 0, x_373);
return x_376;
}
else
{
obj* x_377; obj* x_380; obj* x_382; obj* x_385; obj* x_389; 
x_377 = lean::cnstr_get(x_365, 0);
lean::inc(x_377);
lean::dec(x_365);
x_380 = lean::cnstr_get(x_377, 0);
lean::inc(x_380);
x_382 = lean::cnstr_get(x_377, 1);
lean::inc(x_382);
lean::dec(x_377);
lean::inc(x_1);
lean::inc(x_0);
x_389 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__13(x_0, x_333, x_1, x_382);
if (lean::obj_tag(x_389) == 0)
{
obj* x_397; obj* x_399; obj* x_400; 
lean::dec(x_332);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_358);
lean::dec(x_380);
lean::dec(x_203);
x_397 = lean::cnstr_get(x_389, 0);
if (lean::is_exclusive(x_389)) {
 x_399 = x_389;
} else {
 lean::inc(x_397);
 lean::dec(x_389);
 x_399 = lean::box(0);
}
if (lean::is_scalar(x_399)) {
 x_400 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_400 = x_399;
}
lean::cnstr_set(x_400, 0, x_397);
return x_400;
}
else
{
obj* x_401; obj* x_404; 
x_401 = lean::cnstr_get(x_389, 0);
lean::inc(x_401);
lean::dec(x_389);
x_404 = lean::cnstr_get(x_203, 2);
lean::inc(x_404);
if (lean::obj_tag(x_404) == 0)
{
obj* x_407; obj* x_409; obj* x_411; obj* x_412; 
lean::dec(x_332);
x_407 = lean::cnstr_get(x_401, 0);
x_409 = lean::cnstr_get(x_401, 1);
if (lean::is_exclusive(x_401)) {
 x_411 = x_401;
} else {
 lean::inc(x_407);
 lean::inc(x_409);
 lean::dec(x_401);
 x_411 = lean::box(0);
}
if (lean::is_scalar(x_411)) {
 x_412 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_412 = x_411;
}
lean::cnstr_set(x_412, 0, x_407);
lean::cnstr_set(x_412, 1, x_409);
x_385 = x_412;
goto lbl_386;
}
else
{
obj* x_413; obj* x_415; obj* x_418; obj* x_421; obj* x_425; 
x_413 = lean::cnstr_get(x_401, 0);
lean::inc(x_413);
x_415 = lean::cnstr_get(x_401, 1);
lean::inc(x_415);
lean::dec(x_401);
x_418 = lean::cnstr_get(x_404, 0);
lean::inc(x_418);
lean::dec(x_404);
x_421 = lean::cnstr_get(x_418, 0);
lean::inc(x_421);
lean::dec(x_418);
lean::inc(x_1);
x_425 = l_lean_elaborator_to__pexpr___main(x_421, x_1, x_415);
if (lean::obj_tag(x_425) == 0)
{
obj* x_434; obj* x_436; obj* x_437; 
lean::dec(x_332);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_358);
lean::dec(x_380);
lean::dec(x_203);
lean::dec(x_413);
x_434 = lean::cnstr_get(x_425, 0);
if (lean::is_exclusive(x_425)) {
 x_436 = x_425;
} else {
 lean::inc(x_434);
 lean::dec(x_425);
 x_436 = lean::box(0);
}
if (lean::is_scalar(x_436)) {
 x_437 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_437 = x_436;
}
lean::cnstr_set(x_437, 0, x_434);
return x_437;
}
else
{
obj* x_438; obj* x_441; obj* x_443; obj* x_445; obj* x_446; obj* x_447; obj* x_448; obj* x_449; 
x_438 = lean::cnstr_get(x_425, 0);
lean::inc(x_438);
lean::dec(x_425);
x_441 = lean::cnstr_get(x_438, 0);
x_443 = lean::cnstr_get(x_438, 1);
if (lean::is_exclusive(x_438)) {
 x_445 = x_438;
} else {
 lean::inc(x_441);
 lean::inc(x_443);
 lean::dec(x_438);
 x_445 = lean::box(0);
}
x_446 = lean::box(0);
if (lean::is_scalar(x_332)) {
 x_447 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_447 = x_332;
}
lean::cnstr_set(x_447, 0, x_441);
lean::cnstr_set(x_447, 1, x_446);
x_448 = l_list_append___rarg(x_413, x_447);
if (lean::is_scalar(x_445)) {
 x_449 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_449 = x_445;
}
lean::cnstr_set(x_449, 0, x_448);
lean::cnstr_set(x_449, 1, x_443);
x_385 = x_449;
goto lbl_386;
}
}
}
lbl_386:
{
obj* x_450; obj* x_452; obj* x_454; obj* x_455; obj* x_456; obj* x_458; obj* x_459; obj* x_460; obj* x_461; uint8 x_462; obj* x_463; obj* x_464; obj* x_467; obj* x_468; obj* x_469; obj* x_470; obj* x_471; obj* x_472; obj* x_473; obj* x_474; obj* x_475; obj* x_476; obj* x_477; obj* x_478; 
x_450 = lean::cnstr_get(x_385, 0);
x_452 = lean::cnstr_get(x_385, 1);
if (lean::is_exclusive(x_385)) {
 x_454 = x_385;
} else {
 lean::inc(x_450);
 lean::inc(x_452);
 lean::dec(x_385);
 x_454 = lean::box(0);
}
x_455 = lean::box(0);
x_456 = lean::mk_nat_obj(0u);
lean::inc(x_380);
x_458 = l_list_length__aux___main___rarg(x_380, x_456);
x_459 = l_lean_elaborator_to__pexpr___main___closed__25;
x_460 = l_lean_kvmap_set__nat(x_455, x_459, x_458);
x_461 = l_lean_elaborator_to__pexpr___main___closed__26;
x_462 = lean::unbox(x_358);
x_463 = l_lean_kvmap_set__bool(x_460, x_461, x_462);
x_464 = lean::cnstr_get(x_203, 1);
lean::inc(x_464);
lean::dec(x_203);
x_467 = l_lean_elaborator_to__pexpr___main___closed__27;
x_468 = l_option_map___rarg(x_467, x_464);
x_469 = l_lean_elaborator_to__pexpr___main___closed__28;
x_470 = l_option_map___rarg(x_469, x_468);
x_471 = lean::box(0);
x_472 = l_option_get__or__else___main___rarg(x_470, x_471);
x_473 = l_lean_elaborator_to__pexpr___main___closed__29;
x_474 = l_lean_kvmap_set__name(x_463, x_473, x_472);
x_475 = l_list_append___rarg(x_380, x_450);
x_476 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__12(x_475);
x_477 = lean_expr_mk_mdata(x_474, x_476);
if (lean::is_scalar(x_454)) {
 x_478 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_478 = x_454;
}
lean::cnstr_set(x_478, 0, x_477);
lean::cnstr_set(x_478, 1, x_452);
x_14 = x_478;
goto lbl_15;
}
}
}
}
else
{
obj* x_479; obj* x_481; 
x_479 = lean::cnstr_get(x_213, 1);
if (lean::is_exclusive(x_213)) {
 lean::cnstr_release(x_213, 0);
 lean::cnstr_set(x_213, 1, lean::box(0));
 x_481 = x_213;
} else {
 lean::inc(x_479);
 lean::dec(x_213);
 x_481 = lean::box(0);
}
if (lean::obj_tag(x_479) == 0)
{
obj* x_483; obj* x_488; 
lean::dec(x_329);
x_483 = lean::cnstr_get(x_212, 0);
lean::inc(x_483);
lean::dec(x_212);
lean::inc(x_1);
lean::inc(x_0);
x_488 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__14(x_0, x_207, x_1, x_2);
if (lean::obj_tag(x_488) == 0)
{
obj* x_495; obj* x_497; obj* x_498; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_203);
lean::dec(x_481);
lean::dec(x_483);
x_495 = lean::cnstr_get(x_488, 0);
if (lean::is_exclusive(x_488)) {
 x_497 = x_488;
} else {
 lean::inc(x_495);
 lean::dec(x_488);
 x_497 = lean::box(0);
}
if (lean::is_scalar(x_497)) {
 x_498 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_498 = x_497;
}
lean::cnstr_set(x_498, 0, x_495);
return x_498;
}
else
{
obj* x_499; obj* x_502; obj* x_504; obj* x_507; obj* x_511; 
x_499 = lean::cnstr_get(x_488, 0);
lean::inc(x_499);
lean::dec(x_488);
x_502 = lean::cnstr_get(x_499, 0);
lean::inc(x_502);
x_504 = lean::cnstr_get(x_499, 1);
lean::inc(x_504);
lean::dec(x_499);
lean::inc(x_1);
lean::inc(x_0);
x_511 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__16(x_0, x_483, x_1, x_504);
if (lean::obj_tag(x_511) == 0)
{
obj* x_518; obj* x_520; obj* x_521; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_203);
lean::dec(x_481);
lean::dec(x_502);
x_518 = lean::cnstr_get(x_511, 0);
if (lean::is_exclusive(x_511)) {
 x_520 = x_511;
} else {
 lean::inc(x_518);
 lean::dec(x_511);
 x_520 = lean::box(0);
}
if (lean::is_scalar(x_520)) {
 x_521 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_521 = x_520;
}
lean::cnstr_set(x_521, 0, x_518);
return x_521;
}
else
{
obj* x_522; obj* x_525; 
x_522 = lean::cnstr_get(x_511, 0);
lean::inc(x_522);
lean::dec(x_511);
x_525 = lean::cnstr_get(x_203, 2);
lean::inc(x_525);
if (lean::obj_tag(x_525) == 0)
{
obj* x_528; obj* x_530; obj* x_532; obj* x_533; 
lean::dec(x_481);
x_528 = lean::cnstr_get(x_522, 0);
x_530 = lean::cnstr_get(x_522, 1);
if (lean::is_exclusive(x_522)) {
 x_532 = x_522;
} else {
 lean::inc(x_528);
 lean::inc(x_530);
 lean::dec(x_522);
 x_532 = lean::box(0);
}
if (lean::is_scalar(x_532)) {
 x_533 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_533 = x_532;
}
lean::cnstr_set(x_533, 0, x_528);
lean::cnstr_set(x_533, 1, x_530);
x_507 = x_533;
goto lbl_508;
}
else
{
obj* x_534; obj* x_536; obj* x_539; obj* x_542; obj* x_546; 
x_534 = lean::cnstr_get(x_522, 0);
lean::inc(x_534);
x_536 = lean::cnstr_get(x_522, 1);
lean::inc(x_536);
lean::dec(x_522);
x_539 = lean::cnstr_get(x_525, 0);
lean::inc(x_539);
lean::dec(x_525);
x_542 = lean::cnstr_get(x_539, 0);
lean::inc(x_542);
lean::dec(x_539);
lean::inc(x_1);
x_546 = l_lean_elaborator_to__pexpr___main(x_542, x_1, x_536);
if (lean::obj_tag(x_546) == 0)
{
obj* x_554; obj* x_556; obj* x_557; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_203);
lean::dec(x_534);
lean::dec(x_481);
lean::dec(x_502);
x_554 = lean::cnstr_get(x_546, 0);
if (lean::is_exclusive(x_546)) {
 x_556 = x_546;
} else {
 lean::inc(x_554);
 lean::dec(x_546);
 x_556 = lean::box(0);
}
if (lean::is_scalar(x_556)) {
 x_557 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_557 = x_556;
}
lean::cnstr_set(x_557, 0, x_554);
return x_557;
}
else
{
obj* x_558; obj* x_561; obj* x_563; obj* x_565; obj* x_566; obj* x_567; obj* x_568; obj* x_569; 
x_558 = lean::cnstr_get(x_546, 0);
lean::inc(x_558);
lean::dec(x_546);
x_561 = lean::cnstr_get(x_558, 0);
x_563 = lean::cnstr_get(x_558, 1);
if (lean::is_exclusive(x_558)) {
 x_565 = x_558;
} else {
 lean::inc(x_561);
 lean::inc(x_563);
 lean::dec(x_558);
 x_565 = lean::box(0);
}
x_566 = lean::box(0);
if (lean::is_scalar(x_481)) {
 x_567 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_567 = x_481;
}
lean::cnstr_set(x_567, 0, x_561);
lean::cnstr_set(x_567, 1, x_566);
x_568 = l_list_append___rarg(x_534, x_567);
if (lean::is_scalar(x_565)) {
 x_569 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_569 = x_565;
}
lean::cnstr_set(x_569, 0, x_568);
lean::cnstr_set(x_569, 1, x_563);
x_507 = x_569;
goto lbl_508;
}
}
}
lbl_508:
{
obj* x_570; obj* x_572; obj* x_574; obj* x_575; obj* x_576; obj* x_578; obj* x_579; obj* x_580; obj* x_581; uint8 x_582; obj* x_583; obj* x_584; obj* x_587; obj* x_588; obj* x_589; obj* x_590; obj* x_591; obj* x_592; obj* x_593; obj* x_594; obj* x_595; obj* x_596; obj* x_597; obj* x_598; 
x_570 = lean::cnstr_get(x_507, 0);
x_572 = lean::cnstr_get(x_507, 1);
if (lean::is_exclusive(x_507)) {
 x_574 = x_507;
} else {
 lean::inc(x_570);
 lean::inc(x_572);
 lean::dec(x_507);
 x_574 = lean::box(0);
}
x_575 = lean::box(0);
x_576 = lean::mk_nat_obj(0u);
lean::inc(x_502);
x_578 = l_list_length__aux___main___rarg(x_502, x_576);
x_579 = l_lean_elaborator_to__pexpr___main___closed__25;
x_580 = l_lean_kvmap_set__nat(x_575, x_579, x_578);
x_581 = l_lean_elaborator_to__pexpr___main___closed__26;
x_582 = 1;
x_583 = l_lean_kvmap_set__bool(x_580, x_581, x_582);
x_584 = lean::cnstr_get(x_203, 1);
lean::inc(x_584);
lean::dec(x_203);
x_587 = l_lean_elaborator_to__pexpr___main___closed__27;
x_588 = l_option_map___rarg(x_587, x_584);
x_589 = l_lean_elaborator_to__pexpr___main___closed__28;
x_590 = l_option_map___rarg(x_589, x_588);
x_591 = lean::box(0);
x_592 = l_option_get__or__else___main___rarg(x_590, x_591);
x_593 = l_lean_elaborator_to__pexpr___main___closed__29;
x_594 = l_lean_kvmap_set__name(x_583, x_593, x_592);
x_595 = l_list_append___rarg(x_502, x_570);
x_596 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__15(x_595);
x_597 = lean_expr_mk_mdata(x_594, x_596);
if (lean::is_scalar(x_574)) {
 x_598 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_598 = x_574;
}
lean::cnstr_set(x_598, 0, x_597);
lean::cnstr_set(x_598, 1, x_572);
x_14 = x_598;
goto lbl_15;
}
}
}
else
{
obj* x_600; obj* x_601; obj* x_604; obj* x_605; obj* x_608; obj* x_609; obj* x_611; 
lean::dec(x_481);
if (lean::is_exclusive(x_479)) {
 lean::cnstr_release(x_479, 0);
 lean::cnstr_release(x_479, 1);
 x_600 = x_479;
} else {
 lean::dec(x_479);
 x_600 = lean::box(0);
}
x_601 = lean::cnstr_get(x_212, 0);
lean::inc(x_601);
lean::dec(x_212);
x_604 = l_lean_parser_term_struct__inst__item_has__view;
x_605 = lean::cnstr_get(x_604, 1);
lean::inc(x_605);
lean::dec(x_604);
x_608 = lean::apply_1(x_605, x_329);
x_609 = l_lean_elaborator_to__pexpr___main___closed__30;
lean::inc(x_1);
x_611 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_608, x_609, x_1, x_2);
if (lean::obj_tag(x_611) == 0)
{
obj* x_619; obj* x_621; obj* x_622; 
lean::dec(x_600);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_601);
lean::dec(x_207);
lean::dec(x_203);
x_619 = lean::cnstr_get(x_611, 0);
if (lean::is_exclusive(x_611)) {
 x_621 = x_611;
} else {
 lean::inc(x_619);
 lean::dec(x_611);
 x_621 = lean::box(0);
}
if (lean::is_scalar(x_621)) {
 x_622 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_622 = x_621;
}
lean::cnstr_set(x_622, 0, x_619);
return x_622;
}
else
{
obj* x_623; obj* x_626; obj* x_628; obj* x_633; 
x_623 = lean::cnstr_get(x_611, 0);
lean::inc(x_623);
lean::dec(x_611);
x_626 = lean::cnstr_get(x_623, 0);
lean::inc(x_626);
x_628 = lean::cnstr_get(x_623, 1);
lean::inc(x_628);
lean::dec(x_623);
lean::inc(x_1);
lean::inc(x_0);
x_633 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__17(x_0, x_207, x_1, x_628);
if (lean::obj_tag(x_633) == 0)
{
obj* x_641; obj* x_643; obj* x_644; 
lean::dec(x_600);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_601);
lean::dec(x_626);
lean::dec(x_203);
x_641 = lean::cnstr_get(x_633, 0);
if (lean::is_exclusive(x_633)) {
 x_643 = x_633;
} else {
 lean::inc(x_641);
 lean::dec(x_633);
 x_643 = lean::box(0);
}
if (lean::is_scalar(x_643)) {
 x_644 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_644 = x_643;
}
lean::cnstr_set(x_644, 0, x_641);
return x_644;
}
else
{
obj* x_645; obj* x_648; obj* x_650; obj* x_653; obj* x_657; 
x_645 = lean::cnstr_get(x_633, 0);
lean::inc(x_645);
lean::dec(x_633);
x_648 = lean::cnstr_get(x_645, 0);
lean::inc(x_648);
x_650 = lean::cnstr_get(x_645, 1);
lean::inc(x_650);
lean::dec(x_645);
lean::inc(x_1);
lean::inc(x_0);
x_657 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__19(x_0, x_601, x_1, x_650);
if (lean::obj_tag(x_657) == 0)
{
obj* x_665; obj* x_667; obj* x_668; 
lean::dec(x_600);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_626);
lean::dec(x_648);
lean::dec(x_203);
x_665 = lean::cnstr_get(x_657, 0);
if (lean::is_exclusive(x_657)) {
 x_667 = x_657;
} else {
 lean::inc(x_665);
 lean::dec(x_657);
 x_667 = lean::box(0);
}
if (lean::is_scalar(x_667)) {
 x_668 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_668 = x_667;
}
lean::cnstr_set(x_668, 0, x_665);
return x_668;
}
else
{
obj* x_669; obj* x_672; 
x_669 = lean::cnstr_get(x_657, 0);
lean::inc(x_669);
lean::dec(x_657);
x_672 = lean::cnstr_get(x_203, 2);
lean::inc(x_672);
if (lean::obj_tag(x_672) == 0)
{
obj* x_675; obj* x_677; obj* x_679; obj* x_680; 
lean::dec(x_600);
x_675 = lean::cnstr_get(x_669, 0);
x_677 = lean::cnstr_get(x_669, 1);
if (lean::is_exclusive(x_669)) {
 x_679 = x_669;
} else {
 lean::inc(x_675);
 lean::inc(x_677);
 lean::dec(x_669);
 x_679 = lean::box(0);
}
if (lean::is_scalar(x_679)) {
 x_680 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_680 = x_679;
}
lean::cnstr_set(x_680, 0, x_675);
lean::cnstr_set(x_680, 1, x_677);
x_653 = x_680;
goto lbl_654;
}
else
{
obj* x_681; obj* x_683; obj* x_686; obj* x_689; obj* x_693; 
x_681 = lean::cnstr_get(x_669, 0);
lean::inc(x_681);
x_683 = lean::cnstr_get(x_669, 1);
lean::inc(x_683);
lean::dec(x_669);
x_686 = lean::cnstr_get(x_672, 0);
lean::inc(x_686);
lean::dec(x_672);
x_689 = lean::cnstr_get(x_686, 0);
lean::inc(x_689);
lean::dec(x_686);
lean::inc(x_1);
x_693 = l_lean_elaborator_to__pexpr___main(x_689, x_1, x_683);
if (lean::obj_tag(x_693) == 0)
{
obj* x_702; obj* x_704; obj* x_705; 
lean::dec(x_600);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_681);
lean::dec(x_626);
lean::dec(x_648);
lean::dec(x_203);
x_702 = lean::cnstr_get(x_693, 0);
if (lean::is_exclusive(x_693)) {
 x_704 = x_693;
} else {
 lean::inc(x_702);
 lean::dec(x_693);
 x_704 = lean::box(0);
}
if (lean::is_scalar(x_704)) {
 x_705 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_705 = x_704;
}
lean::cnstr_set(x_705, 0, x_702);
return x_705;
}
else
{
obj* x_706; obj* x_709; obj* x_711; obj* x_713; obj* x_714; obj* x_715; obj* x_716; obj* x_717; 
x_706 = lean::cnstr_get(x_693, 0);
lean::inc(x_706);
lean::dec(x_693);
x_709 = lean::cnstr_get(x_706, 0);
x_711 = lean::cnstr_get(x_706, 1);
if (lean::is_exclusive(x_706)) {
 x_713 = x_706;
} else {
 lean::inc(x_709);
 lean::inc(x_711);
 lean::dec(x_706);
 x_713 = lean::box(0);
}
x_714 = lean::box(0);
if (lean::is_scalar(x_600)) {
 x_715 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_715 = x_600;
}
lean::cnstr_set(x_715, 0, x_709);
lean::cnstr_set(x_715, 1, x_714);
x_716 = l_list_append___rarg(x_681, x_715);
if (lean::is_scalar(x_713)) {
 x_717 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_717 = x_713;
}
lean::cnstr_set(x_717, 0, x_716);
lean::cnstr_set(x_717, 1, x_711);
x_653 = x_717;
goto lbl_654;
}
}
}
lbl_654:
{
obj* x_718; obj* x_720; obj* x_722; obj* x_723; obj* x_724; obj* x_726; obj* x_727; obj* x_728; obj* x_729; uint8 x_730; obj* x_731; obj* x_732; obj* x_735; obj* x_736; obj* x_737; obj* x_738; obj* x_739; obj* x_740; obj* x_741; obj* x_742; obj* x_743; obj* x_744; obj* x_745; obj* x_746; 
x_718 = lean::cnstr_get(x_653, 0);
x_720 = lean::cnstr_get(x_653, 1);
if (lean::is_exclusive(x_653)) {
 x_722 = x_653;
} else {
 lean::inc(x_718);
 lean::inc(x_720);
 lean::dec(x_653);
 x_722 = lean::box(0);
}
x_723 = lean::box(0);
x_724 = lean::mk_nat_obj(0u);
lean::inc(x_648);
x_726 = l_list_length__aux___main___rarg(x_648, x_724);
x_727 = l_lean_elaborator_to__pexpr___main___closed__25;
x_728 = l_lean_kvmap_set__nat(x_723, x_727, x_726);
x_729 = l_lean_elaborator_to__pexpr___main___closed__26;
x_730 = lean::unbox(x_626);
x_731 = l_lean_kvmap_set__bool(x_728, x_729, x_730);
x_732 = lean::cnstr_get(x_203, 1);
lean::inc(x_732);
lean::dec(x_203);
x_735 = l_lean_elaborator_to__pexpr___main___closed__27;
x_736 = l_option_map___rarg(x_735, x_732);
x_737 = l_lean_elaborator_to__pexpr___main___closed__28;
x_738 = l_option_map___rarg(x_737, x_736);
x_739 = lean::box(0);
x_740 = l_option_get__or__else___main___rarg(x_738, x_739);
x_741 = l_lean_elaborator_to__pexpr___main___closed__29;
x_742 = l_lean_kvmap_set__name(x_731, x_741, x_740);
x_743 = l_list_append___rarg(x_648, x_718);
x_744 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__18(x_743);
x_745 = lean_expr_mk_mdata(x_742, x_744);
if (lean::is_scalar(x_722)) {
 x_746 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_746 = x_722;
}
lean::cnstr_set(x_746, 0, x_745);
lean::cnstr_set(x_746, 1, x_720);
x_14 = x_746;
goto lbl_15;
}
}
}
}
}
}
}
}
else
{
obj* x_749; 
lean::inc(x_1);
lean::inc(x_9);
x_749 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__20(x_9, x_1, x_2);
if (lean::obj_tag(x_749) == 0)
{
obj* x_754; obj* x_756; obj* x_757; 
lean::dec(x_9);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_754 = lean::cnstr_get(x_749, 0);
if (lean::is_exclusive(x_749)) {
 x_756 = x_749;
} else {
 lean::inc(x_754);
 lean::dec(x_749);
 x_756 = lean::box(0);
}
if (lean::is_scalar(x_756)) {
 x_757 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_757 = x_756;
}
lean::cnstr_set(x_757, 0, x_754);
return x_757;
}
else
{
obj* x_758; obj* x_761; obj* x_763; obj* x_765; obj* x_766; obj* x_767; 
x_758 = lean::cnstr_get(x_749, 0);
lean::inc(x_758);
lean::dec(x_749);
x_761 = lean::cnstr_get(x_758, 0);
x_763 = lean::cnstr_get(x_758, 1);
if (lean::is_exclusive(x_758)) {
 x_765 = x_758;
} else {
 lean::inc(x_761);
 lean::inc(x_763);
 lean::dec(x_758);
 x_765 = lean::box(0);
}
x_766 = l_list_reverse___rarg(x_761);
if (lean::is_scalar(x_765)) {
 x_767 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_767 = x_765;
}
lean::cnstr_set(x_767, 0, x_766);
lean::cnstr_set(x_767, 1, x_763);
x_16 = x_767;
goto lbl_17;
}
}
}
else
{
obj* x_770; obj* x_771; obj* x_775; obj* x_776; obj* x_777; obj* x_778; obj* x_779; obj* x_780; 
lean::dec(x_9);
lean::dec(x_7);
x_770 = l_lean_parser_string__lit_has__view;
x_771 = lean::cnstr_get(x_770, 0);
lean::inc(x_771);
lean::dec(x_770);
lean::inc(x_0);
x_775 = lean::apply_1(x_771, x_0);
x_776 = l_lean_parser_string__lit_view_value(x_775);
x_777 = l_lean_elaborator_to__pexpr___main___closed__31;
x_778 = l_option_get__or__else___main___rarg(x_776, x_777);
x_779 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_779, 0, x_778);
x_780 = lean_expr_mk_lit(x_779);
if (x_21 == 0)
{
obj* x_781; 
x_781 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_781) == 0)
{
obj* x_783; obj* x_784; 
lean::dec(x_1);
x_783 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_783, 0, x_780);
lean::cnstr_set(x_783, 1, x_2);
x_784 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_784, 0, x_783);
return x_784;
}
else
{
obj* x_785; obj* x_788; obj* x_791; obj* x_794; obj* x_795; obj* x_796; obj* x_798; obj* x_799; obj* x_800; obj* x_803; obj* x_804; obj* x_805; obj* x_806; obj* x_807; 
x_785 = lean::cnstr_get(x_781, 0);
lean::inc(x_785);
lean::dec(x_781);
x_788 = lean::cnstr_get(x_1, 0);
lean::inc(x_788);
lean::dec(x_1);
x_791 = lean::cnstr_get(x_788, 2);
lean::inc(x_791);
lean::dec(x_788);
x_794 = l_lean_file__map_to__position(x_791, x_785);
x_795 = lean::box(0);
x_796 = lean::cnstr_get(x_794, 1);
lean::inc(x_796);
x_798 = l_lean_elaborator_to__pexpr___main___closed__3;
x_799 = l_lean_kvmap_set__nat(x_795, x_798, x_796);
x_800 = lean::cnstr_get(x_794, 0);
lean::inc(x_800);
lean::dec(x_794);
x_803 = l_lean_elaborator_to__pexpr___main___closed__4;
x_804 = l_lean_kvmap_set__nat(x_799, x_803, x_800);
x_805 = lean_expr_mk_mdata(x_804, x_780);
x_806 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_806, 0, x_805);
lean::cnstr_set(x_806, 1, x_2);
x_807 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_807, 0, x_806);
return x_807;
}
}
else
{
obj* x_810; obj* x_811; 
lean::dec(x_1);
lean::dec(x_0);
x_810 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_810, 0, x_780);
lean::cnstr_set(x_810, 1, x_2);
x_811 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_811, 0, x_810);
return x_811;
}
}
}
else
{
obj* x_814; obj* x_815; obj* x_819; obj* x_820; obj* x_821; obj* x_822; 
lean::dec(x_9);
lean::dec(x_7);
x_814 = l_lean_parser_number_has__view;
x_815 = lean::cnstr_get(x_814, 0);
lean::inc(x_815);
lean::dec(x_814);
lean::inc(x_0);
x_819 = lean::apply_1(x_815, x_0);
x_820 = l_lean_parser_number_view_to__nat___main(x_819);
x_821 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_821, 0, x_820);
x_822 = lean_expr_mk_lit(x_821);
if (x_21 == 0)
{
obj* x_823; 
x_823 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_823) == 0)
{
obj* x_825; obj* x_826; 
lean::dec(x_1);
x_825 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_825, 0, x_822);
lean::cnstr_set(x_825, 1, x_2);
x_826 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_826, 0, x_825);
return x_826;
}
else
{
obj* x_827; obj* x_830; obj* x_833; obj* x_836; obj* x_837; obj* x_838; obj* x_840; obj* x_841; obj* x_842; obj* x_845; obj* x_846; obj* x_847; obj* x_848; obj* x_849; 
x_827 = lean::cnstr_get(x_823, 0);
lean::inc(x_827);
lean::dec(x_823);
x_830 = lean::cnstr_get(x_1, 0);
lean::inc(x_830);
lean::dec(x_1);
x_833 = lean::cnstr_get(x_830, 2);
lean::inc(x_833);
lean::dec(x_830);
x_836 = l_lean_file__map_to__position(x_833, x_827);
x_837 = lean::box(0);
x_838 = lean::cnstr_get(x_836, 1);
lean::inc(x_838);
x_840 = l_lean_elaborator_to__pexpr___main___closed__3;
x_841 = l_lean_kvmap_set__nat(x_837, x_840, x_838);
x_842 = lean::cnstr_get(x_836, 0);
lean::inc(x_842);
lean::dec(x_836);
x_845 = l_lean_elaborator_to__pexpr___main___closed__4;
x_846 = l_lean_kvmap_set__nat(x_841, x_845, x_842);
x_847 = lean_expr_mk_mdata(x_846, x_822);
x_848 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_848, 0, x_847);
lean::cnstr_set(x_848, 1, x_2);
x_849 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_849, 0, x_848);
return x_849;
}
}
else
{
obj* x_852; obj* x_853; 
lean::dec(x_1);
lean::dec(x_0);
x_852 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_852, 0, x_822);
lean::cnstr_set(x_852, 1, x_2);
x_853 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_853, 0, x_852);
return x_853;
}
}
}
else
{
obj* x_855; obj* x_856; obj* x_860; obj* x_861; obj* x_865; 
lean::dec(x_9);
x_855 = l_lean_parser_term_borrowed_has__view;
x_856 = lean::cnstr_get(x_855, 0);
lean::inc(x_856);
lean::dec(x_855);
lean::inc(x_0);
x_860 = lean::apply_1(x_856, x_0);
x_861 = lean::cnstr_get(x_860, 1);
lean::inc(x_861);
lean::dec(x_860);
lean::inc(x_1);
x_865 = l_lean_elaborator_to__pexpr___main(x_861, x_1, x_2);
if (lean::obj_tag(x_865) == 0)
{
obj* x_869; obj* x_871; obj* x_872; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_869 = lean::cnstr_get(x_865, 0);
if (lean::is_exclusive(x_865)) {
 x_871 = x_865;
} else {
 lean::inc(x_869);
 lean::dec(x_865);
 x_871 = lean::box(0);
}
if (lean::is_scalar(x_871)) {
 x_872 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_872 = x_871;
}
lean::cnstr_set(x_872, 0, x_869);
return x_872;
}
else
{
obj* x_873; obj* x_876; obj* x_878; obj* x_880; obj* x_881; obj* x_882; obj* x_883; 
x_873 = lean::cnstr_get(x_865, 0);
lean::inc(x_873);
lean::dec(x_865);
x_876 = lean::cnstr_get(x_873, 0);
x_878 = lean::cnstr_get(x_873, 1);
if (lean::is_exclusive(x_873)) {
 x_880 = x_873;
} else {
 lean::inc(x_876);
 lean::inc(x_878);
 lean::dec(x_873);
 x_880 = lean::box(0);
}
x_881 = l_lean_elaborator_to__pexpr___main___closed__32;
x_882 = l_lean_elaborator_expr_mk__annotation(x_881, x_876);
if (lean::is_scalar(x_880)) {
 x_883 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_883 = x_880;
}
lean::cnstr_set(x_883, 0, x_882);
lean::cnstr_set(x_883, 1, x_878);
x_14 = x_883;
goto lbl_15;
}
}
}
else
{
obj* x_885; obj* x_886; obj* x_890; obj* x_891; obj* x_895; 
lean::dec(x_9);
x_885 = l_lean_parser_term_inaccessible_has__view;
x_886 = lean::cnstr_get(x_885, 0);
lean::inc(x_886);
lean::dec(x_885);
lean::inc(x_0);
x_890 = lean::apply_1(x_886, x_0);
x_891 = lean::cnstr_get(x_890, 1);
lean::inc(x_891);
lean::dec(x_890);
lean::inc(x_1);
x_895 = l_lean_elaborator_to__pexpr___main(x_891, x_1, x_2);
if (lean::obj_tag(x_895) == 0)
{
obj* x_899; obj* x_901; obj* x_902; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_899 = lean::cnstr_get(x_895, 0);
if (lean::is_exclusive(x_895)) {
 x_901 = x_895;
} else {
 lean::inc(x_899);
 lean::dec(x_895);
 x_901 = lean::box(0);
}
if (lean::is_scalar(x_901)) {
 x_902 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_902 = x_901;
}
lean::cnstr_set(x_902, 0, x_899);
return x_902;
}
else
{
obj* x_903; obj* x_906; obj* x_908; obj* x_910; obj* x_911; obj* x_912; obj* x_913; 
x_903 = lean::cnstr_get(x_895, 0);
lean::inc(x_903);
lean::dec(x_895);
x_906 = lean::cnstr_get(x_903, 0);
x_908 = lean::cnstr_get(x_903, 1);
if (lean::is_exclusive(x_903)) {
 x_910 = x_903;
} else {
 lean::inc(x_906);
 lean::inc(x_908);
 lean::dec(x_903);
 x_910 = lean::box(0);
}
x_911 = l_lean_elaborator_to__pexpr___main___closed__33;
x_912 = l_lean_elaborator_expr_mk__annotation(x_911, x_906);
if (lean::is_scalar(x_910)) {
 x_913 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_913 = x_910;
}
lean::cnstr_set(x_913, 0, x_912);
lean::cnstr_set(x_913, 1, x_908);
x_14 = x_913;
goto lbl_15;
}
}
}
else
{
obj* x_915; obj* x_916; obj* x_920; obj* x_921; obj* x_923; obj* x_924; obj* x_927; obj* x_930; 
lean::dec(x_9);
x_915 = l_lean_parser_term_explicit_has__view;
x_916 = lean::cnstr_get(x_915, 0);
lean::inc(x_916);
lean::dec(x_915);
lean::inc(x_0);
x_920 = lean::apply_1(x_916, x_0);
x_921 = lean::cnstr_get(x_920, 0);
lean::inc(x_921);
x_923 = l_lean_parser_ident__univs_has__view;
x_924 = lean::cnstr_get(x_923, 1);
lean::inc(x_924);
lean::dec(x_923);
x_927 = lean::cnstr_get(x_920, 1);
lean::inc(x_927);
lean::dec(x_920);
x_930 = lean::apply_1(x_924, x_927);
if (lean::obj_tag(x_921) == 0)
{
obj* x_933; 
lean::dec(x_921);
lean::inc(x_1);
x_933 = l_lean_elaborator_to__pexpr___main(x_930, x_1, x_2);
if (lean::obj_tag(x_933) == 0)
{
obj* x_937; obj* x_939; obj* x_940; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_937 = lean::cnstr_get(x_933, 0);
if (lean::is_exclusive(x_933)) {
 x_939 = x_933;
} else {
 lean::inc(x_937);
 lean::dec(x_933);
 x_939 = lean::box(0);
}
if (lean::is_scalar(x_939)) {
 x_940 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_940 = x_939;
}
lean::cnstr_set(x_940, 0, x_937);
return x_940;
}
else
{
obj* x_941; obj* x_944; obj* x_946; obj* x_948; obj* x_949; obj* x_950; obj* x_951; 
x_941 = lean::cnstr_get(x_933, 0);
lean::inc(x_941);
lean::dec(x_933);
x_944 = lean::cnstr_get(x_941, 0);
x_946 = lean::cnstr_get(x_941, 1);
if (lean::is_exclusive(x_941)) {
 x_948 = x_941;
} else {
 lean::inc(x_944);
 lean::inc(x_946);
 lean::dec(x_941);
 x_948 = lean::box(0);
}
x_949 = l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1;
x_950 = l_lean_elaborator_expr_mk__annotation(x_949, x_944);
if (lean::is_scalar(x_948)) {
 x_951 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_951 = x_948;
}
lean::cnstr_set(x_951, 0, x_950);
lean::cnstr_set(x_951, 1, x_946);
x_14 = x_951;
goto lbl_15;
}
}
else
{
obj* x_954; 
lean::dec(x_921);
lean::inc(x_1);
x_954 = l_lean_elaborator_to__pexpr___main(x_930, x_1, x_2);
if (lean::obj_tag(x_954) == 0)
{
obj* x_958; obj* x_960; obj* x_961; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_958 = lean::cnstr_get(x_954, 0);
if (lean::is_exclusive(x_954)) {
 x_960 = x_954;
} else {
 lean::inc(x_958);
 lean::dec(x_954);
 x_960 = lean::box(0);
}
if (lean::is_scalar(x_960)) {
 x_961 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_961 = x_960;
}
lean::cnstr_set(x_961, 0, x_958);
return x_961;
}
else
{
obj* x_962; obj* x_965; obj* x_967; obj* x_969; obj* x_970; obj* x_971; obj* x_972; 
x_962 = lean::cnstr_get(x_954, 0);
lean::inc(x_962);
lean::dec(x_954);
x_965 = lean::cnstr_get(x_962, 0);
x_967 = lean::cnstr_get(x_962, 1);
if (lean::is_exclusive(x_962)) {
 x_969 = x_962;
} else {
 lean::inc(x_965);
 lean::inc(x_967);
 lean::dec(x_962);
 x_969 = lean::box(0);
}
x_970 = l_lean_elaborator_to__pexpr___main___closed__34;
x_971 = l_lean_elaborator_expr_mk__annotation(x_970, x_965);
if (lean::is_scalar(x_969)) {
 x_972 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_972 = x_969;
}
lean::cnstr_set(x_972, 0, x_971);
lean::cnstr_set(x_972, 1, x_967);
x_14 = x_972;
goto lbl_15;
}
}
}
}
else
{
obj* x_974; obj* x_975; obj* x_979; obj* x_980; 
lean::dec(x_9);
x_974 = l_lean_parser_term_projection_has__view;
x_975 = lean::cnstr_get(x_974, 0);
lean::inc(x_975);
lean::dec(x_974);
lean::inc(x_0);
x_979 = lean::apply_1(x_975, x_0);
x_980 = lean::cnstr_get(x_979, 2);
lean::inc(x_980);
if (lean::obj_tag(x_980) == 0)
{
obj* x_982; obj* x_985; obj* x_989; 
x_982 = lean::cnstr_get(x_979, 0);
lean::inc(x_982);
lean::dec(x_979);
x_985 = lean::cnstr_get(x_980, 0);
lean::inc(x_985);
lean::dec(x_980);
lean::inc(x_1);
x_989 = l_lean_elaborator_to__pexpr___main(x_982, x_1, x_2);
if (lean::obj_tag(x_989) == 0)
{
obj* x_994; obj* x_996; obj* x_997; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_985);
x_994 = lean::cnstr_get(x_989, 0);
if (lean::is_exclusive(x_989)) {
 x_996 = x_989;
} else {
 lean::inc(x_994);
 lean::dec(x_989);
 x_996 = lean::box(0);
}
if (lean::is_scalar(x_996)) {
 x_997 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_997 = x_996;
}
lean::cnstr_set(x_997, 0, x_994);
return x_997;
}
else
{
obj* x_998; obj* x_1001; obj* x_1003; obj* x_1005; obj* x_1006; obj* x_1009; obj* x_1010; obj* x_1011; obj* x_1012; obj* x_1013; obj* x_1014; 
x_998 = lean::cnstr_get(x_989, 0);
lean::inc(x_998);
lean::dec(x_989);
x_1001 = lean::cnstr_get(x_998, 0);
x_1003 = lean::cnstr_get(x_998, 1);
if (lean::is_exclusive(x_998)) {
 x_1005 = x_998;
} else {
 lean::inc(x_1001);
 lean::inc(x_1003);
 lean::dec(x_998);
 x_1005 = lean::box(0);
}
x_1006 = lean::cnstr_get(x_985, 2);
lean::inc(x_1006);
lean::dec(x_985);
x_1009 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1009, 0, x_1006);
x_1010 = lean::box(0);
x_1011 = l_lean_elaborator_to__pexpr___main___closed__35;
x_1012 = l_lean_kvmap_insert__core___main(x_1010, x_1011, x_1009);
x_1013 = lean_expr_mk_mdata(x_1012, x_1001);
if (lean::is_scalar(x_1005)) {
 x_1014 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1014 = x_1005;
}
lean::cnstr_set(x_1014, 0, x_1013);
lean::cnstr_set(x_1014, 1, x_1003);
x_14 = x_1014;
goto lbl_15;
}
}
else
{
obj* x_1015; obj* x_1018; obj* x_1022; 
x_1015 = lean::cnstr_get(x_979, 0);
lean::inc(x_1015);
lean::dec(x_979);
x_1018 = lean::cnstr_get(x_980, 0);
lean::inc(x_1018);
lean::dec(x_980);
lean::inc(x_1);
x_1022 = l_lean_elaborator_to__pexpr___main(x_1015, x_1, x_2);
if (lean::obj_tag(x_1022) == 0)
{
obj* x_1027; obj* x_1029; obj* x_1030; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1018);
x_1027 = lean::cnstr_get(x_1022, 0);
if (lean::is_exclusive(x_1022)) {
 x_1029 = x_1022;
} else {
 lean::inc(x_1027);
 lean::dec(x_1022);
 x_1029 = lean::box(0);
}
if (lean::is_scalar(x_1029)) {
 x_1030 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1030 = x_1029;
}
lean::cnstr_set(x_1030, 0, x_1027);
return x_1030;
}
else
{
obj* x_1031; obj* x_1034; obj* x_1036; obj* x_1038; obj* x_1039; obj* x_1040; obj* x_1041; obj* x_1042; obj* x_1043; obj* x_1044; obj* x_1045; 
x_1031 = lean::cnstr_get(x_1022, 0);
lean::inc(x_1031);
lean::dec(x_1022);
x_1034 = lean::cnstr_get(x_1031, 0);
x_1036 = lean::cnstr_get(x_1031, 1);
if (lean::is_exclusive(x_1031)) {
 x_1038 = x_1031;
} else {
 lean::inc(x_1034);
 lean::inc(x_1036);
 lean::dec(x_1031);
 x_1038 = lean::box(0);
}
x_1039 = l_lean_parser_number_view_to__nat___main(x_1018);
x_1040 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1040, 0, x_1039);
x_1041 = lean::box(0);
x_1042 = l_lean_elaborator_to__pexpr___main___closed__35;
x_1043 = l_lean_kvmap_insert__core___main(x_1041, x_1042, x_1040);
x_1044 = lean_expr_mk_mdata(x_1043, x_1034);
if (lean::is_scalar(x_1038)) {
 x_1045 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1045 = x_1038;
}
lean::cnstr_set(x_1045, 0, x_1044);
lean::cnstr_set(x_1045, 1, x_1036);
x_14 = x_1045;
goto lbl_15;
}
}
}
}
else
{
obj* x_1047; obj* x_1048; obj* x_1052; obj* x_1053; 
lean::dec(x_9);
x_1047 = l_lean_parser_term_let_has__view;
x_1048 = lean::cnstr_get(x_1047, 0);
lean::inc(x_1048);
lean::dec(x_1047);
lean::inc(x_0);
x_1052 = lean::apply_1(x_1048, x_0);
x_1053 = lean::cnstr_get(x_1052, 1);
lean::inc(x_1053);
if (lean::obj_tag(x_1053) == 0)
{
obj* x_1055; obj* x_1058; 
x_1055 = lean::cnstr_get(x_1053, 0);
lean::inc(x_1055);
lean::dec(x_1053);
x_1058 = lean::cnstr_get(x_1055, 1);
lean::inc(x_1058);
if (lean::obj_tag(x_1058) == 0)
{
obj* x_1060; 
x_1060 = lean::cnstr_get(x_1055, 2);
lean::inc(x_1060);
if (lean::obj_tag(x_1060) == 0)
{
obj* x_1064; obj* x_1067; 
lean::dec(x_1055);
lean::dec(x_1052);
x_1064 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_0);
x_1067 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1064, x_1, x_2);
if (lean::obj_tag(x_1067) == 0)
{
obj* x_1071; obj* x_1073; obj* x_1074; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1071 = lean::cnstr_get(x_1067, 0);
if (lean::is_exclusive(x_1067)) {
 x_1073 = x_1067;
} else {
 lean::inc(x_1071);
 lean::dec(x_1067);
 x_1073 = lean::box(0);
}
if (lean::is_scalar(x_1073)) {
 x_1074 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1074 = x_1073;
}
lean::cnstr_set(x_1074, 0, x_1071);
return x_1074;
}
else
{
obj* x_1075; 
x_1075 = lean::cnstr_get(x_1067, 0);
lean::inc(x_1075);
lean::dec(x_1067);
x_14 = x_1075;
goto lbl_15;
}
}
else
{
obj* x_1078; obj* x_1081; obj* x_1084; obj* x_1088; 
x_1078 = lean::cnstr_get(x_1055, 0);
lean::inc(x_1078);
lean::dec(x_1055);
x_1081 = lean::cnstr_get(x_1060, 0);
lean::inc(x_1081);
lean::dec(x_1060);
x_1084 = lean::cnstr_get(x_1081, 1);
lean::inc(x_1084);
lean::dec(x_1081);
lean::inc(x_1);
x_1088 = l_lean_elaborator_to__pexpr___main(x_1084, x_1, x_2);
if (lean::obj_tag(x_1088) == 0)
{
obj* x_1094; obj* x_1096; obj* x_1097; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1078);
lean::dec(x_1052);
x_1094 = lean::cnstr_get(x_1088, 0);
if (lean::is_exclusive(x_1088)) {
 x_1096 = x_1088;
} else {
 lean::inc(x_1094);
 lean::dec(x_1088);
 x_1096 = lean::box(0);
}
if (lean::is_scalar(x_1096)) {
 x_1097 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1097 = x_1096;
}
lean::cnstr_set(x_1097, 0, x_1094);
return x_1097;
}
else
{
obj* x_1098; obj* x_1101; obj* x_1103; obj* x_1106; obj* x_1109; 
x_1098 = lean::cnstr_get(x_1088, 0);
lean::inc(x_1098);
lean::dec(x_1088);
x_1101 = lean::cnstr_get(x_1098, 0);
lean::inc(x_1101);
x_1103 = lean::cnstr_get(x_1098, 1);
lean::inc(x_1103);
lean::dec(x_1098);
x_1106 = lean::cnstr_get(x_1052, 3);
lean::inc(x_1106);
lean::inc(x_1);
x_1109 = l_lean_elaborator_to__pexpr___main(x_1106, x_1, x_1103);
if (lean::obj_tag(x_1109) == 0)
{
obj* x_1116; obj* x_1118; obj* x_1119; 
lean::dec(x_1101);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1078);
lean::dec(x_1052);
x_1116 = lean::cnstr_get(x_1109, 0);
if (lean::is_exclusive(x_1109)) {
 x_1118 = x_1109;
} else {
 lean::inc(x_1116);
 lean::dec(x_1109);
 x_1118 = lean::box(0);
}
if (lean::is_scalar(x_1118)) {
 x_1119 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1119 = x_1118;
}
lean::cnstr_set(x_1119, 0, x_1116);
return x_1119;
}
else
{
obj* x_1120; obj* x_1123; obj* x_1125; obj* x_1128; obj* x_1132; 
x_1120 = lean::cnstr_get(x_1109, 0);
lean::inc(x_1120);
lean::dec(x_1109);
x_1123 = lean::cnstr_get(x_1120, 0);
lean::inc(x_1123);
x_1125 = lean::cnstr_get(x_1120, 1);
lean::inc(x_1125);
lean::dec(x_1120);
x_1128 = lean::cnstr_get(x_1052, 5);
lean::inc(x_1128);
lean::dec(x_1052);
lean::inc(x_1);
x_1132 = l_lean_elaborator_to__pexpr___main(x_1128, x_1, x_1125);
if (lean::obj_tag(x_1132) == 0)
{
obj* x_1139; obj* x_1141; obj* x_1142; 
lean::dec(x_1101);
lean::dec(x_1123);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1078);
x_1139 = lean::cnstr_get(x_1132, 0);
if (lean::is_exclusive(x_1132)) {
 x_1141 = x_1132;
} else {
 lean::inc(x_1139);
 lean::dec(x_1132);
 x_1141 = lean::box(0);
}
if (lean::is_scalar(x_1141)) {
 x_1142 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1142 = x_1141;
}
lean::cnstr_set(x_1142, 0, x_1139);
return x_1142;
}
else
{
obj* x_1143; obj* x_1146; obj* x_1148; obj* x_1150; obj* x_1151; obj* x_1152; obj* x_1153; 
x_1143 = lean::cnstr_get(x_1132, 0);
lean::inc(x_1143);
lean::dec(x_1132);
x_1146 = lean::cnstr_get(x_1143, 0);
x_1148 = lean::cnstr_get(x_1143, 1);
if (lean::is_exclusive(x_1143)) {
 x_1150 = x_1143;
} else {
 lean::inc(x_1146);
 lean::inc(x_1148);
 lean::dec(x_1143);
 x_1150 = lean::box(0);
}
x_1151 = l_lean_elaborator_mangle__ident(x_1078);
x_1152 = lean_expr_mk_let(x_1151, x_1101, x_1123, x_1146);
if (lean::is_scalar(x_1150)) {
 x_1153 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1153 = x_1150;
}
lean::cnstr_set(x_1153, 0, x_1152);
lean::cnstr_set(x_1153, 1, x_1148);
x_14 = x_1153;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1157; obj* x_1160; 
lean::dec(x_1055);
lean::dec(x_1058);
lean::dec(x_1052);
x_1157 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_0);
x_1160 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1157, x_1, x_2);
if (lean::obj_tag(x_1160) == 0)
{
obj* x_1164; obj* x_1166; obj* x_1167; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1164 = lean::cnstr_get(x_1160, 0);
if (lean::is_exclusive(x_1160)) {
 x_1166 = x_1160;
} else {
 lean::inc(x_1164);
 lean::dec(x_1160);
 x_1166 = lean::box(0);
}
if (lean::is_scalar(x_1166)) {
 x_1167 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1167 = x_1166;
}
lean::cnstr_set(x_1167, 0, x_1164);
return x_1167;
}
else
{
obj* x_1168; 
x_1168 = lean::cnstr_get(x_1160, 0);
lean::inc(x_1168);
lean::dec(x_1160);
x_14 = x_1168;
goto lbl_15;
}
}
}
else
{
obj* x_1173; obj* x_1176; 
lean::dec(x_1052);
lean::dec(x_1053);
x_1173 = l_lean_elaborator_to__pexpr___main___closed__36;
lean::inc(x_1);
lean::inc(x_0);
x_1176 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1173, x_1, x_2);
if (lean::obj_tag(x_1176) == 0)
{
obj* x_1180; obj* x_1182; obj* x_1183; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1180 = lean::cnstr_get(x_1176, 0);
if (lean::is_exclusive(x_1176)) {
 x_1182 = x_1176;
} else {
 lean::inc(x_1180);
 lean::dec(x_1176);
 x_1182 = lean::box(0);
}
if (lean::is_scalar(x_1182)) {
 x_1183 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1183 = x_1182;
}
lean::cnstr_set(x_1183, 0, x_1180);
return x_1183;
}
else
{
obj* x_1184; 
x_1184 = lean::cnstr_get(x_1176, 0);
lean::inc(x_1184);
lean::dec(x_1176);
x_14 = x_1184;
goto lbl_15;
}
}
}
}
else
{
obj* x_1188; obj* x_1189; obj* x_1193; obj* x_1194; obj* x_1197; 
lean::dec(x_9);
x_1188 = l_lean_parser_term_show_has__view;
x_1189 = lean::cnstr_get(x_1188, 0);
lean::inc(x_1189);
lean::dec(x_1188);
lean::inc(x_0);
x_1193 = lean::apply_1(x_1189, x_0);
x_1194 = lean::cnstr_get(x_1193, 1);
lean::inc(x_1194);
lean::inc(x_1);
x_1197 = l_lean_elaborator_to__pexpr___main(x_1194, x_1, x_2);
if (lean::obj_tag(x_1197) == 0)
{
obj* x_1202; obj* x_1204; obj* x_1205; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1193);
x_1202 = lean::cnstr_get(x_1197, 0);
if (lean::is_exclusive(x_1197)) {
 x_1204 = x_1197;
} else {
 lean::inc(x_1202);
 lean::dec(x_1197);
 x_1204 = lean::box(0);
}
if (lean::is_scalar(x_1204)) {
 x_1205 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1205 = x_1204;
}
lean::cnstr_set(x_1205, 0, x_1202);
return x_1205;
}
else
{
obj* x_1206; obj* x_1209; obj* x_1211; obj* x_1214; obj* x_1217; obj* x_1221; 
x_1206 = lean::cnstr_get(x_1197, 0);
lean::inc(x_1206);
lean::dec(x_1197);
x_1209 = lean::cnstr_get(x_1206, 0);
lean::inc(x_1209);
x_1211 = lean::cnstr_get(x_1206, 1);
lean::inc(x_1211);
lean::dec(x_1206);
x_1214 = lean::cnstr_get(x_1193, 3);
lean::inc(x_1214);
lean::dec(x_1193);
x_1217 = lean::cnstr_get(x_1214, 1);
lean::inc(x_1217);
lean::dec(x_1214);
lean::inc(x_1);
x_1221 = l_lean_elaborator_to__pexpr___main(x_1217, x_1, x_1211);
if (lean::obj_tag(x_1221) == 0)
{
obj* x_1226; obj* x_1228; obj* x_1229; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1209);
x_1226 = lean::cnstr_get(x_1221, 0);
if (lean::is_exclusive(x_1221)) {
 x_1228 = x_1221;
} else {
 lean::inc(x_1226);
 lean::dec(x_1221);
 x_1228 = lean::box(0);
}
if (lean::is_scalar(x_1228)) {
 x_1229 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1229 = x_1228;
}
lean::cnstr_set(x_1229, 0, x_1226);
return x_1229;
}
else
{
obj* x_1230; obj* x_1233; obj* x_1235; obj* x_1237; obj* x_1238; uint8 x_1239; obj* x_1240; obj* x_1241; obj* x_1242; obj* x_1243; obj* x_1244; obj* x_1245; 
x_1230 = lean::cnstr_get(x_1221, 0);
lean::inc(x_1230);
lean::dec(x_1221);
x_1233 = lean::cnstr_get(x_1230, 0);
x_1235 = lean::cnstr_get(x_1230, 1);
if (lean::is_exclusive(x_1230)) {
 x_1237 = x_1230;
} else {
 lean::inc(x_1233);
 lean::inc(x_1235);
 lean::dec(x_1230);
 x_1237 = lean::box(0);
}
x_1238 = l_lean_elaborator_to__pexpr___main___closed__37;
x_1239 = 0;
x_1240 = l_lean_elaborator_to__pexpr___main___closed__38;
x_1241 = lean_expr_mk_lambda(x_1238, x_1239, x_1209, x_1240);
x_1242 = lean_expr_mk_app(x_1241, x_1233);
x_1243 = l_lean_elaborator_to__pexpr___main___closed__39;
x_1244 = l_lean_elaborator_expr_mk__annotation(x_1243, x_1242);
if (lean::is_scalar(x_1237)) {
 x_1245 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1245 = x_1237;
}
lean::cnstr_set(x_1245, 0, x_1244);
lean::cnstr_set(x_1245, 1, x_1235);
x_14 = x_1245;
goto lbl_15;
}
}
}
}
else
{
obj* x_1247; obj* x_1248; obj* x_1252; obj* x_1253; obj* x_1255; obj* x_1258; 
lean::dec(x_9);
x_1247 = l_lean_parser_term_have_has__view;
x_1248 = lean::cnstr_get(x_1247, 0);
lean::inc(x_1248);
lean::dec(x_1247);
lean::inc(x_0);
x_1252 = lean::apply_1(x_1248, x_0);
x_1255 = lean::cnstr_get(x_1252, 2);
lean::inc(x_1255);
lean::inc(x_1);
x_1258 = l_lean_elaborator_to__pexpr___main(x_1255, x_1, x_2);
if (lean::obj_tag(x_1258) == 0)
{
obj* x_1263; obj* x_1265; obj* x_1266; 
lean::dec(x_1252);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1263 = lean::cnstr_get(x_1258, 0);
if (lean::is_exclusive(x_1258)) {
 x_1265 = x_1258;
} else {
 lean::inc(x_1263);
 lean::dec(x_1258);
 x_1265 = lean::box(0);
}
if (lean::is_scalar(x_1265)) {
 x_1266 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1266 = x_1265;
}
lean::cnstr_set(x_1266, 0, x_1263);
return x_1266;
}
else
{
obj* x_1267; obj* x_1270; obj* x_1272; obj* x_1275; obj* x_1278; 
x_1267 = lean::cnstr_get(x_1258, 0);
lean::inc(x_1267);
lean::dec(x_1258);
x_1270 = lean::cnstr_get(x_1267, 0);
lean::inc(x_1270);
x_1272 = lean::cnstr_get(x_1267, 1);
lean::inc(x_1272);
lean::dec(x_1267);
x_1275 = lean::cnstr_get(x_1252, 5);
lean::inc(x_1275);
lean::inc(x_1);
x_1278 = l_lean_elaborator_to__pexpr___main(x_1275, x_1, x_1272);
if (lean::obj_tag(x_1278) == 0)
{
obj* x_1284; obj* x_1286; obj* x_1287; 
lean::dec(x_1270);
lean::dec(x_1252);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1284 = lean::cnstr_get(x_1278, 0);
if (lean::is_exclusive(x_1278)) {
 x_1286 = x_1278;
} else {
 lean::inc(x_1284);
 lean::dec(x_1278);
 x_1286 = lean::box(0);
}
if (lean::is_scalar(x_1286)) {
 x_1287 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1287 = x_1286;
}
lean::cnstr_set(x_1287, 0, x_1284);
return x_1287;
}
else
{
obj* x_1288; obj* x_1291; obj* x_1293; obj* x_1295; obj* x_1296; obj* x_1298; obj* x_1299; obj* x_1300; obj* x_1301; obj* x_1302; obj* x_1303; uint8 x_1304; obj* x_1305; obj* x_1306; 
x_1288 = lean::cnstr_get(x_1278, 0);
lean::inc(x_1288);
lean::dec(x_1278);
x_1291 = lean::cnstr_get(x_1288, 0);
x_1293 = lean::cnstr_get(x_1288, 1);
if (lean::is_exclusive(x_1288)) {
 x_1295 = x_1288;
} else {
 lean::inc(x_1291);
 lean::inc(x_1293);
 lean::dec(x_1288);
 x_1295 = lean::box(0);
}
x_1296 = lean::cnstr_get(x_1252, 1);
lean::inc(x_1296);
x_1298 = l_lean_elaborator_to__pexpr___main___closed__41;
x_1299 = l_option_map___rarg(x_1298, x_1296);
x_1300 = l_lean_elaborator_to__pexpr___main___closed__28;
x_1301 = l_option_map___rarg(x_1300, x_1299);
x_1302 = l_lean_elaborator_to__pexpr___main___closed__37;
x_1303 = l_option_get__or__else___main___rarg(x_1301, x_1302);
x_1304 = 0;
x_1305 = lean_expr_mk_lambda(x_1303, x_1304, x_1270, x_1291);
if (lean::is_scalar(x_1295)) {
 x_1306 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1306 = x_1295;
}
lean::cnstr_set(x_1306, 0, x_1305);
lean::cnstr_set(x_1306, 1, x_1293);
x_1253 = x_1306;
goto lbl_1254;
}
}
lbl_1254:
{
obj* x_1307; 
x_1307 = lean::cnstr_get(x_1252, 3);
lean::inc(x_1307);
lean::dec(x_1252);
if (lean::obj_tag(x_1307) == 0)
{
obj* x_1310; obj* x_1312; obj* x_1315; obj* x_1318; obj* x_1322; 
x_1310 = lean::cnstr_get(x_1253, 0);
lean::inc(x_1310);
x_1312 = lean::cnstr_get(x_1253, 1);
lean::inc(x_1312);
lean::dec(x_1253);
x_1315 = lean::cnstr_get(x_1307, 0);
lean::inc(x_1315);
lean::dec(x_1307);
x_1318 = lean::cnstr_get(x_1315, 1);
lean::inc(x_1318);
lean::dec(x_1315);
lean::inc(x_1);
x_1322 = l_lean_elaborator_to__pexpr___main(x_1318, x_1, x_1312);
if (lean::obj_tag(x_1322) == 0)
{
obj* x_1327; obj* x_1329; obj* x_1330; 
lean::dec(x_1310);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1327 = lean::cnstr_get(x_1322, 0);
if (lean::is_exclusive(x_1322)) {
 x_1329 = x_1322;
} else {
 lean::inc(x_1327);
 lean::dec(x_1322);
 x_1329 = lean::box(0);
}
if (lean::is_scalar(x_1329)) {
 x_1330 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1330 = x_1329;
}
lean::cnstr_set(x_1330, 0, x_1327);
return x_1330;
}
else
{
obj* x_1331; obj* x_1334; obj* x_1336; obj* x_1338; obj* x_1339; obj* x_1340; obj* x_1341; obj* x_1342; 
x_1331 = lean::cnstr_get(x_1322, 0);
lean::inc(x_1331);
lean::dec(x_1322);
x_1334 = lean::cnstr_get(x_1331, 0);
x_1336 = lean::cnstr_get(x_1331, 1);
if (lean::is_exclusive(x_1331)) {
 x_1338 = x_1331;
} else {
 lean::inc(x_1334);
 lean::inc(x_1336);
 lean::dec(x_1331);
 x_1338 = lean::box(0);
}
x_1339 = l_lean_elaborator_to__pexpr___main___closed__40;
x_1340 = l_lean_elaborator_expr_mk__annotation(x_1339, x_1310);
x_1341 = lean_expr_mk_app(x_1340, x_1334);
if (lean::is_scalar(x_1338)) {
 x_1342 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1342 = x_1338;
}
lean::cnstr_set(x_1342, 0, x_1341);
lean::cnstr_set(x_1342, 1, x_1336);
x_14 = x_1342;
goto lbl_15;
}
}
else
{
obj* x_1343; obj* x_1345; obj* x_1348; obj* x_1351; obj* x_1354; obj* x_1358; 
x_1343 = lean::cnstr_get(x_1253, 0);
lean::inc(x_1343);
x_1345 = lean::cnstr_get(x_1253, 1);
lean::inc(x_1345);
lean::dec(x_1253);
x_1348 = lean::cnstr_get(x_1307, 0);
lean::inc(x_1348);
lean::dec(x_1307);
x_1351 = lean::cnstr_get(x_1348, 1);
lean::inc(x_1351);
lean::dec(x_1348);
x_1354 = lean::cnstr_get(x_1351, 1);
lean::inc(x_1354);
lean::dec(x_1351);
lean::inc(x_1);
x_1358 = l_lean_elaborator_to__pexpr___main(x_1354, x_1, x_1345);
if (lean::obj_tag(x_1358) == 0)
{
obj* x_1363; obj* x_1365; obj* x_1366; 
lean::dec(x_1343);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1363 = lean::cnstr_get(x_1358, 0);
if (lean::is_exclusive(x_1358)) {
 x_1365 = x_1358;
} else {
 lean::inc(x_1363);
 lean::dec(x_1358);
 x_1365 = lean::box(0);
}
if (lean::is_scalar(x_1365)) {
 x_1366 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1366 = x_1365;
}
lean::cnstr_set(x_1366, 0, x_1363);
return x_1366;
}
else
{
obj* x_1367; obj* x_1370; obj* x_1372; obj* x_1374; obj* x_1375; obj* x_1376; obj* x_1377; obj* x_1378; 
x_1367 = lean::cnstr_get(x_1358, 0);
lean::inc(x_1367);
lean::dec(x_1358);
x_1370 = lean::cnstr_get(x_1367, 0);
x_1372 = lean::cnstr_get(x_1367, 1);
if (lean::is_exclusive(x_1367)) {
 x_1374 = x_1367;
} else {
 lean::inc(x_1370);
 lean::inc(x_1372);
 lean::dec(x_1367);
 x_1374 = lean::box(0);
}
x_1375 = l_lean_elaborator_to__pexpr___main___closed__40;
x_1376 = l_lean_elaborator_expr_mk__annotation(x_1375, x_1343);
x_1377 = lean_expr_mk_app(x_1376, x_1370);
if (lean::is_scalar(x_1374)) {
 x_1378 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1378 = x_1374;
}
lean::cnstr_set(x_1378, 0, x_1377);
lean::cnstr_set(x_1378, 1, x_1372);
x_14 = x_1378;
goto lbl_15;
}
}
}
}
}
else
{
lean::dec(x_9);
lean::dec(x_7);
if (x_21 == 0)
{
obj* x_1381; 
x_1381 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1381) == 0)
{
obj* x_1383; obj* x_1384; obj* x_1385; 
lean::dec(x_1);
x_1383 = l_lean_elaborator_to__pexpr___main___closed__42;
x_1384 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1384, 0, x_1383);
lean::cnstr_set(x_1384, 1, x_2);
x_1385 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1385, 0, x_1384);
return x_1385;
}
else
{
obj* x_1386; obj* x_1389; obj* x_1392; obj* x_1395; obj* x_1396; obj* x_1397; obj* x_1399; obj* x_1400; obj* x_1401; obj* x_1404; obj* x_1405; obj* x_1406; obj* x_1407; obj* x_1408; obj* x_1409; 
x_1386 = lean::cnstr_get(x_1381, 0);
lean::inc(x_1386);
lean::dec(x_1381);
x_1389 = lean::cnstr_get(x_1, 0);
lean::inc(x_1389);
lean::dec(x_1);
x_1392 = lean::cnstr_get(x_1389, 2);
lean::inc(x_1392);
lean::dec(x_1389);
x_1395 = l_lean_file__map_to__position(x_1392, x_1386);
x_1396 = lean::box(0);
x_1397 = lean::cnstr_get(x_1395, 1);
lean::inc(x_1397);
x_1399 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1400 = l_lean_kvmap_set__nat(x_1396, x_1399, x_1397);
x_1401 = lean::cnstr_get(x_1395, 0);
lean::inc(x_1401);
lean::dec(x_1395);
x_1404 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1405 = l_lean_kvmap_set__nat(x_1400, x_1404, x_1401);
x_1406 = l_lean_elaborator_to__pexpr___main___closed__42;
x_1407 = lean_expr_mk_mdata(x_1405, x_1406);
x_1408 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1408, 0, x_1407);
lean::cnstr_set(x_1408, 1, x_2);
x_1409 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1409, 0, x_1408);
return x_1409;
}
}
else
{
obj* x_1412; obj* x_1413; obj* x_1414; 
lean::dec(x_1);
lean::dec(x_0);
x_1412 = l_lean_elaborator_to__pexpr___main___closed__42;
x_1413 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1413, 0, x_1412);
lean::cnstr_set(x_1413, 1, x_2);
x_1414 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1414, 0, x_1413);
return x_1414;
}
}
}
else
{
obj* x_1416; obj* x_1417; obj* x_1421; obj* x_1422; obj* x_1425; obj* x_1426; obj* x_1427; obj* x_1429; 
lean::dec(x_9);
x_1416 = l_lean_parser_term_anonymous__constructor_has__view;
x_1417 = lean::cnstr_get(x_1416, 0);
lean::inc(x_1417);
lean::dec(x_1416);
lean::inc(x_0);
x_1421 = lean::apply_1(x_1417, x_0);
x_1422 = lean::cnstr_get(x_1421, 1);
lean::inc(x_1422);
lean::dec(x_1421);
x_1425 = l_list_map___main___at_lean_elaborator_to__pexpr___main___spec__21(x_1422);
x_1426 = l_lean_expander_get__opt__type___main___closed__1;
x_1427 = l_list_foldl___main___at_lean_parser_term_mk__app___spec__1(x_1426, x_1425);
lean::inc(x_1);
x_1429 = l_lean_elaborator_to__pexpr___main(x_1427, x_1, x_2);
if (lean::obj_tag(x_1429) == 0)
{
obj* x_1433; obj* x_1435; obj* x_1436; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1433 = lean::cnstr_get(x_1429, 0);
if (lean::is_exclusive(x_1429)) {
 x_1435 = x_1429;
} else {
 lean::inc(x_1433);
 lean::dec(x_1429);
 x_1435 = lean::box(0);
}
if (lean::is_scalar(x_1435)) {
 x_1436 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1436 = x_1435;
}
lean::cnstr_set(x_1436, 0, x_1433);
return x_1436;
}
else
{
obj* x_1437; obj* x_1440; obj* x_1442; obj* x_1444; obj* x_1445; obj* x_1446; obj* x_1447; 
x_1437 = lean::cnstr_get(x_1429, 0);
lean::inc(x_1437);
lean::dec(x_1429);
x_1440 = lean::cnstr_get(x_1437, 0);
x_1442 = lean::cnstr_get(x_1437, 1);
if (lean::is_exclusive(x_1437)) {
 x_1444 = x_1437;
} else {
 lean::inc(x_1440);
 lean::inc(x_1442);
 lean::dec(x_1437);
 x_1444 = lean::box(0);
}
x_1445 = l_lean_elaborator_to__pexpr___main___closed__43;
x_1446 = l_lean_elaborator_expr_mk__annotation(x_1445, x_1440);
if (lean::is_scalar(x_1444)) {
 x_1447 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1447 = x_1444;
}
lean::cnstr_set(x_1447, 0, x_1446);
lean::cnstr_set(x_1447, 1, x_1442);
x_14 = x_1447;
goto lbl_15;
}
}
}
else
{
obj* x_1449; obj* x_1450; obj* x_1454; obj* x_1455; obj* x_1456; obj* x_1459; obj* x_1461; 
lean::dec(x_9);
x_1449 = l_lean_parser_term_sort__app_has__view;
x_1450 = lean::cnstr_get(x_1449, 0);
lean::inc(x_1450);
lean::dec(x_1449);
lean::inc(x_0);
x_1454 = lean::apply_1(x_1450, x_0);
x_1455 = l_lean_parser_term_sort_has__view;
x_1456 = lean::cnstr_get(x_1455, 0);
lean::inc(x_1456);
lean::dec(x_1455);
x_1459 = lean::cnstr_get(x_1454, 0);
lean::inc(x_1459);
x_1461 = lean::apply_1(x_1456, x_1459);
if (lean::obj_tag(x_1461) == 0)
{
obj* x_1463; obj* x_1467; 
lean::dec(x_1461);
x_1463 = lean::cnstr_get(x_1454, 1);
lean::inc(x_1463);
lean::dec(x_1454);
lean::inc(x_1);
x_1467 = l_lean_elaborator_to__level___main(x_1463, x_1, x_2);
if (lean::obj_tag(x_1467) == 0)
{
obj* x_1471; obj* x_1473; obj* x_1474; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1471 = lean::cnstr_get(x_1467, 0);
if (lean::is_exclusive(x_1467)) {
 x_1473 = x_1467;
} else {
 lean::inc(x_1471);
 lean::dec(x_1467);
 x_1473 = lean::box(0);
}
if (lean::is_scalar(x_1473)) {
 x_1474 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1474 = x_1473;
}
lean::cnstr_set(x_1474, 0, x_1471);
return x_1474;
}
else
{
obj* x_1475; obj* x_1478; obj* x_1480; obj* x_1482; obj* x_1483; obj* x_1484; 
x_1475 = lean::cnstr_get(x_1467, 0);
lean::inc(x_1475);
lean::dec(x_1467);
x_1478 = lean::cnstr_get(x_1475, 0);
x_1480 = lean::cnstr_get(x_1475, 1);
if (lean::is_exclusive(x_1475)) {
 x_1482 = x_1475;
} else {
 lean::inc(x_1478);
 lean::inc(x_1480);
 lean::dec(x_1475);
 x_1482 = lean::box(0);
}
x_1483 = lean_expr_mk_sort(x_1478);
if (lean::is_scalar(x_1482)) {
 x_1484 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1484 = x_1482;
}
lean::cnstr_set(x_1484, 0, x_1483);
lean::cnstr_set(x_1484, 1, x_1480);
x_14 = x_1484;
goto lbl_15;
}
}
else
{
obj* x_1486; obj* x_1490; 
lean::dec(x_1461);
x_1486 = lean::cnstr_get(x_1454, 1);
lean::inc(x_1486);
lean::dec(x_1454);
lean::inc(x_1);
x_1490 = l_lean_elaborator_to__level___main(x_1486, x_1, x_2);
if (lean::obj_tag(x_1490) == 0)
{
obj* x_1494; obj* x_1496; obj* x_1497; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1494 = lean::cnstr_get(x_1490, 0);
if (lean::is_exclusive(x_1490)) {
 x_1496 = x_1490;
} else {
 lean::inc(x_1494);
 lean::dec(x_1490);
 x_1496 = lean::box(0);
}
if (lean::is_scalar(x_1496)) {
 x_1497 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1497 = x_1496;
}
lean::cnstr_set(x_1497, 0, x_1494);
return x_1497;
}
else
{
obj* x_1498; obj* x_1501; obj* x_1503; obj* x_1505; obj* x_1506; obj* x_1507; obj* x_1508; 
x_1498 = lean::cnstr_get(x_1490, 0);
lean::inc(x_1498);
lean::dec(x_1490);
x_1501 = lean::cnstr_get(x_1498, 0);
x_1503 = lean::cnstr_get(x_1498, 1);
if (lean::is_exclusive(x_1498)) {
 x_1505 = x_1498;
} else {
 lean::inc(x_1501);
 lean::inc(x_1503);
 lean::dec(x_1498);
 x_1505 = lean::box(0);
}
x_1506 = level_mk_succ(x_1501);
x_1507 = lean_expr_mk_sort(x_1506);
if (lean::is_scalar(x_1505)) {
 x_1508 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1508 = x_1505;
}
lean::cnstr_set(x_1508, 0, x_1507);
lean::cnstr_set(x_1508, 1, x_1503);
x_14 = x_1508;
goto lbl_15;
}
}
}
}
else
{
obj* x_1511; obj* x_1512; obj* x_1516; 
lean::dec(x_9);
lean::dec(x_7);
x_1511 = l_lean_parser_term_sort_has__view;
x_1512 = lean::cnstr_get(x_1511, 0);
lean::inc(x_1512);
lean::dec(x_1511);
lean::inc(x_0);
x_1516 = lean::apply_1(x_1512, x_0);
if (lean::obj_tag(x_1516) == 0)
{
lean::dec(x_1516);
if (x_21 == 0)
{
obj* x_1518; 
x_1518 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1518) == 0)
{
obj* x_1520; obj* x_1521; obj* x_1522; 
lean::dec(x_1);
x_1520 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1521 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1521, 0, x_1520);
lean::cnstr_set(x_1521, 1, x_2);
x_1522 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1522, 0, x_1521);
return x_1522;
}
else
{
obj* x_1523; obj* x_1526; obj* x_1529; obj* x_1532; obj* x_1533; obj* x_1534; obj* x_1536; obj* x_1537; obj* x_1538; obj* x_1541; obj* x_1542; obj* x_1543; obj* x_1544; obj* x_1545; obj* x_1546; 
x_1523 = lean::cnstr_get(x_1518, 0);
lean::inc(x_1523);
lean::dec(x_1518);
x_1526 = lean::cnstr_get(x_1, 0);
lean::inc(x_1526);
lean::dec(x_1);
x_1529 = lean::cnstr_get(x_1526, 2);
lean::inc(x_1529);
lean::dec(x_1526);
x_1532 = l_lean_file__map_to__position(x_1529, x_1523);
x_1533 = lean::box(0);
x_1534 = lean::cnstr_get(x_1532, 1);
lean::inc(x_1534);
x_1536 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1537 = l_lean_kvmap_set__nat(x_1533, x_1536, x_1534);
x_1538 = lean::cnstr_get(x_1532, 0);
lean::inc(x_1538);
lean::dec(x_1532);
x_1541 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1542 = l_lean_kvmap_set__nat(x_1537, x_1541, x_1538);
x_1543 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1544 = lean_expr_mk_mdata(x_1542, x_1543);
x_1545 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1545, 0, x_1544);
lean::cnstr_set(x_1545, 1, x_2);
x_1546 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1546, 0, x_1545);
return x_1546;
}
}
else
{
obj* x_1549; obj* x_1550; obj* x_1551; 
lean::dec(x_1);
lean::dec(x_0);
x_1549 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1;
x_1550 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1550, 0, x_1549);
lean::cnstr_set(x_1550, 1, x_2);
x_1551 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1551, 0, x_1550);
return x_1551;
}
}
else
{
lean::dec(x_1516);
if (x_21 == 0)
{
obj* x_1553; 
x_1553 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1553) == 0)
{
obj* x_1555; obj* x_1556; obj* x_1557; 
lean::dec(x_1);
x_1555 = l_lean_elaborator_to__pexpr___main___closed__44;
x_1556 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1556, 0, x_1555);
lean::cnstr_set(x_1556, 1, x_2);
x_1557 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1557, 0, x_1556);
return x_1557;
}
else
{
obj* x_1558; obj* x_1561; obj* x_1564; obj* x_1567; obj* x_1568; obj* x_1569; obj* x_1571; obj* x_1572; obj* x_1573; obj* x_1576; obj* x_1577; obj* x_1578; obj* x_1579; obj* x_1580; obj* x_1581; 
x_1558 = lean::cnstr_get(x_1553, 0);
lean::inc(x_1558);
lean::dec(x_1553);
x_1561 = lean::cnstr_get(x_1, 0);
lean::inc(x_1561);
lean::dec(x_1);
x_1564 = lean::cnstr_get(x_1561, 2);
lean::inc(x_1564);
lean::dec(x_1561);
x_1567 = l_lean_file__map_to__position(x_1564, x_1558);
x_1568 = lean::box(0);
x_1569 = lean::cnstr_get(x_1567, 1);
lean::inc(x_1569);
x_1571 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1572 = l_lean_kvmap_set__nat(x_1568, x_1571, x_1569);
x_1573 = lean::cnstr_get(x_1567, 0);
lean::inc(x_1573);
lean::dec(x_1567);
x_1576 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1577 = l_lean_kvmap_set__nat(x_1572, x_1576, x_1573);
x_1578 = l_lean_elaborator_to__pexpr___main___closed__44;
x_1579 = lean_expr_mk_mdata(x_1577, x_1578);
x_1580 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1580, 0, x_1579);
lean::cnstr_set(x_1580, 1, x_2);
x_1581 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1581, 0, x_1580);
return x_1581;
}
}
else
{
obj* x_1584; obj* x_1585; obj* x_1586; 
lean::dec(x_1);
lean::dec(x_0);
x_1584 = l_lean_elaborator_to__pexpr___main___closed__44;
x_1585 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1585, 0, x_1584);
lean::cnstr_set(x_1585, 1, x_2);
x_1586 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1586, 0, x_1585);
return x_1586;
}
}
}
}
else
{
obj* x_1588; obj* x_1589; obj* x_1593; obj* x_1594; 
lean::dec(x_9);
x_1588 = l_lean_parser_term_pi_has__view;
x_1589 = lean::cnstr_get(x_1588, 0);
lean::inc(x_1589);
lean::dec(x_1588);
lean::inc(x_0);
x_1593 = lean::apply_1(x_1589, x_0);
x_1594 = lean::cnstr_get(x_1593, 1);
lean::inc(x_1594);
if (lean::obj_tag(x_1594) == 0)
{
obj* x_1598; obj* x_1601; 
lean::dec(x_1594);
lean::dec(x_1593);
x_1598 = l_lean_elaborator_to__pexpr___main___closed__45;
lean::inc(x_1);
lean::inc(x_0);
x_1601 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1598, x_1, x_2);
if (lean::obj_tag(x_1601) == 0)
{
obj* x_1605; obj* x_1607; obj* x_1608; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1605 = lean::cnstr_get(x_1601, 0);
if (lean::is_exclusive(x_1601)) {
 x_1607 = x_1601;
} else {
 lean::inc(x_1605);
 lean::dec(x_1601);
 x_1607 = lean::box(0);
}
if (lean::is_scalar(x_1607)) {
 x_1608 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1608 = x_1607;
}
lean::cnstr_set(x_1608, 0, x_1605);
return x_1608;
}
else
{
obj* x_1609; 
x_1609 = lean::cnstr_get(x_1601, 0);
lean::inc(x_1609);
lean::dec(x_1601);
x_14 = x_1609;
goto lbl_15;
}
}
else
{
obj* x_1612; obj* x_1615; obj* x_1616; obj* x_1618; obj* x_1621; obj* x_1623; obj* x_1627; 
x_1612 = lean::cnstr_get(x_1594, 0);
lean::inc(x_1612);
lean::dec(x_1594);
x_1615 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1612);
x_1616 = lean::cnstr_get(x_1615, 1);
lean::inc(x_1616);
x_1618 = lean::cnstr_get(x_1615, 0);
lean::inc(x_1618);
lean::dec(x_1615);
x_1621 = lean::cnstr_get(x_1616, 0);
lean::inc(x_1621);
x_1623 = lean::cnstr_get(x_1616, 1);
lean::inc(x_1623);
lean::dec(x_1616);
lean::inc(x_1);
x_1627 = l_lean_elaborator_to__pexpr___main(x_1623, x_1, x_2);
if (lean::obj_tag(x_1627) == 0)
{
obj* x_1634; obj* x_1636; obj* x_1637; 
lean::dec(x_1593);
lean::dec(x_1621);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1618);
x_1634 = lean::cnstr_get(x_1627, 0);
if (lean::is_exclusive(x_1627)) {
 x_1636 = x_1627;
} else {
 lean::inc(x_1634);
 lean::dec(x_1627);
 x_1636 = lean::box(0);
}
if (lean::is_scalar(x_1636)) {
 x_1637 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1637 = x_1636;
}
lean::cnstr_set(x_1637, 0, x_1634);
return x_1637;
}
else
{
obj* x_1638; obj* x_1641; obj* x_1643; obj* x_1646; obj* x_1650; 
x_1638 = lean::cnstr_get(x_1627, 0);
lean::inc(x_1638);
lean::dec(x_1627);
x_1641 = lean::cnstr_get(x_1638, 0);
lean::inc(x_1641);
x_1643 = lean::cnstr_get(x_1638, 1);
lean::inc(x_1643);
lean::dec(x_1638);
x_1646 = lean::cnstr_get(x_1593, 3);
lean::inc(x_1646);
lean::dec(x_1593);
lean::inc(x_1);
x_1650 = l_lean_elaborator_to__pexpr___main(x_1646, x_1, x_1643);
if (lean::obj_tag(x_1650) == 0)
{
obj* x_1657; obj* x_1659; obj* x_1660; 
lean::dec(x_1621);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1641);
lean::dec(x_1618);
x_1657 = lean::cnstr_get(x_1650, 0);
if (lean::is_exclusive(x_1650)) {
 x_1659 = x_1650;
} else {
 lean::inc(x_1657);
 lean::dec(x_1650);
 x_1659 = lean::box(0);
}
if (lean::is_scalar(x_1659)) {
 x_1660 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1660 = x_1659;
}
lean::cnstr_set(x_1660, 0, x_1657);
return x_1660;
}
else
{
obj* x_1661; obj* x_1664; obj* x_1666; obj* x_1668; obj* x_1669; uint8 x_1670; obj* x_1671; obj* x_1672; 
x_1661 = lean::cnstr_get(x_1650, 0);
lean::inc(x_1661);
lean::dec(x_1650);
x_1664 = lean::cnstr_get(x_1661, 0);
x_1666 = lean::cnstr_get(x_1661, 1);
if (lean::is_exclusive(x_1661)) {
 x_1668 = x_1661;
} else {
 lean::inc(x_1664);
 lean::inc(x_1666);
 lean::dec(x_1661);
 x_1668 = lean::box(0);
}
x_1669 = l_lean_elaborator_mangle__ident(x_1621);
x_1670 = lean::unbox(x_1618);
x_1671 = lean_expr_mk_pi(x_1669, x_1670, x_1641, x_1664);
if (lean::is_scalar(x_1668)) {
 x_1672 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1672 = x_1668;
}
lean::cnstr_set(x_1672, 0, x_1671);
lean::cnstr_set(x_1672, 1, x_1666);
x_14 = x_1672;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1674; obj* x_1675; obj* x_1679; obj* x_1680; 
lean::dec(x_9);
x_1674 = l_lean_parser_term_lambda_has__view;
x_1675 = lean::cnstr_get(x_1674, 0);
lean::inc(x_1675);
lean::dec(x_1674);
lean::inc(x_0);
x_1679 = lean::apply_1(x_1675, x_0);
x_1680 = lean::cnstr_get(x_1679, 1);
lean::inc(x_1680);
if (lean::obj_tag(x_1680) == 0)
{
obj* x_1684; obj* x_1687; 
lean::dec(x_1679);
lean::dec(x_1680);
x_1684 = l_lean_elaborator_to__pexpr___main___closed__46;
lean::inc(x_1);
lean::inc(x_0);
x_1687 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1684, x_1, x_2);
if (lean::obj_tag(x_1687) == 0)
{
obj* x_1691; obj* x_1693; obj* x_1694; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1691 = lean::cnstr_get(x_1687, 0);
if (lean::is_exclusive(x_1687)) {
 x_1693 = x_1687;
} else {
 lean::inc(x_1691);
 lean::dec(x_1687);
 x_1693 = lean::box(0);
}
if (lean::is_scalar(x_1693)) {
 x_1694 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1694 = x_1693;
}
lean::cnstr_set(x_1694, 0, x_1691);
return x_1694;
}
else
{
obj* x_1695; 
x_1695 = lean::cnstr_get(x_1687, 0);
lean::inc(x_1695);
lean::dec(x_1687);
x_14 = x_1695;
goto lbl_15;
}
}
else
{
obj* x_1698; obj* x_1701; obj* x_1702; obj* x_1704; obj* x_1707; obj* x_1709; obj* x_1713; 
x_1698 = lean::cnstr_get(x_1680, 0);
lean::inc(x_1698);
lean::dec(x_1680);
x_1701 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_1698);
x_1702 = lean::cnstr_get(x_1701, 1);
lean::inc(x_1702);
x_1704 = lean::cnstr_get(x_1701, 0);
lean::inc(x_1704);
lean::dec(x_1701);
x_1707 = lean::cnstr_get(x_1702, 0);
lean::inc(x_1707);
x_1709 = lean::cnstr_get(x_1702, 1);
lean::inc(x_1709);
lean::dec(x_1702);
lean::inc(x_1);
x_1713 = l_lean_elaborator_to__pexpr___main(x_1709, x_1, x_2);
if (lean::obj_tag(x_1713) == 0)
{
obj* x_1720; obj* x_1722; obj* x_1723; 
lean::dec(x_1707);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1679);
lean::dec(x_1704);
x_1720 = lean::cnstr_get(x_1713, 0);
if (lean::is_exclusive(x_1713)) {
 x_1722 = x_1713;
} else {
 lean::inc(x_1720);
 lean::dec(x_1713);
 x_1722 = lean::box(0);
}
if (lean::is_scalar(x_1722)) {
 x_1723 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1723 = x_1722;
}
lean::cnstr_set(x_1723, 0, x_1720);
return x_1723;
}
else
{
obj* x_1724; obj* x_1727; obj* x_1729; obj* x_1732; obj* x_1736; 
x_1724 = lean::cnstr_get(x_1713, 0);
lean::inc(x_1724);
lean::dec(x_1713);
x_1727 = lean::cnstr_get(x_1724, 0);
lean::inc(x_1727);
x_1729 = lean::cnstr_get(x_1724, 1);
lean::inc(x_1729);
lean::dec(x_1724);
x_1732 = lean::cnstr_get(x_1679, 3);
lean::inc(x_1732);
lean::dec(x_1679);
lean::inc(x_1);
x_1736 = l_lean_elaborator_to__pexpr___main(x_1732, x_1, x_1729);
if (lean::obj_tag(x_1736) == 0)
{
obj* x_1743; obj* x_1745; obj* x_1746; 
lean::dec(x_1707);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1727);
lean::dec(x_1704);
x_1743 = lean::cnstr_get(x_1736, 0);
if (lean::is_exclusive(x_1736)) {
 x_1745 = x_1736;
} else {
 lean::inc(x_1743);
 lean::dec(x_1736);
 x_1745 = lean::box(0);
}
if (lean::is_scalar(x_1745)) {
 x_1746 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1746 = x_1745;
}
lean::cnstr_set(x_1746, 0, x_1743);
return x_1746;
}
else
{
obj* x_1747; obj* x_1750; obj* x_1752; obj* x_1754; obj* x_1755; uint8 x_1756; obj* x_1757; obj* x_1758; 
x_1747 = lean::cnstr_get(x_1736, 0);
lean::inc(x_1747);
lean::dec(x_1736);
x_1750 = lean::cnstr_get(x_1747, 0);
x_1752 = lean::cnstr_get(x_1747, 1);
if (lean::is_exclusive(x_1747)) {
 x_1754 = x_1747;
} else {
 lean::inc(x_1750);
 lean::inc(x_1752);
 lean::dec(x_1747);
 x_1754 = lean::box(0);
}
x_1755 = l_lean_elaborator_mangle__ident(x_1707);
x_1756 = lean::unbox(x_1704);
x_1757 = lean_expr_mk_lambda(x_1755, x_1756, x_1727, x_1750);
if (lean::is_scalar(x_1754)) {
 x_1758 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1758 = x_1754;
}
lean::cnstr_set(x_1758, 0, x_1757);
lean::cnstr_set(x_1758, 1, x_1752);
x_14 = x_1758;
goto lbl_15;
}
}
}
}
}
else
{
obj* x_1760; obj* x_1761; obj* x_1765; obj* x_1766; obj* x_1769; 
lean::dec(x_9);
x_1760 = l_lean_parser_term_app_has__view;
x_1761 = lean::cnstr_get(x_1760, 0);
lean::inc(x_1761);
lean::dec(x_1760);
lean::inc(x_0);
x_1765 = lean::apply_1(x_1761, x_0);
x_1766 = lean::cnstr_get(x_1765, 0);
lean::inc(x_1766);
lean::inc(x_1);
x_1769 = l_lean_elaborator_to__pexpr___main(x_1766, x_1, x_2);
if (lean::obj_tag(x_1769) == 0)
{
obj* x_1774; obj* x_1776; obj* x_1777; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1765);
x_1774 = lean::cnstr_get(x_1769, 0);
if (lean::is_exclusive(x_1769)) {
 x_1776 = x_1769;
} else {
 lean::inc(x_1774);
 lean::dec(x_1769);
 x_1776 = lean::box(0);
}
if (lean::is_scalar(x_1776)) {
 x_1777 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1777 = x_1776;
}
lean::cnstr_set(x_1777, 0, x_1774);
return x_1777;
}
else
{
obj* x_1778; obj* x_1781; obj* x_1783; obj* x_1786; obj* x_1790; 
x_1778 = lean::cnstr_get(x_1769, 0);
lean::inc(x_1778);
lean::dec(x_1769);
x_1781 = lean::cnstr_get(x_1778, 0);
lean::inc(x_1781);
x_1783 = lean::cnstr_get(x_1778, 1);
lean::inc(x_1783);
lean::dec(x_1778);
x_1786 = lean::cnstr_get(x_1765, 1);
lean::inc(x_1786);
lean::dec(x_1765);
lean::inc(x_1);
x_1790 = l_lean_elaborator_to__pexpr___main(x_1786, x_1, x_1783);
if (lean::obj_tag(x_1790) == 0)
{
obj* x_1795; obj* x_1797; obj* x_1798; 
lean::dec(x_1781);
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1795 = lean::cnstr_get(x_1790, 0);
if (lean::is_exclusive(x_1790)) {
 x_1797 = x_1790;
} else {
 lean::inc(x_1795);
 lean::dec(x_1790);
 x_1797 = lean::box(0);
}
if (lean::is_scalar(x_1797)) {
 x_1798 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1798 = x_1797;
}
lean::cnstr_set(x_1798, 0, x_1795);
return x_1798;
}
else
{
obj* x_1799; obj* x_1802; obj* x_1804; obj* x_1806; obj* x_1807; obj* x_1808; 
x_1799 = lean::cnstr_get(x_1790, 0);
lean::inc(x_1799);
lean::dec(x_1790);
x_1802 = lean::cnstr_get(x_1799, 0);
x_1804 = lean::cnstr_get(x_1799, 1);
if (lean::is_exclusive(x_1799)) {
 x_1806 = x_1799;
} else {
 lean::inc(x_1802);
 lean::inc(x_1804);
 lean::dec(x_1799);
 x_1806 = lean::box(0);
}
x_1807 = lean_expr_mk_app(x_1781, x_1802);
if (lean::is_scalar(x_1806)) {
 x_1808 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1808 = x_1806;
}
lean::cnstr_set(x_1808, 0, x_1807);
lean::cnstr_set(x_1808, 1, x_1804);
x_14 = x_1808;
goto lbl_15;
}
}
}
}
else
{
obj* x_1810; obj* x_1811; obj* x_1815; obj* x_1816; 
lean::dec(x_9);
x_1810 = l_lean_parser_ident__univs_has__view;
x_1811 = lean::cnstr_get(x_1810, 0);
lean::inc(x_1811);
lean::dec(x_1810);
lean::inc(x_0);
x_1815 = lean::apply_1(x_1811, x_0);
x_1816 = lean::cnstr_get(x_1815, 1);
lean::inc(x_1816);
if (lean::obj_tag(x_1816) == 0)
{
obj* x_1818; obj* x_1822; obj* x_1823; obj* x_1824; obj* x_1825; obj* x_1828; obj* x_1829; obj* x_1830; obj* x_1831; obj* x_1832; obj* x_1833; uint8 x_1834; 
x_1818 = lean::cnstr_get(x_1815, 0);
lean::inc(x_1818);
lean::dec(x_1815);
lean::inc(x_1818);
x_1822 = l_lean_elaborator_mangle__ident(x_1818);
x_1823 = lean::box(0);
x_1824 = lean_expr_mk_const(x_1822, x_1823);
x_1825 = lean::cnstr_get(x_1818, 3);
lean::inc(x_1825);
lean::dec(x_1818);
x_1828 = lean::mk_nat_obj(0u);
x_1829 = l_list_enum__from___main___rarg(x_1828, x_1825);
x_1830 = l_lean_elaborator_to__pexpr___main___closed__47;
x_1831 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__22(x_1830, x_1829);
x_1832 = lean_expr_mk_mdata(x_1831, x_1824);
x_1833 = l_lean_elaborator_to__pexpr___main___closed__2;
x_1834 = lean_name_dec_eq(x_7, x_1833);
lean::dec(x_7);
if (x_1834 == 0)
{
obj* x_1836; 
x_1836 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1836) == 0)
{
obj* x_1838; obj* x_1839; 
lean::dec(x_1);
x_1838 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1838, 0, x_1832);
lean::cnstr_set(x_1838, 1, x_2);
x_1839 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1839, 0, x_1838);
return x_1839;
}
else
{
obj* x_1840; obj* x_1843; obj* x_1846; obj* x_1849; obj* x_1850; obj* x_1852; obj* x_1853; obj* x_1854; obj* x_1857; obj* x_1858; obj* x_1859; obj* x_1860; obj* x_1861; 
x_1840 = lean::cnstr_get(x_1836, 0);
lean::inc(x_1840);
lean::dec(x_1836);
x_1843 = lean::cnstr_get(x_1, 0);
lean::inc(x_1843);
lean::dec(x_1);
x_1846 = lean::cnstr_get(x_1843, 2);
lean::inc(x_1846);
lean::dec(x_1843);
x_1849 = l_lean_file__map_to__position(x_1846, x_1840);
x_1850 = lean::cnstr_get(x_1849, 1);
lean::inc(x_1850);
x_1852 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1853 = l_lean_kvmap_set__nat(x_1823, x_1852, x_1850);
x_1854 = lean::cnstr_get(x_1849, 0);
lean::inc(x_1854);
lean::dec(x_1849);
x_1857 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1858 = l_lean_kvmap_set__nat(x_1853, x_1857, x_1854);
x_1859 = lean_expr_mk_mdata(x_1858, x_1832);
x_1860 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1860, 0, x_1859);
lean::cnstr_set(x_1860, 1, x_2);
x_1861 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1861, 0, x_1860);
return x_1861;
}
}
else
{
obj* x_1864; obj* x_1865; 
lean::dec(x_1);
lean::dec(x_0);
x_1864 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_1864, 0, x_1832);
lean::cnstr_set(x_1864, 1, x_2);
x_1865 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1865, 0, x_1864);
return x_1865;
}
}
else
{
obj* x_1866; obj* x_1869; obj* x_1872; obj* x_1876; 
x_1866 = lean::cnstr_get(x_1815, 0);
lean::inc(x_1866);
lean::dec(x_1815);
x_1869 = lean::cnstr_get(x_1816, 0);
lean::inc(x_1869);
lean::dec(x_1816);
x_1872 = lean::cnstr_get(x_1869, 1);
lean::inc(x_1872);
lean::dec(x_1869);
lean::inc(x_1);
x_1876 = l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__23(x_1872, x_1, x_2);
if (lean::obj_tag(x_1876) == 0)
{
obj* x_1881; obj* x_1883; obj* x_1884; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_1866);
x_1881 = lean::cnstr_get(x_1876, 0);
if (lean::is_exclusive(x_1876)) {
 x_1883 = x_1876;
} else {
 lean::inc(x_1881);
 lean::dec(x_1876);
 x_1883 = lean::box(0);
}
if (lean::is_scalar(x_1883)) {
 x_1884 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1884 = x_1883;
}
lean::cnstr_set(x_1884, 0, x_1881);
return x_1884;
}
else
{
obj* x_1885; obj* x_1888; obj* x_1890; obj* x_1892; obj* x_1894; obj* x_1895; obj* x_1896; obj* x_1899; obj* x_1900; obj* x_1901; obj* x_1902; obj* x_1903; obj* x_1904; 
x_1885 = lean::cnstr_get(x_1876, 0);
lean::inc(x_1885);
lean::dec(x_1876);
x_1888 = lean::cnstr_get(x_1885, 0);
x_1890 = lean::cnstr_get(x_1885, 1);
if (lean::is_exclusive(x_1885)) {
 x_1892 = x_1885;
} else {
 lean::inc(x_1888);
 lean::inc(x_1890);
 lean::dec(x_1885);
 x_1892 = lean::box(0);
}
lean::inc(x_1866);
x_1894 = l_lean_elaborator_mangle__ident(x_1866);
x_1895 = lean_expr_mk_const(x_1894, x_1888);
x_1896 = lean::cnstr_get(x_1866, 3);
lean::inc(x_1896);
lean::dec(x_1866);
x_1899 = lean::mk_nat_obj(0u);
x_1900 = l_list_enum__from___main___rarg(x_1899, x_1896);
x_1901 = l_lean_elaborator_to__pexpr___main___closed__47;
x_1902 = l_list_foldl___main___at_lean_elaborator_to__pexpr___main___spec__24(x_1901, x_1900);
x_1903 = lean_expr_mk_mdata(x_1902, x_1895);
if (lean::is_scalar(x_1892)) {
 x_1904 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1904 = x_1892;
}
lean::cnstr_set(x_1904, 0, x_1903);
lean::cnstr_set(x_1904, 1, x_1890);
x_14 = x_1904;
goto lbl_15;
}
}
}
lbl_13:
{
if (lean::obj_tag(x_12) == 0)
{
obj* x_1908; obj* x_1910; obj* x_1911; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_1908 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_1910 = x_12;
} else {
 lean::inc(x_1908);
 lean::dec(x_12);
 x_1910 = lean::box(0);
}
if (lean::is_scalar(x_1910)) {
 x_1911 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_1911 = x_1910;
}
lean::cnstr_set(x_1911, 0, x_1908);
return x_1911;
}
else
{
obj* x_1912; obj* x_1914; obj* x_1915; obj* x_1917; obj* x_1919; obj* x_1920; uint8 x_1921; 
x_1912 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_set(x_12, 0, lean::box(0));
 x_1914 = x_12;
} else {
 lean::inc(x_1912);
 lean::dec(x_12);
 x_1914 = lean::box(0);
}
x_1915 = lean::cnstr_get(x_1912, 0);
x_1917 = lean::cnstr_get(x_1912, 1);
if (lean::is_exclusive(x_1912)) {
 lean::cnstr_set(x_1912, 0, lean::box(0));
 lean::cnstr_set(x_1912, 1, lean::box(0));
 x_1919 = x_1912;
} else {
 lean::inc(x_1915);
 lean::inc(x_1917);
 lean::dec(x_1912);
 x_1919 = lean::box(0);
}
x_1920 = l_lean_elaborator_to__pexpr___main___closed__2;
x_1921 = lean_name_dec_eq(x_7, x_1920);
lean::dec(x_7);
if (x_1921 == 0)
{
obj* x_1923; 
x_1923 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1923) == 0)
{
obj* x_1925; obj* x_1926; 
lean::dec(x_1);
if (lean::is_scalar(x_1919)) {
 x_1925 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1925 = x_1919;
}
lean::cnstr_set(x_1925, 0, x_1915);
lean::cnstr_set(x_1925, 1, x_1917);
if (lean::is_scalar(x_1914)) {
 x_1926 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1926 = x_1914;
}
lean::cnstr_set(x_1926, 0, x_1925);
return x_1926;
}
else
{
obj* x_1927; obj* x_1930; obj* x_1933; obj* x_1936; obj* x_1937; obj* x_1938; obj* x_1940; obj* x_1941; obj* x_1942; obj* x_1945; obj* x_1946; obj* x_1947; obj* x_1948; obj* x_1949; 
x_1927 = lean::cnstr_get(x_1923, 0);
lean::inc(x_1927);
lean::dec(x_1923);
x_1930 = lean::cnstr_get(x_1, 0);
lean::inc(x_1930);
lean::dec(x_1);
x_1933 = lean::cnstr_get(x_1930, 2);
lean::inc(x_1933);
lean::dec(x_1930);
x_1936 = l_lean_file__map_to__position(x_1933, x_1927);
x_1937 = lean::box(0);
x_1938 = lean::cnstr_get(x_1936, 1);
lean::inc(x_1938);
x_1940 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1941 = l_lean_kvmap_set__nat(x_1937, x_1940, x_1938);
x_1942 = lean::cnstr_get(x_1936, 0);
lean::inc(x_1942);
lean::dec(x_1936);
x_1945 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1946 = l_lean_kvmap_set__nat(x_1941, x_1945, x_1942);
x_1947 = lean_expr_mk_mdata(x_1946, x_1915);
if (lean::is_scalar(x_1919)) {
 x_1948 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1948 = x_1919;
}
lean::cnstr_set(x_1948, 0, x_1947);
lean::cnstr_set(x_1948, 1, x_1917);
if (lean::is_scalar(x_1914)) {
 x_1949 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1949 = x_1914;
}
lean::cnstr_set(x_1949, 0, x_1948);
return x_1949;
}
}
else
{
obj* x_1952; obj* x_1953; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_1919)) {
 x_1952 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1952 = x_1919;
}
lean::cnstr_set(x_1952, 0, x_1915);
lean::cnstr_set(x_1952, 1, x_1917);
if (lean::is_scalar(x_1914)) {
 x_1953 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_1953 = x_1914;
}
lean::cnstr_set(x_1953, 0, x_1952);
return x_1953;
}
}
}
lbl_15:
{
obj* x_1954; obj* x_1956; obj* x_1958; obj* x_1959; uint8 x_1960; 
x_1954 = lean::cnstr_get(x_14, 0);
x_1956 = lean::cnstr_get(x_14, 1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_set(x_14, 0, lean::box(0));
 lean::cnstr_set(x_14, 1, lean::box(0));
 x_1958 = x_14;
} else {
 lean::inc(x_1954);
 lean::inc(x_1956);
 lean::dec(x_14);
 x_1958 = lean::box(0);
}
x_1959 = l_lean_elaborator_to__pexpr___main___closed__2;
x_1960 = lean_name_dec_eq(x_7, x_1959);
lean::dec(x_7);
if (x_1960 == 0)
{
obj* x_1962; 
x_1962 = l_lean_parser_syntax_get__pos(x_0);
if (lean::obj_tag(x_1962) == 0)
{
obj* x_1964; obj* x_1965; 
lean::dec(x_1);
if (lean::is_scalar(x_1958)) {
 x_1964 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1964 = x_1958;
}
lean::cnstr_set(x_1964, 0, x_1954);
lean::cnstr_set(x_1964, 1, x_1956);
x_1965 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1965, 0, x_1964);
return x_1965;
}
else
{
obj* x_1966; obj* x_1969; obj* x_1972; obj* x_1975; obj* x_1976; obj* x_1977; obj* x_1979; obj* x_1980; obj* x_1981; obj* x_1984; obj* x_1985; obj* x_1986; obj* x_1987; obj* x_1988; 
x_1966 = lean::cnstr_get(x_1962, 0);
lean::inc(x_1966);
lean::dec(x_1962);
x_1969 = lean::cnstr_get(x_1, 0);
lean::inc(x_1969);
lean::dec(x_1);
x_1972 = lean::cnstr_get(x_1969, 2);
lean::inc(x_1972);
lean::dec(x_1969);
x_1975 = l_lean_file__map_to__position(x_1972, x_1966);
x_1976 = lean::box(0);
x_1977 = lean::cnstr_get(x_1975, 1);
lean::inc(x_1977);
x_1979 = l_lean_elaborator_to__pexpr___main___closed__3;
x_1980 = l_lean_kvmap_set__nat(x_1976, x_1979, x_1977);
x_1981 = lean::cnstr_get(x_1975, 0);
lean::inc(x_1981);
lean::dec(x_1975);
x_1984 = l_lean_elaborator_to__pexpr___main___closed__4;
x_1985 = l_lean_kvmap_set__nat(x_1980, x_1984, x_1981);
x_1986 = lean_expr_mk_mdata(x_1985, x_1954);
if (lean::is_scalar(x_1958)) {
 x_1987 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1987 = x_1958;
}
lean::cnstr_set(x_1987, 0, x_1986);
lean::cnstr_set(x_1987, 1, x_1956);
x_1988 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1988, 0, x_1987);
return x_1988;
}
}
else
{
obj* x_1991; obj* x_1992; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_1958)) {
 x_1991 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_1991 = x_1958;
}
lean::cnstr_set(x_1991, 0, x_1954);
lean::cnstr_set(x_1991, 1, x_1956);
x_1992 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1992, 0, x_1991);
return x_1992;
}
}
lbl_17:
{
obj* x_1993; 
x_1993 = lean::cnstr_get(x_16, 0);
lean::inc(x_1993);
if (lean::obj_tag(x_1993) == 0)
{
obj* x_1996; obj* x_1999; obj* x_2002; 
lean::dec(x_9);
x_1996 = lean::cnstr_get(x_16, 1);
lean::inc(x_1996);
lean::dec(x_16);
x_1999 = l_lean_elaborator_to__pexpr___main___closed__5;
lean::inc(x_1);
lean::inc(x_0);
x_2002 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_1999, x_1, x_1996);
if (lean::obj_tag(x_2002) == 0)
{
obj* x_2006; obj* x_2008; obj* x_2009; 
lean::dec(x_7);
lean::dec(x_1);
lean::dec(x_0);
x_2006 = lean::cnstr_get(x_2002, 0);
if (lean::is_exclusive(x_2002)) {
 x_2008 = x_2002;
} else {
 lean::inc(x_2006);
 lean::dec(x_2002);
 x_2008 = lean::box(0);
}
if (lean::is_scalar(x_2008)) {
 x_2009 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_2009 = x_2008;
}
lean::cnstr_set(x_2009, 0, x_2006);
return x_2009;
}
else
{
obj* x_2010; 
x_2010 = lean::cnstr_get(x_2002, 0);
lean::inc(x_2010);
lean::dec(x_2002);
x_14 = x_2010;
goto lbl_15;
}
}
else
{
obj* x_2013; obj* x_2015; obj* x_2016; obj* x_2018; obj* x_2021; obj* x_2022; obj* x_2023; obj* x_2024; obj* x_2025; obj* x_2026; obj* x_2027; obj* x_2028; obj* x_2029; 
x_2013 = lean::cnstr_get(x_16, 1);
if (lean::is_exclusive(x_16)) {
 lean::cnstr_release(x_16, 0);
 x_2015 = x_16;
} else {
 lean::inc(x_2013);
 lean::dec(x_16);
 x_2015 = lean::box(0);
}
x_2016 = lean::cnstr_get(x_1993, 0);
lean::inc(x_2016);
x_2018 = lean::cnstr_get(x_1993, 1);
lean::inc(x_2018);
lean::dec(x_1993);
x_2021 = lean::box(0);
x_2022 = lean::mk_nat_obj(0u);
x_2023 = l_list_length__aux___main___rarg(x_9, x_2022);
x_2024 = l_lean_elaborator_to__pexpr___main___closed__6;
x_2025 = l_lean_kvmap_set__nat(x_2021, x_2024, x_2023);
x_2026 = l_list_reverse___rarg(x_2018);
x_2027 = l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__1(x_2016, x_2026);
x_2028 = lean_expr_mk_mdata(x_2025, x_2027);
if (lean::is_scalar(x_2015)) {
 x_2029 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_2029 = x_2015;
}
lean::cnstr_set(x_2029, 0, x_2028);
lean::cnstr_set(x_2029, 1, x_2013);
x_14 = x_2029;
goto lbl_15;
}
}
}
default:
{
obj* x_2030; 
x_2030 = lean::box(0);
x_3 = x_2030;
goto lbl_4;
}
}
lbl_4:
{
obj* x_2033; obj* x_2034; obj* x_2035; obj* x_2036; obj* x_2037; obj* x_2039; 
lean::dec(x_3);
lean::inc(x_0);
x_2033 = l_lean_parser_syntax_to__format___main(x_0);
x_2034 = lean::mk_nat_obj(80u);
x_2035 = l_lean_format_pretty(x_2033, x_2034);
x_2036 = l_lean_elaborator_to__pexpr___main___closed__1;
x_2037 = lean::string_append(x_2036, x_2035);
lean::dec(x_2035);
x_2039 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_2037, x_1, x_2);
return x_2039;
}
}
}
obj* l_lean_elaborator_to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_to__pexpr___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_get__namespace___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_1, 4);
lean::inc(x_3);
lean::dec(x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_3, 0);
lean::inc(x_9);
lean::dec(x_3);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_0);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
return x_13;
}
}
}
obj* l_lean_elaborator_get__namespace(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_get__namespace___rarg), 1, 0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_18; uint8 x_19; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
lean::inc(x_9);
lean::inc(x_1);
x_18 = l_lean_name_quick__lt___main(x_1, x_9);
x_19 = lean::unbox(x_18);
if (x_19 == 0)
{
obj* x_22; uint8 x_23; 
lean::inc(x_1);
lean::inc(x_9);
x_22 = l_lean_name_quick__lt___main(x_9, x_1);
x_23 = lean::unbox(x_22);
if (x_23 == 0)
{
obj* x_26; obj* x_27; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_7);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_9);
lean::cnstr_set(x_29, 2, x_11);
lean::cnstr_set(x_29, 3, x_28);
lean::cnstr_set_scalar(x_29, sizeof(void*)*4, x_6);
x_30 = x_29;
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_13);
lean::cnstr_set_scalar(x_32, sizeof(void*)*4, x_6);
x_33 = x_32;
return x_33;
}
}
else
{
obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_34 = lean::cnstr_get(x_0, 0);
x_36 = lean::cnstr_get(x_0, 1);
x_38 = lean::cnstr_get(x_0, 2);
x_40 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_42 = x_0;
} else {
 lean::inc(x_34);
 lean::inc(x_36);
 lean::inc(x_38);
 lean::inc(x_40);
 lean::dec(x_0);
 x_42 = lean::box(0);
}
lean::inc(x_36);
lean::inc(x_1);
x_45 = l_lean_name_quick__lt___main(x_1, x_36);
x_46 = lean::unbox(x_45);
if (x_46 == 0)
{
obj* x_49; uint8 x_50; 
lean::inc(x_1);
lean::inc(x_36);
x_49 = l_lean_name_quick__lt___main(x_36, x_1);
x_50 = lean::unbox(x_49);
if (x_50 == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_38);
lean::dec(x_36);
if (lean::is_scalar(x_42)) {
 x_53 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_53 = x_42;
}
lean::cnstr_set(x_53, 0, x_34);
lean::cnstr_set(x_53, 1, x_1);
lean::cnstr_set(x_53, 2, x_2);
lean::cnstr_set(x_53, 3, x_40);
lean::cnstr_set_scalar(x_53, sizeof(void*)*4, x_6);
x_54 = x_53;
return x_54;
}
else
{
uint8 x_56; 
lean::inc(x_40);
x_56 = l_rbnode_is__red___main___rarg(x_40);
if (x_56 == 0)
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_40, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_58 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_58 = x_42;
}
lean::cnstr_set(x_58, 0, x_34);
lean::cnstr_set(x_58, 1, x_36);
lean::cnstr_set(x_58, 2, x_38);
lean::cnstr_set(x_58, 3, x_57);
lean::cnstr_set_scalar(x_58, sizeof(void*)*4, x_6);
x_59 = x_58;
return x_59;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_60 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_42;
}
lean::cnstr_set(x_61, 0, x_34);
lean::cnstr_set(x_61, 1, x_36);
lean::cnstr_set(x_61, 2, x_38);
lean::cnstr_set(x_61, 3, x_60);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_6);
x_62 = x_61;
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_40, x_1, x_2);
x_64 = l_rbnode_balance2___main___rarg(x_62, x_63);
return x_64;
}
}
}
else
{
uint8 x_66; 
lean::inc(x_34);
x_66 = l_rbnode_is__red___main___rarg(x_34);
if (x_66 == 0)
{
obj* x_67; obj* x_68; obj* x_69; 
x_67 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_34, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_42;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_36);
lean::cnstr_set(x_68, 2, x_38);
lean::cnstr_set(x_68, 3, x_40);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_6);
x_69 = x_68;
return x_69;
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_70 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_71 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_71 = x_42;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_36);
lean::cnstr_set(x_71, 2, x_38);
lean::cnstr_set(x_71, 3, x_40);
lean::cnstr_set_scalar(x_71, sizeof(void*)*4, x_6);
x_72 = x_71;
x_73 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_34, x_1, x_2);
x_74 = l_rbnode_balance1___main___rarg(x_72, x_73);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; 
lean::inc(x_0);
x_4 = l_rbnode_is__red___main___rarg(x_0);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__5(x_0, x_1, x_2);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__2(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6;
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
x_2 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_1, x_0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_18; uint8 x_19; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
lean::inc(x_9);
lean::inc(x_1);
x_18 = l_lean_name_quick__lt___main(x_1, x_9);
x_19 = lean::unbox(x_18);
if (x_19 == 0)
{
obj* x_22; uint8 x_23; 
lean::inc(x_1);
lean::inc(x_9);
x_22 = l_lean_name_quick__lt___main(x_9, x_1);
x_23 = lean::unbox(x_22);
if (x_23 == 0)
{
obj* x_26; obj* x_27; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_7);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_9);
lean::cnstr_set(x_29, 2, x_11);
lean::cnstr_set(x_29, 3, x_28);
lean::cnstr_set_scalar(x_29, sizeof(void*)*4, x_6);
x_30 = x_29;
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_13);
lean::cnstr_set_scalar(x_32, sizeof(void*)*4, x_6);
x_33 = x_32;
return x_33;
}
}
else
{
obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_34 = lean::cnstr_get(x_0, 0);
x_36 = lean::cnstr_get(x_0, 1);
x_38 = lean::cnstr_get(x_0, 2);
x_40 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_42 = x_0;
} else {
 lean::inc(x_34);
 lean::inc(x_36);
 lean::inc(x_38);
 lean::inc(x_40);
 lean::dec(x_0);
 x_42 = lean::box(0);
}
lean::inc(x_36);
lean::inc(x_1);
x_45 = l_lean_name_quick__lt___main(x_1, x_36);
x_46 = lean::unbox(x_45);
if (x_46 == 0)
{
obj* x_49; uint8 x_50; 
lean::inc(x_1);
lean::inc(x_36);
x_49 = l_lean_name_quick__lt___main(x_36, x_1);
x_50 = lean::unbox(x_49);
if (x_50 == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_38);
lean::dec(x_36);
if (lean::is_scalar(x_42)) {
 x_53 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_53 = x_42;
}
lean::cnstr_set(x_53, 0, x_34);
lean::cnstr_set(x_53, 1, x_1);
lean::cnstr_set(x_53, 2, x_2);
lean::cnstr_set(x_53, 3, x_40);
lean::cnstr_set_scalar(x_53, sizeof(void*)*4, x_6);
x_54 = x_53;
return x_54;
}
else
{
uint8 x_56; 
lean::inc(x_40);
x_56 = l_rbnode_is__red___main___rarg(x_40);
if (x_56 == 0)
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_40, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_58 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_58 = x_42;
}
lean::cnstr_set(x_58, 0, x_34);
lean::cnstr_set(x_58, 1, x_36);
lean::cnstr_set(x_58, 2, x_38);
lean::cnstr_set(x_58, 3, x_57);
lean::cnstr_set_scalar(x_58, sizeof(void*)*4, x_6);
x_59 = x_58;
return x_59;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_60 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_42;
}
lean::cnstr_set(x_61, 0, x_34);
lean::cnstr_set(x_61, 1, x_36);
lean::cnstr_set(x_61, 2, x_38);
lean::cnstr_set(x_61, 3, x_60);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_6);
x_62 = x_61;
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_40, x_1, x_2);
x_64 = l_rbnode_balance2___main___rarg(x_62, x_63);
return x_64;
}
}
}
else
{
uint8 x_66; 
lean::inc(x_34);
x_66 = l_rbnode_is__red___main___rarg(x_34);
if (x_66 == 0)
{
obj* x_67; obj* x_68; obj* x_69; 
x_67 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_34, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_42;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_36);
lean::cnstr_set(x_68, 2, x_38);
lean::cnstr_set(x_68, 3, x_40);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_6);
x_69 = x_68;
return x_69;
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_70 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_71 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_71 = x_42;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_36);
lean::cnstr_set(x_71, 2, x_38);
lean::cnstr_set(x_71, 3, x_40);
lean::cnstr_set_scalar(x_71, sizeof(void*)*4, x_6);
x_72 = x_71;
x_73 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_34, x_1, x_2);
x_74 = l_rbnode_balance1___main___rarg(x_72, x_73);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; 
lean::inc(x_0);
x_4 = l_rbnode_is__red___main___rarg(x_0);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__12(x_0, x_1, x_2);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_old__elab__command___spec__9(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1() {
_start:
{
obj* x_0; 
x_0 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13;
return x_0;
}
}
obj* l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
x_2 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_1, x_0);
return x_2;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_18; uint8 x_19; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
lean::inc(x_9);
lean::inc(x_1);
x_18 = l_lean_name_quick__lt___main(x_1, x_9);
x_19 = lean::unbox(x_18);
if (x_19 == 0)
{
obj* x_22; uint8 x_23; 
lean::inc(x_1);
lean::inc(x_9);
x_22 = l_lean_name_quick__lt___main(x_9, x_1);
x_23 = lean::unbox(x_22);
if (x_23 == 0)
{
obj* x_26; obj* x_27; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_7);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_9);
lean::cnstr_set(x_29, 2, x_11);
lean::cnstr_set(x_29, 3, x_28);
lean::cnstr_set_scalar(x_29, sizeof(void*)*4, x_6);
x_30 = x_29;
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_13);
lean::cnstr_set_scalar(x_32, sizeof(void*)*4, x_6);
x_33 = x_32;
return x_33;
}
}
else
{
obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_34 = lean::cnstr_get(x_0, 0);
x_36 = lean::cnstr_get(x_0, 1);
x_38 = lean::cnstr_get(x_0, 2);
x_40 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_42 = x_0;
} else {
 lean::inc(x_34);
 lean::inc(x_36);
 lean::inc(x_38);
 lean::inc(x_40);
 lean::dec(x_0);
 x_42 = lean::box(0);
}
lean::inc(x_36);
lean::inc(x_1);
x_45 = l_lean_name_quick__lt___main(x_1, x_36);
x_46 = lean::unbox(x_45);
if (x_46 == 0)
{
obj* x_49; uint8 x_50; 
lean::inc(x_1);
lean::inc(x_36);
x_49 = l_lean_name_quick__lt___main(x_36, x_1);
x_50 = lean::unbox(x_49);
if (x_50 == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_38);
lean::dec(x_36);
if (lean::is_scalar(x_42)) {
 x_53 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_53 = x_42;
}
lean::cnstr_set(x_53, 0, x_34);
lean::cnstr_set(x_53, 1, x_1);
lean::cnstr_set(x_53, 2, x_2);
lean::cnstr_set(x_53, 3, x_40);
lean::cnstr_set_scalar(x_53, sizeof(void*)*4, x_6);
x_54 = x_53;
return x_54;
}
else
{
uint8 x_56; 
lean::inc(x_40);
x_56 = l_rbnode_is__red___main___rarg(x_40);
if (x_56 == 0)
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_40, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_58 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_58 = x_42;
}
lean::cnstr_set(x_58, 0, x_34);
lean::cnstr_set(x_58, 1, x_36);
lean::cnstr_set(x_58, 2, x_38);
lean::cnstr_set(x_58, 3, x_57);
lean::cnstr_set_scalar(x_58, sizeof(void*)*4, x_6);
x_59 = x_58;
return x_59;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_60 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_42;
}
lean::cnstr_set(x_61, 0, x_34);
lean::cnstr_set(x_61, 1, x_36);
lean::cnstr_set(x_61, 2, x_38);
lean::cnstr_set(x_61, 3, x_60);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_6);
x_62 = x_61;
x_63 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_40, x_1, x_2);
x_64 = l_rbnode_balance2___main___rarg(x_62, x_63);
return x_64;
}
}
}
else
{
uint8 x_66; 
lean::inc(x_34);
x_66 = l_rbnode_is__red___main___rarg(x_34);
if (x_66 == 0)
{
obj* x_67; obj* x_68; obj* x_69; 
x_67 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_34, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_42;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_36);
lean::cnstr_set(x_68, 2, x_38);
lean::cnstr_set(x_68, 3, x_40);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_6);
x_69 = x_68;
return x_69;
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_70 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_71 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_71 = x_42;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_36);
lean::cnstr_set(x_71, 2, x_38);
lean::cnstr_set(x_71, 3, x_40);
lean::cnstr_set_scalar(x_71, sizeof(void*)*4, x_6);
x_72 = x_71;
x_73 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_34, x_1, x_2);
x_74 = l_rbnode_balance1___main___rarg(x_72, x_73);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; 
lean::inc(x_0);
x_4 = l_rbnode_is__red___main___rarg(x_0);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_old__elab__command___spec__18(x_0, x_1, x_2);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_old__elab__command___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_4);
x_8 = lean::box(0);
x_9 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_7, x_2, x_8);
return x_9;
}
}
}
obj* l_lean_elaborator_old__elab__command(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_8; obj* x_9; 
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
lean::dec(x_2);
lean::inc(x_3);
x_8 = l_lean_elaborator_get__namespace___rarg(x_3);
switch (lean::obj_tag(x_1)) {
case 10:
{
obj* x_11; obj* x_13; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_29; obj* x_30; obj* x_31; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 1);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_4, 2);
lean::inc(x_16);
x_18 = l_lean_parser_syntax_get__pos(x_0);
x_19 = lean::mk_nat_obj(0u);
x_20 = l_option_get__or__else___main___rarg(x_18, x_19);
x_21 = l_lean_file__map_to__position(x_16, x_20);
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
x_24 = l_lean_elaborator_to__pexpr___main___closed__3;
x_25 = l_lean_kvmap_set__nat(x_11, x_24, x_22);
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_lean_elaborator_to__pexpr___main___closed__4;
x_30 = l_lean_kvmap_set__nat(x_25, x_29, x_26);
x_31 = lean_expr_mk_mdata(x_30, x_13);
x_9 = x_31;
goto lbl_10;
}
default:
{
lean::dec(x_0);
x_9 = x_1;
goto lbl_10;
}
}
lbl_10:
{
if (lean::obj_tag(x_8) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_9);
x_36 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_38 = x_8;
} else {
 lean::inc(x_36);
 lean::dec(x_8);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_48; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_59; obj* x_62; obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_71; obj* x_72; obj* x_74; obj* x_76; obj* x_77; obj* x_78; 
x_40 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_set(x_8, 0, lean::box(0));
 x_42 = x_8;
} else {
 lean::inc(x_40);
 lean::dec(x_8);
 x_42 = lean::box(0);
}
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_4, 0);
lean::inc(x_48);
lean::dec(x_4);
x_51 = lean::cnstr_get(x_3, 8);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_3, 9);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_3, 4);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_55, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_57, 0);
lean::inc(x_59);
lean::dec(x_57);
x_62 = l_list_reverse___rarg(x_59);
x_63 = lean::cnstr_get(x_55, 2);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_63, 0);
lean::inc(x_65);
lean::dec(x_63);
x_68 = l_list_reverse___rarg(x_65);
x_69 = lean::cnstr_get(x_55, 3);
lean::inc(x_69);
x_71 = l_rbtree_to__list___rarg(x_69);
x_72 = lean::cnstr_get(x_55, 6);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_3, 10);
lean::inc(x_74);
x_76 = lean::alloc_cnstr(0, 8, 0);
lean::cnstr_set(x_76, 0, x_51);
lean::cnstr_set(x_76, 1, x_53);
lean::cnstr_set(x_76, 2, x_62);
lean::cnstr_set(x_76, 3, x_68);
lean::cnstr_set(x_76, 4, x_71);
lean::cnstr_set(x_76, 5, x_72);
lean::cnstr_set(x_76, 6, x_74);
lean::cnstr_set(x_76, 7, x_43);
x_77 = lean_elaborator_elaborate_command(x_48, x_9, x_76);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
if (lean::obj_tag(x_78) == 0)
{
obj* x_82; obj* x_84; obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_97; obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
lean::dec(x_3);
lean::dec(x_55);
x_82 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 x_84 = x_77;
} else {
 lean::inc(x_82);
 lean::dec(x_77);
 x_84 = lean::box(0);
}
x_85 = lean::cnstr_get(x_45, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_45, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_45, 2);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_45, 3);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_45, 4);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_45, 5);
lean::inc(x_95);
x_97 = l_list_append___rarg(x_82, x_95);
x_98 = lean::cnstr_get(x_45, 6);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_45, 7);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_45, 8);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_45, 9);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_45, 10);
lean::inc(x_106);
lean::dec(x_45);
x_109 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_109, 0, x_85);
lean::cnstr_set(x_109, 1, x_87);
lean::cnstr_set(x_109, 2, x_89);
lean::cnstr_set(x_109, 3, x_91);
lean::cnstr_set(x_109, 4, x_93);
lean::cnstr_set(x_109, 5, x_97);
lean::cnstr_set(x_109, 6, x_98);
lean::cnstr_set(x_109, 7, x_100);
lean::cnstr_set(x_109, 8, x_102);
lean::cnstr_set(x_109, 9, x_104);
lean::cnstr_set(x_109, 10, x_106);
x_110 = lean::box(0);
if (lean::is_scalar(x_84)) {
 x_111 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_111 = x_84;
}
lean::cnstr_set(x_111, 0, x_110);
lean::cnstr_set(x_111, 1, x_109);
if (lean::is_scalar(x_42)) {
 x_112 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_112 = x_42;
}
lean::cnstr_set(x_112, 0, x_111);
return x_112;
}
else
{
obj* x_114; obj* x_116; obj* x_117; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_133; obj* x_134; obj* x_136; obj* x_137; obj* x_138; obj* x_140; obj* x_141; obj* x_143; obj* x_146; obj* x_148; obj* x_149; obj* x_151; obj* x_153; obj* x_156; obj* x_158; obj* x_160; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; 
lean::dec(x_45);
x_114 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 lean::cnstr_release(x_77, 0);
 x_116 = x_77;
} else {
 lean::inc(x_114);
 lean::dec(x_77);
 x_116 = lean::box(0);
}
x_117 = lean::cnstr_get(x_78, 0);
lean::inc(x_117);
lean::dec(x_78);
x_120 = lean::cnstr_get(x_3, 0);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_3, 1);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_3, 2);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_3, 3);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_55, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_117, 2);
lean::inc(x_130);
x_132 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1;
x_133 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__7(x_132, x_130);
x_134 = lean::cnstr_get(x_117, 3);
lean::inc(x_134);
x_136 = l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1;
x_137 = l_list_foldl___main___at_lean_elaborator_old__elab__command___spec__14(x_136, x_134);
x_138 = lean::cnstr_get(x_117, 4);
lean::inc(x_138);
x_140 = l_rbtree_of__list___main___at_lean_elaborator_old__elab__command___spec__15(x_138);
x_141 = lean::cnstr_get(x_55, 4);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_55, 5);
lean::inc(x_143);
lean::dec(x_55);
x_146 = lean::cnstr_get(x_117, 5);
lean::inc(x_146);
x_148 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_148, 0, x_128);
lean::cnstr_set(x_148, 1, x_133);
lean::cnstr_set(x_148, 2, x_137);
lean::cnstr_set(x_148, 3, x_140);
lean::cnstr_set(x_148, 4, x_141);
lean::cnstr_set(x_148, 5, x_143);
lean::cnstr_set(x_148, 6, x_146);
x_149 = lean::cnstr_get(x_3, 5);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_3, 6);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_3, 7);
lean::inc(x_153);
lean::dec(x_3);
x_156 = lean::cnstr_get(x_117, 0);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_117, 1);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_117, 6);
lean::inc(x_160);
lean::dec(x_117);
x_163 = l_list_append___rarg(x_114, x_149);
x_164 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_164, 0, x_120);
lean::cnstr_set(x_164, 1, x_122);
lean::cnstr_set(x_164, 2, x_124);
lean::cnstr_set(x_164, 3, x_126);
lean::cnstr_set(x_164, 4, x_148);
lean::cnstr_set(x_164, 5, x_163);
lean::cnstr_set(x_164, 6, x_151);
lean::cnstr_set(x_164, 7, x_153);
lean::cnstr_set(x_164, 8, x_156);
lean::cnstr_set(x_164, 9, x_158);
lean::cnstr_set(x_164, 10, x_160);
x_165 = lean::box(0);
if (lean::is_scalar(x_116)) {
 x_166 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_166 = x_116;
}
lean::cnstr_set(x_166, 0, x_165);
lean::cnstr_set(x_166, 1, x_164);
if (lean::is_scalar(x_42)) {
 x_167 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_167 = x_42;
}
lean::cnstr_set(x_167, 0, x_166);
return x_167;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_2, x_7);
x_9 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_names__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_list_map___main___at_lean_elaborator_names__to__pexpr___spec__1(x_0);
x_2 = l_lean_elaborator_mk__eqns___closed__1;
x_3 = l_lean_expr_mk__capp(x_2, x_1);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_18; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::inc(x_1);
x_18 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__1(x_15, x_1, x_2);
if (lean::obj_tag(x_18) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_12);
x_23 = lean::cnstr_get(x_18, 0);
if (lean::is_exclusive(x_18)) {
 x_25 = x_18;
} else {
 lean::inc(x_23);
 lean::dec(x_18);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; obj* x_35; 
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 1);
lean::inc(x_32);
lean::dec(x_27);
x_35 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_9, x_1, x_32);
if (lean::obj_tag(x_35) == 0)
{
obj* x_39; obj* x_41; obj* x_42; 
lean::dec(x_11);
lean::dec(x_12);
lean::dec(x_30);
x_39 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_41 = x_35;
} else {
 lean::inc(x_39);
 lean::dec(x_35);
 x_41 = lean::box(0);
}
if (lean::is_scalar(x_41)) {
 x_42 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_42 = x_41;
}
lean::cnstr_set(x_42, 0, x_39);
return x_42;
}
else
{
obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_43 = lean::cnstr_get(x_35, 0);
if (lean::is_exclusive(x_35)) {
 x_45 = x_35;
} else {
 lean::inc(x_43);
 lean::dec(x_35);
 x_45 = lean::box(0);
}
x_46 = lean::cnstr_get(x_43, 0);
x_48 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_50 = x_43;
} else {
 lean::inc(x_46);
 lean::inc(x_48);
 lean::dec(x_43);
 x_50 = lean::box(0);
}
x_51 = lean::cnstr_get(x_12, 0);
lean::inc(x_51);
lean::dec(x_12);
x_54 = lean::cnstr_get(x_51, 2);
lean::inc(x_54);
lean::dec(x_51);
x_57 = l_lean_expr_mk__capp(x_54, x_30);
if (lean::is_scalar(x_11)) {
 x_58 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_58 = x_11;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_46);
if (lean::is_scalar(x_50)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_50;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_48);
if (lean::is_scalar(x_45)) {
 x_60 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_60 = x_45;
}
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
}
}
}
}
obj* l_lean_elaborator_attrs__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_attrs__to__pexpr___spec__2(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_6 = x_3;
} else {
 lean::inc(x_4);
 lean::dec(x_3);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
x_17 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_10;
}
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("noncomputable");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("meta");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("private");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; uint8 x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("protected");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = 1;
x_5 = l_lean_kvmap_set__bool(x_0, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("doc_string");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("private");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("protected");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_decl__modifiers__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; uint8 x_10; obj* x_11; uint8 x_13; obj* x_14; obj* x_17; 
x_3 = lean::box(0);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_0, 3);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = l_option_is__some___main___rarg(x_11);
x_14 = lean::cnstr_get(x_0, 1);
lean::inc(x_14);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_19; 
x_19 = lean::cnstr_get(x_6, 0);
lean::inc(x_19);
lean::dec(x_6);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; 
lean::dec(x_19);
x_23 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
x_17 = x_23;
goto lbl_18;
}
else
{
obj* x_25; 
lean::dec(x_19);
x_25 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
x_17 = x_25;
goto lbl_18;
}
}
}
else
{
obj* x_26; obj* x_29; 
x_26 = lean::cnstr_get(x_4, 0);
lean::inc(x_26);
lean::dec(x_4);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
if (lean::obj_tag(x_29) == 0)
{
if (lean::obj_tag(x_6) == 0)
{
x_17 = x_3;
goto lbl_18;
}
else
{
obj* x_32; 
x_32 = lean::cnstr_get(x_6, 0);
lean::inc(x_32);
lean::dec(x_6);
if (lean::obj_tag(x_32) == 0)
{
obj* x_36; 
lean::dec(x_32);
x_36 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__3;
x_17 = x_36;
goto lbl_18;
}
else
{
obj* x_38; 
lean::dec(x_32);
x_38 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__4;
x_17 = x_38;
goto lbl_18;
}
}
}
else
{
obj* x_39; obj* x_42; obj* x_45; obj* x_46; 
x_39 = lean::cnstr_get(x_29, 0);
lean::inc(x_39);
lean::dec(x_29);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
lean::dec(x_39);
x_45 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__5;
x_46 = l_lean_kvmap_set__string(x_3, x_45, x_42);
if (lean::obj_tag(x_6) == 0)
{
x_17 = x_46;
goto lbl_18;
}
else
{
obj* x_47; 
x_47 = lean::cnstr_get(x_6, 0);
lean::inc(x_47);
lean::dec(x_6);
if (lean::obj_tag(x_47) == 0)
{
obj* x_51; uint8 x_52; obj* x_53; 
lean::dec(x_47);
x_51 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__6;
x_52 = 1;
x_53 = l_lean_kvmap_set__bool(x_46, x_51, x_52);
x_17 = x_53;
goto lbl_18;
}
else
{
obj* x_55; uint8 x_56; obj* x_57; 
lean::dec(x_47);
x_55 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__7;
x_56 = 1;
x_57 = l_lean_kvmap_set__bool(x_46, x_55, x_56);
x_17 = x_57;
goto lbl_18;
}
}
}
}
lbl_18:
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__1;
x_59 = l_lean_kvmap_set__bool(x_17, x_58, x_10);
x_60 = l_lean_elaborator_decl__modifiers__to__pexpr___closed__2;
x_61 = l_lean_kvmap_set__bool(x_59, x_60, x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_62; 
x_62 = l_lean_elaborator_attrs__to__pexpr(x_3, x_1, x_2);
if (lean::obj_tag(x_62) == 0)
{
obj* x_64; obj* x_66; obj* x_67; 
lean::dec(x_61);
x_64 = lean::cnstr_get(x_62, 0);
if (lean::is_exclusive(x_62)) {
 x_66 = x_62;
} else {
 lean::inc(x_64);
 lean::dec(x_62);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_64);
return x_67;
}
else
{
obj* x_68; obj* x_70; obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_68 = lean::cnstr_get(x_62, 0);
if (lean::is_exclusive(x_62)) {
 x_70 = x_62;
} else {
 lean::inc(x_68);
 lean::dec(x_62);
 x_70 = lean::box(0);
}
x_71 = lean::cnstr_get(x_68, 0);
x_73 = lean::cnstr_get(x_68, 1);
if (lean::is_exclusive(x_68)) {
 x_75 = x_68;
} else {
 lean::inc(x_71);
 lean::inc(x_73);
 lean::dec(x_68);
 x_75 = lean::box(0);
}
x_76 = lean_expr_mk_mdata(x_61, x_71);
if (lean::is_scalar(x_75)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_75;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_73);
if (lean::is_scalar(x_70)) {
 x_78 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_78 = x_70;
}
lean::cnstr_set(x_78, 0, x_77);
return x_78;
}
}
else
{
obj* x_79; obj* x_82; obj* x_85; 
x_79 = lean::cnstr_get(x_14, 0);
lean::inc(x_79);
lean::dec(x_14);
x_82 = lean::cnstr_get(x_79, 1);
lean::inc(x_82);
lean::dec(x_79);
x_85 = l_lean_elaborator_attrs__to__pexpr(x_82, x_1, x_2);
if (lean::obj_tag(x_85) == 0)
{
obj* x_87; obj* x_89; obj* x_90; 
lean::dec(x_61);
x_87 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_89 = x_85;
} else {
 lean::inc(x_87);
 lean::dec(x_85);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_87);
return x_90;
}
else
{
obj* x_91; obj* x_93; obj* x_94; obj* x_96; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
x_91 = lean::cnstr_get(x_85, 0);
if (lean::is_exclusive(x_85)) {
 x_93 = x_85;
} else {
 lean::inc(x_91);
 lean::dec(x_85);
 x_93 = lean::box(0);
}
x_94 = lean::cnstr_get(x_91, 0);
x_96 = lean::cnstr_get(x_91, 1);
if (lean::is_exclusive(x_91)) {
 x_98 = x_91;
} else {
 lean::inc(x_94);
 lean::inc(x_96);
 lean::dec(x_91);
 x_98 = lean::box(0);
}
x_99 = lean_expr_mk_mdata(x_61, x_94);
if (lean::is_scalar(x_98)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_98;
}
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_96);
if (lean::is_scalar(x_93)) {
 x_101 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_101 = x_93;
}
lean::cnstr_set(x_101, 0, x_100);
return x_101;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = level_mk_param(x_7);
x_9 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_4);
if (lean::is_scalar(x_6)) {
 x_10 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_10 = x_6;
}
lean::cnstr_set(x_10, 0, x_8);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
}
obj* l_lean_elaborator_ident__univ__params__to__pexpr(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = l_lean_elaborator_mangle__ident(x_1);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::box(0);
x_8 = lean_expr_mk_const(x_3, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_15; obj* x_16; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
lean::dec(x_4);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = l_list_map___main___at_lean_elaborator_ident__univ__params__to__pexpr___spec__1(x_12);
x_16 = lean_expr_mk_const(x_3, x_15);
return x_16;
}
}
}
obj* l_lean_elaborator_locally___rarg___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 4);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_23; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 2);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 3);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_1, 5);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_1, 6);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 7);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_1, 8);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_1, 9);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_1, 10);
lean::inc(x_20);
lean::dec(x_1);
x_23 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_23, 0, x_2);
lean::cnstr_set(x_23, 1, x_4);
lean::cnstr_set(x_23, 2, x_6);
lean::cnstr_set(x_23, 3, x_8);
lean::cnstr_set(x_23, 4, x_0);
lean::cnstr_set(x_23, 5, x_10);
lean::cnstr_set(x_23, 6, x_12);
lean::cnstr_set(x_23, 7, x_14);
lean::cnstr_set(x_23, 8, x_16);
lean::cnstr_set(x_23, 9, x_18);
lean::cnstr_set(x_23, 10, x_20);
return x_23;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; 
lean::dec(x_2);
x_4 = lean::cnstr_get(x_0, 2);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = lean::apply_1(x_4, x_7);
return x_8;
}
}
obj* l_lean_elaborator_locally___rarg___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__3), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_2, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_14; obj* x_16; obj* x_17; obj* x_19; obj* x_20; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_14 = lean::cnstr_get(x_1, 0);
lean::inc(x_14);
x_16 = l_lean_elaborator_locally___rarg___closed__1;
x_17 = lean::apply_4(x_11, lean::box(0), lean::box(0), x_16, x_14);
lean::inc(x_3);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg___lambda__4), 4, 3);
lean::closure_set(x_19, 0, x_1);
lean::closure_set(x_19, 1, x_3);
lean::closure_set(x_19, 2, x_2);
x_20 = lean::apply_4(x_3, lean::box(0), lean::box(0), x_17, x_19);
return x_20;
}
}
obj* l_lean_elaborator_locally(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___rarg), 3, 0);
return x_2;
}
}
obj* l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_20; obj* x_24; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_7);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
lean::dec(x_13);
lean::inc(x_1);
x_24 = l_lean_elaborator_to__pexpr___main(x_20, x_1, x_2);
if (lean::obj_tag(x_24) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_15);
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
lean::dec(x_18);
x_30 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_32 = x_24;
} else {
 lean::inc(x_30);
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; obj* x_42; 
x_34 = lean::cnstr_get(x_24, 0);
lean::inc(x_34);
lean::dec(x_24);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_42 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_9, x_1, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_15);
lean::dec(x_11);
lean::dec(x_37);
lean::dec(x_18);
x_47 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_49 = x_42;
} else {
 lean::inc(x_47);
 lean::dec(x_42);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; uint8 x_60; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
x_51 = lean::cnstr_get(x_42, 0);
if (lean::is_exclusive(x_42)) {
 x_53 = x_42;
} else {
 lean::inc(x_51);
 lean::dec(x_42);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = l_lean_elaborator_mangle__ident(x_18);
x_60 = lean::unbox(x_15);
lean::inc(x_59);
x_62 = lean_expr_local(x_59, x_59, x_37, x_60);
if (lean::is_scalar(x_11)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_11;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_54);
if (lean::is_scalar(x_58)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_58;
}
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_56);
if (lean::is_scalar(x_53)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_53;
}
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
}
}
}
}
obj* l_lean_elaborator_simple__binders__to__pexpr(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_list_mmap___main___at_lean_elaborator_simple__binders__to__pexpr___spec__1(x_0, x_1, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_6 = x_3;
} else {
 lean::inc(x_4);
 lean::dec(x_3);
 x_6 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_7 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_7 = x_6;
}
lean::cnstr_set(x_7, 0, x_4);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_8 = lean::cnstr_get(x_3, 0);
if (lean::is_exclusive(x_3)) {
 x_10 = x_3;
} else {
 lean::inc(x_8);
 lean::dec(x_3);
 x_10 = lean::box(0);
}
x_11 = lean::cnstr_get(x_8, 0);
x_13 = lean::cnstr_get(x_8, 1);
if (lean::is_exclusive(x_8)) {
 x_15 = x_8;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_8);
 x_15 = lean::box(0);
}
x_16 = l_lean_elaborator_mk__eqns___closed__1;
x_17 = l_lean_expr_mk__capp(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
if (lean::is_scalar(x_10)) {
 x_19 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_19 = x_10;
}
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_17; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_14);
lean::inc(x_2);
x_17 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__1(x_14, x_2, x_3);
if (lean::obj_tag(x_17) == 0)
{
obj* x_23; obj* x_25; obj* x_26; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_23 = lean::cnstr_get(x_17, 0);
if (lean::is_exclusive(x_17)) {
 x_25 = x_17;
} else {
 lean::inc(x_23);
 lean::dec(x_17);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; obj* x_34; obj* x_35; obj* x_39; 
x_27 = lean::cnstr_get(x_17, 0);
lean::inc(x_27);
lean::dec(x_17);
x_30 = lean::cnstr_get(x_27, 0);
x_32 = lean::cnstr_get(x_27, 1);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_set(x_27, 0, lean::box(0));
 lean::cnstr_set(x_27, 1, lean::box(0));
 x_34 = x_27;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_27);
 x_34 = lean::box(0);
}
x_35 = lean::cnstr_get(x_9, 3);
lean::inc(x_35);
lean::dec(x_9);
lean::inc(x_2);
x_39 = l_lean_elaborator_to__pexpr___main(x_35, x_2, x_32);
if (lean::obj_tag(x_39) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_30);
lean::dec(x_34);
x_46 = lean::cnstr_get(x_39, 0);
if (lean::is_exclusive(x_39)) {
 x_48 = x_39;
} else {
 lean::inc(x_46);
 lean::dec(x_39);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_53; obj* x_55; obj* x_56; obj* x_58; obj* x_60; obj* x_61; 
x_50 = lean::cnstr_get(x_39, 0);
lean::inc(x_50);
lean::dec(x_39);
x_53 = lean::cnstr_get(x_0, 0);
lean::inc(x_53);
x_55 = l_lean_elaborator_mangle__ident(x_53);
x_56 = lean::cnstr_get(x_50, 0);
x_58 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_set(x_50, 0, lean::box(0));
 lean::cnstr_set(x_50, 1, lean::box(0));
 x_60 = x_50;
} else {
 lean::inc(x_56);
 lean::inc(x_58);
 lean::dec(x_50);
 x_60 = lean::box(0);
}
x_61 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_0, x_11, x_2, x_58);
if (lean::obj_tag(x_61) == 0)
{
obj* x_68; obj* x_70; obj* x_71; 
lean::dec(x_13);
lean::dec(x_30);
lean::dec(x_34);
lean::dec(x_60);
lean::dec(x_55);
lean::dec(x_56);
x_68 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_70 = x_61;
} else {
 lean::inc(x_68);
 lean::dec(x_61);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
return x_71;
}
else
{
obj* x_72; obj* x_74; obj* x_75; obj* x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_72 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_74 = x_61;
} else {
 lean::inc(x_72);
 lean::dec(x_61);
 x_74 = lean::box(0);
}
x_75 = lean::cnstr_get(x_72, 0);
x_77 = lean::cnstr_get(x_72, 1);
if (lean::is_exclusive(x_72)) {
 x_79 = x_72;
} else {
 lean::inc(x_75);
 lean::inc(x_77);
 lean::dec(x_72);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_30);
lean::cnstr_set(x_80, 1, x_56);
if (lean::is_scalar(x_60)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_60;
}
lean::cnstr_set(x_81, 0, x_55);
lean::cnstr_set(x_81, 1, x_80);
if (lean::is_scalar(x_13)) {
 x_82 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_82 = x_13;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_75);
if (lean::is_scalar(x_34)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_34;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_77);
if (lean::is_scalar(x_74)) {
 x_84 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_84 = x_74;
}
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__4(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("elab_def_like: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_elab__def__like___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("defs");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_elab__def__like(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; 
x_6 = lean::cnstr_get(x_2, 3);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_lean_elaborator_elab__def__like___closed__1;
x_16 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_15, x_4, x_5);
return x_16;
}
else
{
obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_27; obj* x_31; 
x_17 = lean::cnstr_get(x_2, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 2);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 4);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_6, 1);
lean::inc(x_24);
lean::dec(x_6);
x_27 = lean::cnstr_get(x_8, 0);
lean::inc(x_27);
lean::dec(x_8);
lean::inc(x_4);
x_31 = l_lean_elaborator_decl__modifiers__to__pexpr(x_1, x_4, x_5);
if (lean::obj_tag(x_31) == 0)
{
obj* x_40; obj* x_42; obj* x_43; 
lean::dec(x_21);
lean::dec(x_24);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_19);
lean::dec(x_27);
x_40 = lean::cnstr_get(x_31, 0);
if (lean::is_exclusive(x_31)) {
 x_42 = x_31;
} else {
 lean::inc(x_40);
 lean::dec(x_31);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_40);
return x_43;
}
else
{
obj* x_44; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
x_44 = lean::cnstr_get(x_31, 0);
lean::inc(x_44);
lean::dec(x_31);
x_47 = lean::cnstr_get(x_44, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_44, 1);
lean::inc(x_49);
lean::dec(x_44);
x_52 = lean::box(0);
x_53 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_53, 0, x_3);
x_54 = lean_expr_mk_lit(x_53);
if (lean::obj_tag(x_17) == 0)
{
obj* x_58; obj* x_60; 
x_58 = l_lean_expander_get__opt__type___main(x_24);
lean::inc(x_4);
x_60 = l_lean_elaborator_to__pexpr___main(x_58, x_4, x_49);
if (lean::obj_tag(x_17) == 0)
{
if (lean::obj_tag(x_60) == 0)
{
obj* x_68; obj* x_70; obj* x_71; 
lean::dec(x_21);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_68 = lean::cnstr_get(x_60, 0);
if (lean::is_exclusive(x_60)) {
 x_70 = x_60;
} else {
 lean::inc(x_68);
 lean::dec(x_60);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_68);
return x_71;
}
else
{
obj* x_72; 
x_72 = lean::cnstr_get(x_60, 0);
lean::inc(x_72);
lean::dec(x_60);
x_55 = x_52;
x_56 = x_72;
goto lbl_57;
}
}
else
{
if (lean::obj_tag(x_60) == 0)
{
obj* x_82; obj* x_84; obj* x_85; 
lean::dec(x_21);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_82 = lean::cnstr_get(x_60, 0);
if (lean::is_exclusive(x_60)) {
 x_84 = x_60;
} else {
 lean::inc(x_82);
 lean::dec(x_60);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_82);
return x_85;
}
else
{
obj* x_86; obj* x_89; obj* x_92; obj* x_95; 
x_86 = lean::cnstr_get(x_17, 0);
lean::inc(x_86);
lean::dec(x_17);
x_89 = lean::cnstr_get(x_60, 0);
lean::inc(x_89);
lean::dec(x_60);
x_92 = lean::cnstr_get(x_86, 1);
lean::inc(x_92);
lean::dec(x_86);
x_95 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__3(x_92);
x_55 = x_95;
x_56 = x_89;
goto lbl_57;
}
}
}
else
{
obj* x_96; obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_116; obj* x_117; obj* x_118; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_129; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_140; obj* x_143; obj* x_144; obj* x_146; 
x_96 = lean::cnstr_get(x_17, 0);
lean::inc(x_96);
x_98 = lean::cnstr_get(x_49, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_49, 1);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_49, 2);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_49, 3);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_49, 4);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_106, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_106, 1);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_96, 1);
lean::inc(x_112);
lean::dec(x_96);
lean::inc(x_112);
x_116 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__5(x_112);
x_117 = l_list_foldl___main___at_lean_elaborator_elab__def__like___spec__6(x_110, x_116);
x_118 = lean::cnstr_get(x_106, 2);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_106, 3);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_106, 4);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_106, 5);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_106, 6);
lean::inc(x_126);
lean::dec(x_106);
x_129 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_129, 0, x_108);
lean::cnstr_set(x_129, 1, x_117);
lean::cnstr_set(x_129, 2, x_118);
lean::cnstr_set(x_129, 3, x_120);
lean::cnstr_set(x_129, 4, x_122);
lean::cnstr_set(x_129, 5, x_124);
lean::cnstr_set(x_129, 6, x_126);
x_130 = lean::cnstr_get(x_49, 5);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_49, 6);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_49, 7);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_49, 8);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_49, 9);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_49, 10);
lean::inc(x_140);
lean::dec(x_49);
x_143 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_143, 0, x_98);
lean::cnstr_set(x_143, 1, x_100);
lean::cnstr_set(x_143, 2, x_102);
lean::cnstr_set(x_143, 3, x_104);
lean::cnstr_set(x_143, 4, x_129);
lean::cnstr_set(x_143, 5, x_130);
lean::cnstr_set(x_143, 6, x_132);
lean::cnstr_set(x_143, 7, x_134);
lean::cnstr_set(x_143, 8, x_136);
lean::cnstr_set(x_143, 9, x_138);
lean::cnstr_set(x_143, 10, x_140);
x_144 = l_lean_expander_get__opt__type___main(x_24);
lean::inc(x_4);
x_146 = l_lean_elaborator_to__pexpr___main(x_144, x_4, x_143);
if (lean::obj_tag(x_17) == 0)
{
lean::dec(x_112);
if (lean::obj_tag(x_146) == 0)
{
obj* x_155; obj* x_157; obj* x_158; 
lean::dec(x_21);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_155 = lean::cnstr_get(x_146, 0);
if (lean::is_exclusive(x_146)) {
 x_157 = x_146;
} else {
 lean::inc(x_155);
 lean::dec(x_146);
 x_157 = lean::box(0);
}
if (lean::is_scalar(x_157)) {
 x_158 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_158 = x_157;
}
lean::cnstr_set(x_158, 0, x_155);
return x_158;
}
else
{
obj* x_159; 
x_159 = lean::cnstr_get(x_146, 0);
lean::inc(x_159);
lean::dec(x_146);
x_55 = x_52;
x_56 = x_159;
goto lbl_57;
}
}
else
{
lean::dec(x_17);
if (lean::obj_tag(x_146) == 0)
{
obj* x_171; obj* x_173; obj* x_174; 
lean::dec(x_21);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_19);
lean::dec(x_112);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_171 = lean::cnstr_get(x_146, 0);
if (lean::is_exclusive(x_146)) {
 x_173 = x_146;
} else {
 lean::inc(x_171);
 lean::dec(x_146);
 x_173 = lean::box(0);
}
if (lean::is_scalar(x_173)) {
 x_174 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_174 = x_173;
}
lean::cnstr_set(x_174, 0, x_171);
return x_174;
}
else
{
obj* x_175; obj* x_178; 
x_175 = lean::cnstr_get(x_146, 0);
lean::inc(x_175);
lean::dec(x_146);
x_178 = l_list_map___main___at_lean_elaborator_elab__def__like___spec__7(x_112);
x_55 = x_178;
x_56 = x_175;
goto lbl_57;
}
}
}
lbl_57:
{
obj* x_179; obj* x_181; obj* x_183; obj* x_184; obj* x_185; obj* x_187; uint8 x_188; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; 
x_179 = lean::cnstr_get(x_56, 0);
x_181 = lean::cnstr_get(x_56, 1);
if (lean::is_exclusive(x_56)) {
 lean::cnstr_set(x_56, 0, lean::box(0));
 lean::cnstr_set(x_56, 1, lean::box(0));
 x_183 = x_56;
} else {
 lean::inc(x_179);
 lean::inc(x_181);
 lean::dec(x_56);
 x_183 = lean::box(0);
}
x_184 = l_lean_elaborator_names__to__pexpr(x_55);
x_185 = lean::cnstr_get(x_19, 0);
lean::inc(x_185);
x_187 = l_lean_elaborator_mangle__ident(x_185);
x_188 = 4;
lean::inc(x_179);
lean::inc(x_187);
x_191 = lean_expr_local(x_187, x_187, x_179, x_188);
x_192 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_192, 0, x_191);
lean::cnstr_set(x_192, 1, x_52);
x_193 = l_lean_elaborator_mk__eqns___closed__1;
x_194 = l_lean_expr_mk__capp(x_193, x_192);
switch (lean::obj_tag(x_21)) {
case 0:
{
obj* x_200; obj* x_203; obj* x_207; 
lean::dec(x_183);
lean::dec(x_179);
lean::dec(x_19);
x_200 = lean::cnstr_get(x_21, 0);
lean::inc(x_200);
lean::dec(x_21);
x_203 = lean::cnstr_get(x_200, 1);
lean::inc(x_203);
lean::dec(x_200);
lean::inc(x_4);
x_207 = l_lean_elaborator_to__pexpr___main(x_203, x_4, x_181);
if (lean::obj_tag(x_207) == 0)
{
obj* x_215; obj* x_217; obj* x_218; 
lean::dec(x_184);
lean::dec(x_194);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_215 = lean::cnstr_get(x_207, 0);
if (lean::is_exclusive(x_207)) {
 x_217 = x_207;
} else {
 lean::inc(x_215);
 lean::dec(x_207);
 x_217 = lean::box(0);
}
if (lean::is_scalar(x_217)) {
 x_218 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_218 = x_217;
}
lean::cnstr_set(x_218, 0, x_215);
return x_218;
}
else
{
obj* x_219; 
x_219 = lean::cnstr_get(x_207, 0);
lean::inc(x_219);
lean::dec(x_207);
x_195 = x_219;
goto lbl_196;
}
}
case 1:
{
obj* x_224; obj* x_225; 
lean::dec(x_21);
lean::dec(x_19);
x_224 = l_lean_elaborator_mk__eqns(x_179, x_52);
if (lean::is_scalar(x_183)) {
 x_225 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_225 = x_183;
}
lean::cnstr_set(x_225, 0, x_224);
lean::cnstr_set(x_225, 1, x_181);
x_195 = x_225;
goto lbl_196;
}
default:
{
obj* x_227; obj* x_231; 
lean::dec(x_183);
x_227 = lean::cnstr_get(x_21, 0);
lean::inc(x_227);
lean::dec(x_21);
lean::inc(x_4);
x_231 = l_list_mmap___main___at_lean_elaborator_elab__def__like___spec__2(x_19, x_227, x_4, x_181);
if (lean::obj_tag(x_231) == 0)
{
obj* x_240; obj* x_242; obj* x_243; 
lean::dec(x_184);
lean::dec(x_179);
lean::dec(x_194);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_27);
lean::dec(x_47);
lean::dec(x_54);
x_240 = lean::cnstr_get(x_231, 0);
if (lean::is_exclusive(x_231)) {
 x_242 = x_231;
} else {
 lean::inc(x_240);
 lean::dec(x_231);
 x_242 = lean::box(0);
}
if (lean::is_scalar(x_242)) {
 x_243 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_243 = x_242;
}
lean::cnstr_set(x_243, 0, x_240);
return x_243;
}
else
{
obj* x_244; obj* x_247; obj* x_249; obj* x_251; obj* x_252; obj* x_253; 
x_244 = lean::cnstr_get(x_231, 0);
lean::inc(x_244);
lean::dec(x_231);
x_247 = lean::cnstr_get(x_244, 0);
x_249 = lean::cnstr_get(x_244, 1);
if (lean::is_exclusive(x_244)) {
 x_251 = x_244;
} else {
 lean::inc(x_247);
 lean::inc(x_249);
 lean::dec(x_244);
 x_251 = lean::box(0);
}
x_252 = l_lean_elaborator_mk__eqns(x_179, x_247);
if (lean::is_scalar(x_251)) {
 x_253 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_253 = x_251;
}
lean::cnstr_set(x_253, 0, x_252);
lean::cnstr_set(x_253, 1, x_249);
x_195 = x_253;
goto lbl_196;
}
}
}
lbl_196:
{
obj* x_254; obj* x_256; obj* x_260; 
x_254 = lean::cnstr_get(x_195, 0);
lean::inc(x_254);
x_256 = lean::cnstr_get(x_195, 1);
lean::inc(x_256);
lean::dec(x_195);
lean::inc(x_4);
x_260 = l_lean_elaborator_simple__binders__to__pexpr(x_27, x_4, x_256);
if (lean::obj_tag(x_260) == 0)
{
obj* x_268; obj* x_270; obj* x_271; 
lean::dec(x_184);
lean::dec(x_194);
lean::dec(x_4);
lean::dec(x_0);
lean::dec(x_254);
lean::dec(x_47);
lean::dec(x_54);
x_268 = lean::cnstr_get(x_260, 0);
if (lean::is_exclusive(x_260)) {
 x_270 = x_260;
} else {
 lean::inc(x_268);
 lean::dec(x_260);
 x_270 = lean::box(0);
}
if (lean::is_scalar(x_270)) {
 x_271 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_271 = x_270;
}
lean::cnstr_set(x_271, 0, x_268);
return x_271;
}
else
{
obj* x_272; obj* x_275; obj* x_277; obj* x_280; obj* x_281; obj* x_282; obj* x_283; obj* x_284; obj* x_285; obj* x_286; obj* x_287; obj* x_288; obj* x_289; 
x_272 = lean::cnstr_get(x_260, 0);
lean::inc(x_272);
lean::dec(x_260);
x_275 = lean::cnstr_get(x_272, 0);
lean::inc(x_275);
x_277 = lean::cnstr_get(x_272, 1);
lean::inc(x_277);
lean::dec(x_272);
x_280 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_280, 0, x_254);
lean::cnstr_set(x_280, 1, x_52);
x_281 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_281, 0, x_275);
lean::cnstr_set(x_281, 1, x_280);
x_282 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_282, 0, x_194);
lean::cnstr_set(x_282, 1, x_281);
x_283 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_283, 0, x_184);
lean::cnstr_set(x_283, 1, x_282);
x_284 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_284, 0, x_54);
lean::cnstr_set(x_284, 1, x_283);
x_285 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_285, 0, x_47);
lean::cnstr_set(x_285, 1, x_284);
x_286 = l_lean_expr_mk__capp(x_193, x_285);
x_287 = l_lean_elaborator_elab__def__like___closed__2;
x_288 = lean_expr_mk_mdata(x_287, x_286);
x_289 = l_lean_elaborator_old__elab__command(x_0, x_288, x_4, x_277);
return x_289;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(2u);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean_expr_mk_lit(x_1);
return x_2;
}
}
obj* l_lean_elaborator_infer__mod__to__pexpr(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_elaborator_infer__mod__to__pexpr___closed__1;
return x_1;
}
else
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
lean::dec(x_2);
x_6 = l_lean_elaborator_infer__mod__to__pexpr___closed__2;
return x_6;
}
else
{
obj* x_8; 
lean::dec(x_2);
x_8 = l_lean_elaborator_infer__mod__to__pexpr___closed__3;
return x_8;
}
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("declaration.elaborate: unexpected input");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_16; obj* x_18; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_16 = lean::cnstr_get(x_9, 3);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_23; obj* x_26; 
lean::dec(x_16);
lean::dec(x_9);
lean::dec(x_18);
x_23 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_0);
x_26 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_23, x_2, x_3);
if (lean::obj_tag(x_26) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_31 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_33 = x_26;
} else {
 lean::inc(x_31);
 lean::dec(x_26);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; 
x_35 = lean::cnstr_get(x_26, 0);
lean::inc(x_35);
lean::dec(x_26);
x_14 = x_35;
goto lbl_15;
}
}
else
{
obj* x_38; 
x_38 = lean::cnstr_get(x_18, 0);
lean::inc(x_38);
lean::dec(x_18);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; 
x_41 = lean::cnstr_get(x_16, 1);
lean::inc(x_41);
lean::dec(x_16);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_48; 
lean::dec(x_9);
x_45 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_0);
x_48 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_45, x_2, x_3);
if (lean::obj_tag(x_48) == 0)
{
obj* x_53; obj* x_55; obj* x_56; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_53 = lean::cnstr_get(x_48, 0);
if (lean::is_exclusive(x_48)) {
 x_55 = x_48;
} else {
 lean::inc(x_53);
 lean::dec(x_48);
 x_55 = lean::box(0);
}
if (lean::is_scalar(x_55)) {
 x_56 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_56 = x_55;
}
lean::cnstr_set(x_56, 0, x_53);
return x_56;
}
else
{
obj* x_57; 
x_57 = lean::cnstr_get(x_48, 0);
lean::inc(x_57);
lean::dec(x_48);
x_14 = x_57;
goto lbl_15;
}
}
else
{
obj* x_60; obj* x_63; obj* x_67; 
x_60 = lean::cnstr_get(x_41, 0);
lean::inc(x_60);
lean::dec(x_41);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
lean::inc(x_2);
x_67 = l_lean_elaborator_to__pexpr___main(x_63, x_2, x_3);
if (lean::obj_tag(x_67) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_73 = lean::cnstr_get(x_67, 0);
if (lean::is_exclusive(x_67)) {
 x_75 = x_67;
} else {
 lean::inc(x_73);
 lean::dec(x_67);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_88; uint8 x_89; obj* x_91; obj* x_92; 
x_77 = lean::cnstr_get(x_67, 0);
lean::inc(x_77);
lean::dec(x_67);
x_80 = lean::cnstr_get(x_77, 0);
x_82 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 x_84 = x_77;
} else {
 lean::inc(x_80);
 lean::inc(x_82);
 lean::dec(x_77);
 x_84 = lean::box(0);
}
x_85 = lean::cnstr_get(x_9, 1);
lean::inc(x_85);
lean::dec(x_9);
x_88 = l_lean_elaborator_mangle__ident(x_85);
x_89 = 0;
lean::inc(x_88);
x_91 = lean_expr_local(x_88, x_88, x_80, x_89);
if (lean::is_scalar(x_84)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_84;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_82);
x_14 = x_92;
goto lbl_15;
}
}
}
else
{
obj* x_96; obj* x_99; 
lean::dec(x_16);
lean::dec(x_9);
lean::dec(x_38);
x_96 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_0);
x_99 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_96, x_2, x_3);
if (lean::obj_tag(x_99) == 0)
{
obj* x_104; obj* x_106; obj* x_107; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_104 = lean::cnstr_get(x_99, 0);
if (lean::is_exclusive(x_99)) {
 x_106 = x_99;
} else {
 lean::inc(x_104);
 lean::dec(x_99);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_104);
return x_107;
}
else
{
obj* x_108; 
x_108 = lean::cnstr_get(x_99, 0);
lean::inc(x_108);
lean::dec(x_99);
x_14 = x_108;
goto lbl_15;
}
}
}
lbl_15:
{
obj* x_111; obj* x_113; obj* x_116; 
x_111 = lean::cnstr_get(x_14, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_14, 1);
lean::inc(x_113);
lean::dec(x_14);
x_116 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_11, x_2, x_113);
if (lean::obj_tag(x_116) == 0)
{
obj* x_119; obj* x_121; obj* x_122; 
lean::dec(x_13);
lean::dec(x_111);
x_119 = lean::cnstr_get(x_116, 0);
if (lean::is_exclusive(x_116)) {
 x_121 = x_116;
} else {
 lean::inc(x_119);
 lean::dec(x_116);
 x_121 = lean::box(0);
}
if (lean::is_scalar(x_121)) {
 x_122 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_122 = x_121;
}
lean::cnstr_set(x_122, 0, x_119);
return x_122;
}
else
{
obj* x_123; obj* x_125; obj* x_126; obj* x_128; obj* x_130; obj* x_131; obj* x_132; obj* x_133; 
x_123 = lean::cnstr_get(x_116, 0);
if (lean::is_exclusive(x_116)) {
 x_125 = x_116;
} else {
 lean::inc(x_123);
 lean::dec(x_116);
 x_125 = lean::box(0);
}
x_126 = lean::cnstr_get(x_123, 0);
x_128 = lean::cnstr_get(x_123, 1);
if (lean::is_exclusive(x_123)) {
 x_130 = x_123;
} else {
 lean::inc(x_126);
 lean::inc(x_128);
 lean::dec(x_123);
 x_130 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_131 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_131 = x_13;
}
lean::cnstr_set(x_131, 0, x_111);
lean::cnstr_set(x_131, 1, x_126);
if (lean::is_scalar(x_130)) {
 x_132 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_132 = x_130;
}
lean::cnstr_set(x_132, 0, x_131);
lean::cnstr_set(x_132, 1, x_128);
if (lean::is_scalar(x_125)) {
 x_133 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_133 = x_125;
}
lean::cnstr_set(x_133, 0, x_132);
return x_133;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_12; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
lean::dec(x_2);
x_10 = l_lean_elaborator_infer__mod__to__pexpr(x_7);
x_11 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_4);
if (lean::is_scalar(x_6)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_6;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
lean::dec(x_7);
lean::inc(x_1);
x_16 = l_lean_elaborator_to__pexpr___main(x_12, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_20; obj* x_22; obj* x_23; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_20 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_22 = x_16;
} else {
 lean::inc(x_20);
 lean::dec(x_16);
 x_22 = lean::box(0);
}
if (lean::is_scalar(x_22)) {
 x_23 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_23 = x_22;
}
lean::cnstr_set(x_23, 0, x_20);
return x_23;
}
else
{
obj* x_24; obj* x_27; obj* x_29; obj* x_32; 
x_24 = lean::cnstr_get(x_16, 0);
lean::inc(x_24);
lean::dec(x_16);
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_24, 1);
lean::inc(x_29);
lean::dec(x_24);
x_32 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_9, x_1, x_29);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_11);
lean::dec(x_27);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_41 = x_32;
} else {
 lean::inc(x_39);
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 0);
x_44 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_46 = x_39;
} else {
 lean::inc(x_42);
 lean::inc(x_44);
 lean::dec(x_39);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_47 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_47 = x_11;
}
lean::cnstr_set(x_47, 0, x_27);
lean::cnstr_set(x_47, 1, x_42);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_44);
if (lean::is_scalar(x_41)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_41;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_11; obj* x_13; obj* x_14; 
x_9 = lean::cnstr_get(x_1, 0);
x_11 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_9);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
switch (lean::obj_tag(x_9)) {
case 0:
{
obj* x_16; obj* x_19; 
x_16 = lean::cnstr_get(x_9, 0);
lean::inc(x_16);
lean::dec(x_9);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
if (lean::obj_tag(x_19) == 0)
{
obj* x_23; obj* x_26; 
lean::dec(x_19);
x_23 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
lean::inc(x_2);
lean::inc(x_0);
x_26 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_23, x_2, x_3);
if (lean::obj_tag(x_26) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
x_31 = lean::cnstr_get(x_26, 0);
if (lean::is_exclusive(x_26)) {
 x_33 = x_26;
} else {
 lean::inc(x_31);
 lean::dec(x_26);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; 
x_35 = lean::cnstr_get(x_26, 0);
lean::inc(x_35);
lean::dec(x_26);
x_14 = x_35;
goto lbl_15;
}
}
else
{
obj* x_38; uint8 x_41; obj* x_42; obj* x_43; obj* x_44; 
x_38 = lean::cnstr_get(x_19, 0);
lean::inc(x_38);
lean::dec(x_19);
x_41 = 0;
x_42 = lean::box(x_41);
x_43 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_38);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_3);
x_14 = x_44;
goto lbl_15;
}
}
case 1:
{
obj* x_45; obj* x_48; uint8 x_51; obj* x_52; obj* x_53; obj* x_54; 
x_45 = lean::cnstr_get(x_9, 0);
lean::inc(x_45);
lean::dec(x_9);
x_48 = lean::cnstr_get(x_45, 1);
lean::inc(x_48);
lean::dec(x_45);
x_51 = 1;
x_52 = lean::box(x_51);
x_53 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_48);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_3);
x_14 = x_54;
goto lbl_15;
}
case 2:
{
obj* x_55; obj* x_58; uint8 x_61; obj* x_62; obj* x_63; obj* x_64; 
x_55 = lean::cnstr_get(x_9, 0);
lean::inc(x_55);
lean::dec(x_9);
x_58 = lean::cnstr_get(x_55, 1);
lean::inc(x_58);
lean::dec(x_55);
x_61 = 2;
x_62 = lean::box(x_61);
x_63 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_58);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_3);
x_14 = x_64;
goto lbl_15;
}
default:
{
obj* x_65; obj* x_68; uint8 x_71; obj* x_72; obj* x_73; obj* x_74; 
x_65 = lean::cnstr_get(x_9, 0);
lean::inc(x_65);
lean::dec(x_9);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
lean::dec(x_65);
x_71 = 3;
x_72 = lean::box(x_71);
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_68);
x_74 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_3);
x_14 = x_74;
goto lbl_15;
}
}
lbl_15:
{
obj* x_75; obj* x_77; obj* x_80; obj* x_82; obj* x_85; obj* x_87; obj* x_90; obj* x_92; 
x_75 = lean::cnstr_get(x_14, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_14, 1);
lean::inc(x_77);
lean::dec(x_14);
x_80 = lean::cnstr_get(x_75, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_75, 1);
lean::inc(x_82);
lean::dec(x_75);
x_85 = lean::cnstr_get(x_82, 2);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_85, 1);
lean::inc(x_87);
lean::dec(x_85);
x_90 = l_lean_expander_get__opt__type___main(x_87);
lean::inc(x_2);
x_92 = l_lean_elaborator_to__pexpr___main(x_90, x_2, x_77);
if (lean::obj_tag(x_92) == 0)
{
obj* x_99; obj* x_101; obj* x_102; 
lean::dec(x_0);
lean::dec(x_11);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_82);
lean::dec(x_80);
x_99 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_101 = x_92;
} else {
 lean::inc(x_99);
 lean::dec(x_92);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_99);
return x_102;
}
else
{
obj* x_103; obj* x_106; obj* x_108; obj* x_111; 
x_103 = lean::cnstr_get(x_92, 0);
lean::inc(x_103);
lean::dec(x_92);
x_106 = lean::cnstr_get(x_103, 0);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_103, 1);
lean::inc(x_108);
lean::dec(x_103);
x_111 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_11, x_2, x_108);
if (lean::obj_tag(x_111) == 0)
{
obj* x_116; obj* x_118; obj* x_119; 
lean::dec(x_13);
lean::dec(x_82);
lean::dec(x_80);
lean::dec(x_106);
x_116 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_118 = x_111;
} else {
 lean::inc(x_116);
 lean::dec(x_111);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_116);
return x_119;
}
else
{
obj* x_120; obj* x_122; obj* x_123; obj* x_125; obj* x_127; obj* x_128; obj* x_129; uint8 x_130; obj* x_131; obj* x_132; obj* x_134; obj* x_135; obj* x_136; obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; 
x_120 = lean::cnstr_get(x_111, 0);
if (lean::is_exclusive(x_111)) {
 x_122 = x_111;
} else {
 lean::inc(x_120);
 lean::dec(x_111);
 x_122 = lean::box(0);
}
x_123 = lean::cnstr_get(x_120, 0);
x_125 = lean::cnstr_get(x_120, 1);
if (lean::is_exclusive(x_120)) {
 x_127 = x_120;
} else {
 lean::inc(x_123);
 lean::inc(x_125);
 lean::dec(x_120);
 x_127 = lean::box(0);
}
x_128 = l_lean_elaborator_mk__eqns___closed__1;
x_129 = l_lean_elaborator_dummy;
x_130 = lean::unbox(x_80);
x_131 = lean_expr_local(x_128, x_128, x_129, x_130);
x_132 = lean::cnstr_get(x_82, 0);
lean::inc(x_132);
x_134 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__8(x_132);
x_135 = l_lean_elaborator_names__to__pexpr(x_134);
x_136 = lean::cnstr_get(x_82, 1);
lean::inc(x_136);
lean::dec(x_82);
x_139 = l_lean_elaborator_infer__mod__to__pexpr(x_136);
x_140 = lean::box(0);
if (lean::is_scalar(x_13)) {
 x_141 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_141 = x_13;
}
lean::cnstr_set(x_141, 0, x_106);
lean::cnstr_set(x_141, 1, x_140);
x_142 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_142, 0, x_139);
lean::cnstr_set(x_142, 1, x_141);
x_143 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_143, 0, x_135);
lean::cnstr_set(x_143, 1, x_142);
x_144 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_144, 0, x_131);
lean::cnstr_set(x_144, 1, x_143);
x_145 = l_lean_expr_mk__capp(x_128, x_144);
x_146 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_146, 0, x_145);
lean::cnstr_set(x_146, 1, x_123);
if (lean::is_scalar(x_127)) {
 x_147 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_147 = x_127;
}
lean::cnstr_set(x_147, 0, x_146);
lean::cnstr_set(x_147, 1, x_125);
if (lean::is_scalar(x_122)) {
 x_148 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_148 = x_122;
}
lean::cnstr_set(x_148, 0, x_147);
return x_148;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
lean::inc(x_2);
x_8 = level_mk_param(x_2);
x_9 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_0, x_2, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string(".");
x_2 = lean::box(0);
x_3 = l_lean_name_to__string__with__sep___main(x_1, x_2);
x_4 = l_lean_parser_substring_of__string(x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_4);
lean::cnstr_set(x_6, 2, x_2);
lean::cnstr_set(x_6, 3, x_5);
lean::cnstr_set(x_6, 4, x_5);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_0);
return x_7;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("def");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("constant");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("inductives");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = l_lean_elaborator_infer__mod__to__pexpr(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("structure");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("mk");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 4);
lean::inc(x_3);
x_7 = l_lean_parser_command_declaration_has__view;
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::dec(x_7);
lean::inc(x_0);
x_12 = lean::apply_1(x_8, x_0);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
switch (lean::obj_tag(x_13)) {
case 0:
{
obj* x_15; obj* x_18; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
lean::dec(x_13);
x_18 = lean::cnstr_get(x_15, 0);
lean::inc(x_18);
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_21; obj* x_24; obj* x_25; 
lean::dec(x_18);
x_21 = lean::cnstr_get(x_12, 0);
lean::inc(x_21);
lean::dec(x_12);
x_24 = lean::mk_nat_obj(1u);
x_25 = l_lean_elaborator_elab__def__like(x_0, x_21, x_15, x_24, x_1, x_2);
x_5 = x_25;
goto lbl_6;
}
case 1:
{
obj* x_27; obj* x_30; obj* x_31; 
lean::dec(x_18);
x_27 = lean::cnstr_get(x_12, 0);
lean::inc(x_27);
lean::dec(x_12);
x_30 = lean::mk_nat_obj(5u);
x_31 = l_lean_elaborator_elab__def__like(x_0, x_27, x_15, x_30, x_1, x_2);
x_5 = x_31;
goto lbl_6;
}
default:
{
obj* x_33; obj* x_36; obj* x_37; 
lean::dec(x_18);
x_33 = lean::cnstr_get(x_12, 0);
lean::inc(x_33);
lean::dec(x_12);
x_36 = lean::mk_nat_obj(0u);
x_37 = l_lean_elaborator_elab__def__like(x_0, x_33, x_15, x_36, x_1, x_2);
x_5 = x_37;
goto lbl_6;
}
}
}
case 1:
{
obj* x_38; obj* x_41; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_38 = lean::cnstr_get(x_13, 0);
lean::inc(x_38);
lean::dec(x_13);
x_41 = lean::cnstr_get(x_12, 0);
lean::inc(x_41);
lean::dec(x_12);
x_44 = lean::box(0);
x_45 = lean::cnstr_get(x_38, 1);
lean::inc(x_45);
x_47 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
x_48 = l_option_get__or__else___main___rarg(x_45, x_47);
x_49 = lean::cnstr_get(x_38, 2);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_49, 1);
lean::inc(x_53);
lean::dec(x_49);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_53);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_51);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::cnstr_get(x_38, 3);
lean::inc(x_58);
lean::dec(x_38);
x_61 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_62 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_44);
lean::cnstr_set(x_62, 2, x_48);
lean::cnstr_set(x_62, 3, x_57);
lean::cnstr_set(x_62, 4, x_58);
x_63 = lean::mk_nat_obj(3u);
x_64 = l_lean_elaborator_elab__def__like(x_0, x_41, x_62, x_63, x_1, x_2);
x_5 = x_64;
goto lbl_6;
}
case 2:
{
obj* x_65; obj* x_68; obj* x_71; obj* x_72; obj* x_74; obj* x_76; obj* x_79; obj* x_80; obj* x_81; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; 
x_65 = lean::cnstr_get(x_13, 0);
lean::inc(x_65);
lean::dec(x_13);
x_68 = lean::cnstr_get(x_12, 0);
lean::inc(x_68);
lean::dec(x_12);
x_71 = lean::box(0);
x_72 = lean::cnstr_get(x_65, 1);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_72, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get(x_72, 1);
lean::inc(x_76);
lean::dec(x_72);
x_79 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_79, 0, x_76);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_74);
lean::cnstr_set(x_80, 1, x_79);
x_81 = lean::cnstr_get(x_65, 2);
lean::inc(x_81);
lean::dec(x_65);
x_84 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2;
x_85 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1;
x_86 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_86, 0, x_84);
lean::cnstr_set(x_86, 1, x_71);
lean::cnstr_set(x_86, 2, x_85);
lean::cnstr_set(x_86, 3, x_80);
lean::cnstr_set(x_86, 4, x_81);
x_87 = lean::mk_nat_obj(2u);
x_88 = l_lean_elaborator_elab__def__like(x_0, x_68, x_86, x_87, x_1, x_2);
x_5 = x_88;
goto lbl_6;
}
case 3:
{
obj* x_89; obj* x_92; obj* x_94; 
x_89 = lean::cnstr_get(x_13, 0);
lean::inc(x_89);
lean::dec(x_13);
x_92 = lean::cnstr_get(x_89, 2);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_92, 0);
lean::inc(x_94);
if (lean::obj_tag(x_94) == 0)
{
obj* x_100; obj* x_101; 
lean::dec(x_12);
lean::dec(x_92);
lean::dec(x_94);
lean::dec(x_89);
x_100 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_101 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_100, x_1, x_2);
x_5 = x_101;
goto lbl_6;
}
else
{
obj* x_102; 
x_102 = lean::cnstr_get(x_94, 0);
lean::inc(x_102);
lean::dec(x_94);
if (lean::obj_tag(x_102) == 0)
{
obj* x_105; obj* x_108; obj* x_111; obj* x_115; 
x_105 = lean::cnstr_get(x_89, 1);
lean::inc(x_105);
lean::dec(x_89);
x_108 = lean::cnstr_get(x_92, 1);
lean::inc(x_108);
lean::dec(x_92);
x_111 = lean::cnstr_get(x_12, 0);
lean::inc(x_111);
lean::dec(x_12);
lean::inc(x_1);
x_115 = l_lean_elaborator_decl__modifiers__to__pexpr(x_111, x_1, x_2);
if (lean::obj_tag(x_115) == 0)
{
obj* x_120; obj* x_122; obj* x_123; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_105);
lean::dec(x_108);
x_120 = lean::cnstr_get(x_115, 0);
if (lean::is_exclusive(x_115)) {
 x_122 = x_115;
} else {
 lean::inc(x_120);
 lean::dec(x_115);
 x_122 = lean::box(0);
}
if (lean::is_scalar(x_122)) {
 x_123 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_123 = x_122;
}
lean::cnstr_set(x_123, 0, x_120);
x_5 = x_123;
goto lbl_6;
}
else
{
obj* x_124; obj* x_127; obj* x_129; obj* x_132; obj* x_136; 
x_124 = lean::cnstr_get(x_115, 0);
lean::inc(x_124);
lean::dec(x_115);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
lean::dec(x_124);
x_132 = lean::cnstr_get(x_108, 1);
lean::inc(x_132);
lean::dec(x_108);
lean::inc(x_1);
x_136 = l_lean_elaborator_to__pexpr___main(x_132, x_1, x_129);
if (lean::obj_tag(x_136) == 0)
{
obj* x_141; obj* x_143; obj* x_144; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_127);
lean::dec(x_105);
x_141 = lean::cnstr_get(x_136, 0);
if (lean::is_exclusive(x_136)) {
 x_143 = x_136;
} else {
 lean::inc(x_141);
 lean::dec(x_136);
 x_143 = lean::box(0);
}
if (lean::is_scalar(x_143)) {
 x_144 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_144 = x_143;
}
lean::cnstr_set(x_144, 0, x_141);
x_5 = x_144;
goto lbl_6;
}
else
{
obj* x_145; obj* x_148; obj* x_150; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; 
x_145 = lean::cnstr_get(x_136, 0);
lean::inc(x_145);
lean::dec(x_136);
x_148 = lean::cnstr_get(x_145, 0);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_145, 1);
lean::inc(x_150);
lean::dec(x_145);
x_153 = lean::box(0);
x_154 = l_lean_elaborator_ident__univ__params__to__pexpr(x_105);
x_155 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_155, 0, x_148);
lean::cnstr_set(x_155, 1, x_153);
x_156 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_156, 0, x_154);
lean::cnstr_set(x_156, 1, x_155);
x_157 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_157, 0, x_127);
lean::cnstr_set(x_157, 1, x_156);
x_158 = l_lean_elaborator_mk__eqns___closed__1;
x_159 = l_lean_expr_mk__capp(x_158, x_157);
x_160 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3;
x_161 = lean_expr_mk_mdata(x_160, x_159);
x_162 = l_lean_elaborator_old__elab__command(x_0, x_161, x_1, x_150);
x_5 = x_162;
goto lbl_6;
}
}
}
else
{
obj* x_167; obj* x_168; 
lean::dec(x_12);
lean::dec(x_92);
lean::dec(x_102);
lean::dec(x_89);
x_167 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_168 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_167, x_1, x_2);
x_5 = x_168;
goto lbl_6;
}
}
}
case 4:
{
obj* x_169; obj* x_172; 
x_169 = lean::cnstr_get(x_13, 0);
lean::inc(x_169);
lean::dec(x_13);
x_172 = lean::cnstr_get(x_169, 0);
lean::inc(x_172);
if (lean::obj_tag(x_172) == 0)
{
obj* x_174; obj* x_176; 
x_174 = lean::cnstr_get(x_169, 4);
lean::inc(x_174);
x_176 = lean::cnstr_get(x_174, 0);
lean::inc(x_176);
if (lean::obj_tag(x_176) == 0)
{
obj* x_182; obj* x_183; 
lean::dec(x_176);
lean::dec(x_174);
lean::dec(x_169);
lean::dec(x_12);
x_182 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_183 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_182, x_1, x_2);
x_5 = x_183;
goto lbl_6;
}
else
{
obj* x_184; obj* x_186; obj* x_188; obj* x_191; obj* x_194; obj* x_197; obj* x_202; 
x_184 = lean::cnstr_get(x_169, 2);
lean::inc(x_184);
x_186 = lean::cnstr_get(x_169, 3);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_169, 6);
lean::inc(x_188);
lean::dec(x_169);
x_191 = lean::cnstr_get(x_174, 1);
lean::inc(x_191);
lean::dec(x_174);
x_194 = lean::cnstr_get(x_176, 0);
lean::inc(x_194);
lean::dec(x_176);
x_197 = lean::cnstr_get(x_12, 0);
lean::inc(x_197);
lean::dec(x_12);
lean::inc(x_1);
lean::inc(x_197);
x_202 = l_lean_elaborator_decl__modifiers__to__pexpr(x_197, x_1, x_2);
if (lean::obj_tag(x_202) == 0)
{
obj* x_211; obj* x_213; obj* x_214; 
lean::dec(x_197);
lean::dec(x_191);
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_184);
x_211 = lean::cnstr_get(x_202, 0);
if (lean::is_exclusive(x_202)) {
 x_213 = x_202;
} else {
 lean::inc(x_211);
 lean::dec(x_202);
 x_213 = lean::box(0);
}
if (lean::is_scalar(x_213)) {
 x_214 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_214 = x_213;
}
lean::cnstr_set(x_214, 0, x_211);
x_5 = x_214;
goto lbl_6;
}
else
{
obj* x_215; obj* x_218; obj* x_220; obj* x_223; obj* x_224; obj* x_226; 
x_215 = lean::cnstr_get(x_202, 0);
lean::inc(x_215);
lean::dec(x_202);
x_218 = lean::cnstr_get(x_215, 0);
lean::inc(x_218);
x_220 = lean::cnstr_get(x_215, 1);
lean::inc(x_220);
lean::dec(x_215);
x_223 = lean::box(0);
x_226 = lean::cnstr_get(x_197, 1);
lean::inc(x_226);
lean::dec(x_197);
if (lean::obj_tag(x_226) == 0)
{
x_224 = x_223;
goto lbl_225;
}
else
{
obj* x_229; obj* x_232; 
x_229 = lean::cnstr_get(x_226, 0);
lean::inc(x_229);
lean::dec(x_226);
x_232 = lean::cnstr_get(x_229, 1);
lean::inc(x_232);
lean::dec(x_229);
x_224 = x_232;
goto lbl_225;
}
lbl_225:
{
obj* x_236; 
lean::inc(x_1);
x_236 = l_lean_elaborator_attrs__to__pexpr(x_224, x_1, x_220);
if (lean::obj_tag(x_236) == 0)
{
obj* x_245; obj* x_247; obj* x_248; 
lean::dec(x_191);
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_184);
x_245 = lean::cnstr_get(x_236, 0);
if (lean::is_exclusive(x_236)) {
 x_247 = x_236;
} else {
 lean::inc(x_245);
 lean::dec(x_236);
 x_247 = lean::box(0);
}
if (lean::is_scalar(x_247)) {
 x_248 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_248 = x_247;
}
lean::cnstr_set(x_248, 0, x_245);
x_5 = x_248;
goto lbl_6;
}
else
{
obj* x_249; obj* x_252; obj* x_254; obj* x_257; obj* x_258; obj* x_259; obj* x_260; obj* x_261; 
x_249 = lean::cnstr_get(x_236, 0);
lean::inc(x_249);
lean::dec(x_236);
x_252 = lean::cnstr_get(x_249, 0);
lean::inc(x_252);
x_254 = lean::cnstr_get(x_249, 1);
lean::inc(x_254);
lean::dec(x_249);
x_257 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_257, 0, x_252);
lean::cnstr_set(x_257, 1, x_223);
x_258 = l_lean_elaborator_mk__eqns___closed__1;
x_259 = l_lean_expr_mk__capp(x_258, x_257);
if (lean::obj_tag(x_184) == 0)
{
obj* x_263; obj* x_265; 
x_263 = l_lean_expander_get__opt__type___main(x_191);
lean::inc(x_1);
x_265 = l_lean_elaborator_to__pexpr___main(x_263, x_1, x_254);
if (lean::obj_tag(x_184) == 0)
{
if (lean::obj_tag(x_265) == 0)
{
obj* x_273; obj* x_275; obj* x_276; 
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
x_273 = lean::cnstr_get(x_265, 0);
if (lean::is_exclusive(x_265)) {
 x_275 = x_265;
} else {
 lean::inc(x_273);
 lean::dec(x_265);
 x_275 = lean::box(0);
}
if (lean::is_scalar(x_275)) {
 x_276 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_276 = x_275;
}
lean::cnstr_set(x_276, 0, x_273);
x_5 = x_276;
goto lbl_6;
}
else
{
obj* x_277; 
x_277 = lean::cnstr_get(x_265, 0);
lean::inc(x_277);
lean::dec(x_265);
x_260 = x_223;
x_261 = x_277;
goto lbl_262;
}
}
else
{
if (lean::obj_tag(x_265) == 0)
{
obj* x_287; obj* x_289; obj* x_290; 
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
x_287 = lean::cnstr_get(x_265, 0);
if (lean::is_exclusive(x_265)) {
 x_289 = x_265;
} else {
 lean::inc(x_287);
 lean::dec(x_265);
 x_289 = lean::box(0);
}
if (lean::is_scalar(x_289)) {
 x_290 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_290 = x_289;
}
lean::cnstr_set(x_290, 0, x_287);
x_5 = x_290;
goto lbl_6;
}
else
{
obj* x_291; obj* x_294; obj* x_297; obj* x_300; 
x_291 = lean::cnstr_get(x_184, 0);
lean::inc(x_291);
lean::dec(x_184);
x_294 = lean::cnstr_get(x_265, 0);
lean::inc(x_294);
lean::dec(x_265);
x_297 = lean::cnstr_get(x_291, 1);
lean::inc(x_297);
lean::dec(x_291);
x_300 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__3(x_297);
x_260 = x_300;
x_261 = x_294;
goto lbl_262;
}
}
}
else
{
obj* x_301; obj* x_303; obj* x_305; obj* x_307; obj* x_309; obj* x_311; obj* x_313; obj* x_315; obj* x_317; obj* x_321; obj* x_322; obj* x_323; obj* x_325; obj* x_327; obj* x_329; obj* x_331; obj* x_334; obj* x_335; obj* x_337; obj* x_339; obj* x_341; obj* x_343; obj* x_345; obj* x_348; obj* x_349; obj* x_351; 
x_301 = lean::cnstr_get(x_184, 0);
lean::inc(x_301);
x_303 = lean::cnstr_get(x_254, 0);
lean::inc(x_303);
x_305 = lean::cnstr_get(x_254, 1);
lean::inc(x_305);
x_307 = lean::cnstr_get(x_254, 2);
lean::inc(x_307);
x_309 = lean::cnstr_get(x_254, 3);
lean::inc(x_309);
x_311 = lean::cnstr_get(x_254, 4);
lean::inc(x_311);
x_313 = lean::cnstr_get(x_311, 0);
lean::inc(x_313);
x_315 = lean::cnstr_get(x_311, 1);
lean::inc(x_315);
x_317 = lean::cnstr_get(x_301, 1);
lean::inc(x_317);
lean::dec(x_301);
lean::inc(x_317);
x_321 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__4(x_317);
x_322 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__5(x_315, x_321);
x_323 = lean::cnstr_get(x_311, 2);
lean::inc(x_323);
x_325 = lean::cnstr_get(x_311, 3);
lean::inc(x_325);
x_327 = lean::cnstr_get(x_311, 4);
lean::inc(x_327);
x_329 = lean::cnstr_get(x_311, 5);
lean::inc(x_329);
x_331 = lean::cnstr_get(x_311, 6);
lean::inc(x_331);
lean::dec(x_311);
x_334 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_334, 0, x_313);
lean::cnstr_set(x_334, 1, x_322);
lean::cnstr_set(x_334, 2, x_323);
lean::cnstr_set(x_334, 3, x_325);
lean::cnstr_set(x_334, 4, x_327);
lean::cnstr_set(x_334, 5, x_329);
lean::cnstr_set(x_334, 6, x_331);
x_335 = lean::cnstr_get(x_254, 5);
lean::inc(x_335);
x_337 = lean::cnstr_get(x_254, 6);
lean::inc(x_337);
x_339 = lean::cnstr_get(x_254, 7);
lean::inc(x_339);
x_341 = lean::cnstr_get(x_254, 8);
lean::inc(x_341);
x_343 = lean::cnstr_get(x_254, 9);
lean::inc(x_343);
x_345 = lean::cnstr_get(x_254, 10);
lean::inc(x_345);
lean::dec(x_254);
x_348 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_348, 0, x_303);
lean::cnstr_set(x_348, 1, x_305);
lean::cnstr_set(x_348, 2, x_307);
lean::cnstr_set(x_348, 3, x_309);
lean::cnstr_set(x_348, 4, x_334);
lean::cnstr_set(x_348, 5, x_335);
lean::cnstr_set(x_348, 6, x_337);
lean::cnstr_set(x_348, 7, x_339);
lean::cnstr_set(x_348, 8, x_341);
lean::cnstr_set(x_348, 9, x_343);
lean::cnstr_set(x_348, 10, x_345);
x_349 = l_lean_expander_get__opt__type___main(x_191);
lean::inc(x_1);
x_351 = l_lean_elaborator_to__pexpr___main(x_349, x_1, x_348);
if (lean::obj_tag(x_184) == 0)
{
lean::dec(x_317);
if (lean::obj_tag(x_351) == 0)
{
obj* x_360; obj* x_362; obj* x_363; 
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
x_360 = lean::cnstr_get(x_351, 0);
if (lean::is_exclusive(x_351)) {
 x_362 = x_351;
} else {
 lean::inc(x_360);
 lean::dec(x_351);
 x_362 = lean::box(0);
}
if (lean::is_scalar(x_362)) {
 x_363 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_363 = x_362;
}
lean::cnstr_set(x_363, 0, x_360);
x_5 = x_363;
goto lbl_6;
}
else
{
obj* x_364; 
x_364 = lean::cnstr_get(x_351, 0);
lean::inc(x_364);
lean::dec(x_351);
x_260 = x_223;
x_261 = x_364;
goto lbl_262;
}
}
else
{
lean::dec(x_184);
if (lean::obj_tag(x_351) == 0)
{
obj* x_376; obj* x_378; obj* x_379; 
lean::dec(x_188);
lean::dec(x_194);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
lean::dec(x_317);
x_376 = lean::cnstr_get(x_351, 0);
if (lean::is_exclusive(x_351)) {
 x_378 = x_351;
} else {
 lean::inc(x_376);
 lean::dec(x_351);
 x_378 = lean::box(0);
}
if (lean::is_scalar(x_378)) {
 x_379 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_379 = x_378;
}
lean::cnstr_set(x_379, 0, x_376);
x_5 = x_379;
goto lbl_6;
}
else
{
obj* x_380; obj* x_383; 
x_380 = lean::cnstr_get(x_351, 0);
lean::inc(x_380);
lean::dec(x_351);
x_383 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__6(x_317);
x_260 = x_383;
x_261 = x_380;
goto lbl_262;
}
}
}
lbl_262:
{
obj* x_384; obj* x_386; obj* x_390; 
x_384 = lean::cnstr_get(x_261, 0);
lean::inc(x_384);
x_386 = lean::cnstr_get(x_261, 1);
lean::inc(x_386);
lean::dec(x_261);
lean::inc(x_1);
x_390 = l_lean_elaborator_simple__binders__to__pexpr(x_194, x_1, x_386);
if (lean::obj_tag(x_390) == 0)
{
obj* x_399; obj* x_401; obj* x_402; 
lean::dec(x_188);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
lean::dec(x_260);
lean::dec(x_384);
x_399 = lean::cnstr_get(x_390, 0);
if (lean::is_exclusive(x_390)) {
 x_401 = x_390;
} else {
 lean::inc(x_399);
 lean::dec(x_390);
 x_401 = lean::box(0);
}
if (lean::is_scalar(x_401)) {
 x_402 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_402 = x_401;
}
lean::cnstr_set(x_402, 0, x_399);
x_5 = x_402;
goto lbl_6;
}
else
{
obj* x_403; obj* x_406; obj* x_408; obj* x_414; 
x_403 = lean::cnstr_get(x_390, 0);
lean::inc(x_403);
lean::dec(x_390);
x_406 = lean::cnstr_get(x_403, 0);
lean::inc(x_406);
x_408 = lean::cnstr_get(x_403, 1);
lean::inc(x_408);
lean::dec(x_403);
lean::inc(x_1);
lean::inc(x_188);
lean::inc(x_0);
x_414 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1(x_0, x_188, x_1, x_408);
if (lean::obj_tag(x_414) == 0)
{
obj* x_424; obj* x_426; obj* x_427; 
lean::dec(x_188);
lean::dec(x_186);
lean::dec(x_218);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_259);
lean::dec(x_406);
lean::dec(x_260);
lean::dec(x_384);
x_424 = lean::cnstr_get(x_414, 0);
if (lean::is_exclusive(x_414)) {
 x_426 = x_414;
} else {
 lean::inc(x_424);
 lean::dec(x_414);
 x_426 = lean::box(0);
}
if (lean::is_scalar(x_426)) {
 x_427 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_427 = x_426;
}
lean::cnstr_set(x_427, 0, x_424);
x_5 = x_427;
goto lbl_6;
}
else
{
obj* x_428; obj* x_431; obj* x_433; obj* x_436; obj* x_437; obj* x_440; uint8 x_441; obj* x_443; obj* x_444; obj* x_445; obj* x_446; obj* x_447; obj* x_448; obj* x_449; obj* x_450; obj* x_451; obj* x_452; obj* x_453; obj* x_454; obj* x_455; obj* x_456; obj* x_457; obj* x_458; obj* x_459; obj* x_460; obj* x_461; obj* x_462; obj* x_463; 
x_428 = lean::cnstr_get(x_414, 0);
lean::inc(x_428);
lean::dec(x_414);
x_431 = lean::cnstr_get(x_428, 0);
lean::inc(x_431);
x_433 = lean::cnstr_get(x_428, 1);
lean::inc(x_433);
lean::dec(x_428);
x_436 = l_lean_elaborator_names__to__pexpr(x_260);
x_437 = lean::cnstr_get(x_186, 0);
lean::inc(x_437);
lean::dec(x_186);
x_440 = l_lean_elaborator_mangle__ident(x_437);
x_441 = 0;
lean::inc(x_440);
x_443 = lean_expr_local(x_440, x_440, x_384, x_441);
x_444 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_444, 0, x_443);
lean::cnstr_set(x_444, 1, x_223);
x_445 = l_lean_expr_mk__capp(x_258, x_444);
x_446 = l_lean_expr_mk__capp(x_258, x_431);
x_447 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_447, 0, x_446);
lean::cnstr_set(x_447, 1, x_223);
x_448 = l_lean_expr_mk__capp(x_258, x_447);
x_449 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__2(x_188);
x_450 = l_lean_expr_mk__capp(x_258, x_449);
x_451 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_451, 0, x_450);
lean::cnstr_set(x_451, 1, x_223);
x_452 = l_lean_expr_mk__capp(x_258, x_451);
x_453 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_453, 0, x_452);
lean::cnstr_set(x_453, 1, x_223);
x_454 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_454, 0, x_448);
lean::cnstr_set(x_454, 1, x_453);
x_455 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_455, 0, x_406);
lean::cnstr_set(x_455, 1, x_454);
x_456 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_456, 0, x_445);
lean::cnstr_set(x_456, 1, x_455);
x_457 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_457, 0, x_436);
lean::cnstr_set(x_457, 1, x_456);
x_458 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_458, 0, x_259);
lean::cnstr_set(x_458, 1, x_457);
x_459 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_459, 0, x_218);
lean::cnstr_set(x_459, 1, x_458);
x_460 = l_lean_expr_mk__capp(x_258, x_459);
x_461 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4;
x_462 = lean_expr_mk_mdata(x_461, x_460);
x_463 = l_lean_elaborator_old__elab__command(x_0, x_462, x_1, x_433);
x_5 = x_463;
goto lbl_6;
}
}
}
}
}
}
}
}
else
{
obj* x_467; obj* x_468; 
lean::dec(x_172);
lean::dec(x_169);
lean::dec(x_12);
x_467 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_468 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_467, x_1, x_2);
x_5 = x_468;
goto lbl_6;
}
}
default:
{
obj* x_469; obj* x_472; 
x_469 = lean::cnstr_get(x_13, 0);
lean::inc(x_469);
lean::dec(x_13);
x_472 = lean::cnstr_get(x_469, 0);
lean::inc(x_472);
if (lean::obj_tag(x_472) == 0)
{
obj* x_475; obj* x_477; 
lean::dec(x_472);
x_475 = lean::cnstr_get(x_469, 3);
lean::inc(x_475);
x_477 = lean::cnstr_get(x_475, 0);
lean::inc(x_477);
if (lean::obj_tag(x_477) == 0)
{
obj* x_483; obj* x_484; 
lean::dec(x_469);
lean::dec(x_12);
lean::dec(x_477);
lean::dec(x_475);
x_483 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_484 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_483, x_1, x_2);
x_5 = x_484;
goto lbl_6;
}
else
{
obj* x_485; obj* x_487; obj* x_489; obj* x_491; obj* x_493; obj* x_496; obj* x_499; obj* x_502; obj* x_506; 
x_485 = lean::cnstr_get(x_469, 1);
lean::inc(x_485);
x_487 = lean::cnstr_get(x_469, 2);
lean::inc(x_487);
x_489 = lean::cnstr_get(x_469, 4);
lean::inc(x_489);
x_491 = lean::cnstr_get(x_469, 6);
lean::inc(x_491);
x_493 = lean::cnstr_get(x_469, 7);
lean::inc(x_493);
lean::dec(x_469);
x_496 = lean::cnstr_get(x_475, 1);
lean::inc(x_496);
lean::dec(x_475);
x_499 = lean::cnstr_get(x_477, 0);
lean::inc(x_499);
lean::dec(x_477);
x_502 = lean::cnstr_get(x_12, 0);
lean::inc(x_502);
lean::dec(x_12);
lean::inc(x_1);
x_506 = l_lean_elaborator_decl__modifiers__to__pexpr(x_502, x_1, x_2);
if (lean::obj_tag(x_506) == 0)
{
obj* x_516; obj* x_518; obj* x_519; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_499);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_496);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_485);
x_516 = lean::cnstr_get(x_506, 0);
if (lean::is_exclusive(x_506)) {
 x_518 = x_506;
} else {
 lean::inc(x_516);
 lean::dec(x_506);
 x_518 = lean::box(0);
}
if (lean::is_scalar(x_518)) {
 x_519 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_519 = x_518;
}
lean::cnstr_set(x_519, 0, x_516);
x_5 = x_519;
goto lbl_6;
}
else
{
obj* x_520; obj* x_523; obj* x_525; obj* x_528; obj* x_529; obj* x_530; 
x_520 = lean::cnstr_get(x_506, 0);
lean::inc(x_520);
lean::dec(x_506);
x_523 = lean::cnstr_get(x_520, 0);
lean::inc(x_523);
x_525 = lean::cnstr_get(x_520, 1);
lean::inc(x_525);
lean::dec(x_520);
x_528 = lean::box(0);
if (lean::obj_tag(x_485) == 0)
{
obj* x_532; obj* x_534; 
x_532 = l_lean_expander_get__opt__type___main(x_496);
lean::inc(x_1);
x_534 = l_lean_elaborator_to__pexpr___main(x_532, x_1, x_525);
if (lean::obj_tag(x_485) == 0)
{
if (lean::obj_tag(x_534) == 0)
{
obj* x_543; obj* x_545; obj* x_546; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_499);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_523);
x_543 = lean::cnstr_get(x_534, 0);
if (lean::is_exclusive(x_534)) {
 x_545 = x_534;
} else {
 lean::inc(x_543);
 lean::dec(x_534);
 x_545 = lean::box(0);
}
if (lean::is_scalar(x_545)) {
 x_546 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_546 = x_545;
}
lean::cnstr_set(x_546, 0, x_543);
x_5 = x_546;
goto lbl_6;
}
else
{
obj* x_547; 
x_547 = lean::cnstr_get(x_534, 0);
lean::inc(x_547);
lean::dec(x_534);
x_529 = x_528;
x_530 = x_547;
goto lbl_531;
}
}
else
{
if (lean::obj_tag(x_534) == 0)
{
obj* x_558; obj* x_560; obj* x_561; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_499);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_523);
x_558 = lean::cnstr_get(x_534, 0);
if (lean::is_exclusive(x_534)) {
 x_560 = x_534;
} else {
 lean::inc(x_558);
 lean::dec(x_534);
 x_560 = lean::box(0);
}
if (lean::is_scalar(x_560)) {
 x_561 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_561 = x_560;
}
lean::cnstr_set(x_561, 0, x_558);
x_5 = x_561;
goto lbl_6;
}
else
{
obj* x_562; obj* x_565; obj* x_568; obj* x_571; 
x_562 = lean::cnstr_get(x_485, 0);
lean::inc(x_562);
lean::dec(x_485);
x_565 = lean::cnstr_get(x_534, 0);
lean::inc(x_565);
lean::dec(x_534);
x_568 = lean::cnstr_get(x_562, 1);
lean::inc(x_568);
lean::dec(x_562);
x_571 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__10(x_568);
x_529 = x_571;
x_530 = x_565;
goto lbl_531;
}
}
}
else
{
obj* x_572; obj* x_574; obj* x_576; obj* x_578; obj* x_580; obj* x_582; obj* x_584; obj* x_586; obj* x_588; obj* x_592; obj* x_593; obj* x_594; obj* x_596; obj* x_598; obj* x_600; obj* x_602; obj* x_605; obj* x_606; obj* x_608; obj* x_610; obj* x_612; obj* x_614; obj* x_616; obj* x_619; obj* x_620; obj* x_622; 
x_572 = lean::cnstr_get(x_485, 0);
lean::inc(x_572);
x_574 = lean::cnstr_get(x_525, 0);
lean::inc(x_574);
x_576 = lean::cnstr_get(x_525, 1);
lean::inc(x_576);
x_578 = lean::cnstr_get(x_525, 2);
lean::inc(x_578);
x_580 = lean::cnstr_get(x_525, 3);
lean::inc(x_580);
x_582 = lean::cnstr_get(x_525, 4);
lean::inc(x_582);
x_584 = lean::cnstr_get(x_582, 0);
lean::inc(x_584);
x_586 = lean::cnstr_get(x_582, 1);
lean::inc(x_586);
x_588 = lean::cnstr_get(x_572, 1);
lean::inc(x_588);
lean::dec(x_572);
lean::inc(x_588);
x_592 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__11(x_588);
x_593 = l_list_foldl___main___at_lean_elaborator_declaration_elaborate___spec__12(x_586, x_592);
x_594 = lean::cnstr_get(x_582, 2);
lean::inc(x_594);
x_596 = lean::cnstr_get(x_582, 3);
lean::inc(x_596);
x_598 = lean::cnstr_get(x_582, 4);
lean::inc(x_598);
x_600 = lean::cnstr_get(x_582, 5);
lean::inc(x_600);
x_602 = lean::cnstr_get(x_582, 6);
lean::inc(x_602);
lean::dec(x_582);
x_605 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_605, 0, x_584);
lean::cnstr_set(x_605, 1, x_593);
lean::cnstr_set(x_605, 2, x_594);
lean::cnstr_set(x_605, 3, x_596);
lean::cnstr_set(x_605, 4, x_598);
lean::cnstr_set(x_605, 5, x_600);
lean::cnstr_set(x_605, 6, x_602);
x_606 = lean::cnstr_get(x_525, 5);
lean::inc(x_606);
x_608 = lean::cnstr_get(x_525, 6);
lean::inc(x_608);
x_610 = lean::cnstr_get(x_525, 7);
lean::inc(x_610);
x_612 = lean::cnstr_get(x_525, 8);
lean::inc(x_612);
x_614 = lean::cnstr_get(x_525, 9);
lean::inc(x_614);
x_616 = lean::cnstr_get(x_525, 10);
lean::inc(x_616);
lean::dec(x_525);
x_619 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_619, 0, x_574);
lean::cnstr_set(x_619, 1, x_576);
lean::cnstr_set(x_619, 2, x_578);
lean::cnstr_set(x_619, 3, x_580);
lean::cnstr_set(x_619, 4, x_605);
lean::cnstr_set(x_619, 5, x_606);
lean::cnstr_set(x_619, 6, x_608);
lean::cnstr_set(x_619, 7, x_610);
lean::cnstr_set(x_619, 8, x_612);
lean::cnstr_set(x_619, 9, x_614);
lean::cnstr_set(x_619, 10, x_616);
x_620 = l_lean_expander_get__opt__type___main(x_496);
lean::inc(x_1);
x_622 = l_lean_elaborator_to__pexpr___main(x_620, x_1, x_619);
if (lean::obj_tag(x_485) == 0)
{
lean::dec(x_588);
if (lean::obj_tag(x_622) == 0)
{
obj* x_632; obj* x_634; obj* x_635; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_499);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_523);
x_632 = lean::cnstr_get(x_622, 0);
if (lean::is_exclusive(x_622)) {
 x_634 = x_622;
} else {
 lean::inc(x_632);
 lean::dec(x_622);
 x_634 = lean::box(0);
}
if (lean::is_scalar(x_634)) {
 x_635 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_635 = x_634;
}
lean::cnstr_set(x_635, 0, x_632);
x_5 = x_635;
goto lbl_6;
}
else
{
obj* x_636; 
x_636 = lean::cnstr_get(x_622, 0);
lean::inc(x_636);
lean::dec(x_622);
x_529 = x_528;
x_530 = x_636;
goto lbl_531;
}
}
else
{
lean::dec(x_485);
if (lean::obj_tag(x_622) == 0)
{
obj* x_649; obj* x_651; obj* x_652; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_499);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_523);
lean::dec(x_588);
x_649 = lean::cnstr_get(x_622, 0);
if (lean::is_exclusive(x_622)) {
 x_651 = x_622;
} else {
 lean::inc(x_649);
 lean::dec(x_622);
 x_651 = lean::box(0);
}
if (lean::is_scalar(x_651)) {
 x_652 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_652 = x_651;
}
lean::cnstr_set(x_652, 0, x_649);
x_5 = x_652;
goto lbl_6;
}
else
{
obj* x_653; obj* x_656; 
x_653 = lean::cnstr_get(x_622, 0);
lean::inc(x_653);
lean::dec(x_622);
x_656 = l_list_map___main___at_lean_elaborator_declaration_elaborate___spec__13(x_588);
x_529 = x_656;
x_530 = x_653;
goto lbl_531;
}
}
}
lbl_531:
{
obj* x_657; obj* x_659; obj* x_663; 
x_657 = lean::cnstr_get(x_530, 0);
lean::inc(x_657);
x_659 = lean::cnstr_get(x_530, 1);
lean::inc(x_659);
lean::dec(x_530);
lean::inc(x_1);
x_663 = l_lean_elaborator_simple__binders__to__pexpr(x_499, x_1, x_659);
if (lean::obj_tag(x_663) == 0)
{
obj* x_673; obj* x_675; obj* x_676; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_491);
lean::dec(x_489);
lean::dec(x_493);
lean::dec(x_487);
lean::dec(x_523);
lean::dec(x_529);
lean::dec(x_657);
x_673 = lean::cnstr_get(x_663, 0);
if (lean::is_exclusive(x_663)) {
 x_675 = x_663;
} else {
 lean::inc(x_673);
 lean::dec(x_663);
 x_675 = lean::box(0);
}
if (lean::is_scalar(x_675)) {
 x_676 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_676 = x_675;
}
lean::cnstr_set(x_676, 0, x_673);
x_5 = x_676;
goto lbl_6;
}
else
{
obj* x_677; obj* x_680; obj* x_682; obj* x_685; obj* x_686; obj* x_689; obj* x_690; uint8 x_691; obj* x_693; obj* x_694; 
x_677 = lean::cnstr_get(x_663, 0);
lean::inc(x_677);
lean::dec(x_663);
x_680 = lean::cnstr_get(x_677, 0);
lean::inc(x_680);
x_682 = lean::cnstr_get(x_677, 1);
lean::inc(x_682);
lean::dec(x_677);
x_685 = l_lean_elaborator_names__to__pexpr(x_529);
x_686 = lean::cnstr_get(x_487, 0);
lean::inc(x_686);
lean::dec(x_487);
x_689 = l_lean_elaborator_mangle__ident(x_686);
x_690 = l_lean_elaborator_dummy;
x_691 = 0;
lean::inc(x_689);
x_693 = lean_expr_local(x_689, x_689, x_690, x_691);
if (lean::obj_tag(x_489) == 0)
{
x_694 = x_528;
goto lbl_695;
}
else
{
obj* x_696; obj* x_699; 
x_696 = lean::cnstr_get(x_489, 0);
lean::inc(x_696);
lean::dec(x_489);
x_699 = lean::cnstr_get(x_696, 1);
lean::inc(x_699);
lean::dec(x_696);
x_694 = x_699;
goto lbl_695;
}
lbl_695:
{
obj* x_703; 
lean::inc(x_1);
x_703 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__7(x_694, x_1, x_682);
if (lean::obj_tag(x_703) == 0)
{
obj* x_713; obj* x_715; obj* x_716; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_491);
lean::dec(x_493);
lean::dec(x_523);
lean::dec(x_680);
lean::dec(x_685);
lean::dec(x_693);
lean::dec(x_657);
x_713 = lean::cnstr_get(x_703, 0);
if (lean::is_exclusive(x_703)) {
 x_715 = x_703;
} else {
 lean::inc(x_713);
 lean::dec(x_703);
 x_715 = lean::box(0);
}
if (lean::is_scalar(x_715)) {
 x_716 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_716 = x_715;
}
lean::cnstr_set(x_716, 0, x_713);
x_5 = x_716;
goto lbl_6;
}
else
{
obj* x_717; obj* x_720; obj* x_722; obj* x_725; obj* x_726; obj* x_729; obj* x_730; 
x_717 = lean::cnstr_get(x_703, 0);
lean::inc(x_717);
lean::dec(x_703);
x_720 = lean::cnstr_get(x_717, 0);
lean::inc(x_720);
x_722 = lean::cnstr_get(x_717, 1);
lean::inc(x_722);
lean::dec(x_717);
x_725 = l_lean_elaborator_mk__eqns___closed__1;
x_726 = l_lean_expr_mk__capp(x_725, x_720);
lean::inc(x_1);
lean::inc(x_0);
x_729 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__9(x_0, x_493, x_1, x_722);
if (lean::obj_tag(x_491) == 0)
{
obj* x_732; 
x_732 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7;
x_730 = x_732;
goto lbl_731;
}
else
{
obj* x_733; obj* x_735; obj* x_738; 
x_733 = lean::cnstr_get(x_491, 0);
lean::inc(x_733);
x_735 = lean::cnstr_get(x_733, 0);
lean::inc(x_735);
lean::dec(x_733);
x_738 = l_lean_elaborator_mangle__ident(x_735);
x_730 = x_738;
goto lbl_731;
}
lbl_731:
{
obj* x_740; 
lean::inc(x_730);
x_740 = lean_expr_local(x_730, x_730, x_690, x_691);
if (lean::obj_tag(x_491) == 0)
{
if (lean::obj_tag(x_729) == 0)
{
obj* x_750; obj* x_752; obj* x_753; 
lean::dec(x_726);
lean::dec(x_740);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_523);
lean::dec(x_680);
lean::dec(x_685);
lean::dec(x_693);
lean::dec(x_657);
x_750 = lean::cnstr_get(x_729, 0);
if (lean::is_exclusive(x_729)) {
 x_752 = x_729;
} else {
 lean::inc(x_750);
 lean::dec(x_729);
 x_752 = lean::box(0);
}
if (lean::is_scalar(x_752)) {
 x_753 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_753 = x_752;
}
lean::cnstr_set(x_753, 0, x_750);
x_5 = x_753;
goto lbl_6;
}
else
{
obj* x_754; obj* x_757; obj* x_759; obj* x_762; obj* x_763; obj* x_764; obj* x_765; obj* x_766; obj* x_767; obj* x_768; obj* x_769; obj* x_770; obj* x_771; obj* x_772; obj* x_773; obj* x_774; obj* x_775; obj* x_776; 
x_754 = lean::cnstr_get(x_729, 0);
lean::inc(x_754);
lean::dec(x_729);
x_757 = lean::cnstr_get(x_754, 0);
lean::inc(x_757);
x_759 = lean::cnstr_get(x_754, 1);
lean::inc(x_759);
lean::dec(x_754);
x_762 = l_lean_expr_mk__capp(x_725, x_757);
x_763 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_763, 0, x_762);
lean::cnstr_set(x_763, 1, x_528);
x_764 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5;
x_765 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_765, 0, x_764);
lean::cnstr_set(x_765, 1, x_763);
x_766 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_766, 0, x_740);
lean::cnstr_set(x_766, 1, x_765);
x_767 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_767, 0, x_657);
lean::cnstr_set(x_767, 1, x_766);
x_768 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_768, 0, x_726);
lean::cnstr_set(x_768, 1, x_767);
x_769 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_769, 0, x_680);
lean::cnstr_set(x_769, 1, x_768);
x_770 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_770, 0, x_693);
lean::cnstr_set(x_770, 1, x_769);
x_771 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_771, 0, x_685);
lean::cnstr_set(x_771, 1, x_770);
x_772 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_772, 0, x_523);
lean::cnstr_set(x_772, 1, x_771);
x_773 = l_lean_expr_mk__capp(x_725, x_772);
x_774 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
x_775 = lean_expr_mk_mdata(x_774, x_773);
x_776 = l_lean_elaborator_old__elab__command(x_0, x_775, x_1, x_759);
x_5 = x_776;
goto lbl_6;
}
}
else
{
if (lean::obj_tag(x_729) == 0)
{
obj* x_787; obj* x_789; obj* x_790; 
lean::dec(x_726);
lean::dec(x_740);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_491);
lean::dec(x_523);
lean::dec(x_680);
lean::dec(x_685);
lean::dec(x_693);
lean::dec(x_657);
x_787 = lean::cnstr_get(x_729, 0);
if (lean::is_exclusive(x_729)) {
 x_789 = x_729;
} else {
 lean::inc(x_787);
 lean::dec(x_729);
 x_789 = lean::box(0);
}
if (lean::is_scalar(x_789)) {
 x_790 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_790 = x_789;
}
lean::cnstr_set(x_790, 0, x_787);
x_5 = x_790;
goto lbl_6;
}
else
{
obj* x_791; obj* x_794; obj* x_797; obj* x_799; obj* x_802; obj* x_805; obj* x_806; obj* x_807; obj* x_808; obj* x_809; obj* x_810; obj* x_811; obj* x_812; obj* x_813; obj* x_814; obj* x_815; obj* x_816; obj* x_817; obj* x_818; obj* x_819; 
x_791 = lean::cnstr_get(x_729, 0);
lean::inc(x_791);
lean::dec(x_729);
x_794 = lean::cnstr_get(x_491, 0);
lean::inc(x_794);
lean::dec(x_491);
x_797 = lean::cnstr_get(x_791, 0);
lean::inc(x_797);
x_799 = lean::cnstr_get(x_791, 1);
lean::inc(x_799);
lean::dec(x_791);
x_802 = lean::cnstr_get(x_794, 1);
lean::inc(x_802);
lean::dec(x_794);
x_805 = l_lean_elaborator_infer__mod__to__pexpr(x_802);
x_806 = l_lean_expr_mk__capp(x_725, x_797);
x_807 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_807, 0, x_806);
lean::cnstr_set(x_807, 1, x_528);
x_808 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_808, 0, x_805);
lean::cnstr_set(x_808, 1, x_807);
x_809 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_809, 0, x_740);
lean::cnstr_set(x_809, 1, x_808);
x_810 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_810, 0, x_657);
lean::cnstr_set(x_810, 1, x_809);
x_811 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_811, 0, x_726);
lean::cnstr_set(x_811, 1, x_810);
x_812 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_812, 0, x_680);
lean::cnstr_set(x_812, 1, x_811);
x_813 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_813, 0, x_693);
lean::cnstr_set(x_813, 1, x_812);
x_814 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_814, 0, x_685);
lean::cnstr_set(x_814, 1, x_813);
x_815 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_815, 0, x_523);
lean::cnstr_set(x_815, 1, x_814);
x_816 = l_lean_expr_mk__capp(x_725, x_815);
x_817 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6;
x_818 = lean_expr_mk_mdata(x_817, x_816);
x_819 = l_lean_elaborator_old__elab__command(x_0, x_818, x_1, x_799);
x_5 = x_819;
goto lbl_6;
}
}
}
}
}
}
}
}
}
}
else
{
obj* x_823; obj* x_824; 
lean::dec(x_469);
lean::dec(x_472);
lean::dec(x_12);
x_823 = l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1;
x_824 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_823, x_1, x_2);
x_5 = x_824;
goto lbl_6;
}
}
}
lbl_6:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_826; obj* x_828; obj* x_829; 
lean::dec(x_3);
x_826 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_828 = x_5;
} else {
 lean::inc(x_826);
 lean::dec(x_5);
 x_828 = lean::box(0);
}
if (lean::is_scalar(x_828)) {
 x_829 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_829 = x_828;
}
lean::cnstr_set(x_829, 0, x_826);
return x_829;
}
else
{
obj* x_830; obj* x_832; obj* x_833; obj* x_835; obj* x_836; obj* x_838; obj* x_840; obj* x_842; obj* x_844; obj* x_846; obj* x_848; obj* x_850; obj* x_852; obj* x_854; obj* x_857; obj* x_858; obj* x_859; obj* x_860; 
x_830 = lean::cnstr_get(x_5, 0);
if (lean::is_exclusive(x_5)) {
 x_832 = x_5;
} else {
 lean::inc(x_830);
 lean::dec(x_5);
 x_832 = lean::box(0);
}
x_833 = lean::cnstr_get(x_830, 1);
if (lean::is_exclusive(x_830)) {
 lean::cnstr_release(x_830, 0);
 x_835 = x_830;
} else {
 lean::inc(x_833);
 lean::dec(x_830);
 x_835 = lean::box(0);
}
x_836 = lean::cnstr_get(x_833, 0);
lean::inc(x_836);
x_838 = lean::cnstr_get(x_833, 1);
lean::inc(x_838);
x_840 = lean::cnstr_get(x_833, 2);
lean::inc(x_840);
x_842 = lean::cnstr_get(x_833, 3);
lean::inc(x_842);
x_844 = lean::cnstr_get(x_833, 5);
lean::inc(x_844);
x_846 = lean::cnstr_get(x_833, 6);
lean::inc(x_846);
x_848 = lean::cnstr_get(x_833, 7);
lean::inc(x_848);
x_850 = lean::cnstr_get(x_833, 8);
lean::inc(x_850);
x_852 = lean::cnstr_get(x_833, 9);
lean::inc(x_852);
x_854 = lean::cnstr_get(x_833, 10);
lean::inc(x_854);
lean::dec(x_833);
x_857 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_857, 0, x_836);
lean::cnstr_set(x_857, 1, x_838);
lean::cnstr_set(x_857, 2, x_840);
lean::cnstr_set(x_857, 3, x_842);
lean::cnstr_set(x_857, 4, x_3);
lean::cnstr_set(x_857, 5, x_844);
lean::cnstr_set(x_857, 6, x_846);
lean::cnstr_set(x_857, 7, x_848);
lean::cnstr_set(x_857, 8, x_850);
lean::cnstr_set(x_857, 9, x_852);
lean::cnstr_set(x_857, 10, x_854);
x_858 = lean::box(0);
if (lean::is_scalar(x_835)) {
 x_859 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_859 = x_835;
}
lean::cnstr_set(x_859, 0, x_858);
lean::cnstr_set(x_859, 1, x_857);
if (lean::is_scalar(x_832)) {
 x_860 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_860 = x_832;
}
lean::cnstr_set(x_860, 0, x_859);
return x_860;
}
}
}
}
obj* l_lean_elaborator_declaration_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_0, x_1, x_2);
return x_3;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_variables_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_2, x_1);
return x_5;
}
}
obj* l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_20; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
x_8 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_8, 0, x_5);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 2);
lean::inc(x_11);
lean::dec(x_0);
lean::inc(x_11);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_11);
lean::cnstr_set(x_15, 1, x_2);
x_16 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__11(x_9, x_1, x_15);
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_add(x_11, x_17);
lean::dec(x_11);
x_20 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_16);
lean::cnstr_set(x_20, 2, x_18);
return x_20;
}
}
obj* l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_14; obj* x_15; obj* x_17; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; uint8 x_28; 
x_6 = lean::cnstr_get(x_0, 0);
x_8 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_10 = x_0;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
lean::inc(x_6);
x_14 = l_lean_parser_term_simple__binder_view_to__binder__info___main(x_6);
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::cnstr_get(x_15, 0);
x_22 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_set(x_15, 0, lean::box(0));
 lean::cnstr_set(x_15, 1, lean::box(0));
 x_24 = x_15;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_15);
 x_24 = lean::box(0);
}
x_27 = l_lean_expander_binding__annotation__update;
x_28 = l_lean_parser_syntax_is__of__kind___main(x_27, x_22);
if (x_28 == 0)
{
uint8 x_31; obj* x_32; obj* x_33; 
lean::dec(x_17);
lean::dec(x_20);
x_31 = 1;
x_32 = lean::box(x_31);
if (lean::is_scalar(x_24)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_24;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_2);
x_11 = x_33;
goto lbl_12;
}
else
{
obj* x_35; 
lean::dec(x_24);
x_35 = lean::box(0);
x_25 = x_35;
goto lbl_26;
}
lbl_12:
{
obj* x_36; obj* x_38; obj* x_41; 
x_36 = lean::cnstr_get(x_11, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_11, 1);
lean::inc(x_38);
lean::dec(x_11);
x_41 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_8, x_1, x_38);
if (lean::obj_tag(x_41) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_36);
x_45 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_47 = x_41;
} else {
 lean::inc(x_45);
 lean::dec(x_41);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_51; uint8 x_52; 
x_49 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 lean::cnstr_set(x_41, 0, lean::box(0));
 x_51 = x_41;
} else {
 lean::inc(x_49);
 lean::dec(x_41);
 x_51 = lean::box(0);
}
x_52 = lean::unbox(x_36);
if (x_52 == 0)
{
obj* x_55; obj* x_57; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_6);
lean::dec(x_10);
x_55 = lean::cnstr_get(x_49, 0);
x_57 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_59 = x_49;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_49);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_55);
lean::cnstr_set(x_60, 1, x_57);
if (lean::is_scalar(x_51)) {
 x_61 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_61 = x_51;
}
lean::cnstr_set(x_61, 0, x_60);
return x_61;
}
else
{
obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
x_62 = lean::cnstr_get(x_49, 0);
x_64 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_66 = x_49;
} else {
 lean::inc(x_62);
 lean::inc(x_64);
 lean::dec(x_49);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_10)) {
 x_67 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_67 = x_10;
}
lean::cnstr_set(x_67, 0, x_6);
lean::cnstr_set(x_67, 1, x_62);
if (lean::is_scalar(x_66)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_66;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_64);
if (lean::is_scalar(x_51)) {
 x_69 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_69 = x_51;
}
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
}
}
lbl_26:
{
obj* x_71; obj* x_72; obj* x_74; obj* x_78; 
lean::dec(x_25);
x_71 = l_lean_elaborator_mangle__ident(x_20);
x_72 = lean::cnstr_get(x_2, 4);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_72, 2);
lean::inc(x_74);
lean::inc(x_71);
lean::inc(x_74);
x_78 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_74, x_71);
if (lean::obj_tag(x_78) == 0)
{
obj* x_82; obj* x_83; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_92; 
lean::dec(x_17);
lean::dec(x_72);
lean::dec(x_74);
x_82 = lean::box(0);
x_83 = l_lean_name_to__string___closed__1;
lean::inc(x_71);
x_85 = l_lean_name_to__string__with__sep___main(x_83, x_71);
x_86 = l_lean_parser_substring_of__string(x_85);
x_87 = lean::box(0);
x_88 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_88, 0, x_82);
lean::cnstr_set(x_88, 1, x_86);
lean::cnstr_set(x_88, 2, x_71);
lean::cnstr_set(x_88, 3, x_87);
lean::cnstr_set(x_88, 4, x_87);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_88);
x_90 = l_string_join___closed__1;
lean::inc(x_1);
x_92 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_89, x_90, x_1, x_2);
if (lean::obj_tag(x_92) == 0)
{
obj* x_97; obj* x_99; obj* x_100; 
lean::dec(x_6);
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_1);
x_97 = lean::cnstr_get(x_92, 0);
if (lean::is_exclusive(x_92)) {
 x_99 = x_92;
} else {
 lean::inc(x_97);
 lean::dec(x_92);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_97);
return x_100;
}
else
{
obj* x_101; obj* x_104; obj* x_106; uint8 x_107; obj* x_108; obj* x_109; 
x_101 = lean::cnstr_get(x_92, 0);
lean::inc(x_101);
lean::dec(x_92);
x_104 = lean::cnstr_get(x_101, 1);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_release(x_101, 0);
 x_106 = x_101;
} else {
 lean::inc(x_104);
 lean::dec(x_101);
 x_106 = lean::box(0);
}
x_107 = 0;
x_108 = lean::box(x_107);
if (lean::is_scalar(x_106)) {
 x_109 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_109 = x_106;
}
lean::cnstr_set(x_109, 0, x_108);
lean::cnstr_set(x_109, 1, x_104);
x_11 = x_109;
goto lbl_12;
}
}
else
{
obj* x_110; obj* x_113; obj* x_115; obj* x_116; obj* x_118; obj* x_120; obj* x_122; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_133; uint8 x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_139; obj* x_141; obj* x_143; obj* x_146; obj* x_147; obj* x_149; obj* x_151; obj* x_153; obj* x_155; obj* x_157; obj* x_160; uint8 x_161; obj* x_162; obj* x_163; 
x_110 = lean::cnstr_get(x_78, 0);
lean::inc(x_110);
lean::dec(x_78);
x_113 = lean::cnstr_get(x_110, 1);
if (lean::is_exclusive(x_110)) {
 lean::cnstr_release(x_110, 0);
 x_115 = x_110;
} else {
 lean::inc(x_113);
 lean::dec(x_110);
 x_115 = lean::box(0);
}
x_116 = lean::cnstr_get(x_2, 0);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_2, 1);
lean::inc(x_118);
x_120 = lean::cnstr_get(x_2, 2);
lean::inc(x_120);
x_122 = lean::cnstr_get(x_2, 3);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_72, 0);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_72, 1);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_113, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_113, 1);
lean::inc(x_130);
lean::dec(x_113);
x_133 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_133, 0, x_128);
lean::cnstr_set(x_133, 1, x_130);
x_134 = lean::unbox(x_17);
lean::cnstr_set_scalar(x_133, sizeof(void*)*2, x_134);
x_135 = x_133;
x_136 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_variables_elaborate___spec__3(x_74, x_71, x_135);
x_137 = lean::cnstr_get(x_72, 3);
lean::inc(x_137);
x_139 = lean::cnstr_get(x_72, 4);
lean::inc(x_139);
x_141 = lean::cnstr_get(x_72, 5);
lean::inc(x_141);
x_143 = lean::cnstr_get(x_72, 6);
lean::inc(x_143);
lean::dec(x_72);
x_146 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_146, 0, x_124);
lean::cnstr_set(x_146, 1, x_126);
lean::cnstr_set(x_146, 2, x_136);
lean::cnstr_set(x_146, 3, x_137);
lean::cnstr_set(x_146, 4, x_139);
lean::cnstr_set(x_146, 5, x_141);
lean::cnstr_set(x_146, 6, x_143);
x_147 = lean::cnstr_get(x_2, 5);
lean::inc(x_147);
x_149 = lean::cnstr_get(x_2, 6);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_2, 7);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_2, 8);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_2, 9);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_2, 10);
lean::inc(x_157);
lean::dec(x_2);
x_160 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_160, 0, x_116);
lean::cnstr_set(x_160, 1, x_118);
lean::cnstr_set(x_160, 2, x_120);
lean::cnstr_set(x_160, 3, x_122);
lean::cnstr_set(x_160, 4, x_146);
lean::cnstr_set(x_160, 5, x_147);
lean::cnstr_set(x_160, 6, x_149);
lean::cnstr_set(x_160, 7, x_151);
lean::cnstr_set(x_160, 8, x_153);
lean::cnstr_set(x_160, 9, x_155);
lean::cnstr_set(x_160, 10, x_157);
x_161 = 0;
x_162 = lean::box(x_161);
if (lean::is_scalar(x_115)) {
 x_163 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_163 = x_115;
}
lean::cnstr_set(x_163, 0, x_162);
lean::cnstr_set(x_163, 1, x_160);
x_11 = x_163;
goto lbl_12;
}
}
}
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("variables.elaborate: unexpected input");
return x_0;
}
}
obj* _init_l_lean_elaborator_variables_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("variables");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_variables_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; 
x_3 = l_lean_parser_command_variables_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_13; obj* x_16; 
lean::dec(x_9);
x_13 = l_lean_elaborator_variables_elaborate___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_16 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_13, x_1, x_2);
if (lean::obj_tag(x_16) == 0)
{
obj* x_19; obj* x_21; obj* x_22; 
lean::dec(x_1);
lean::dec(x_0);
x_19 = lean::cnstr_get(x_16, 0);
if (lean::is_exclusive(x_16)) {
 x_21 = x_16;
} else {
 lean::inc(x_19);
 lean::dec(x_16);
 x_21 = lean::box(0);
}
if (lean::is_scalar(x_21)) {
 x_22 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_22 = x_21;
}
lean::cnstr_set(x_22, 0, x_19);
return x_22;
}
else
{
obj* x_23; obj* x_26; obj* x_28; obj* x_32; 
x_23 = lean::cnstr_get(x_16, 0);
lean::inc(x_23);
lean::dec(x_16);
x_26 = lean::cnstr_get(x_23, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
lean::dec(x_23);
lean::inc(x_1);
x_32 = l_lean_elaborator_simple__binders__to__pexpr(x_26, x_1, x_28);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_37; obj* x_38; 
lean::dec(x_1);
lean::dec(x_0);
x_35 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_37 = x_32;
} else {
 lean::inc(x_35);
 lean::dec(x_32);
 x_37 = lean::box(0);
}
if (lean::is_scalar(x_37)) {
 x_38 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_38 = x_37;
}
lean::cnstr_set(x_38, 0, x_35);
return x_38;
}
else
{
obj* x_39; obj* x_42; obj* x_44; obj* x_47; obj* x_48; obj* x_49; 
x_39 = lean::cnstr_get(x_32, 0);
lean::inc(x_39);
lean::dec(x_32);
x_42 = lean::cnstr_get(x_39, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_39, 1);
lean::inc(x_44);
lean::dec(x_39);
x_47 = l_lean_elaborator_variables_elaborate___closed__2;
x_48 = lean_expr_mk_mdata(x_47, x_42);
x_49 = l_lean_elaborator_old__elab__command(x_0, x_48, x_1, x_44);
return x_49;
}
}
}
else
{
obj* x_50; obj* x_54; 
x_50 = lean::cnstr_get(x_9, 0);
lean::inc(x_50);
lean::dec(x_9);
lean::inc(x_1);
x_54 = l_list_mfilter___main___at_lean_elaborator_variables_elaborate___spec__4(x_50, x_1, x_2);
if (lean::obj_tag(x_54) == 0)
{
obj* x_57; obj* x_59; obj* x_60; 
lean::dec(x_1);
lean::dec(x_0);
x_57 = lean::cnstr_get(x_54, 0);
if (lean::is_exclusive(x_54)) {
 x_59 = x_54;
} else {
 lean::inc(x_57);
 lean::dec(x_54);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_57);
return x_60;
}
else
{
obj* x_61; obj* x_64; obj* x_66; obj* x_70; 
x_61 = lean::cnstr_get(x_54, 0);
lean::inc(x_61);
lean::dec(x_54);
x_64 = lean::cnstr_get(x_61, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_61, 1);
lean::inc(x_66);
lean::dec(x_61);
lean::inc(x_1);
x_70 = l_lean_elaborator_simple__binders__to__pexpr(x_64, x_1, x_66);
if (lean::obj_tag(x_70) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_1);
lean::dec(x_0);
x_73 = lean::cnstr_get(x_70, 0);
if (lean::is_exclusive(x_70)) {
 x_75 = x_70;
} else {
 lean::inc(x_73);
 lean::dec(x_70);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_80; obj* x_82; obj* x_85; obj* x_86; obj* x_87; 
x_77 = lean::cnstr_get(x_70, 0);
lean::inc(x_77);
lean::dec(x_70);
x_80 = lean::cnstr_get(x_77, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get(x_77, 1);
lean::inc(x_82);
lean::dec(x_77);
x_85 = l_lean_elaborator_variables_elaborate___closed__2;
x_86 = lean_expr_mk_mdata(x_85, x_80);
x_87 = l_lean_elaborator_old__elab__command(x_0, x_86, x_1, x_82);
return x_87;
}
}
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_include_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_mangle__ident(x_2);
x_8 = lean::box(0);
x_9 = l_rbnode_insert___at_lean_elaborator_old__elab__command___spec__17(x_0, x_7, x_8);
x_0 = x_9;
x_1 = x_4;
goto _start;
}
}
}
obj* l_lean_elaborator_include_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_31; obj* x_33; obj* x_35; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_1);
x_4 = l_lean_parser_command_include_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 4);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_17, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_8, 1);
lean::inc(x_27);
lean::dec(x_8);
x_30 = l_list_foldl___main___at_lean_elaborator_include_elaborate___spec__2(x_25, x_27);
x_31 = lean::cnstr_get(x_17, 4);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_17, 5);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_17, 6);
lean::inc(x_35);
lean::dec(x_17);
x_38 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_38, 0, x_19);
lean::cnstr_set(x_38, 1, x_21);
lean::cnstr_set(x_38, 2, x_23);
lean::cnstr_set(x_38, 3, x_30);
lean::cnstr_set(x_38, 4, x_31);
lean::cnstr_set(x_38, 5, x_33);
lean::cnstr_set(x_38, 6, x_35);
x_39 = lean::cnstr_get(x_2, 5);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_2, 6);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_2, 7);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_2, 8);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 9);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 10);
lean::inc(x_49);
lean::dec(x_2);
x_52 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_52, 0, x_9);
lean::cnstr_set(x_52, 1, x_11);
lean::cnstr_set(x_52, 2, x_13);
lean::cnstr_set(x_52, 3, x_15);
lean::cnstr_set(x_52, 4, x_38);
lean::cnstr_set(x_52, 5, x_39);
lean::cnstr_set(x_52, 6, x_41);
lean::cnstr_set(x_52, 7, x_43);
lean::cnstr_set(x_52, 8, x_45);
lean::cnstr_set(x_52, 9, x_47);
lean::cnstr_set(x_52, 10, x_49);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
obj* _init_l_lean_elaborator_module_header_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not implemented: imports");
return x_0;
}
}
obj* l_lean_elaborator_module_header_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; 
x_3 = l_lean_parser_module_header_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; obj* x_13; 
lean::dec(x_8);
x_12 = l_lean_elaborator_module_header_elaborate___closed__1;
x_13 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_12, x_1, x_2);
return x_13;
}
else
{
obj* x_15; 
lean::dec(x_9);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
lean::dec(x_8);
if (lean::obj_tag(x_15) == 0)
{
obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_1);
lean::dec(x_0);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_2);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
return x_22;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_15);
x_24 = l_lean_elaborator_module_header_elaborate___closed__1;
x_25 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_24, x_1, x_2);
return x_25;
}
}
}
}
obj* l_lean_elaborator_prec__to__nat___main(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::mk_nat_obj(0u);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_5);
return x_8;
}
}
}
obj* l_lean_elaborator_prec__to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_elaborator_prec__to__nat___main(x_0);
return x_1;
}
}
obj* _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_tokens: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_13 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1;
return x_13;
}
else
{
obj* x_14; obj* x_17; obj* x_20; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_49; 
x_14 = lean::cnstr_get(x_1, 1);
lean::inc(x_14);
lean::dec(x_1);
x_17 = lean::cnstr_get(x_5, 3);
lean::inc(x_17);
lean::dec(x_5);
x_20 = lean::cnstr_get(x_8, 0);
lean::inc(x_20);
lean::dec(x_8);
x_23 = lean::cnstr_get(x_0, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_23, 1);
lean::inc(x_27);
lean::dec(x_23);
x_30 = lean::cnstr_get(x_20, 1);
lean::inc(x_30);
lean::dec(x_20);
x_33 = l_string_trim(x_30);
x_34 = l_lean_elaborator_prec__to__nat___main(x_17);
x_35 = lean::box(0);
lean::inc(x_33);
x_37 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set(x_37, 1, x_34);
lean::cnstr_set(x_37, 2, x_35);
x_38 = l_lean_parser_trie_insert___rarg(x_27, x_33, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_25);
lean::cnstr_set(x_39, 1, x_38);
x_40 = lean::cnstr_get(x_0, 1);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_0, 2);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_0, 3);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_0, 4);
lean::inc(x_46);
lean::dec(x_0);
x_49 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_49, 0, x_39);
lean::cnstr_set(x_49, 1, x_40);
lean::cnstr_set(x_49, 2, x_42);
lean::cnstr_set(x_49, 3, x_44);
lean::cnstr_set(x_49, 4, x_46);
x_0 = x_49;
x_1 = x_14;
goto _start;
}
}
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1(x_1, x_2);
return x_5;
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_2);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binder__ident_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_binders_parser), 5, 0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0u);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unimplemented");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("register_notation_parser: unreachable");
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_expander_expand__bracketed__binder___main___closed__4;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
lean::dec(x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; 
lean::dec(x_2);
x_17 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
x_7 = x_17;
goto lbl_8;
}
else
{
obj* x_18; obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_18 = lean::cnstr_get(x_13, 0);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_string_trim(x_21);
lean::inc(x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_26, 0, x_24);
x_27 = lean::mk_nat_obj(0u);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_command_notation__spec_precedence__term_parser_lean_parser_has__tokens___spec__1), 8, 3);
lean::closure_set(x_28, 0, x_24);
lean::closure_set(x_28, 1, x_27);
lean::closure_set(x_28, 2, x_26);
x_9 = x_28;
goto lbl_10;
}
lbl_8:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_6);
lean::dec(x_4);
x_31 = lean::cnstr_get(x_7, 0);
if (lean::is_exclusive(x_7)) {
 x_33 = x_7;
} else {
 lean::inc(x_31);
 lean::dec(x_7);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; 
x_35 = lean::cnstr_get(x_7, 0);
lean::inc(x_35);
lean::dec(x_7);
x_38 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_4);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_43; obj* x_44; 
lean::dec(x_6);
lean::dec(x_35);
x_41 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_43 = x_38;
} else {
 lean::inc(x_41);
 lean::dec(x_38);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_43)) {
 x_44 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_44 = x_43;
}
lean::cnstr_set(x_44, 0, x_41);
return x_44;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_49; 
x_45 = lean::cnstr_get(x_38, 0);
if (lean::is_exclusive(x_38)) {
 x_47 = x_38;
} else {
 lean::inc(x_45);
 lean::dec(x_38);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_48 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_48 = x_6;
}
lean::cnstr_set(x_48, 0, x_35);
lean::cnstr_set(x_48, 1, x_45);
if (lean::is_scalar(x_47)) {
 x_49 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_49 = x_47;
}
lean::cnstr_set(x_49, 0, x_48);
return x_49;
}
}
}
lbl_10:
{
obj* x_50; obj* x_52; 
x_52 = lean::cnstr_get(x_2, 1);
lean::inc(x_52);
lean::dec(x_2);
if (lean::obj_tag(x_52) == 0)
{
obj* x_55; 
x_55 = l_lean_expander_no__expansion___closed__1;
x_50 = x_55;
goto lbl_51;
}
else
{
obj* x_56; 
x_56 = lean::cnstr_get(x_52, 0);
lean::inc(x_56);
lean::dec(x_52);
switch (lean::obj_tag(x_56)) {
case 0:
{
obj* x_60; 
lean::dec(x_56);
x_60 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1;
x_50 = x_60;
goto lbl_51;
}
case 1:
{
obj* x_62; 
lean::dec(x_56);
x_62 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2;
x_50 = x_62;
goto lbl_51;
}
default:
{
obj* x_63; obj* x_66; 
x_63 = lean::cnstr_get(x_56, 0);
lean::inc(x_63);
lean::dec(x_56);
x_66 = lean::cnstr_get(x_63, 1);
lean::inc(x_66);
lean::dec(x_63);
if (lean::obj_tag(x_66) == 0)
{
obj* x_69; 
x_69 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3;
x_50 = x_69;
goto lbl_51;
}
else
{
obj* x_70; obj* x_72; obj* x_73; 
x_70 = lean::cnstr_get(x_66, 0);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_set(x_66, 0, lean::box(0));
 x_72 = x_66;
} else {
 lean::inc(x_70);
 lean::dec(x_66);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_70, 1);
lean::inc(x_73);
lean::dec(x_70);
switch (lean::obj_tag(x_73)) {
case 0:
{
obj* x_76; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_76 = lean::cnstr_get(x_73, 0);
lean::inc(x_76);
lean::dec(x_73);
x_79 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_76);
x_80 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_80, 0, x_79);
if (lean::is_scalar(x_72)) {
 x_81 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_81 = x_72;
}
lean::cnstr_set(x_81, 0, x_80);
x_82 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_82, 0, x_81);
x_50 = x_82;
goto lbl_51;
}
case 2:
{
obj* x_83; obj* x_86; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_83 = lean::cnstr_get(x_73, 0);
lean::inc(x_83);
lean::dec(x_73);
x_86 = lean::cnstr_get(x_83, 2);
lean::inc(x_86);
lean::dec(x_83);
x_89 = l_lean_elaborator_prec__to__nat___main(x_86);
x_90 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_parser), 6, 1);
lean::closure_set(x_90, 0, x_89);
if (lean::is_scalar(x_72)) {
 x_91 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_91 = x_72;
}
lean::cnstr_set(x_91, 0, x_90);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_91);
x_50 = x_92;
goto lbl_51;
}
default:
{
obj* x_95; 
lean::dec(x_73);
lean::dec(x_72);
x_95 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4;
x_50 = x_95;
goto lbl_51;
}
}
}
}
}
}
lbl_51:
{
if (lean::obj_tag(x_50) == 0)
{
obj* x_97; obj* x_99; obj* x_100; 
lean::dec(x_9);
x_97 = lean::cnstr_get(x_50, 0);
if (lean::is_exclusive(x_50)) {
 x_99 = x_50;
} else {
 lean::inc(x_97);
 lean::dec(x_50);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_97);
x_7 = x_100;
goto lbl_8;
}
else
{
obj* x_101; obj* x_103; obj* x_104; obj* x_105; obj* x_106; 
x_101 = lean::cnstr_get(x_50, 0);
if (lean::is_exclusive(x_50)) {
 x_103 = x_50;
} else {
 lean::inc(x_101);
 lean::dec(x_50);
 x_103 = lean::box(0);
}
x_104 = l_option_to__monad___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__1___rarg(x_101);
x_105 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_105, 0, x_9);
lean::cnstr_set(x_105, 1, x_104);
if (lean::is_scalar(x_103)) {
 x_106 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_106 = x_103;
}
lean::cnstr_set(x_106, 0, x_105);
x_7 = x_106;
goto lbl_8;
}
}
}
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_4);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
}
obj* l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_8; 
lean::dec(x_1);
x_8 = lean::apply_5(x_0, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coe___at_lean_elaborator_command__parser__config_register__notation__parser___spec__4), 7, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_term_get__leading), 6, 0);
return x_0;
}
}
obj* l_lean_elaborator_command__parser__config_register__notation__parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_1, 2);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
lean::inc(x_5);
x_8 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2(x_5);
if (lean::obj_tag(x_8) == 0)
{
obj* x_14; obj* x_16; obj* x_17; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_14 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_16 = x_8;
} else {
 lean::inc(x_14);
 lean::dec(x_8);
 x_16 = lean::box(0);
}
if (lean::is_scalar(x_16)) {
 x_17 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_17 = x_16;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
else
{
obj* x_18; obj* x_20; obj* x_21; 
x_18 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_set(x_8, 0, lean::box(0));
 x_20 = x_8;
} else {
 lean::inc(x_18);
 lean::dec(x_8);
 x_20 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_29; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_18);
lean::dec(x_20);
x_29 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
return x_29;
}
else
{
obj* x_30; obj* x_33; obj* x_36; 
x_30 = lean::cnstr_get(x_5, 0);
lean::inc(x_30);
lean::dec(x_5);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
lean::dec(x_30);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
lean::dec(x_33);
if (lean::obj_tag(x_36) == 0)
{
obj* x_45; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_18);
lean::dec(x_20);
x_45 = l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5;
return x_45;
}
else
{
obj* x_46; obj* x_49; obj* x_52; 
x_46 = lean::cnstr_get(x_36, 0);
lean::inc(x_46);
lean::dec(x_36);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_string_trim(x_49);
x_21 = x_52;
goto lbl_22;
}
}
lbl_22:
{
obj* x_53; obj* x_54; obj* x_55; 
x_53 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__3(x_18);
x_54 = l_list_join___main___rarg(x_53);
x_55 = lean::cnstr_get(x_1, 0);
lean::inc(x_55);
lean::dec(x_1);
if (lean::obj_tag(x_55) == 0)
{
obj* x_58; 
x_58 = lean::cnstr_get(x_3, 0);
lean::inc(x_58);
lean::dec(x_3);
if (lean::obj_tag(x_58) == 0)
{
obj* x_61; obj* x_63; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_73; obj* x_76; obj* x_77; 
x_61 = lean::cnstr_get(x_2, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_2, 1);
lean::inc(x_63);
x_65 = lean::box(0);
x_66 = lean_name_mk_string(x_65, x_21);
x_67 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_67, 0, x_0);
lean::closure_set(x_67, 1, x_54);
x_68 = l_lean_parser_token__map_insert___rarg(x_63, x_66, x_67);
x_69 = lean::cnstr_get(x_2, 2);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_2, 3);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_2, 4);
lean::inc(x_73);
lean::dec(x_2);
x_76 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_76, 0, x_61);
lean::cnstr_set(x_76, 1, x_68);
lean::cnstr_set(x_76, 2, x_69);
lean::cnstr_set(x_76, 3, x_71);
lean::cnstr_set(x_76, 4, x_73);
if (lean::is_scalar(x_20)) {
 x_77 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_77 = x_20;
}
lean::cnstr_set(x_77, 0, x_76);
return x_77;
}
else
{
obj* x_79; obj* x_81; obj* x_83; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_94; obj* x_97; obj* x_98; 
lean::dec(x_58);
x_79 = lean::cnstr_get(x_2, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_2, 1);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_2, 2);
lean::inc(x_83);
x_85 = lean::box(0);
x_86 = lean_name_mk_string(x_85, x_21);
x_87 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__5(x_54);
x_88 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
x_89 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_87);
x_90 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_90, 0, x_0);
lean::closure_set(x_90, 1, x_89);
x_91 = l_lean_parser_token__map_insert___rarg(x_83, x_86, x_90);
x_92 = lean::cnstr_get(x_2, 3);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_2, 4);
lean::inc(x_94);
lean::dec(x_2);
x_97 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_97, 0, x_79);
lean::cnstr_set(x_97, 1, x_81);
lean::cnstr_set(x_97, 2, x_91);
lean::cnstr_set(x_97, 3, x_92);
lean::cnstr_set(x_97, 4, x_94);
if (lean::is_scalar(x_20)) {
 x_98 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_98 = x_20;
}
lean::cnstr_set(x_98, 0, x_97);
return x_98;
}
}
else
{
obj* x_100; 
lean::dec(x_55);
x_100 = lean::cnstr_get(x_3, 0);
lean::inc(x_100);
lean::dec(x_3);
if (lean::obj_tag(x_100) == 0)
{
obj* x_103; obj* x_105; obj* x_107; obj* x_109; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_118; obj* x_119; 
x_103 = lean::cnstr_get(x_2, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_2, 1);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_2, 2);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_2, 3);
lean::inc(x_109);
x_111 = lean::box(0);
x_112 = lean_name_mk_string(x_111, x_21);
x_113 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_command_notation__spec_precedence__lit_parser___spec__1), 7, 2);
lean::closure_set(x_113, 0, x_0);
lean::closure_set(x_113, 1, x_54);
x_114 = l_lean_parser_token__map_insert___rarg(x_109, x_112, x_113);
x_115 = lean::cnstr_get(x_2, 4);
lean::inc(x_115);
lean::dec(x_2);
x_118 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_118, 0, x_103);
lean::cnstr_set(x_118, 1, x_105);
lean::cnstr_set(x_118, 2, x_107);
lean::cnstr_set(x_118, 3, x_114);
lean::cnstr_set(x_118, 4, x_115);
if (lean::is_scalar(x_20)) {
 x_119 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_119 = x_20;
}
lean::cnstr_set(x_119, 0, x_118);
return x_119;
}
else
{
obj* x_121; obj* x_123; obj* x_125; obj* x_127; obj* x_129; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
lean::dec(x_100);
x_121 = lean::cnstr_get(x_2, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_2, 1);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_2, 2);
lean::inc(x_125);
x_127 = lean::cnstr_get(x_2, 3);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_2, 4);
lean::inc(x_129);
lean::dec(x_2);
x_132 = lean::box(0);
x_133 = lean_name_mk_string(x_132, x_21);
x_134 = l_list_map___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__6(x_54);
x_135 = l_lean_elaborator_command__parser__config_register__notation__parser___closed__1;
x_136 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_134);
x_137 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_term_sort__app_parser_lean_parser_has__tokens___spec__3), 8, 2);
lean::closure_set(x_137, 0, x_0);
lean::closure_set(x_137, 1, x_136);
x_138 = l_lean_parser_token__map_insert___rarg(x_129, x_133, x_137);
x_139 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_139, 0, x_121);
lean::cnstr_set(x_139, 1, x_123);
lean::cnstr_set(x_139, 2, x_125);
lean::cnstr_set(x_139, 3, x_127);
lean::cnstr_set(x_139, 4, x_138);
if (lean::is_scalar(x_20)) {
 x_140 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_140 = x_20;
}
lean::cnstr_set(x_140, 0, x_139);
return x_140;
}
}
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; 
lean::dec(x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; obj* x_14; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::cnstr_get(x_7, 2);
lean::inc(x_12);
x_14 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_12, x_0);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_18; obj* x_19; obj* x_22; obj* x_24; 
x_15 = lean::cnstr_get(x_14, 0);
lean::inc(x_15);
lean::dec(x_14);
x_18 = l_lean_parser_command_reserve__notation_has__view;
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_7);
lean::inc(x_2);
x_24 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_22, x_15, x_2, x_3);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_29; obj* x_30; 
lean::dec(x_9);
lean::dec(x_2);
x_27 = lean::cnstr_get(x_24, 0);
if (lean::is_exclusive(x_24)) {
 x_29 = x_24;
} else {
 lean::inc(x_27);
 lean::dec(x_24);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
return x_30;
}
else
{
obj* x_31; obj* x_34; obj* x_36; 
x_31 = lean::cnstr_get(x_24, 0);
lean::inc(x_31);
lean::dec(x_24);
x_34 = lean::cnstr_get(x_31, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_31, 1);
lean::inc(x_36);
lean::dec(x_31);
x_0 = x_34;
x_1 = x_9;
x_3 = x_36;
goto _start;
}
}
else
{
obj* x_41; 
lean::dec(x_7);
x_41 = lean::cnstr_get(x_14, 0);
lean::inc(x_41);
lean::dec(x_14);
x_0 = x_41;
x_1 = x_9;
goto _start;
}
}
}
}
obj* l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; obj* x_6; 
lean::dec(x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; obj* x_14; obj* x_16; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_12, 2);
lean::inc(x_14);
x_16 = l_lean_elaborator_command__parser__config_register__notation__tokens(x_14, x_0);
if (lean::obj_tag(x_16) == 0)
{
obj* x_18; obj* x_21; obj* x_22; obj* x_25; obj* x_27; 
lean::dec(x_7);
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
lean::dec(x_16);
x_21 = l_lean_parser_command_notation_has__view;
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
x_25 = lean::apply_1(x_22, x_12);
lean::inc(x_2);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_25, x_18, x_2, x_3);
if (lean::obj_tag(x_27) == 0)
{
obj* x_30; obj* x_32; obj* x_33; 
lean::dec(x_9);
lean::dec(x_2);
x_30 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_32 = x_27;
} else {
 lean::inc(x_30);
 lean::dec(x_27);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_30);
return x_33;
}
else
{
obj* x_34; obj* x_37; obj* x_39; 
x_34 = lean::cnstr_get(x_27, 0);
lean::inc(x_34);
lean::dec(x_27);
x_37 = lean::cnstr_get(x_34, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
lean::dec(x_34);
x_0 = x_37;
x_1 = x_9;
x_3 = x_39;
goto _start;
}
}
else
{
obj* x_43; obj* x_46; obj* x_50; 
x_43 = lean::cnstr_get(x_16, 0);
lean::inc(x_43);
lean::dec(x_16);
x_46 = lean::cnstr_get(x_7, 0);
lean::inc(x_46);
lean::dec(x_7);
lean::inc(x_12);
x_50 = l_lean_elaborator_command__parser__config_register__notation__parser(x_46, x_12, x_43);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_54; obj* x_55; obj* x_58; obj* x_60; 
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
lean::dec(x_50);
x_54 = l_lean_parser_command_notation_has__view;
x_55 = lean::cnstr_get(x_54, 1);
lean::inc(x_55);
lean::dec(x_54);
x_58 = lean::apply_1(x_55, x_12);
lean::inc(x_2);
x_60 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_58, x_51, x_2, x_3);
if (lean::obj_tag(x_60) == 0)
{
obj* x_63; obj* x_65; obj* x_66; 
lean::dec(x_9);
lean::dec(x_2);
x_63 = lean::cnstr_get(x_60, 0);
if (lean::is_exclusive(x_60)) {
 x_65 = x_60;
} else {
 lean::inc(x_63);
 lean::dec(x_60);
 x_65 = lean::box(0);
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_63);
return x_66;
}
else
{
obj* x_67; obj* x_70; obj* x_72; 
x_67 = lean::cnstr_get(x_60, 0);
lean::inc(x_67);
lean::dec(x_60);
x_70 = lean::cnstr_get(x_67, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_67, 1);
lean::inc(x_72);
lean::dec(x_67);
x_0 = x_70;
x_1 = x_9;
x_3 = x_72;
goto _start;
}
}
else
{
obj* x_77; 
lean::dec(x_12);
x_77 = lean::cnstr_get(x_50, 0);
lean::inc(x_77);
lean::dec(x_50);
x_0 = x_77;
x_1 = x_9;
goto _start;
}
}
}
}
}
obj* l_lean_elaborator_update__parser__config(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_11; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_6);
x_11 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__1(x_4, x_6, x_0, x_1);
if (lean::obj_tag(x_11) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_16 = lean::cnstr_get(x_11, 0);
if (lean::is_exclusive(x_11)) {
 x_18 = x_11;
} else {
 lean::inc(x_16);
 lean::dec(x_11);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_30; obj* x_32; obj* x_35; obj* x_36; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
lean::dec(x_11);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = lean::cnstr_get(x_1, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_1, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
lean::inc(x_28);
x_35 = l_list_append___rarg(x_28, x_32);
x_36 = l_list_mfoldl___main___at_lean_elaborator_update__parser__config___spec__2(x_23, x_35, x_0, x_25);
if (lean::obj_tag(x_36) == 0)
{
obj* x_42; obj* x_44; obj* x_45; 
lean::dec(x_30);
lean::dec(x_6);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_28);
x_42 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_44 = x_36;
} else {
 lean::inc(x_42);
 lean::dec(x_36);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_42);
return x_45;
}
else
{
obj* x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_58; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_68; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_46 = lean::cnstr_get(x_36, 0);
if (lean::is_exclusive(x_36)) {
 x_48 = x_36;
} else {
 lean::inc(x_46);
 lean::dec(x_36);
 x_48 = lean::box(0);
}
x_49 = lean::cnstr_get(x_46, 0);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 1);
 x_51 = x_46;
} else {
 lean::inc(x_49);
 lean::dec(x_46);
 x_51 = lean::box(0);
}
x_52 = lean::cnstr_get(x_1, 2);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_1, 3);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_1, 5);
lean::inc(x_56);
x_58 = lean::cnstr_get(x_2, 1);
lean::inc(x_58);
lean::dec(x_2);
x_61 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_61, 0, x_49);
lean::cnstr_set(x_61, 1, x_58);
x_62 = lean::cnstr_get(x_1, 7);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_1, 8);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_1, 9);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_1, 10);
lean::inc(x_68);
lean::dec(x_1);
x_71 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_71, 0, x_6);
lean::cnstr_set(x_71, 1, x_28);
lean::cnstr_set(x_71, 2, x_52);
lean::cnstr_set(x_71, 3, x_54);
lean::cnstr_set(x_71, 4, x_30);
lean::cnstr_set(x_71, 5, x_56);
lean::cnstr_set(x_71, 6, x_61);
lean::cnstr_set(x_71, 7, x_62);
lean::cnstr_set(x_71, 8, x_64);
lean::cnstr_set(x_71, 9, x_66);
lean::cnstr_set(x_71, 10, x_68);
x_72 = lean::box(0);
if (lean::is_scalar(x_51)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_51;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_71);
if (lean::is_scalar(x_48)) {
 x_74 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_74 = x_48;
}
lean::cnstr_set(x_74, 0, x_73);
return x_74;
}
}
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_2 = x_1;
} else {
 lean::dec(x_1);
 x_2 = lean::box(0);
}
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 6);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 7);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 8);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 9);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 10);
lean::inc(x_21);
lean::dec(x_0);
x_24 = l_lean_message__log_empty;
x_25 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_25, 0, x_3);
lean::cnstr_set(x_25, 1, x_5);
lean::cnstr_set(x_25, 2, x_7);
lean::cnstr_set(x_25, 3, x_9);
lean::cnstr_set(x_25, 4, x_11);
lean::cnstr_set(x_25, 5, x_24);
lean::cnstr_set(x_25, 6, x_13);
lean::cnstr_set(x_25, 7, x_15);
lean::cnstr_set(x_25, 8, x_17);
lean::cnstr_set(x_25, 9, x_19);
lean::cnstr_set(x_25, 10, x_21);
x_26 = lean::box(0);
if (lean::is_scalar(x_2)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_2;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_25);
x_28 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_28, 0, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_29, 0, x_28);
return x_29;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_pure___rarg), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_lift___rarg___lambda__1), 1, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
lean::inc(x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module_yield__command___lambda__3), 2, 1);
lean::closure_set(x_7, 0, x_1);
x_8 = l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1;
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_9, 0, x_7);
lean::closure_set(x_9, 1, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_10, 0, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__1), 2, 1);
lean::closure_set(x_13, 0, x_1);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
return x_15;
}
}
obj* _init_l_lean_elaborator_yield__to__outside___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_elaborator_yield__to__outside___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
lean::inc(x_0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = l_lean_elaborator_yield__to__outside___rarg___closed__1;
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_4);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_elaborator_yield__to__outside(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside___rarg), 1, 0);
return x_4;
}
}
obj* _init_l_lean_elaborator_postprocess__notation__spec___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::box(0);
x_1 = lean::mk_string(":");
x_2 = l_string_trim(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_lean_parser_max__prec;
x_6 = l_lean_parser_number_view_of__nat(x_5);
x_7 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_4);
lean::cnstr_set(x_9, 1, x_8);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
return x_10;
}
}
obj* l_lean_elaborator_postprocess__notation__spec(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
if (lean::obj_tag(x_3) == 0)
{
return x_0;
}
else
{
obj* x_5; obj* x_7; obj* x_9; 
x_5 = lean::cnstr_get(x_3, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_11 = x_0;
} else {
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_14 = x_3;
} else {
 lean::inc(x_12);
 lean::dec(x_3);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_17 = x_5;
} else {
 lean::inc(x_15);
 lean::dec(x_5);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_7, 0);
x_20 = lean::cnstr_get(x_7, 1);
x_22 = lean::cnstr_get(x_7, 2);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 3);
 x_24 = x_7;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_7);
 x_24 = lean::box(0);
}
x_25 = l_lean_elaborator_postprocess__notation__spec___closed__1;
if (lean::is_scalar(x_24)) {
 x_26 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_26 = x_24;
}
lean::cnstr_set(x_26, 0, x_18);
lean::cnstr_set(x_26, 1, x_20);
lean::cnstr_set(x_26, 2, x_22);
lean::cnstr_set(x_26, 3, x_25);
if (lean::is_scalar(x_17)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_17;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_15);
if (lean::is_scalar(x_14)) {
 x_28 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_28 = x_14;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_12);
if (lean::is_scalar(x_11)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_11;
}
lean::cnstr_set(x_29, 0, x_1);
lean::cnstr_set(x_29, 1, x_28);
return x_29;
}
else
{
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_9);
lean::dec(x_3);
return x_0;
}
}
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_lean_elaborator_reserve__notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_41; obj* x_42; 
x_3 = l_lean_parser_command_reserve__notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_7, 2);
lean::inc(x_12);
lean::dec(x_7);
x_15 = l_lean_elaborator_postprocess__notation__spec(x_12);
x_16 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_10);
lean::cnstr_set(x_16, 2, x_15);
x_17 = lean::cnstr_get(x_2, 0);
lean::inc(x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_17);
x_20 = lean::cnstr_get(x_2, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 5);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_2, 6);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_2, 7);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_2, 8);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_2, 9);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_2, 10);
lean::inc(x_38);
lean::dec(x_2);
x_41 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_41, 0, x_19);
lean::cnstr_set(x_41, 1, x_20);
lean::cnstr_set(x_41, 2, x_22);
lean::cnstr_set(x_41, 3, x_24);
lean::cnstr_set(x_41, 4, x_26);
lean::cnstr_set(x_41, 5, x_28);
lean::cnstr_set(x_41, 6, x_30);
lean::cnstr_set(x_41, 7, x_32);
lean::cnstr_set(x_41, 8, x_34);
lean::cnstr_set(x_41, 9, x_36);
lean::cnstr_set(x_41, 10, x_38);
x_42 = l_lean_elaborator_update__parser__config(x_1, x_41);
return x_42;
}
}
uint8 l_lean_elaborator_match__precedence___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8 x_4; 
lean::dec(x_1);
x_4 = 1;
return x_4;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_6; 
lean::dec(x_0);
x_6 = 0;
return x_6;
}
else
{
obj* x_7; obj* x_10; obj* x_13; obj* x_16; obj* x_17; obj* x_20; uint8 x_21; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_1, 0);
lean::inc(x_10);
lean::dec(x_1);
x_13 = lean::cnstr_get(x_7, 1);
lean::inc(x_13);
lean::dec(x_7);
x_16 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_13);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::dec(x_10);
x_20 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_17);
x_21 = lean::nat_dec_eq(x_16, x_20);
lean::dec(x_20);
lean::dec(x_16);
if (x_21 == 0)
{
uint8 x_24; 
x_24 = 0;
return x_24;
}
else
{
uint8 x_25; 
x_25 = 1;
return x_25;
}
}
}
}
}
obj* l_lean_elaborator_match__precedence___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_elaborator_match__precedence(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_match__precedence___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_match__precedence___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_match__precedence(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___lambda__1), 1, 0);
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = l_lean_parser_syntax_reprint__lst___main___closed__1;
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_20; 
lean::dec(x_11);
lean::dec(x_6);
lean::dec(x_9);
lean::dec(x_4);
lean::dec(x_2);
x_20 = lean::box(0);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_27; obj* x_29; obj* x_30; obj* x_32; obj* x_34; obj* x_36; 
x_21 = lean::cnstr_get(x_2, 1);
lean::inc(x_21);
lean::dec(x_2);
x_24 = lean::cnstr_get(x_11, 3);
lean::inc(x_24);
lean::dec(x_11);
x_27 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 lean::cnstr_set(x_13, 0, lean::box(0));
 x_29 = x_13;
} else {
 lean::inc(x_27);
 lean::dec(x_13);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_21, 0);
lean::inc(x_30);
x_36 = lean::cnstr_get(x_30, 1);
lean::inc(x_36);
if (lean::obj_tag(x_36) == 0)
{
obj* x_44; 
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_21);
lean::dec(x_24);
lean::dec(x_27);
x_44 = lean::box(0);
x_7 = x_44;
goto lbl_8;
}
else
{
obj* x_45; obj* x_47; obj* x_50; obj* x_53; obj* x_54; obj* x_57; uint8 x_58; 
x_45 = lean::cnstr_get(x_30, 3);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_36, 0);
lean::inc(x_47);
lean::dec(x_36);
x_50 = lean::cnstr_get(x_27, 1);
lean::inc(x_50);
lean::dec(x_27);
x_53 = l_string_trim(x_50);
x_54 = lean::cnstr_get(x_47, 1);
lean::inc(x_54);
lean::dec(x_47);
x_57 = l_string_trim(x_54);
x_58 = lean::string_dec_eq(x_53, x_57);
lean::dec(x_57);
lean::dec(x_53);
if (x_58 == 0)
{
obj* x_67; 
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_21);
lean::dec(x_24);
lean::dec(x_45);
x_67 = lean::box(0);
x_7 = x_67;
goto lbl_8;
}
else
{
uint8 x_68; 
x_68 = l_lean_elaborator_match__precedence___main(x_24, x_45);
if (x_68 == 0)
{
obj* x_73; 
lean::dec(x_29);
lean::dec(x_30);
lean::dec(x_9);
lean::dec(x_21);
x_73 = lean::box(0);
x_7 = x_73;
goto lbl_8;
}
else
{
obj* x_74; 
x_74 = lean::box(0);
x_34 = x_74;
goto lbl_35;
}
}
}
lbl_33:
{
if (lean::obj_tag(x_32) == 0)
{
obj* x_76; 
lean::dec(x_30);
x_76 = lean::box(0);
x_7 = x_76;
goto lbl_8;
}
else
{
obj* x_77; obj* x_79; obj* x_80; obj* x_81; 
x_77 = lean::cnstr_get(x_32, 0);
if (lean::is_exclusive(x_32)) {
 x_79 = x_32;
} else {
 lean::inc(x_77);
 lean::dec(x_32);
 x_79 = lean::box(0);
}
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_30);
lean::cnstr_set(x_80, 1, x_77);
if (lean::is_scalar(x_79)) {
 x_81 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_81 = x_79;
}
lean::cnstr_set(x_81, 0, x_80);
x_7 = x_81;
goto lbl_8;
}
}
lbl_35:
{
obj* x_83; 
lean::dec(x_34);
x_83 = lean::cnstr_get(x_9, 1);
lean::inc(x_83);
lean::dec(x_9);
if (lean::obj_tag(x_83) == 0)
{
obj* x_86; 
x_86 = lean::cnstr_get(x_21, 1);
lean::inc(x_86);
lean::dec(x_21);
if (lean::obj_tag(x_86) == 0)
{
obj* x_89; 
if (lean::is_scalar(x_29)) {
 x_89 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_89 = x_29;
}
lean::cnstr_set(x_89, 0, x_86);
x_32 = x_89;
goto lbl_33;
}
else
{
obj* x_92; 
lean::dec(x_29);
lean::dec(x_86);
x_92 = lean::box(0);
x_32 = x_92;
goto lbl_33;
}
}
else
{
obj* x_94; obj* x_96; 
lean::dec(x_29);
x_94 = lean::cnstr_get(x_83, 0);
if (lean::is_exclusive(x_83)) {
 lean::cnstr_set(x_83, 0, lean::box(0));
 x_96 = x_83;
} else {
 lean::inc(x_94);
 lean::dec(x_83);
 x_96 = lean::box(0);
}
switch (lean::obj_tag(x_94)) {
case 0:
{
obj* x_97; 
x_97 = lean::cnstr_get(x_21, 1);
lean::inc(x_97);
lean::dec(x_21);
if (lean::obj_tag(x_97) == 0)
{
obj* x_102; 
lean::dec(x_94);
lean::dec(x_96);
x_102 = lean::box(0);
x_32 = x_102;
goto lbl_33;
}
else
{
obj* x_103; 
x_103 = lean::cnstr_get(x_97, 0);
lean::inc(x_103);
switch (lean::obj_tag(x_103)) {
case 0:
{
obj* x_105; obj* x_108; obj* x_111; obj* x_114; uint8 x_117; 
x_105 = lean::cnstr_get(x_94, 0);
lean::inc(x_105);
lean::dec(x_94);
x_108 = lean::cnstr_get(x_103, 0);
lean::inc(x_108);
lean::dec(x_103);
x_111 = lean::cnstr_get(x_105, 1);
lean::inc(x_111);
lean::dec(x_105);
x_114 = lean::cnstr_get(x_108, 1);
lean::inc(x_114);
lean::dec(x_108);
x_117 = l_lean_elaborator_match__precedence___main(x_111, x_114);
if (x_117 == 0)
{
obj* x_120; 
lean::dec(x_97);
lean::dec(x_96);
x_120 = lean::box(0);
x_32 = x_120;
goto lbl_33;
}
else
{
obj* x_121; 
if (lean::is_scalar(x_96)) {
 x_121 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_121 = x_96;
}
lean::cnstr_set(x_121, 0, x_97);
x_32 = x_121;
goto lbl_33;
}
}
default:
{
obj* x_126; 
lean::dec(x_97);
lean::dec(x_103);
lean::dec(x_94);
lean::dec(x_96);
x_126 = lean::box(0);
x_32 = x_126;
goto lbl_33;
}
}
}
}
case 1:
{
obj* x_127; 
x_127 = lean::cnstr_get(x_21, 1);
lean::inc(x_127);
lean::dec(x_21);
if (lean::obj_tag(x_127) == 0)
{
obj* x_132; 
lean::dec(x_94);
lean::dec(x_96);
x_132 = lean::box(0);
x_32 = x_132;
goto lbl_33;
}
else
{
obj* x_133; 
x_133 = lean::cnstr_get(x_127, 0);
lean::inc(x_133);
switch (lean::obj_tag(x_133)) {
case 1:
{
obj* x_135; obj* x_138; obj* x_141; obj* x_144; uint8 x_147; 
x_135 = lean::cnstr_get(x_94, 0);
lean::inc(x_135);
lean::dec(x_94);
x_138 = lean::cnstr_get(x_133, 0);
lean::inc(x_138);
lean::dec(x_133);
x_141 = lean::cnstr_get(x_135, 1);
lean::inc(x_141);
lean::dec(x_135);
x_144 = lean::cnstr_get(x_138, 1);
lean::inc(x_144);
lean::dec(x_138);
x_147 = l_lean_elaborator_match__precedence___main(x_141, x_144);
if (x_147 == 0)
{
obj* x_150; 
lean::dec(x_96);
lean::dec(x_127);
x_150 = lean::box(0);
x_32 = x_150;
goto lbl_33;
}
else
{
obj* x_151; 
if (lean::is_scalar(x_96)) {
 x_151 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_151 = x_96;
}
lean::cnstr_set(x_151, 0, x_127);
x_32 = x_151;
goto lbl_33;
}
}
default:
{
obj* x_156; 
lean::dec(x_94);
lean::dec(x_96);
lean::dec(x_133);
lean::dec(x_127);
x_156 = lean::box(0);
x_32 = x_156;
goto lbl_33;
}
}
}
}
default:
{
obj* x_157; obj* x_159; obj* x_160; obj* x_162; 
x_157 = lean::cnstr_get(x_94, 0);
if (lean::is_exclusive(x_94)) {
 lean::cnstr_set(x_94, 0, lean::box(0));
 x_159 = x_94;
} else {
 lean::inc(x_157);
 lean::dec(x_94);
 x_159 = lean::box(0);
}
x_162 = lean::cnstr_get(x_21, 1);
lean::inc(x_162);
lean::dec(x_21);
if (lean::obj_tag(x_162) == 0)
{
obj* x_168; 
lean::dec(x_157);
lean::dec(x_159);
lean::dec(x_96);
x_168 = lean::box(0);
x_32 = x_168;
goto lbl_33;
}
else
{
obj* x_169; 
x_169 = lean::cnstr_get(x_162, 0);
lean::inc(x_169);
lean::dec(x_162);
switch (lean::obj_tag(x_169)) {
case 2:
{
obj* x_172; obj* x_175; obj* x_177; obj* x_179; 
x_172 = lean::cnstr_get(x_169, 0);
lean::inc(x_172);
lean::dec(x_169);
x_175 = lean::cnstr_get(x_157, 1);
lean::inc(x_175);
x_177 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1;
lean::inc(x_175);
x_179 = l_option_map___rarg(x_177, x_175);
if (lean::obj_tag(x_179) == 0)
{
obj* x_181; obj* x_185; 
lean::dec(x_175);
x_181 = lean::cnstr_get(x_172, 1);
lean::inc(x_181);
lean::dec(x_172);
lean::inc(x_181);
x_185 = l_option_map___rarg(x_177, x_181);
if (lean::obj_tag(x_185) == 0)
{
obj* x_187; 
lean::dec(x_181);
x_187 = lean::box(0);
x_160 = x_187;
goto lbl_161;
}
else
{
obj* x_188; obj* x_190; 
x_188 = lean::cnstr_get(x_185, 0);
if (lean::is_exclusive(x_185)) {
 lean::cnstr_set(x_185, 0, lean::box(0));
 x_190 = x_185;
} else {
 lean::inc(x_188);
 lean::dec(x_185);
 x_190 = lean::box(0);
}
switch (lean::obj_tag(x_188)) {
case 0:
{
obj* x_192; 
lean::dec(x_188);
if (lean::is_scalar(x_190)) {
 x_192 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_192 = x_190;
}
lean::cnstr_set(x_192, 0, x_181);
x_160 = x_192;
goto lbl_161;
}
default:
{
obj* x_196; 
lean::dec(x_190);
lean::dec(x_188);
lean::dec(x_181);
x_196 = lean::box(0);
x_160 = x_196;
goto lbl_161;
}
}
}
}
else
{
obj* x_197; 
x_197 = lean::cnstr_get(x_179, 0);
lean::inc(x_197);
lean::dec(x_179);
switch (lean::obj_tag(x_197)) {
case 0:
{
obj* x_200; obj* x_203; obj* x_206; 
x_200 = lean::cnstr_get(x_197, 0);
lean::inc(x_200);
lean::dec(x_197);
x_203 = lean::cnstr_get(x_172, 1);
lean::inc(x_203);
lean::dec(x_172);
x_206 = l_option_map___rarg(x_177, x_203);
if (lean::obj_tag(x_206) == 0)
{
obj* x_209; 
lean::dec(x_175);
lean::dec(x_200);
x_209 = lean::box(0);
x_160 = x_209;
goto lbl_161;
}
else
{
obj* x_210; obj* x_212; 
x_210 = lean::cnstr_get(x_206, 0);
if (lean::is_exclusive(x_206)) {
 lean::cnstr_set(x_206, 0, lean::box(0));
 x_212 = x_206;
} else {
 lean::inc(x_210);
 lean::dec(x_206);
 x_212 = lean::box(0);
}
switch (lean::obj_tag(x_210)) {
case 0:
{
obj* x_213; obj* x_216; obj* x_217; uint8 x_218; 
x_213 = lean::cnstr_get(x_210, 0);
lean::inc(x_213);
lean::dec(x_210);
x_216 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_200);
x_217 = l_lean_parser_command_notation__spec_precedence__term_view_to__nat___main(x_213);
x_218 = lean::nat_dec_eq(x_216, x_217);
lean::dec(x_217);
lean::dec(x_216);
if (x_218 == 0)
{
obj* x_223; 
lean::dec(x_212);
lean::dec(x_175);
x_223 = lean::box(0);
x_160 = x_223;
goto lbl_161;
}
else
{
obj* x_224; 
if (lean::is_scalar(x_212)) {
 x_224 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_224 = x_212;
}
lean::cnstr_set(x_224, 0, x_175);
x_160 = x_224;
goto lbl_161;
}
}
default:
{
obj* x_229; 
lean::dec(x_212);
lean::dec(x_210);
lean::dec(x_175);
lean::dec(x_200);
x_229 = lean::box(0);
x_160 = x_229;
goto lbl_161;
}
}
}
}
default:
{
obj* x_233; 
lean::dec(x_175);
lean::dec(x_172);
lean::dec(x_197);
x_233 = lean::box(0);
x_160 = x_233;
goto lbl_161;
}
}
}
}
default:
{
obj* x_238; 
lean::dec(x_157);
lean::dec(x_159);
lean::dec(x_169);
lean::dec(x_96);
x_238 = lean::box(0);
x_32 = x_238;
goto lbl_33;
}
}
}
lbl_161:
{
if (lean::obj_tag(x_160) == 0)
{
obj* x_242; 
lean::dec(x_157);
lean::dec(x_159);
lean::dec(x_96);
x_242 = lean::box(0);
x_32 = x_242;
goto lbl_33;
}
else
{
obj* x_243; obj* x_245; obj* x_246; obj* x_249; obj* x_250; obj* x_251; obj* x_252; 
x_243 = lean::cnstr_get(x_160, 0);
if (lean::is_exclusive(x_160)) {
 x_245 = x_160;
} else {
 lean::inc(x_243);
 lean::dec(x_160);
 x_245 = lean::box(0);
}
x_246 = lean::cnstr_get(x_157, 0);
lean::inc(x_246);
lean::dec(x_157);
x_249 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_249, 0, x_246);
lean::cnstr_set(x_249, 1, x_243);
if (lean::is_scalar(x_159)) {
 x_250 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_250 = x_159;
}
lean::cnstr_set(x_250, 0, x_249);
if (lean::is_scalar(x_245)) {
 x_251 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_251 = x_245;
}
lean::cnstr_set(x_251, 0, x_250);
if (lean::is_scalar(x_96)) {
 x_252 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_252 = x_96;
}
lean::cnstr_set(x_252, 0, x_251);
x_32 = x_252;
goto lbl_33;
}
}
}
}
}
}
}
lbl_8:
{
if (lean::obj_tag(x_7) == 0)
{
obj* x_255; 
lean::dec(x_6);
lean::dec(x_4);
x_255 = lean::box(0);
return x_255;
}
else
{
obj* x_256; obj* x_259; 
x_256 = lean::cnstr_get(x_7, 0);
lean::inc(x_256);
lean::dec(x_7);
x_259 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_4);
if (lean::obj_tag(x_259) == 0)
{
obj* x_262; 
lean::dec(x_256);
lean::dec(x_6);
x_262 = lean::box(0);
return x_262;
}
else
{
obj* x_263; obj* x_265; obj* x_266; obj* x_267; 
x_263 = lean::cnstr_get(x_259, 0);
if (lean::is_exclusive(x_259)) {
 x_265 = x_259;
} else {
 lean::inc(x_263);
 lean::dec(x_259);
 x_265 = lean::box(0);
}
if (lean::is_scalar(x_6)) {
 x_266 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_266 = x_6;
}
lean::cnstr_set(x_266, 0, x_256);
lean::cnstr_set(x_266, 1, x_263);
if (lean::is_scalar(x_265)) {
 x_267 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_267 = x_265;
}
lean::cnstr_set(x_267, 0, x_266);
return x_267;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_match__spec___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_list_zip___rarg___lambda__1), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_match__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; uint8 x_7; obj* x_8; uint8 x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::inc(x_2);
x_7 = l_option_is__some___main___rarg(x_2);
x_8 = lean::cnstr_get(x_1, 0);
lean::inc(x_8);
x_10 = l_option_is__some___main___rarg(x_8);
if (x_7 == 0)
{
if (x_10 == 0)
{
obj* x_11; 
x_11 = lean::box(0);
x_4 = x_11;
goto lbl_5;
}
else
{
obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_15 = lean::box(0);
return x_15;
}
}
else
{
if (x_10 == 0)
{
obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_19 = lean::box(0);
return x_19;
}
else
{
obj* x_20; 
x_20 = lean::box(0);
x_4 = x_20;
goto lbl_5;
}
}
lbl_5:
{
obj* x_22; obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_4);
x_22 = lean::cnstr_get(x_0, 1);
lean::inc(x_22);
lean::dec(x_0);
x_25 = lean::cnstr_get(x_1, 1);
lean::inc(x_25);
lean::dec(x_1);
x_28 = l_lean_elaborator_match__spec___closed__1;
x_29 = l_list_zip__with___main___rarg(x_28, x_22, x_25);
x_30 = l_list_mmap___main___at_lean_elaborator_match__spec___spec__1(x_29);
if (lean::obj_tag(x_30) == 0)
{
obj* x_32; 
lean::dec(x_2);
x_32 = lean::box(0);
return x_32;
}
else
{
obj* x_33; obj* x_35; obj* x_36; obj* x_37; 
x_33 = lean::cnstr_get(x_30, 0);
if (lean::is_exclusive(x_30)) {
 x_35 = x_30;
} else {
 lean::inc(x_33);
 lean::dec(x_30);
 x_35 = lean::box(0);
}
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_2);
lean::cnstr_set(x_36, 1, x_33);
if (lean::is_scalar(x_35)) {
 x_37 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_37 = x_35;
}
lean::cnstr_set(x_37, 0, x_36);
return x_37;
}
}
}
}
obj* l_lean_elaborator_notation_elaborate__aux___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 2);
lean::inc(x_2);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_1, 2);
lean::inc(x_5);
lean::dec(x_1);
x_8 = l_lean_elaborator_match__spec(x_2, x_5);
return x_8;
}
}
obj* _init_l_lean_elaborator_notation_elaborate__aux___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid notation, matches multiple reserved notations");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate__aux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; 
lean::inc(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_notation_elaborate__aux___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = l_list_filter__map___main___rarg(x_4, x_5);
if (lean::obj_tag(x_7) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_1);
x_9 = lean::cnstr_get(x_0, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 2);
lean::inc(x_13);
x_15 = l_lean_elaborator_postprocess__notation__spec(x_13);
x_16 = lean::cnstr_get(x_0, 3);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_0, 4);
lean::inc(x_18);
lean::dec(x_0);
x_21 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_21, 0, x_9);
lean::cnstr_set(x_21, 1, x_11);
lean::cnstr_set(x_21, 2, x_15);
lean::cnstr_set(x_21, 3, x_16);
lean::cnstr_set(x_21, 4, x_18);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
else
{
obj* x_24; 
x_24 = lean::cnstr_get(x_7, 1);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_1);
x_27 = lean::cnstr_get(x_7, 0);
lean::inc(x_27);
lean::dec(x_7);
x_30 = lean::cnstr_get(x_0, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_0, 1);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_0, 3);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_0, 4);
lean::inc(x_36);
lean::dec(x_0);
x_39 = l_lean_elaborator_postprocess__notation__spec(x_27);
x_40 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_40, 0, x_30);
lean::cnstr_set(x_40, 1, x_32);
lean::cnstr_set(x_40, 2, x_39);
lean::cnstr_set(x_40, 3, x_34);
lean::cnstr_set(x_40, 4, x_36);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_2);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
else
{
obj* x_45; obj* x_46; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_7);
lean::dec(x_24);
x_45 = l_lean_parser_command_notation_has__view;
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
lean::dec(x_45);
x_49 = lean::apply_1(x_46, x_0);
x_50 = l_lean_elaborator_notation_elaborate__aux___closed__1;
x_51 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_49, x_50, x_1, x_2);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; obj* x_54; obj* x_55; 
x_52 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_54 = x_51;
} else {
 lean::inc(x_52);
 lean::dec(x_51);
 x_54 = lean::box(0);
}
if (lean::is_scalar(x_54)) {
 x_55 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_55 = x_54;
}
lean::cnstr_set(x_55, 0, x_52);
return x_55;
}
else
{
obj* x_56; obj* x_58; obj* x_59; obj* x_61; obj* x_63; obj* x_64; obj* x_66; obj* x_68; obj* x_70; obj* x_71; obj* x_73; obj* x_76; obj* x_77; obj* x_78; 
x_56 = lean::cnstr_get(x_51, 0);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = lean::cnstr_get(x_56, 0);
x_61 = lean::cnstr_get(x_56, 1);
if (lean::is_exclusive(x_56)) {
 x_63 = x_56;
} else {
 lean::inc(x_59);
 lean::inc(x_61);
 lean::dec(x_56);
 x_63 = lean::box(0);
}
x_64 = lean::cnstr_get(x_59, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_59, 1);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_59, 2);
lean::inc(x_68);
x_70 = l_lean_elaborator_postprocess__notation__spec(x_68);
x_71 = lean::cnstr_get(x_59, 3);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_59, 4);
lean::inc(x_73);
lean::dec(x_59);
x_76 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_76, 0, x_64);
lean::cnstr_set(x_76, 1, x_66);
lean::cnstr_set(x_76, 2, x_70);
lean::cnstr_set(x_76, 3, x_71);
lean::cnstr_set(x_76, 4, x_73);
if (lean::is_scalar(x_63)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_63;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_61);
if (lean::is_scalar(x_58)) {
 x_78 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_78 = x_58;
}
lean::cnstr_set(x_78, 0, x_77);
return x_78;
}
}
}
}
}
obj* _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_notation");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_mk__notation__kind___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_add(x_5, x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_0, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_0, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_0, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 10);
lean::inc(x_23);
lean::dec(x_0);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_1);
lean::cnstr_set(x_26, 1, x_3);
lean::cnstr_set(x_26, 2, x_8);
lean::cnstr_set(x_26, 3, x_9);
lean::cnstr_set(x_26, 4, x_11);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = l_lean_elaborator_mk__notation__kind___rarg___closed__1;
x_28 = lean_name_mk_numeral(x_27, x_5);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_26);
x_30 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_30, 0, x_29);
return x_30;
}
}
obj* l_lean_elaborator_mk__notation__kind(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_mk__notation__kind___rarg), 1, 0);
return x_2;
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_register__notation__macro___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_elaborator_register__notation__macro(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_mk__notation__kind___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; 
x_10 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_12 = x_4;
} else {
 lean::inc(x_10);
 lean::dec(x_4);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 x_17 = x_10;
} else {
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_10);
 x_17 = lean::box(0);
}
lean::inc(x_13);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_13);
lean::cnstr_set(x_19, 1, x_0);
lean::inc(x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_mk__notation__transformer), 3, 1);
lean::closure_set(x_21, 0, x_19);
x_22 = lean::cnstr_get(x_15, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_15, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_15, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_15, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_15, 4);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_15, 5);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_15, 6);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_15, 7);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_36, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_36, 1);
lean::inc(x_40);
lean::dec(x_36);
x_43 = l_rbnode_insert___at_lean_expander_builtin__transformers___spec__3(x_40, x_13, x_21);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_38);
lean::cnstr_set(x_44, 1, x_43);
x_45 = lean::cnstr_get(x_15, 8);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_15, 9);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_15, 10);
lean::inc(x_49);
lean::dec(x_15);
x_52 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_52, 0, x_22);
lean::cnstr_set(x_52, 1, x_24);
lean::cnstr_set(x_52, 2, x_26);
lean::cnstr_set(x_52, 3, x_28);
lean::cnstr_set(x_52, 4, x_30);
lean::cnstr_set(x_52, 5, x_32);
lean::cnstr_set(x_52, 6, x_34);
lean::cnstr_set(x_52, 7, x_44);
lean::cnstr_set(x_52, 8, x_45);
lean::cnstr_set(x_52, 9, x_47);
lean::cnstr_set(x_52, 10, x_49);
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_19);
lean::cnstr_set(x_53, 1, x_52);
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
}
uint8 l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_1; 
x_1 = 0;
return x_1;
}
else
{
obj* x_2; obj* x_4; uint8 x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
lean::dec(x_0);
x_7 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_4);
x_8 = lean::cnstr_get(x_2, 1);
lean::inc(x_8);
lean::dec(x_2);
if (lean::obj_tag(x_8) == 0)
{
return x_7;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
switch (lean::obj_tag(x_11)) {
case 2:
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
if (lean::obj_tag(x_17) == 0)
{
return x_7;
}
else
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_17, 0);
lean::inc(x_20);
lean::dec(x_17);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
switch (lean::obj_tag(x_23)) {
case 3:
{
uint8 x_27; 
lean::dec(x_23);
x_27 = 1;
return x_27;
}
default:
{
lean::dec(x_23);
return x_7;
}
}
}
}
default:
{
lean::dec(x_11);
return x_7;
}
}
}
}
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_notation_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("ignoring notation using 'fold' action");
return x_0;
}
}
obj* l_lean_elaborator_notation_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; uint8 x_15; 
x_3 = l_lean_parser_command_notation_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::apply_1(x_4, x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
lean::dec(x_10);
x_15 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_12);
if (x_15 == 0)
{
obj* x_16; 
x_16 = lean::box(0);
x_8 = x_16;
goto lbl_9;
}
else
{
obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_31; obj* x_34; obj* x_35; uint8 x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_46; obj* x_48; obj* x_50; obj* x_52; obj* x_55; obj* x_56; obj* x_57; obj* x_58; 
lean::dec(x_7);
x_18 = lean::cnstr_get(x_2, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_2, 1);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_2, 2);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 3);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 4);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_1, 0);
lean::inc(x_28);
lean::dec(x_1);
x_31 = lean::cnstr_get(x_28, 0);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::box(0);
x_35 = l_lean_elaborator_notation_elaborate___closed__1;
x_36 = 1;
x_37 = l_string_join___closed__1;
x_38 = l_lean_elaborator_notation_elaborate___closed__2;
x_39 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_39, 0, x_31);
lean::cnstr_set(x_39, 1, x_35);
lean::cnstr_set(x_39, 2, x_34);
lean::cnstr_set(x_39, 3, x_37);
lean::cnstr_set(x_39, 4, x_38);
lean::cnstr_set_scalar(x_39, sizeof(void*)*5, x_36);
x_40 = x_39;
x_41 = lean::cnstr_get(x_2, 5);
lean::inc(x_41);
x_43 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_43, 0, x_40);
lean::cnstr_set(x_43, 1, x_41);
x_44 = lean::cnstr_get(x_2, 6);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_2, 7);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 8);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_2, 9);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_2, 10);
lean::inc(x_52);
lean::dec(x_2);
x_55 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_55, 0, x_18);
lean::cnstr_set(x_55, 1, x_20);
lean::cnstr_set(x_55, 2, x_22);
lean::cnstr_set(x_55, 3, x_24);
lean::cnstr_set(x_55, 4, x_26);
lean::cnstr_set(x_55, 5, x_43);
lean::cnstr_set(x_55, 6, x_44);
lean::cnstr_set(x_55, 7, x_46);
lean::cnstr_set(x_55, 8, x_48);
lean::cnstr_set(x_55, 9, x_50);
lean::cnstr_set(x_55, 10, x_52);
x_56 = lean::box(0);
x_57 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_55);
x_58 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_58, 0, x_57);
return x_58;
}
lbl_9:
{
obj* x_61; 
lean::dec(x_8);
lean::inc(x_1);
x_61 = l_lean_elaborator_notation_elaborate__aux(x_7, x_1, x_2);
if (lean::obj_tag(x_61) == 0)
{
obj* x_63; obj* x_65; obj* x_66; 
lean::dec(x_1);
x_63 = lean::cnstr_get(x_61, 0);
if (lean::is_exclusive(x_61)) {
 x_65 = x_61;
} else {
 lean::inc(x_63);
 lean::dec(x_61);
 x_65 = lean::box(0);
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_63);
return x_66;
}
else
{
obj* x_67; obj* x_70; obj* x_72; obj* x_77; 
x_67 = lean::cnstr_get(x_61, 0);
lean::inc(x_67);
lean::dec(x_61);
x_70 = lean::cnstr_get(x_67, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_67, 1);
lean::inc(x_72);
lean::dec(x_67);
lean::inc(x_1);
lean::inc(x_70);
x_77 = l_lean_elaborator_register__notation__macro(x_70, x_1, x_72);
if (lean::obj_tag(x_77) == 0)
{
obj* x_80; obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_70);
x_80 = lean::cnstr_get(x_77, 0);
if (lean::is_exclusive(x_77)) {
 x_82 = x_77;
} else {
 lean::inc(x_80);
 lean::dec(x_77);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_80);
return x_83;
}
else
{
obj* x_84; obj* x_87; 
x_84 = lean::cnstr_get(x_77, 0);
lean::inc(x_84);
lean::dec(x_77);
x_87 = lean::cnstr_get(x_70, 0);
lean::inc(x_87);
lean::dec(x_70);
if (lean::obj_tag(x_87) == 0)
{
obj* x_90; obj* x_92; obj* x_95; obj* x_97; obj* x_99; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; obj* x_110; obj* x_112; obj* x_114; obj* x_116; obj* x_119; obj* x_120; 
x_90 = lean::cnstr_get(x_84, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_84, 1);
lean::inc(x_92);
lean::dec(x_84);
x_95 = lean::cnstr_get(x_92, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_92, 1);
lean::inc(x_97);
x_99 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_99, 0, x_90);
lean::cnstr_set(x_99, 1, x_97);
x_100 = lean::cnstr_get(x_92, 2);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_92, 3);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_92, 4);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_92, 5);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_92, 6);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_92, 7);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_92, 8);
lean::inc(x_112);
x_114 = lean::cnstr_get(x_92, 9);
lean::inc(x_114);
x_116 = lean::cnstr_get(x_92, 10);
lean::inc(x_116);
lean::dec(x_92);
x_119 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_119, 0, x_95);
lean::cnstr_set(x_119, 1, x_99);
lean::cnstr_set(x_119, 2, x_100);
lean::cnstr_set(x_119, 3, x_102);
lean::cnstr_set(x_119, 4, x_104);
lean::cnstr_set(x_119, 5, x_106);
lean::cnstr_set(x_119, 6, x_108);
lean::cnstr_set(x_119, 7, x_110);
lean::cnstr_set(x_119, 8, x_112);
lean::cnstr_set(x_119, 9, x_114);
lean::cnstr_set(x_119, 10, x_116);
x_120 = l_lean_elaborator_update__parser__config(x_1, x_119);
return x_120;
}
else
{
obj* x_122; obj* x_124; obj* x_127; obj* x_129; obj* x_131; obj* x_133; obj* x_135; obj* x_137; obj* x_139; obj* x_140; obj* x_142; obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_153; obj* x_154; obj* x_156; obj* x_158; obj* x_160; obj* x_162; obj* x_164; obj* x_167; obj* x_168; 
lean::dec(x_87);
x_122 = lean::cnstr_get(x_84, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_84, 1);
lean::inc(x_124);
lean::dec(x_84);
x_127 = lean::cnstr_get(x_124, 0);
lean::inc(x_127);
x_129 = lean::cnstr_get(x_124, 1);
lean::inc(x_129);
x_131 = lean::cnstr_get(x_124, 2);
lean::inc(x_131);
x_133 = lean::cnstr_get(x_124, 3);
lean::inc(x_133);
x_135 = lean::cnstr_get(x_124, 4);
lean::inc(x_135);
x_137 = lean::cnstr_get(x_135, 0);
lean::inc(x_137);
x_139 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_139, 0, x_122);
lean::cnstr_set(x_139, 1, x_137);
x_140 = lean::cnstr_get(x_135, 1);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_135, 2);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_135, 3);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_135, 4);
lean::inc(x_146);
x_148 = lean::cnstr_get(x_135, 5);
lean::inc(x_148);
x_150 = lean::cnstr_get(x_135, 6);
lean::inc(x_150);
lean::dec(x_135);
x_153 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_153, 0, x_139);
lean::cnstr_set(x_153, 1, x_140);
lean::cnstr_set(x_153, 2, x_142);
lean::cnstr_set(x_153, 3, x_144);
lean::cnstr_set(x_153, 4, x_146);
lean::cnstr_set(x_153, 5, x_148);
lean::cnstr_set(x_153, 6, x_150);
x_154 = lean::cnstr_get(x_124, 5);
lean::inc(x_154);
x_156 = lean::cnstr_get(x_124, 6);
lean::inc(x_156);
x_158 = lean::cnstr_get(x_124, 7);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_124, 8);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_124, 9);
lean::inc(x_162);
x_164 = lean::cnstr_get(x_124, 10);
lean::inc(x_164);
lean::dec(x_124);
x_167 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_167, 0, x_127);
lean::cnstr_set(x_167, 1, x_129);
lean::cnstr_set(x_167, 2, x_131);
lean::cnstr_set(x_167, 3, x_133);
lean::cnstr_set(x_167, 4, x_153);
lean::cnstr_set(x_167, 5, x_154);
lean::cnstr_set(x_167, 6, x_156);
lean::cnstr_set(x_167, 7, x_158);
lean::cnstr_set(x_167, 8, x_160);
lean::cnstr_set(x_167, 9, x_162);
lean::cnstr_set(x_167, 10, x_164);
x_168 = l_lean_elaborator_update__parser__config(x_1, x_167);
return x_168;
}
}
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = l_list_foldr___main___at_lean_elaborator_notation_elaborate___spec__1(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("a universe named '");
return x_0;
}
}
obj* _init_l_lean_elaborator_universe_elaborate___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been declared in this scope");
return x_0;
}
}
obj* l_lean_elaborator_universe_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_15; obj* x_19; 
x_3 = l_lean_parser_command_universe_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
x_12 = l_lean_elaborator_mangle__ident(x_9);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
lean::inc(x_12);
lean::inc(x_15);
x_19 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_to__level___main___spec__5(x_15, x_12);
if (lean::obj_tag(x_19) == 0)
{
obj* x_22; obj* x_24; obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_1);
lean::dec(x_0);
x_22 = lean::cnstr_get(x_2, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_2, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_2, 2);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_2, 3);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_13, 0);
lean::inc(x_30);
lean::inc(x_12);
x_33 = level_mk_param(x_12);
x_34 = l_lean_elaborator_ordered__rbmap_insert___at_lean_elaborator_elab__def__like___spec__4(x_15, x_12, x_33);
x_35 = lean::cnstr_get(x_13, 2);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_13, 3);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_13, 4);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_13, 5);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_13, 6);
lean::inc(x_43);
lean::dec(x_13);
x_46 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_46, 0, x_30);
lean::cnstr_set(x_46, 1, x_34);
lean::cnstr_set(x_46, 2, x_35);
lean::cnstr_set(x_46, 3, x_37);
lean::cnstr_set(x_46, 4, x_39);
lean::cnstr_set(x_46, 5, x_41);
lean::cnstr_set(x_46, 6, x_43);
x_47 = lean::cnstr_get(x_2, 5);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 6);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_2, 7);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_2, 8);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_2, 9);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_2, 10);
lean::inc(x_57);
lean::dec(x_2);
x_60 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_60, 0, x_22);
lean::cnstr_set(x_60, 1, x_24);
lean::cnstr_set(x_60, 2, x_26);
lean::cnstr_set(x_60, 3, x_28);
lean::cnstr_set(x_60, 4, x_46);
lean::cnstr_set(x_60, 5, x_47);
lean::cnstr_set(x_60, 6, x_49);
lean::cnstr_set(x_60, 7, x_51);
lean::cnstr_set(x_60, 8, x_53);
lean::cnstr_set(x_60, 9, x_55);
lean::cnstr_set(x_60, 10, x_57);
x_61 = lean::box(0);
x_62 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_60);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
return x_63;
}
else
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_15);
lean::dec(x_13);
lean::dec(x_19);
x_67 = l_lean_name_to__string___closed__1;
x_68 = l_lean_name_to__string__with__sep___main(x_67, x_12);
x_69 = l_lean_elaborator_universe_elaborate___closed__1;
x_70 = lean::string_append(x_69, x_68);
lean::dec(x_68);
x_72 = l_lean_elaborator_universe_elaborate___closed__2;
x_73 = lean::string_append(x_70, x_72);
x_74 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_0, x_73, x_1, x_2);
return x_74;
}
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown identifier '");
return x_0;
}
}
obj* _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'attribute' command, identifier is ambiguous");
return x_0;
}
}
obj* l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_7, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_27; 
x_11 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_13 = x_0;
} else {
 lean::inc(x_11);
 lean::dec(x_0);
 x_13 = lean::box(0);
}
lean::inc(x_7);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_7);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
lean::dec(x_7);
x_19 = l_lean_name_to__string___closed__1;
x_20 = l_lean_name_to__string__with__sep___main(x_19, x_16);
x_21 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_24 = l_char_has__repr___closed__1;
x_25 = lean::string_append(x_22, x_24);
lean::inc(x_1);
x_27 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_15, x_25, x_1, x_2);
if (lean::obj_tag(x_27) == 0)
{
obj* x_31; obj* x_33; obj* x_34; 
lean::dec(x_13);
lean::dec(x_1);
lean::dec(x_11);
x_31 = lean::cnstr_get(x_27, 0);
if (lean::is_exclusive(x_27)) {
 x_33 = x_27;
} else {
 lean::inc(x_31);
 lean::dec(x_27);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_31);
return x_34;
}
else
{
obj* x_35; obj* x_38; obj* x_40; obj* x_43; 
x_35 = lean::cnstr_get(x_27, 0);
lean::inc(x_35);
lean::dec(x_27);
x_38 = lean::cnstr_get(x_35, 0);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_35, 1);
lean::inc(x_40);
lean::dec(x_35);
x_43 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_11, x_1, x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_46; obj* x_48; obj* x_49; 
lean::dec(x_13);
lean::dec(x_38);
x_46 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_48 = x_43;
} else {
 lean::inc(x_46);
 lean::dec(x_43);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_46);
return x_49;
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_50 = lean::cnstr_get(x_43, 0);
if (lean::is_exclusive(x_43)) {
 x_52 = x_43;
} else {
 lean::inc(x_50);
 lean::dec(x_43);
 x_52 = lean::box(0);
}
x_53 = lean::cnstr_get(x_50, 0);
x_55 = lean::cnstr_get(x_50, 1);
if (lean::is_exclusive(x_50)) {
 x_57 = x_50;
} else {
 lean::inc(x_53);
 lean::inc(x_55);
 lean::dec(x_50);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_58 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_58 = x_13;
}
lean::cnstr_set(x_58, 0, x_38);
lean::cnstr_set(x_58, 1, x_53);
if (lean::is_scalar(x_57)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_57;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_55);
if (lean::is_scalar(x_52)) {
 x_60 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_60 = x_52;
}
lean::cnstr_set(x_60, 0, x_59);
return x_60;
}
}
}
else
{
obj* x_61; 
x_61 = lean::cnstr_get(x_9, 1);
lean::inc(x_61);
if (lean::obj_tag(x_61) == 0)
{
obj* x_64; obj* x_67; obj* x_69; obj* x_70; 
lean::dec(x_7);
x_64 = lean::cnstr_get(x_0, 1);
lean::inc(x_64);
lean::dec(x_0);
x_67 = lean::cnstr_get(x_9, 0);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_set(x_9, 0, lean::box(0));
 lean::cnstr_release(x_9, 1);
 x_69 = x_9;
} else {
 lean::inc(x_67);
 lean::dec(x_9);
 x_69 = lean::box(0);
}
x_70 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_64, x_1, x_2);
if (lean::obj_tag(x_70) == 0)
{
obj* x_73; obj* x_75; obj* x_76; 
lean::dec(x_67);
lean::dec(x_69);
x_73 = lean::cnstr_get(x_70, 0);
if (lean::is_exclusive(x_70)) {
 x_75 = x_70;
} else {
 lean::inc(x_73);
 lean::dec(x_70);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_73);
return x_76;
}
else
{
obj* x_77; obj* x_79; obj* x_80; obj* x_82; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_77 = lean::cnstr_get(x_70, 0);
if (lean::is_exclusive(x_70)) {
 x_79 = x_70;
} else {
 lean::inc(x_77);
 lean::dec(x_70);
 x_79 = lean::box(0);
}
x_80 = lean::cnstr_get(x_77, 0);
x_82 = lean::cnstr_get(x_77, 1);
if (lean::is_exclusive(x_77)) {
 x_84 = x_77;
} else {
 lean::inc(x_80);
 lean::inc(x_82);
 lean::dec(x_77);
 x_84 = lean::box(0);
}
x_85 = lean::box(0);
x_86 = lean_expr_mk_const(x_67, x_85);
if (lean::is_scalar(x_69)) {
 x_87 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_87 = x_69;
}
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_80);
if (lean::is_scalar(x_84)) {
 x_88 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_88 = x_84;
}
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_82);
if (lean::is_scalar(x_79)) {
 x_89 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_89 = x_79;
}
lean::cnstr_set(x_89, 0, x_88);
return x_89;
}
}
else
{
obj* x_91; obj* x_92; obj* x_95; obj* x_96; obj* x_98; 
lean::dec(x_9);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_91 = x_61;
} else {
 lean::dec(x_61);
 x_91 = lean::box(0);
}
x_92 = lean::cnstr_get(x_0, 1);
lean::inc(x_92);
lean::dec(x_0);
x_95 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_95, 0, x_7);
x_96 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2;
lean::inc(x_1);
x_98 = l_lean_expander_error___at_lean_elaborator_level__get__app__args___main___spec__1___rarg(x_95, x_96, x_1, x_2);
if (lean::obj_tag(x_98) == 0)
{
obj* x_102; obj* x_104; obj* x_105; 
lean::dec(x_1);
lean::dec(x_91);
lean::dec(x_92);
x_102 = lean::cnstr_get(x_98, 0);
if (lean::is_exclusive(x_98)) {
 x_104 = x_98;
} else {
 lean::inc(x_102);
 lean::dec(x_98);
 x_104 = lean::box(0);
}
if (lean::is_scalar(x_104)) {
 x_105 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_105 = x_104;
}
lean::cnstr_set(x_105, 0, x_102);
return x_105;
}
else
{
obj* x_106; obj* x_109; obj* x_111; obj* x_114; 
x_106 = lean::cnstr_get(x_98, 0);
lean::inc(x_106);
lean::dec(x_98);
x_109 = lean::cnstr_get(x_106, 0);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_106, 1);
lean::inc(x_111);
lean::dec(x_106);
x_114 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_92, x_1, x_111);
if (lean::obj_tag(x_114) == 0)
{
obj* x_117; obj* x_119; obj* x_120; 
lean::dec(x_109);
lean::dec(x_91);
x_117 = lean::cnstr_get(x_114, 0);
if (lean::is_exclusive(x_114)) {
 x_119 = x_114;
} else {
 lean::inc(x_117);
 lean::dec(x_114);
 x_119 = lean::box(0);
}
if (lean::is_scalar(x_119)) {
 x_120 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_120 = x_119;
}
lean::cnstr_set(x_120, 0, x_117);
return x_120;
}
else
{
obj* x_121; obj* x_123; obj* x_124; obj* x_126; obj* x_128; obj* x_129; obj* x_130; obj* x_131; 
x_121 = lean::cnstr_get(x_114, 0);
if (lean::is_exclusive(x_114)) {
 x_123 = x_114;
} else {
 lean::inc(x_121);
 lean::dec(x_114);
 x_123 = lean::box(0);
}
x_124 = lean::cnstr_get(x_121, 0);
x_126 = lean::cnstr_get(x_121, 1);
if (lean::is_exclusive(x_121)) {
 x_128 = x_121;
} else {
 lean::inc(x_124);
 lean::inc(x_126);
 lean::dec(x_121);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_91)) {
 x_129 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_129 = x_91;
}
lean::cnstr_set(x_129, 0, x_109);
lean::cnstr_set(x_129, 1, x_124);
if (lean::is_scalar(x_128)) {
 x_130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_130 = x_128;
}
lean::cnstr_set(x_130, 0, x_129);
lean::cnstr_set(x_130, 1, x_126);
if (lean::is_scalar(x_123)) {
 x_131 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_131 = x_123;
}
lean::cnstr_set(x_131, 0, x_130);
return x_131;
}
}
}
}
}
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("attribute");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_elaborator_attribute_elaborate___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("local");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_attribute_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_12; 
x_3 = l_lean_parser_command_attribute_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
lean::inc(x_1);
x_12 = l_lean_elaborator_attrs__to__pexpr(x_9, x_1, x_2);
if (lean::obj_tag(x_12) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_12, 0);
if (lean::is_exclusive(x_12)) {
 x_18 = x_12;
} else {
 lean::inc(x_16);
 lean::dec(x_12);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_31; 
x_20 = lean::cnstr_get(x_12, 0);
lean::inc(x_20);
lean::dec(x_12);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = lean::cnstr_get(x_8, 5);
lean::inc(x_28);
lean::inc(x_1);
x_31 = l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1(x_28, x_1, x_25);
if (lean::obj_tag(x_31) == 0)
{
obj* x_36; obj* x_38; obj* x_39; 
lean::dec(x_8);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_23);
x_36 = lean::cnstr_get(x_31, 0);
if (lean::is_exclusive(x_31)) {
 x_38 = x_31;
} else {
 lean::inc(x_36);
 lean::dec(x_31);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_36);
return x_39;
}
else
{
obj* x_40; obj* x_43; obj* x_45; obj* x_48; uint8 x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_40 = lean::cnstr_get(x_31, 0);
lean::inc(x_40);
lean::dec(x_31);
x_43 = lean::cnstr_get(x_40, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_40, 1);
lean::inc(x_45);
lean::dec(x_40);
x_48 = lean::cnstr_get(x_8, 0);
lean::inc(x_48);
lean::dec(x_8);
x_51 = l_option_is__some___main___rarg(x_48);
x_52 = l_lean_elaborator_attribute_elaborate___closed__1;
x_53 = l_lean_elaborator_attribute_elaborate___closed__2;
x_54 = l_lean_kvmap_set__bool(x_52, x_53, x_51);
x_55 = l_lean_elaborator_mk__eqns___closed__1;
x_56 = l_lean_expr_mk__capp(x_55, x_43);
x_57 = lean_expr_mk_app(x_23, x_56);
x_58 = lean_expr_mk_mdata(x_54, x_57);
x_59 = l_lean_elaborator_old__elab__command(x_0, x_58, x_1, x_45);
return x_59;
}
}
}
}
obj* _init_l_lean_elaborator_check_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("#check");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
return x_6;
}
}
obj* l_lean_elaborator_check_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_13; 
x_3 = l_lean_parser_command_check_has__view;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
lean::inc(x_0);
x_8 = lean::apply_1(x_4, x_0);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
lean::inc(x_1);
x_13 = l_lean_elaborator_to__pexpr___main(x_9, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_1);
lean::dec(x_0);
x_16 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_18 = x_13;
} else {
 lean::inc(x_16);
 lean::dec(x_13);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_16);
return x_19;
}
else
{
obj* x_20; obj* x_23; obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
x_20 = lean::cnstr_get(x_13, 0);
lean::inc(x_20);
lean::dec(x_13);
x_23 = lean::cnstr_get(x_20, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_20, 1);
lean::inc(x_25);
lean::dec(x_20);
x_28 = l_lean_elaborator_check_elaborate___closed__1;
x_29 = lean_expr_mk_mdata(x_28, x_23);
x_30 = l_lean_elaborator_old__elab__command(x_0, x_29, x_1, x_25);
return x_30;
}
}
}
obj* l_lean_elaborator_open_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_34; obj* x_35; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_1);
x_4 = l_lean_parser_command_open_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 4);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_17, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_17, 4);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_17, 5);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_8, 1);
lean::inc(x_31);
lean::dec(x_8);
x_34 = l_list_append___rarg(x_29, x_31);
x_35 = lean::cnstr_get(x_17, 6);
lean::inc(x_35);
lean::dec(x_17);
x_38 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_38, 0, x_19);
lean::cnstr_set(x_38, 1, x_21);
lean::cnstr_set(x_38, 2, x_23);
lean::cnstr_set(x_38, 3, x_25);
lean::cnstr_set(x_38, 4, x_27);
lean::cnstr_set(x_38, 5, x_34);
lean::cnstr_set(x_38, 6, x_35);
x_39 = lean::cnstr_get(x_2, 5);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_2, 6);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_2, 7);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_2, 8);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_2, 9);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_2, 10);
lean::inc(x_49);
lean::dec(x_2);
x_52 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_52, 0, x_9);
lean::cnstr_set(x_52, 1, x_11);
lean::cnstr_set(x_52, 2, x_13);
lean::cnstr_set(x_52, 3, x_15);
lean::cnstr_set(x_52, 4, x_38);
lean::cnstr_set(x_52, 5, x_39);
lean::cnstr_set(x_52, 6, x_41);
lean::cnstr_set(x_52, 7, x_43);
lean::cnstr_set(x_52, 8, x_45);
lean::cnstr_set(x_52, 9, x_47);
lean::cnstr_set(x_52, 10, x_49);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_52);
x_55 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_55, 0, x_54);
return x_55;
}
}
obj* l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; 
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
lean::inc(x_0);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_4);
x_11 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_0, x_6);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
return x_12;
}
}
}
obj* l_lean_elaborator_export_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_lean_elaborator_get__namespace___rarg(x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_8; obj* x_9; 
lean::dec(x_0);
x_6 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_8 = x_4;
} else {
 lean::inc(x_6);
 lean::dec(x_4);
 x_8 = lean::box(0);
}
if (lean::is_scalar(x_8)) {
 x_9 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_9 = x_8;
}
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_48; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_10 = lean::cnstr_get(x_4, 0);
if (lean::is_exclusive(x_4)) {
 x_12 = x_4;
} else {
 lean::inc(x_10);
 lean::dec(x_4);
 x_12 = lean::box(0);
}
x_13 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 1);
if (lean::is_exclusive(x_10)) {
 x_17 = x_10;
} else {
 lean::inc(x_13);
 lean::inc(x_15);
 lean::dec(x_10);
 x_17 = lean::box(0);
}
x_18 = l_lean_parser_command_export_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_0);
x_23 = lean::cnstr_get(x_15, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_15, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_15, 2);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_15, 3);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_22, 1);
lean::inc(x_31);
lean::dec(x_22);
x_34 = l_list_map___main___at_lean_elaborator_export_elaborate___spec__1(x_13, x_31);
x_35 = l_list_append___rarg(x_29, x_34);
x_36 = lean::cnstr_get(x_15, 4);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_15, 5);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_15, 6);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_15, 7);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_15, 8);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_15, 9);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_15, 10);
lean::inc(x_48);
lean::dec(x_15);
x_51 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_51, 0, x_23);
lean::cnstr_set(x_51, 1, x_25);
lean::cnstr_set(x_51, 2, x_27);
lean::cnstr_set(x_51, 3, x_35);
lean::cnstr_set(x_51, 4, x_36);
lean::cnstr_set(x_51, 5, x_38);
lean::cnstr_set(x_51, 6, x_40);
lean::cnstr_set(x_51, 7, x_42);
lean::cnstr_set(x_51, 8, x_44);
lean::cnstr_set(x_51, 9, x_46);
lean::cnstr_set(x_51, 10, x_48);
x_52 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_17;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_51);
if (lean::is_scalar(x_12)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_12;
}
lean::cnstr_set(x_54, 0, x_53);
return x_54;
}
}
}
obj* _init_l_lean_elaborator_init__quot_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_string("command");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean::mk_string("init_quot");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = l_lean_kvmap_set__name(x_0, x_3, x_5);
x_7 = l_lean_elaborator_dummy;
x_8 = lean_expr_mk_mdata(x_6, x_7);
return x_8;
}
}
obj* l_lean_elaborator_init__quot_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_lean_elaborator_init__quot_elaborate___closed__1;
x_4 = l_lean_elaborator_old__elab__command(x_0, x_3, x_1, x_2);
return x_4;
}
}
obj* l_lean_elaborator_set__option_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_4 = l_lean_parser_command_set__option_has__view;
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
lean::dec(x_4);
x_8 = lean::apply_1(x_5, x_0);
x_9 = lean::cnstr_get(x_8, 2);
lean::inc(x_9);
switch (lean::obj_tag(x_9)) {
case 0:
{
obj* x_11; 
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
if (lean::obj_tag(x_11) == 0)
{
obj* x_15; obj* x_18; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_46; obj* x_48; obj* x_50; obj* x_52; obj* x_54; obj* x_56; uint8 x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_11);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
lean::dec(x_8);
x_18 = lean::cnstr_get(x_15, 2);
lean::inc(x_18);
lean::dec(x_15);
x_21 = lean::cnstr_get(x_2, 4);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_21, 6);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 1);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_2, 2);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_2, 3);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_21, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_21, 1);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_21, 2);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_21, 3);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_21, 4);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_21, 5);
lean::inc(x_43);
lean::dec(x_21);
x_46 = lean::cnstr_get(x_2, 5);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_2, 6);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_2, 7);
lean::inc(x_50);
x_52 = lean::cnstr_get(x_2, 8);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_2, 9);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_2, 10);
lean::inc(x_56);
lean::dec(x_2);
x_59 = 1;
x_60 = l_lean_kvmap_set__bool(x_23, x_18, x_59);
x_61 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_61, 0, x_33);
lean::cnstr_set(x_61, 1, x_35);
lean::cnstr_set(x_61, 2, x_37);
lean::cnstr_set(x_61, 3, x_39);
lean::cnstr_set(x_61, 4, x_41);
lean::cnstr_set(x_61, 5, x_43);
lean::cnstr_set(x_61, 6, x_60);
x_62 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_62, 0, x_25);
lean::cnstr_set(x_62, 1, x_27);
lean::cnstr_set(x_62, 2, x_29);
lean::cnstr_set(x_62, 3, x_31);
lean::cnstr_set(x_62, 4, x_61);
lean::cnstr_set(x_62, 5, x_46);
lean::cnstr_set(x_62, 6, x_48);
lean::cnstr_set(x_62, 7, x_50);
lean::cnstr_set(x_62, 8, x_52);
lean::cnstr_set(x_62, 9, x_54);
lean::cnstr_set(x_62, 10, x_56);
x_63 = lean::box(0);
x_64 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_64, 0, x_63);
lean::cnstr_set(x_64, 1, x_62);
x_65 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_65, 0, x_64);
return x_65;
}
else
{
obj* x_67; obj* x_70; obj* x_73; obj* x_75; obj* x_77; obj* x_79; obj* x_81; obj* x_83; obj* x_85; obj* x_87; obj* x_89; obj* x_91; obj* x_93; obj* x_95; obj* x_98; obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_108; uint8 x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; 
lean::dec(x_11);
x_67 = lean::cnstr_get(x_8, 1);
lean::inc(x_67);
lean::dec(x_8);
x_70 = lean::cnstr_get(x_67, 2);
lean::inc(x_70);
lean::dec(x_67);
x_73 = lean::cnstr_get(x_2, 4);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_73, 6);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_2, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_2, 1);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_2, 2);
lean::inc(x_81);
x_83 = lean::cnstr_get(x_2, 3);
lean::inc(x_83);
x_85 = lean::cnstr_get(x_73, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_73, 1);
lean::inc(x_87);
x_89 = lean::cnstr_get(x_73, 2);
lean::inc(x_89);
x_91 = lean::cnstr_get(x_73, 3);
lean::inc(x_91);
x_93 = lean::cnstr_get(x_73, 4);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_73, 5);
lean::inc(x_95);
lean::dec(x_73);
x_98 = lean::cnstr_get(x_2, 5);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_2, 6);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_2, 7);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_2, 8);
lean::inc(x_104);
x_106 = lean::cnstr_get(x_2, 9);
lean::inc(x_106);
x_108 = lean::cnstr_get(x_2, 10);
lean::inc(x_108);
lean::dec(x_2);
x_111 = 0;
x_112 = l_lean_kvmap_set__bool(x_75, x_70, x_111);
x_113 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_113, 0, x_85);
lean::cnstr_set(x_113, 1, x_87);
lean::cnstr_set(x_113, 2, x_89);
lean::cnstr_set(x_113, 3, x_91);
lean::cnstr_set(x_113, 4, x_93);
lean::cnstr_set(x_113, 5, x_95);
lean::cnstr_set(x_113, 6, x_112);
x_114 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_114, 0, x_77);
lean::cnstr_set(x_114, 1, x_79);
lean::cnstr_set(x_114, 2, x_81);
lean::cnstr_set(x_114, 3, x_83);
lean::cnstr_set(x_114, 4, x_113);
lean::cnstr_set(x_114, 5, x_98);
lean::cnstr_set(x_114, 6, x_100);
lean::cnstr_set(x_114, 7, x_102);
lean::cnstr_set(x_114, 8, x_104);
lean::cnstr_set(x_114, 9, x_106);
lean::cnstr_set(x_114, 10, x_108);
x_115 = lean::box(0);
x_116 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_116, 0, x_115);
lean::cnstr_set(x_116, 1, x_114);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_116);
return x_117;
}
}
case 1:
{
obj* x_118; obj* x_121; obj* x_124; obj* x_126; obj* x_128; obj* x_130; obj* x_132; obj* x_134; obj* x_136; obj* x_138; obj* x_140; obj* x_142; obj* x_144; obj* x_146; obj* x_149; obj* x_151; obj* x_153; obj* x_155; obj* x_157; obj* x_159; obj* x_162; obj* x_165; 
x_118 = lean::cnstr_get(x_8, 1);
lean::inc(x_118);
lean::dec(x_8);
x_121 = lean::cnstr_get(x_118, 2);
lean::inc(x_121);
lean::dec(x_118);
x_124 = lean::cnstr_get(x_2, 4);
lean::inc(x_124);
x_126 = lean::cnstr_get(x_124, 6);
lean::inc(x_126);
x_128 = lean::cnstr_get(x_2, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get(x_2, 1);
lean::inc(x_130);
x_132 = lean::cnstr_get(x_2, 2);
lean::inc(x_132);
x_134 = lean::cnstr_get(x_2, 3);
lean::inc(x_134);
x_136 = lean::cnstr_get(x_124, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_124, 1);
lean::inc(x_138);
x_140 = lean::cnstr_get(x_124, 2);
lean::inc(x_140);
x_142 = lean::cnstr_get(x_124, 3);
lean::inc(x_142);
x_144 = lean::cnstr_get(x_124, 4);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_124, 5);
lean::inc(x_146);
lean::dec(x_124);
x_149 = lean::cnstr_get(x_2, 5);
lean::inc(x_149);
x_151 = lean::cnstr_get(x_2, 6);
lean::inc(x_151);
x_153 = lean::cnstr_get(x_2, 7);
lean::inc(x_153);
x_155 = lean::cnstr_get(x_2, 8);
lean::inc(x_155);
x_157 = lean::cnstr_get(x_2, 9);
lean::inc(x_157);
x_159 = lean::cnstr_get(x_2, 10);
lean::inc(x_159);
lean::dec(x_2);
x_162 = lean::cnstr_get(x_9, 0);
lean::inc(x_162);
lean::dec(x_9);
x_165 = l_lean_parser_string__lit_view_value(x_162);
if (lean::obj_tag(x_165) == 0)
{
obj* x_167; obj* x_168; obj* x_169; obj* x_170; obj* x_171; 
lean::dec(x_121);
x_167 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_167, 0, x_136);
lean::cnstr_set(x_167, 1, x_138);
lean::cnstr_set(x_167, 2, x_140);
lean::cnstr_set(x_167, 3, x_142);
lean::cnstr_set(x_167, 4, x_144);
lean::cnstr_set(x_167, 5, x_146);
lean::cnstr_set(x_167, 6, x_126);
x_168 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_168, 0, x_128);
lean::cnstr_set(x_168, 1, x_130);
lean::cnstr_set(x_168, 2, x_132);
lean::cnstr_set(x_168, 3, x_134);
lean::cnstr_set(x_168, 4, x_167);
lean::cnstr_set(x_168, 5, x_149);
lean::cnstr_set(x_168, 6, x_151);
lean::cnstr_set(x_168, 7, x_153);
lean::cnstr_set(x_168, 8, x_155);
lean::cnstr_set(x_168, 9, x_157);
lean::cnstr_set(x_168, 10, x_159);
x_169 = lean::box(0);
x_170 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_170, 0, x_169);
lean::cnstr_set(x_170, 1, x_168);
x_171 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_171, 0, x_170);
return x_171;
}
else
{
obj* x_172; obj* x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; 
x_172 = lean::cnstr_get(x_165, 0);
lean::inc(x_172);
lean::dec(x_165);
x_175 = l_lean_kvmap_set__string(x_126, x_121, x_172);
x_176 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_176, 0, x_136);
lean::cnstr_set(x_176, 1, x_138);
lean::cnstr_set(x_176, 2, x_140);
lean::cnstr_set(x_176, 3, x_142);
lean::cnstr_set(x_176, 4, x_144);
lean::cnstr_set(x_176, 5, x_146);
lean::cnstr_set(x_176, 6, x_175);
x_177 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_177, 0, x_128);
lean::cnstr_set(x_177, 1, x_130);
lean::cnstr_set(x_177, 2, x_132);
lean::cnstr_set(x_177, 3, x_134);
lean::cnstr_set(x_177, 4, x_176);
lean::cnstr_set(x_177, 5, x_149);
lean::cnstr_set(x_177, 6, x_151);
lean::cnstr_set(x_177, 7, x_153);
lean::cnstr_set(x_177, 8, x_155);
lean::cnstr_set(x_177, 9, x_157);
lean::cnstr_set(x_177, 10, x_159);
x_178 = lean::box(0);
x_179 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_179, 0, x_178);
lean::cnstr_set(x_179, 1, x_177);
x_180 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_180, 0, x_179);
return x_180;
}
}
default:
{
obj* x_181; obj* x_184; obj* x_187; obj* x_189; obj* x_191; obj* x_193; obj* x_195; obj* x_197; obj* x_199; obj* x_201; obj* x_203; obj* x_205; obj* x_207; obj* x_209; obj* x_212; obj* x_214; obj* x_216; obj* x_218; obj* x_220; obj* x_222; obj* x_225; obj* x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; obj* x_233; obj* x_234; 
x_181 = lean::cnstr_get(x_8, 1);
lean::inc(x_181);
lean::dec(x_8);
x_184 = lean::cnstr_get(x_181, 2);
lean::inc(x_184);
lean::dec(x_181);
x_187 = lean::cnstr_get(x_2, 4);
lean::inc(x_187);
x_189 = lean::cnstr_get(x_187, 6);
lean::inc(x_189);
x_191 = lean::cnstr_get(x_2, 0);
lean::inc(x_191);
x_193 = lean::cnstr_get(x_2, 1);
lean::inc(x_193);
x_195 = lean::cnstr_get(x_2, 2);
lean::inc(x_195);
x_197 = lean::cnstr_get(x_2, 3);
lean::inc(x_197);
x_199 = lean::cnstr_get(x_187, 0);
lean::inc(x_199);
x_201 = lean::cnstr_get(x_187, 1);
lean::inc(x_201);
x_203 = lean::cnstr_get(x_187, 2);
lean::inc(x_203);
x_205 = lean::cnstr_get(x_187, 3);
lean::inc(x_205);
x_207 = lean::cnstr_get(x_187, 4);
lean::inc(x_207);
x_209 = lean::cnstr_get(x_187, 5);
lean::inc(x_209);
lean::dec(x_187);
x_212 = lean::cnstr_get(x_2, 5);
lean::inc(x_212);
x_214 = lean::cnstr_get(x_2, 6);
lean::inc(x_214);
x_216 = lean::cnstr_get(x_2, 7);
lean::inc(x_216);
x_218 = lean::cnstr_get(x_2, 8);
lean::inc(x_218);
x_220 = lean::cnstr_get(x_2, 9);
lean::inc(x_220);
x_222 = lean::cnstr_get(x_2, 10);
lean::inc(x_222);
lean::dec(x_2);
x_225 = lean::cnstr_get(x_9, 0);
lean::inc(x_225);
lean::dec(x_9);
x_228 = l_lean_parser_number_view_to__nat___main(x_225);
x_229 = l_lean_kvmap_set__nat(x_189, x_184, x_228);
x_230 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_230, 0, x_199);
lean::cnstr_set(x_230, 1, x_201);
lean::cnstr_set(x_230, 2, x_203);
lean::cnstr_set(x_230, 3, x_205);
lean::cnstr_set(x_230, 4, x_207);
lean::cnstr_set(x_230, 5, x_209);
lean::cnstr_set(x_230, 6, x_229);
x_231 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_231, 0, x_191);
lean::cnstr_set(x_231, 1, x_193);
lean::cnstr_set(x_231, 2, x_195);
lean::cnstr_set(x_231, 3, x_197);
lean::cnstr_set(x_231, 4, x_230);
lean::cnstr_set(x_231, 5, x_212);
lean::cnstr_set(x_231, 6, x_214);
lean::cnstr_set(x_231, 7, x_216);
lean::cnstr_set(x_231, 8, x_218);
lean::cnstr_set(x_231, 9, x_220);
lean::cnstr_set(x_231, 10, x_222);
x_232 = lean::box(0);
x_233 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_233, 0, x_232);
lean::cnstr_set(x_233, 1, x_231);
x_234 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_234, 0, x_233);
return x_234;
}
}
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; uint8 x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_8, 2);
lean::inc(x_13);
lean::dec(x_8);
x_16 = l_lean_parser_syntax_get__pos(x_0);
x_17 = lean::mk_nat_obj(0u);
x_18 = l_option_get__or__else___main___rarg(x_16, x_17);
x_19 = l_lean_file__map_to__position(x_13, x_18);
x_20 = lean::box(0);
x_21 = 2;
x_22 = l_string_join___closed__1;
x_23 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_23, 0, x_11);
lean::cnstr_set(x_23, 1, x_19);
lean::cnstr_set(x_23, 2, x_20);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set(x_23, 4, x_1);
lean::cnstr_set_scalar(x_23, sizeof(void*)*5, x_21);
x_24 = x_23;
x_25 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_25, 0, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_26, 0, x_25);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_current__command___rarg___lambda__1), 2, 1);
lean::closure_set(x_27, 0, x_5);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_28, 0, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_29, 0, x_26);
lean::closure_set(x_29, 1, x_28);
return x_29;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_4);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg___lambda__1), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_0, x_1, x_2, x_4);
return x_7;
}
}
obj* _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_command_elaborate), 3, 0);
return x_0;
}
}
obj* l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_6);
lean::cnstr_set(x_7, 1, x_3);
x_8 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1;
lean::inc(x_2);
lean::inc(x_1);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_18, 0, x_10);
lean::closure_set(x_18, 1, x_15);
lean::closure_set(x_18, 2, x_1);
lean::closure_set(x_18, 3, x_2);
lean::closure_set(x_18, 4, x_3);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___lambda__1), 4, 3);
lean::closure_set(x_19, 0, x_12);
lean::closure_set(x_19, 1, x_1);
lean::closure_set(x_19, 2, x_2);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_20, 0, x_19);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_21, 0, x_18);
lean::closure_set(x_21, 1, x_20);
return x_21;
}
}
}
obj* _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("no_kind.elaborate: unreachable");
return x_0;
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_6; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1;
x_10 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_9, x_1, x_2, x_6);
return x_10;
}
else
{
obj* x_12; obj* x_15; obj* x_18; obj* x_21; 
lean::dec(x_0);
x_12 = lean::cnstr_get(x_3, 1);
lean::inc(x_12);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_4, 0);
lean::inc(x_15);
lean::dec(x_4);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
lean::dec(x_15);
x_21 = l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2(x_18, x_1, x_2, x_12);
return x_21;
}
}
}
obj* l_lean_elaborator_no__kind_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_7 = x_2;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
lean::inc(x_3);
x_9 = l_lean_parser_syntax_as__node___main(x_3);
if (lean::is_scalar(x_7)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_7;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_5);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__1), 4, 3);
lean::closure_set(x_13, 0, x_3);
lean::closure_set(x_13, 1, x_0);
lean::closure_set(x_13, 2, x_1);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_14, 0, x_13);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_15, 0, x_12);
lean::closure_set(x_15, 1, x_14);
return x_15;
}
}
obj* l_lean_elaborator_no__kind_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate___lambda__2), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_6, 0, x_3);
lean::closure_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_5);
return x_8;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_yield__to__outside___rarg(x_5);
x_9 = lean::box(x_0);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__2___boxed), 5, 4);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_1);
lean::closure_set(x_10, 2, x_2);
lean::closure_set(x_10, 3, x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_12, 0, x_8);
lean::closure_set(x_12, 1, x_11);
return x_12;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("command");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("end");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("module");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean::mk_string("eoi");
x_8 = lean_name_mk_string(x_6, x_7);
return x_8;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of input, expected 'end'");
return x_0;
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid 'end', there is no open scope to end");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4(obj* x_0, obj* x_1, uint8 x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
lean::inc(x_5);
x_11 = l_lean_parser_syntax_as__node___main(x_5);
x_12 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1;
x_13 = l_option_map___rarg(x_12, x_11);
if (lean::obj_tag(x_13) == 0)
{
obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_5);
lean::dec(x_9);
x_16 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_19 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_16, x_0, x_1, x_7);
x_20 = lean::box(x_2);
x_21 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_21, 0, x_20);
lean::closure_set(x_21, 1, x_3);
lean::closure_set(x_21, 2, x_0);
lean::closure_set(x_21, 3, x_1);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_22, 0, x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_23, 0, x_19);
lean::closure_set(x_23, 1, x_22);
return x_23;
}
else
{
obj* x_24; obj* x_27; uint8 x_28; 
x_24 = lean::cnstr_get(x_13, 0);
lean::inc(x_24);
lean::dec(x_13);
x_27 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2;
x_28 = lean_name_dec_eq(x_24, x_27);
if (x_28 == 0)
{
obj* x_29; uint8 x_30; 
x_29 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3;
x_30 = lean_name_dec_eq(x_24, x_29);
lean::dec(x_24);
if (x_30 == 0)
{
obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_5);
lean::dec(x_9);
x_34 = lean::box(0);
lean::inc(x_1);
lean::inc(x_0);
x_37 = l_lean_parser_rec__t_recurse___at_lean_elaborator_command_elaborate___spec__1(x_34, x_0, x_1, x_7);
x_38 = lean::box(x_2);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__3___boxed), 5, 4);
lean::closure_set(x_39, 0, x_38);
lean::closure_set(x_39, 1, x_3);
lean::closure_set(x_39, 2, x_0);
lean::closure_set(x_39, 3, x_1);
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_40, 0, x_39);
x_41 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_41, 0, x_37);
lean::closure_set(x_41, 1, x_40);
return x_41;
}
else
{
lean::dec(x_3);
if (x_2 == 0)
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_46 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_9;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_7);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_47);
x_49 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_49, 0, x_48);
return x_49;
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_9);
x_51 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4;
x_52 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_51, x_0, x_1, x_7);
return x_52;
}
}
}
else
{
lean::dec(x_3);
lean::dec(x_24);
if (x_2 == 0)
{
obj* x_56; obj* x_57; 
lean::dec(x_9);
x_56 = l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5;
x_57 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_5, x_56, x_0, x_1, x_7);
return x_57;
}
else
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_61 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_9;
}
lean::cnstr_set(x_62, 0, x_61);
lean::cnstr_set(x_62, 1, x_7);
x_63 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_63, 0, x_62);
x_64 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_64, 0, x_63);
return x_64;
}
}
}
}
}
obj* _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("commands.elaborate: out of fuel");
return x_0;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1;
x_9 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_3, x_8, x_0, x_1, x_5);
return x_9;
}
}
obj* l_lean_elaborator_commands_elaborate___main(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_1, x_7);
lean::dec(x_1);
x_10 = l_lean_elaborator_current__command___rarg(x_4);
x_11 = lean::box(x_0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__4___boxed), 5, 4);
lean::closure_set(x_12, 0, x_2);
lean::closure_set(x_12, 1, x_3);
lean::closure_set(x_12, 2, x_11);
lean::closure_set(x_12, 3, x_8);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_10);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
lean::dec(x_1);
x_16 = l_lean_elaborator_current__command___rarg(x_4);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___main___lambda__5), 3, 2);
lean::closure_set(x_17, 0, x_2);
lean::closure_set(x_17, 1, x_3);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_19, 0, x_16);
lean::closure_set(x_19, 1, x_18);
return x_19;
}
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__2(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__3(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___lambda__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_2);
x_6 = l_lean_elaborator_commands_elaborate___main___lambda__4(x_0, x_1, x_5, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate___main___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate___main(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_commands_elaborate(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_lean_elaborator_commands_elaborate___main(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_lean_elaborator_commands_elaborate___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_0);
x_6 = l_lean_elaborator_commands_elaborate(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_elaborator_end__scope___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 x_6 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_1);
 x_6 = lean::box(0);
}
x_7 = lean::apply_1(x_0, x_2);
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_4);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_10, 0, x_9);
return x_10;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid end of ");
return x_0;
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string(", expected name '");
return x_0;
}
}
obj* l_lean_elaborator_end__scope___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_15; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_12 = lean::cnstr_get(x_5, 1);
lean::inc(x_12);
x_14 = l_lean_elaborator_to__pexpr___main___closed__28;
x_15 = l_option_map___rarg(x_14, x_12);
if (lean::obj_tag(x_15) == 0)
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_5);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_20 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_21 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_21 = x_9;
}
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_7);
x_22 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_22, 0, x_21);
x_23 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_23, 0, x_22);
return x_23;
}
else
{
obj* x_25; 
lean::dec(x_9);
x_25 = lean::box(0);
x_10 = x_25;
goto lbl_11;
}
}
else
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_28; 
lean::dec(x_15);
lean::dec(x_9);
x_28 = lean::box(0);
x_10 = x_28;
goto lbl_11;
}
else
{
obj* x_29; obj* x_32; uint8 x_34; 
x_29 = lean::cnstr_get(x_15, 0);
lean::inc(x_29);
lean::dec(x_15);
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
x_34 = lean_name_dec_eq(x_29, x_32);
lean::dec(x_32);
lean::dec(x_29);
if (x_34 == 0)
{
obj* x_38; 
lean::dec(x_9);
x_38 = lean::box(0);
x_10 = x_38;
goto lbl_11;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_44 = lean::box(0);
if (lean::is_scalar(x_9)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_9;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_7);
x_46 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_47, 0, x_46);
return x_47;
}
}
}
lbl_11:
{
obj* x_49; obj* x_50; obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_10);
x_49 = l_lean_parser_command_end_has__view;
x_50 = lean::cnstr_get(x_49, 1);
lean::inc(x_50);
lean::dec(x_49);
x_53 = lean::apply_1(x_50, x_5);
x_54 = l_lean_elaborator_end__scope___lambda__2___closed__1;
x_55 = lean::string_append(x_54, x_0);
lean::dec(x_0);
x_57 = l_lean_elaborator_end__scope___lambda__2___closed__2;
x_58 = lean::string_append(x_55, x_57);
x_59 = lean::box(0);
x_60 = l_option_get__or__else___main___rarg(x_1, x_59);
x_61 = l_lean_name_to__string___closed__1;
x_62 = l_lean_name_to__string__with__sep___main(x_61, x_60);
x_63 = lean::string_append(x_58, x_62);
lean::dec(x_62);
x_65 = l_char_has__repr___closed__1;
x_66 = lean::string_append(x_63, x_65);
x_67 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_53, x_66, x_2, x_3, x_7);
return x_67;
}
}
}
obj* _init_l_lean_elaborator_end__scope___lambda__3___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_end_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_end__scope___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::dec(x_4);
x_8 = l_lean_elaborator_current__command___rarg(x_5);
x_9 = l_lean_elaborator_end__scope___lambda__3___closed__1;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__2), 5, 4);
lean::closure_set(x_11, 0, x_0);
lean::closure_set(x_11, 1, x_1);
lean::closure_set(x_11, 2, x_2);
lean::closure_set(x_11, 3, x_3);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_elaborator_end__scope(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
x_6 = l_lean_elaborator_update__parser__config(x_3, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__3), 5, 4);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_1);
lean::closure_set(x_8, 2, x_2);
lean::closure_set(x_8, 3, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::apply_4(x_0, x_4, x_1, x_2, x_6);
return x_9;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg___lambda__1), 4, 3);
lean::closure_set(x_8, 0, x_1);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 0);
return x_4;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_5 = 1;
x_6 = lean::mk_nat_obj(1000u);
x_7 = l_lean_elaborator_commands_elaborate___main(x_5, x_6, x_1, x_2, x_3);
return x_7;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_1 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_5 = x_0;
} else {
 lean::inc(x_1);
 lean::inc(x_3);
 lean::dec(x_0);
 x_5 = lean::box(0);
}
x_6 = lean::cnstr_get(x_1, 4);
lean::inc(x_6);
lean::dec(x_1);
if (lean::is_scalar(x_5)) {
 x_9 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_9 = x_5;
}
lean::cnstr_set(x_9, 0, x_6);
lean::cnstr_set(x_9, 1, x_3);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
return x_11;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_2 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_4 = x_1;
} else {
 lean::inc(x_2);
 lean::dec(x_1);
 x_4 = lean::box(0);
}
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 5);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 6);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_2, 7);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_2, 8);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 9);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 10);
lean::inc(x_23);
lean::dec(x_2);
x_26 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_26, 0, x_5);
lean::cnstr_set(x_26, 1, x_7);
lean::cnstr_set(x_26, 2, x_9);
lean::cnstr_set(x_26, 3, x_11);
lean::cnstr_set(x_26, 4, x_0);
lean::cnstr_set(x_26, 5, x_13);
lean::cnstr_set(x_26, 6, x_15);
lean::cnstr_set(x_26, 7, x_17);
lean::cnstr_set(x_26, 8, x_19);
lean::cnstr_set(x_26, 9, x_21);
lean::cnstr_set(x_26, 10, x_23);
x_27 = lean::box(0);
if (lean::is_scalar(x_4)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_4;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_28);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_30, 0, x_29);
return x_30;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_yield__to__outside), 2, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
x_10 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_11, 0, x_4);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__2), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__1), 4, 0);
return x_0;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::inc(x_2);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_6);
lean::closure_set(x_8, 1, x_7);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4), 4, 3);
lean::closure_set(x_10, 0, x_9);
lean::closure_set(x_10, 1, x_0);
lean::closure_set(x_10, 2, x_1);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_12, 0, x_8);
lean::closure_set(x_12, 1, x_11);
return x_12;
}
}
obj* _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("section");
return x_0;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = l_lean_elaborator_to__pexpr___main___closed__28;
x_11 = l_option_map___rarg(x_10, x_7);
x_12 = l_lean_elaborator_section_elaborate___lambda__1___closed__1;
x_13 = l_lean_elaborator_end__scope(x_12, x_11, x_1, x_2, x_4);
return x_13;
}
}
obj* l_lean_elaborator_section_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_10 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2(x_0, x_1, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__1), 4, 3);
lean::closure_set(x_11, 0, x_3);
lean::closure_set(x_11, 1, x_0);
lean::closure_set(x_11, 2, x_1);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* _init_l_lean_elaborator_section_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_section_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_section_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_section_elaborate___closed__1;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate___lambda__2), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_6; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
lean::dec(x_2);
x_6 = 1;
x_7 = lean::mk_nat_obj(1000u);
x_8 = l_lean_elaborator_commands_elaborate___main(x_6, x_7, x_0, x_1, x_3);
return x_8;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_49; obj* x_51; obj* x_53; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 3);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_6, 4);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_17, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_17, 2);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_0, 1);
lean::inc(x_27);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_27, 2);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_name_append___main(x_4, x_30);
x_34 = lean::cnstr_get(x_17, 4);
lean::inc(x_34);
x_36 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_36, 0, x_33);
lean::cnstr_set(x_36, 1, x_34);
x_37 = lean::cnstr_get(x_17, 5);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_17, 6);
lean::inc(x_39);
lean::dec(x_17);
x_42 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_21);
lean::cnstr_set(x_42, 2, x_23);
lean::cnstr_set(x_42, 3, x_25);
lean::cnstr_set(x_42, 4, x_36);
lean::cnstr_set(x_42, 5, x_37);
lean::cnstr_set(x_42, 6, x_39);
x_43 = lean::cnstr_get(x_6, 5);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_6, 6);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_6, 7);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_6, 8);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_6, 9);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_6, 10);
lean::inc(x_53);
lean::dec(x_6);
x_56 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_56, 0, x_9);
lean::cnstr_set(x_56, 1, x_11);
lean::cnstr_set(x_56, 2, x_13);
lean::cnstr_set(x_56, 3, x_15);
lean::cnstr_set(x_56, 4, x_42);
lean::cnstr_set(x_56, 5, x_43);
lean::cnstr_set(x_56, 6, x_45);
lean::cnstr_set(x_56, 7, x_47);
lean::cnstr_set(x_56, 8, x_49);
lean::cnstr_set(x_56, 9, x_51);
lean::cnstr_set(x_56, 10, x_53);
x_57 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_58 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_58 = x_8;
}
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_56);
x_59 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_59, 0, x_58);
x_60 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_60, 0, x_59);
x_61 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__1), 3, 2);
lean::closure_set(x_61, 0, x_1);
lean::closure_set(x_61, 1, x_2);
x_62 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_62, 0, x_61);
x_63 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_63, 0, x_60);
lean::closure_set(x_63, 1, x_62);
return x_63;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
x_6 = l_lean_elaborator_get__namespace___rarg(x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__2), 4, 3);
lean::closure_set(x_8, 0, x_0);
lean::closure_set(x_8, 1, x_2);
lean::closure_set(x_8, 2, x_3);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1;
x_10 = l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg(x_9, x_0, x_1, x_2, x_6);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__3), 2, 1);
lean::closure_set(x_11, 0, x_4);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__3), 5, 1);
lean::closure_set(x_4, 0, x_0);
lean::inc(x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_3);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1___lambda__4), 4, 3);
lean::closure_set(x_11, 0, x_4);
lean::closure_set(x_11, 1, x_1);
lean::closure_set(x_11, 2, x_2);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_13, 0, x_10);
lean::closure_set(x_13, 1, x_12);
return x_13;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("namespace");
return x_0;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_7; obj* x_10; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::cnstr_get(x_3, 1);
lean::inc(x_4);
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 2);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_10);
x_14 = l_lean_elaborator_namespace_elaborate___lambda__1___closed__1;
x_15 = l_lean_elaborator_end__scope(x_14, x_13, x_1, x_2, x_4);
return x_15;
}
}
obj* l_lean_elaborator_namespace_elaborate___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_1);
lean::inc(x_0);
lean::inc(x_3);
x_11 = l_lean_elaborator_locally___at_lean_elaborator_namespace_elaborate___spec__1(x_3, x_0, x_1, x_5);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__1), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_0);
lean::closure_set(x_12, 2, x_1);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* _init_l_lean_elaborator_namespace_elaborate___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; 
x_0 = l_lean_parser_command_namespace_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_end__scope___lambda__1), 2, 1);
lean::closure_set(x_4, 0, x_1);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_elaborator_namespace_elaborate(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = l_lean_elaborator_current__command___rarg(x_2);
x_4 = l_lean_elaborator_namespace_elaborate___closed__1;
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_5, 0, x_3);
lean::closure_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate___lambda__2), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_18; uint8 x_19; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
lean::inc(x_9);
lean::inc(x_1);
x_18 = l_lean_name_quick__lt___main(x_1, x_9);
x_19 = lean::unbox(x_18);
if (x_19 == 0)
{
obj* x_22; uint8 x_23; 
lean::inc(x_1);
lean::inc(x_9);
x_22 = l_lean_name_quick__lt___main(x_9, x_1);
x_23 = lean::unbox(x_22);
if (x_23 == 0)
{
obj* x_26; obj* x_27; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_7);
lean::cnstr_set(x_26, 1, x_1);
lean::cnstr_set(x_26, 2, x_2);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
x_28 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_29 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_29 = x_15;
}
lean::cnstr_set(x_29, 0, x_7);
lean::cnstr_set(x_29, 1, x_9);
lean::cnstr_set(x_29, 2, x_11);
lean::cnstr_set(x_29, 3, x_28);
lean::cnstr_set_scalar(x_29, sizeof(void*)*4, x_6);
x_30 = x_29;
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_32 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_32 = x_15;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
lean::cnstr_set(x_32, 2, x_11);
lean::cnstr_set(x_32, 3, x_13);
lean::cnstr_set_scalar(x_32, sizeof(void*)*4, x_6);
x_33 = x_32;
return x_33;
}
}
else
{
obj* x_34; obj* x_36; obj* x_38; obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_34 = lean::cnstr_get(x_0, 0);
x_36 = lean::cnstr_get(x_0, 1);
x_38 = lean::cnstr_get(x_0, 2);
x_40 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_42 = x_0;
} else {
 lean::inc(x_34);
 lean::inc(x_36);
 lean::inc(x_38);
 lean::inc(x_40);
 lean::dec(x_0);
 x_42 = lean::box(0);
}
lean::inc(x_36);
lean::inc(x_1);
x_45 = l_lean_name_quick__lt___main(x_1, x_36);
x_46 = lean::unbox(x_45);
if (x_46 == 0)
{
obj* x_49; uint8 x_50; 
lean::inc(x_1);
lean::inc(x_36);
x_49 = l_lean_name_quick__lt___main(x_36, x_1);
x_50 = lean::unbox(x_49);
if (x_50 == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_38);
lean::dec(x_36);
if (lean::is_scalar(x_42)) {
 x_53 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_53 = x_42;
}
lean::cnstr_set(x_53, 0, x_34);
lean::cnstr_set(x_53, 1, x_1);
lean::cnstr_set(x_53, 2, x_2);
lean::cnstr_set(x_53, 3, x_40);
lean::cnstr_set_scalar(x_53, sizeof(void*)*4, x_6);
x_54 = x_53;
return x_54;
}
else
{
uint8 x_56; 
lean::inc(x_40);
x_56 = l_rbnode_is__red___main___rarg(x_40);
if (x_56 == 0)
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_40, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_58 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_58 = x_42;
}
lean::cnstr_set(x_58, 0, x_34);
lean::cnstr_set(x_58, 1, x_36);
lean::cnstr_set(x_58, 2, x_38);
lean::cnstr_set(x_58, 3, x_57);
lean::cnstr_set_scalar(x_58, sizeof(void*)*4, x_6);
x_59 = x_58;
return x_59;
}
else
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; 
x_60 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_61 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_61 = x_42;
}
lean::cnstr_set(x_61, 0, x_34);
lean::cnstr_set(x_61, 1, x_36);
lean::cnstr_set(x_61, 2, x_38);
lean::cnstr_set(x_61, 3, x_60);
lean::cnstr_set_scalar(x_61, sizeof(void*)*4, x_6);
x_62 = x_61;
x_63 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_40, x_1, x_2);
x_64 = l_rbnode_balance2___main___rarg(x_62, x_63);
return x_64;
}
}
}
else
{
uint8 x_66; 
lean::inc(x_34);
x_66 = l_rbnode_is__red___main___rarg(x_34);
if (x_66 == 0)
{
obj* x_67; obj* x_68; obj* x_69; 
x_67 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_34, x_1, x_2);
if (lean::is_scalar(x_42)) {
 x_68 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_68 = x_42;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_36);
lean::cnstr_set(x_68, 2, x_38);
lean::cnstr_set(x_68, 3, x_40);
lean::cnstr_set_scalar(x_68, sizeof(void*)*4, x_6);
x_69 = x_68;
return x_69;
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_70 = lean::box(0);
if (lean::is_scalar(x_42)) {
 x_71 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_71 = x_42;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_36);
lean::cnstr_set(x_71, 2, x_38);
lean::cnstr_set(x_71, 3, x_40);
lean::cnstr_set_scalar(x_71, sizeof(void*)*4, x_6);
x_72 = x_71;
x_73 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_34, x_1, x_2);
x_74 = l_rbnode_balance1___main___rarg(x_72, x_73);
return x_74;
}
}
}
}
}
}
obj* l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_4; 
lean::inc(x_0);
x_4 = l_rbnode_is__red___main___rarg(x_0);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = l_rbnode_ins___main___at_lean_elaborator_elaborators___spec__4(x_0, x_1, x_2);
x_7 = l_rbnode_set__black___main___rarg(x_6);
return x_7;
}
}
}
obj* l_rbmap_insert___main___at_lean_elaborator_elaborators___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_7; obj* x_9; obj* x_12; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_2, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_rbnode_insert___at_lean_elaborator_elaborators___spec__3(x_0, x_7, x_9);
x_0 = x_12;
x_1 = x_4;
goto _start;
}
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_module_header_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__1), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__3), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_reserve__notation_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__5), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_universe_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__7), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_variables_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__9), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_include_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__11), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__13), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_attribute_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__15), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_open_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__17), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_export_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__19), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_check_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__21), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_init__quot_elaborate___closed__1;
x_8 = l_lean_elaborator_old__elab__command(x_2, x_7, x_0, x_4);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_9, 0, x_8);
return x_9;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__23), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_7 = l_lean_elaborator_set__option_elaborate(x_2, x_0, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_0);
x_4 = l_lean_elaborator_current__command___rarg(x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__25), 2, 1);
lean::closure_set(x_5, 0, x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_7, 0, x_4);
lean::closure_set(x_7, 1, x_6);
return x_7;
}
}
obj* _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
x_0 = l_lean_parser_module_header;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__2), 3, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = l_lean_parser_command_notation;
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__4), 3, 0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_lean_parser_command_reserve__notation;
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__6), 3, 0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
x_9 = l_lean_parser_command_universe;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__8), 3, 0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_10);
x_12 = l_lean_parser_no__kind;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_no__kind_elaborate), 3, 0);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = l_lean_parser_command_section;
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_section_elaborate), 3, 0);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = l_lean_parser_command_namespace;
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_namespace_elaborate), 3, 0);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_19);
x_21 = l_lean_parser_command_variables;
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__10), 3, 0);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_22);
x_24 = l_lean_parser_command_include;
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__12), 3, 0);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_command_declaration;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__14), 3, 0);
x_29 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_29, 0, x_27);
lean::cnstr_set(x_29, 1, x_28);
x_30 = l_lean_parser_command_attribute;
x_31 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__16), 3, 0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
x_33 = l_lean_parser_command_open;
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__18), 3, 0);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_34);
x_36 = l_lean_parser_command_export;
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__20), 3, 0);
x_38 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_38, 0, x_36);
lean::cnstr_set(x_38, 1, x_37);
x_39 = l_lean_parser_command_check;
x_40 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__22), 3, 0);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_39);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_lean_parser_command_init__quot;
x_43 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__24), 3, 0);
x_44 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_43);
x_45 = l_lean_parser_command_set__option;
x_46 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1___lambda__26), 3, 0);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_45);
lean::cnstr_set(x_47, 1, x_46);
x_48 = lean::box(0);
x_49 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_49, 0, x_47);
lean::cnstr_set(x_49, 1, x_48);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_44);
lean::cnstr_set(x_50, 1, x_49);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_41);
lean::cnstr_set(x_51, 1, x_50);
x_52 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_52, 0, x_38);
lean::cnstr_set(x_52, 1, x_51);
x_53 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_53, 0, x_35);
lean::cnstr_set(x_53, 1, x_52);
x_54 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_54, 0, x_32);
lean::cnstr_set(x_54, 1, x_53);
x_55 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_55, 0, x_29);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_26);
lean::cnstr_set(x_56, 1, x_55);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_23);
lean::cnstr_set(x_57, 1, x_56);
x_58 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_58, 0, x_20);
lean::cnstr_set(x_58, 1, x_57);
x_59 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_59, 0, x_17);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_60, 0, x_14);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_61, 0, x_11);
lean::cnstr_set(x_61, 1, x_60);
x_62 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_62, 0, x_8);
lean::cnstr_set(x_62, 1, x_61);
x_63 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_63, 0, x_5);
lean::cnstr_set(x_63, 1, x_62);
x_64 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_64, 0, x_2);
lean::cnstr_set(x_64, 1, x_63);
x_65 = lean::box(0);
x_66 = l_list_foldl___main___at_lean_elaborator_elaborators___spec__5(x_65, x_64);
return x_66;
}
}
obj* _init_l_lean_elaborator_elaborators() {
_start:
{
obj* x_0; 
x_0 = l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1;
return x_0;
}
}
uint8 l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_3; 
lean::dec(x_0);
x_3 = 0;
return x_3;
}
else
{
obj* x_4; obj* x_6; uint8 x_9; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 1);
lean::inc(x_6);
lean::dec(x_1);
x_9 = lean_name_dec_eq(x_0, x_4);
lean::dec(x_4);
if (x_9 == 0)
{
uint8 x_11; 
x_11 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_6);
if (x_11 == 0)
{
uint8 x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8 x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8 x_16; 
lean::dec(x_6);
lean::dec(x_0);
x_16 = 1;
return x_16;
}
}
}
}
obj* l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_3; obj* x_4; 
lean::dec(x_0);
x_3 = 0;
x_4 = lean::box(x_3);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_10; obj* x_13; uint8 x_16; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean::cnstr_get(x_10, 2);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean_name_dec_eq(x_13, x_0);
lean::dec(x_13);
if (x_16 == 0)
{
x_1 = x_7;
goto _start;
}
else
{
uint8 x_21; obj* x_22; 
lean::dec(x_7);
lean::dec(x_0);
x_21 = 1;
x_22 = lean::box(x_21);
return x_22;
}
}
}
}
uint8 l_lean_elaborator_is__open__namespace___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; 
x_2 = lean::box(0);
x_3 = lean_name_dec_eq(x_1, x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_7; uint8 x_10; 
x_4 = lean::cnstr_get(x_0, 4);
lean::inc(x_4);
lean::dec(x_0);
x_7 = lean::cnstr_get(x_4, 4);
lean::inc(x_7);
lean::inc(x_1);
x_10 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_1, x_7);
if (x_10 == 0)
{
obj* x_11; obj* x_14; uint8 x_15; 
x_11 = lean::cnstr_get(x_4, 5);
lean::inc(x_11);
lean::dec(x_4);
x_14 = l_list_foldr___main___at_lean_elaborator_is__open__namespace___main___spec__2(x_1, x_11);
x_15 = lean::unbox(x_14);
if (x_15 == 0)
{
uint8 x_16; 
x_16 = 0;
return x_16;
}
else
{
uint8 x_17; 
x_17 = 1;
return x_17;
}
}
else
{
uint8 x_20; 
lean::dec(x_1);
lean::dec(x_4);
x_20 = 1;
return x_20;
}
}
else
{
uint8 x_23; 
lean::dec(x_1);
lean::dec(x_0);
x_23 = 1;
return x_23;
}
}
}
obj* l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_list_decidable__mem___main___at_lean_elaborator_is__open__namespace___main___spec__1(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_lean_elaborator_is__open__namespace___main___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
uint8 l_lean_elaborator_is__open__namespace(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = l_lean_elaborator_is__open__namespace___main(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_is__open__namespace___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_lean_elaborator_is__open__namespace(x_0, x_1);
x_3 = lean::box(x_2);
return x_3;
}
}
obj* l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_3; obj* x_4; 
lean::dec(x_0);
x_3 = 0;
x_4 = lean::box(x_3);
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_10; uint8 x_13; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
lean::dec(x_5);
x_13 = lean_name_dec_eq(x_0, x_10);
lean::dec(x_10);
if (x_13 == 0)
{
x_1 = x_7;
goto _start;
}
else
{
uint8 x_18; obj* x_19; 
lean::dec(x_7);
lean::dec(x_0);
x_18 = 1;
x_19 = lean::box(x_18);
return x_19;
}
}
}
}
obj* l_lean_elaborator_match__open__spec(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 2);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_7; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
x_7 = lean::cnstr_get(x_4, 2);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_name_append___main(x_7, x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_17; uint8 x_20; 
x_12 = lean::cnstr_get(x_2, 0);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 x_14 = x_2;
} else {
 lean::inc(x_12);
 lean::dec(x_2);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_15, 2);
lean::inc(x_17);
lean::dec(x_15);
x_20 = lean_name_dec_eq(x_0, x_17);
lean::dec(x_17);
if (x_20 == 0)
{
obj* x_22; obj* x_26; uint8 x_27; 
x_22 = lean::cnstr_get(x_12, 2);
lean::inc(x_22);
lean::dec(x_12);
lean::inc(x_0);
x_26 = l_list_foldr___main___at_lean_elaborator_match__open__spec___spec__1(x_0, x_22);
x_27 = lean::unbox(x_26);
if (x_27 == 0)
{
obj* x_31; 
lean::dec(x_14);
lean::dec(x_1);
lean::dec(x_0);
x_31 = lean::box(0);
return x_31;
}
else
{
obj* x_32; obj* x_35; obj* x_38; obj* x_39; 
x_32 = lean::cnstr_get(x_1, 0);
lean::inc(x_32);
lean::dec(x_1);
x_35 = lean::cnstr_get(x_32, 2);
lean::inc(x_35);
lean::dec(x_32);
x_38 = l_lean_name_append___main(x_35, x_0);
if (lean::is_scalar(x_14)) {
 x_39 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_39 = x_14;
}
lean::cnstr_set(x_39, 0, x_38);
return x_39;
}
}
else
{
obj* x_41; obj* x_44; obj* x_47; obj* x_48; 
lean::dec(x_12);
x_41 = lean::cnstr_get(x_1, 0);
lean::inc(x_41);
lean::dec(x_1);
x_44 = lean::cnstr_get(x_41, 2);
lean::inc(x_44);
lean::dec(x_41);
x_47 = l_lean_name_append___main(x_44, x_0);
if (lean::is_scalar(x_14)) {
 x_48 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_48 = x_14;
}
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_14; uint8 x_15; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 x_9 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = lean::cnstr_get(x_1, 8);
lean::inc(x_10);
lean::inc(x_0);
lean::inc(x_5);
x_14 = l_lean_name_append___main(x_5, x_0);
x_15 = lean_environment_contains(x_10, x_14);
if (x_15 == 0)
{
lean::dec(x_9);
lean::dec(x_5);
x_2 = x_7;
goto _start;
}
else
{
obj* x_19; obj* x_20; 
x_19 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_1, x_7);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_5);
lean::cnstr_set(x_20, 1, x_19);
return x_20;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::inc(x_0);
x_11 = l_lean_elaborator_is__open__namespace___main(x_0, x_8);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; uint8 x_11; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 x_7 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_1);
 x_7 = lean::box(0);
}
x_8 = lean::cnstr_get(x_0, 8);
lean::inc(x_8);
lean::inc(x_3);
x_11 = lean_environment_contains(x_8, x_3);
if (x_11 == 0)
{
lean::dec(x_7);
lean::dec(x_3);
x_1 = x_5;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
x_15 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_16 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_16 = x_7;
}
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_lean_elaborator_resolve__context___main___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_1, 1);
lean::inc(x_2);
lean::dec(x_1);
x_5 = l_lean_elaborator_match__open__spec(x_0, x_2);
return x_5;
}
}
obj* _init_l_lean_elaborator_resolve__context___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_root_");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_elaborator_resolve__context___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_6; obj* x_9; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_2, 4);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_4, 2);
lean::inc(x_6);
lean::inc(x_0);
x_9 = l_lean_elaborator_ordered__rbmap_find___at_lean_elaborator_variables_elaborate___spec__1(x_6, x_0);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_14; 
x_10 = lean::cnstr_get(x_4, 4);
lean::inc(x_10);
lean::inc(x_2);
lean::inc(x_0);
x_14 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__1(x_0, x_2, x_10);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; obj* x_18; obj* x_19; uint8 x_22; obj* x_24; obj* x_25; obj* x_28; obj* x_30; obj* x_31; obj* x_34; obj* x_35; obj* x_36; obj* x_38; 
x_15 = l_lean_elaborator_resolve__context___main___closed__1;
x_16 = lean::box(0);
lean::inc(x_0);
x_18 = l_lean_name_replace__prefix___main(x_0, x_15, x_16);
x_19 = lean::cnstr_get(x_2, 8);
lean::inc(x_19);
lean::inc(x_18);
x_22 = lean_environment_contains(x_19, x_18);
lean::inc(x_0);
x_24 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_match__open__spec), 2, 1);
lean::closure_set(x_24, 0, x_0);
x_25 = lean::cnstr_get(x_4, 5);
lean::inc(x_25);
lean::dec(x_4);
x_28 = l_list_filter__map___main___rarg(x_24, x_25);
lean::inc(x_2);
x_30 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__2(x_2, x_28);
x_31 = lean::cnstr_get(x_2, 3);
lean::inc(x_31);
lean::inc(x_2);
x_34 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__3(x_2, x_31);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_resolve__context___main___lambda__1), 2, 1);
lean::closure_set(x_35, 0, x_0);
x_36 = l_list_filter__map___main___rarg(x_35, x_34);
lean::inc(x_2);
x_38 = l_list_filter___main___at_lean_elaborator_resolve__context___main___spec__4(x_2, x_36);
if (x_22 == 0)
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_18);
x_40 = l_list_append___rarg(x_14, x_30);
x_41 = l_list_append___rarg(x_40, x_38);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_2);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
return x_43;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_18);
lean::cnstr_set(x_44, 1, x_14);
x_45 = l_list_append___rarg(x_44, x_30);
x_46 = l_list_append___rarg(x_45, x_38);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_2);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_47);
return x_48;
}
}
else
{
obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_4);
x_50 = lean::cnstr_get(x_14, 0);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 1);
 x_52 = x_14;
} else {
 lean::inc(x_50);
 lean::dec(x_14);
 x_52 = lean::box(0);
}
x_53 = l_lean_name_append___main(x_50, x_0);
x_54 = lean::box(0);
if (lean::is_scalar(x_52)) {
 x_55 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_55 = x_52;
}
lean::cnstr_set(x_55, 0, x_53);
lean::cnstr_set(x_55, 1, x_54);
x_56 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_56, 0, x_55);
lean::cnstr_set(x_56, 1, x_2);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
return x_57;
}
}
else
{
obj* x_60; obj* x_63; obj* x_65; obj* x_66; obj* x_69; obj* x_70; obj* x_71; obj* x_72; 
lean::dec(x_4);
lean::dec(x_0);
x_60 = lean::cnstr_get(x_9, 0);
lean::inc(x_60);
lean::dec(x_9);
x_63 = lean::cnstr_get(x_60, 1);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_release(x_60, 0);
 x_65 = x_60;
} else {
 lean::inc(x_63);
 lean::dec(x_60);
 x_65 = lean::box(0);
}
x_66 = lean::cnstr_get(x_63, 0);
lean::inc(x_66);
lean::dec(x_63);
x_69 = lean::box(0);
x_70 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set(x_70, 1, x_69);
if (lean::is_scalar(x_65)) {
 x_71 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_71 = x_65;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_2);
x_72 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_72, 0, x_71);
return x_72;
}
}
}
obj* l_lean_elaborator_resolve__context(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_resolve__context___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
lean::dec(x_1);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_11 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
lean::inc(x_1);
x_13 = l_lean_elaborator_preresolve___main(x_7, x_1, x_2);
if (lean::obj_tag(x_13) == 0)
{
obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_9);
lean::dec(x_1);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_13, 0);
if (lean::is_exclusive(x_13)) {
 x_19 = x_13;
} else {
 lean::inc(x_17);
 lean::dec(x_13);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_17);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_29; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 1);
lean::inc(x_26);
lean::dec(x_21);
x_29 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_9, x_1, x_26);
if (lean::obj_tag(x_29) == 0)
{
obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_24);
x_32 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_34 = x_29;
} else {
 lean::inc(x_32);
 lean::dec(x_29);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
return x_35;
}
else
{
obj* x_36; obj* x_38; obj* x_39; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_36 = lean::cnstr_get(x_29, 0);
if (lean::is_exclusive(x_29)) {
 x_38 = x_29;
} else {
 lean::inc(x_36);
 lean::dec(x_29);
 x_38 = lean::box(0);
}
x_39 = lean::cnstr_get(x_36, 0);
x_41 = lean::cnstr_get(x_36, 1);
if (lean::is_exclusive(x_36)) {
 x_43 = x_36;
} else {
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_36);
 x_43 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_44 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_44 = x_11;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_39);
if (lean::is_scalar(x_43)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_43;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
if (lean::is_scalar(x_38)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_38;
}
lean::cnstr_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
obj* l_lean_elaborator_preresolve___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; 
x_3 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_5 = x_0;
} else {
 lean::inc(x_3);
 lean::dec(x_0);
 x_5 = lean::box(0);
}
lean::inc(x_3);
x_7 = l_lean_elaborator_mangle__ident(x_3);
x_8 = l_lean_elaborator_resolve__context___main(x_7, x_1, x_2);
if (lean::obj_tag(x_8) == 0)
{
obj* x_11; obj* x_13; obj* x_14; 
lean::dec(x_5);
lean::dec(x_3);
x_11 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_13 = x_8;
} else {
 lean::inc(x_11);
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::is_scalar(x_13)) {
 x_14 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_14 = x_13;
}
lean::cnstr_set(x_14, 0, x_11);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_15 = lean::cnstr_get(x_8, 0);
if (lean::is_exclusive(x_8)) {
 x_17 = x_8;
} else {
 lean::inc(x_15);
 lean::dec(x_8);
 x_17 = lean::box(0);
}
x_18 = lean::cnstr_get(x_15, 0);
x_20 = lean::cnstr_get(x_15, 1);
if (lean::is_exclusive(x_15)) {
 x_22 = x_15;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::dec(x_15);
 x_22 = lean::box(0);
}
x_23 = lean::cnstr_get(x_3, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_3, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_3, 2);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_3, 3);
lean::inc(x_29);
x_31 = l_list_append___rarg(x_18, x_29);
x_32 = lean::cnstr_get(x_3, 4);
lean::inc(x_32);
lean::dec(x_3);
x_35 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_35, 0, x_23);
lean::cnstr_set(x_35, 1, x_25);
lean::cnstr_set(x_35, 2, x_27);
lean::cnstr_set(x_35, 3, x_31);
lean::cnstr_set(x_35, 4, x_32);
if (lean::is_scalar(x_5)) {
 x_36 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_36 = x_5;
}
lean::cnstr_set(x_36, 0, x_35);
if (lean::is_scalar(x_22)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_22;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_20);
if (lean::is_scalar(x_17)) {
 x_38 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_38 = x_17;
}
lean::cnstr_set(x_38, 0, x_37);
return x_38;
}
}
case 2:
{
obj* x_39; obj* x_41; obj* x_42; obj* x_44; 
x_39 = lean::cnstr_get(x_0, 0);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 x_41 = x_0;
} else {
 lean::inc(x_39);
 lean::dec(x_0);
 x_41 = lean::box(0);
}
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
x_44 = l_list_mmap___main___at_lean_elaborator_preresolve___main___spec__1(x_42, x_1, x_2);
if (lean::obj_tag(x_44) == 0)
{
obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_39);
lean::dec(x_41);
x_47 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 x_49 = x_44;
} else {
 lean::inc(x_47);
 lean::dec(x_44);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(0, 1, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_47);
return x_50;
}
else
{
obj* x_51; obj* x_53; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_61; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_51 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 x_53 = x_44;
} else {
 lean::inc(x_51);
 lean::dec(x_44);
 x_53 = lean::box(0);
}
x_54 = lean::cnstr_get(x_51, 0);
x_56 = lean::cnstr_get(x_51, 1);
if (lean::is_exclusive(x_51)) {
 x_58 = x_51;
} else {
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_51);
 x_58 = lean::box(0);
}
x_59 = lean::cnstr_get(x_39, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_39, 2);
lean::inc(x_61);
lean::dec(x_39);
x_64 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_64, 0, x_59);
lean::cnstr_set(x_64, 1, x_54);
lean::cnstr_set(x_64, 2, x_61);
if (lean::is_scalar(x_41)) {
 x_65 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_65 = x_41;
}
lean::cnstr_set(x_65, 0, x_64);
if (lean::is_scalar(x_58)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_58;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_56);
if (lean::is_scalar(x_53)) {
 x_67 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_67 = x_53;
}
lean::cnstr_set(x_67, 0, x_66);
return x_67;
}
}
default:
{
obj* x_69; obj* x_70; 
lean::dec(x_1);
x_69 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_69, 0, x_0);
lean::cnstr_set(x_69, 1, x_2);
x_70 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_70, 0, x_69);
return x_70;
}
}
}
}
obj* l_lean_elaborator_preresolve(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_elaborator_preresolve___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_max__recursion() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(100u);
return x_0;
}
}
obj* _init_l_lean_elaborator_max__commands() {
_start:
{
obj* x_0; 
x_0 = lean::mk_nat_obj(10000u);
return x_0;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::mk_nat_obj(0u);
x_3 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_1);
lean::cnstr_set(x_3, 2, x_2);
return x_3;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_2);
lean::dec(x_1);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_0);
lean::cnstr_set(x_6, 1, x_3);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_8, 0, x_7);
return x_8;
}
}
obj* l_reader__t_pure___at_lean_elaborator_run___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_elaborator_run___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = l___private_init_lean_parser_rec_1__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_7 = lean::apply_2(x_6, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_rec_1__run__aux___at_lean_elaborator_run___spec__6), 6, 3);
lean::closure_set(x_6, 0, x_1);
lean::closure_set(x_6, 1, x_2);
lean::closure_set(x_6, 2, x_3);
x_7 = lean::apply_3(x_0, x_6, x_4, x_5);
return x_7;
}
}
obj* _init_l_lean_elaborator_run___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint8 x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::mk_nat_obj(1u);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::box(0);
x_4 = lean::mk_string("foo");
x_5 = 2;
x_6 = lean::mk_string("");
x_7 = lean::mk_string("elaborator.run: out of fuel");
x_8 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_2);
lean::cnstr_set(x_8, 2, x_3);
lean::cnstr_set(x_8, 3, x_6);
lean::cnstr_set(x_8, 4, x_7);
lean::cnstr_set_scalar(x_8, sizeof(void*)*5, x_5);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_elaborator_run___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_27; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_1);
lean::dec(x_0);
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_2, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_2, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 5);
lean::inc(x_15);
x_17 = l_lean_elaborator_run___lambda__1___closed__1;
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_15);
x_19 = lean::cnstr_get(x_2, 6);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_2, 7);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_2, 8);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_2, 9);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_2, 10);
lean::inc(x_27);
lean::dec(x_2);
x_30 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_30, 0, x_5);
lean::cnstr_set(x_30, 1, x_7);
lean::cnstr_set(x_30, 2, x_9);
lean::cnstr_set(x_30, 3, x_11);
lean::cnstr_set(x_30, 4, x_13);
lean::cnstr_set(x_30, 5, x_18);
lean::cnstr_set(x_30, 6, x_19);
lean::cnstr_set(x_30, 7, x_21);
lean::cnstr_set(x_30, 8, x_23);
lean::cnstr_set(x_30, 9, x_25);
lean::cnstr_set(x_30, 10, x_27);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_30);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_34, 0, x_33);
return x_34;
}
}
obj* _init_l_lean_elaborator_run___lambda__2___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("unknown command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
if (lean::obj_tag(x_5) == 0)
{
obj* x_7; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_15; 
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::dec(x_4);
x_10 = l_lean_name_to__string___closed__1;
x_11 = l_lean_name_to__string__with__sep___main(x_10, x_0);
x_12 = l_lean_elaborator_run___lambda__2___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_15 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_1, x_13, x_2, x_3, x_7);
return x_15;
}
else
{
obj* x_18; obj* x_21; obj* x_24; 
lean::dec(x_1);
lean::dec(x_0);
x_18 = lean::cnstr_get(x_4, 1);
lean::inc(x_18);
lean::dec(x_4);
x_21 = lean::cnstr_get(x_5, 0);
lean::inc(x_21);
lean::dec(x_5);
x_24 = lean::apply_3(x_21, x_2, x_3, x_18);
return x_24;
}
}
}
obj* l_lean_elaborator_run___lambda__3(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_24; obj* x_26; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_2 = lean::cnstr_get(x_1, 0);
if (lean::is_exclusive(x_1)) {
 x_4 = x_1;
} else {
 lean::inc(x_2);
 lean::dec(x_1);
 x_4 = lean::box(0);
}
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 2);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_0, 3);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_0, 4);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_0, 5);
lean::inc(x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_15);
x_18 = lean::cnstr_get(x_0, 6);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_0, 7);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_0, 8);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_0, 9);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_0, 10);
lean::inc(x_26);
lean::dec(x_0);
x_29 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_29, 0, x_5);
lean::cnstr_set(x_29, 1, x_7);
lean::cnstr_set(x_29, 2, x_9);
lean::cnstr_set(x_29, 3, x_11);
lean::cnstr_set(x_29, 4, x_13);
lean::cnstr_set(x_29, 5, x_17);
lean::cnstr_set(x_29, 6, x_18);
lean::cnstr_set(x_29, 7, x_20);
lean::cnstr_set(x_29, 8, x_22);
lean::cnstr_set(x_29, 9, x_24);
lean::cnstr_set(x_29, 10, x_26);
x_30 = lean::box(0);
x_31 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_29);
if (lean::is_scalar(x_4)) {
 x_32 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_32 = x_4;
 lean::cnstr_set_tag(x_4, 1);
}
lean::cnstr_set(x_32, 0, x_31);
x_33 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_33, 0, x_32);
return x_33;
}
else
{
obj* x_35; 
lean::dec(x_0);
x_35 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_35, 0, x_1);
return x_35;
}
}
}
obj* _init_l_lean_elaborator_run___lambda__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("not a command: ");
return x_0;
}
}
obj* l_lean_elaborator_run___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
lean::inc(x_0);
x_6 = l_lean_parser_syntax_to__format___main(x_0);
x_7 = lean::mk_nat_obj(80u);
x_8 = l_lean_format_pretty(x_6, x_7);
x_9 = l_lean_elaborator_run___lambda__4___closed__1;
x_10 = lean::string_append(x_9, x_8);
lean::dec(x_8);
x_12 = l_lean_expander_error___at_lean_elaborator_no__kind_elaborate___spec__1___rarg(x_0, x_10, x_2, x_3, x_4);
return x_12;
}
else
{
obj* x_13; obj* x_16; obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
lean::dec(x_13);
x_19 = l_lean_elaborator_elaborators;
lean::inc(x_16);
x_21 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_19, x_16);
lean::inc(x_4);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_4);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
x_25 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_25, 0, x_24);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__2), 5, 4);
lean::closure_set(x_26, 0, x_16);
lean::closure_set(x_26, 1, x_0);
lean::closure_set(x_26, 2, x_2);
lean::closure_set(x_26, 3, x_3);
x_27 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_27, 0, x_26);
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_28, 0, x_25);
lean::closure_set(x_28, 1, x_27);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__3), 2, 1);
lean::closure_set(x_29, 0, x_4);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_30, 0, x_28);
lean::closure_set(x_30, 1, x_29);
return x_30;
}
}
}
obj* l_lean_elaborator_run___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
lean::inc(x_0);
x_10 = l_lean_parser_syntax_as__node___main(x_0);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_pure___at_lean_elaborator_run___spec__3___rarg), 4, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__4), 5, 1);
lean::closure_set(x_12, 0, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_elaborator_section_elaborate___spec__1___rarg), 5, 2);
lean::closure_set(x_13, 0, x_11);
lean::closure_set(x_13, 1, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_with__current__command___rarg), 6, 5);
lean::closure_set(x_14, 0, x_4);
lean::closure_set(x_14, 1, x_13);
lean::closure_set(x_14, 2, x_1);
lean::closure_set(x_14, 3, x_2);
lean::closure_set(x_14, 4, x_6);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
lean::inc(x_0);
lean::inc(x_3);
x_10 = l_lean_elaborator_preresolve___main(x_3, x_0, x_5);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__5), 4, 3);
lean::closure_set(x_12, 0, x_3);
lean::closure_set(x_12, 1, x_1);
lean::closure_set(x_12, 2, x_0);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_14, 0, x_11);
lean::closure_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_lean_elaborator_run___lambda__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = l_lean_elaborator_current__command___rarg(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__6), 3, 2);
lean::closure_set(x_6, 0, x_2);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_except__t_bind__cont___at_lean_elaborator_command_elaborate___spec__3___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_elaborator_run___lambda__8(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = l_lean_message__log_empty;
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_6, 0, x_5);
return x_6;
}
else
{
obj* x_7; obj* x_10; obj* x_13; obj* x_16; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_13 = lean::cnstr_get(x_10, 5);
lean::inc(x_13);
lean::dec(x_10);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_module__parser__m_lift__parser__t___rarg___lambda__2), 2, 1);
lean::closure_set(x_16, 0, x_13);
return x_16;
}
}
}
obj* _init_l_lean_elaborator_run___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_0 = lean::box(0);
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::mk_string("trace");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("as_messages");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_lean_options_mk;
x_8 = 1;
x_9 = l_lean_kvmap_set__bool(x_7, x_6, x_8);
x_10 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1;
x_11 = l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2;
x_12 = lean::alloc_cnstr(0, 7, 0);
lean::cnstr_set(x_12, 0, x_0);
lean::cnstr_set(x_12, 1, x_10);
lean::cnstr_set(x_12, 2, x_11);
lean::cnstr_set(x_12, 3, x_1);
lean::cnstr_set(x_12, 4, x_0);
lean::cnstr_set(x_12, 5, x_0);
lean::cnstr_set(x_12, 6, x_9);
return x_12;
}
}
obj* _init_l_lean_elaborator_run___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean_environment_mk_empty(x_0);
return x_1;
}
}
obj* _init_l_lean_elaborator_run___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; uint32 x_5; obj* x_6; obj* x_7; 
x_0 = lean::box(0);
x_1 = lean::mk_string("_ngen");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("fixme");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = 0;
x_6 = lean::alloc_cnstr(0, 1, 4);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set_scalar(x_6, sizeof(void*)*1, x_5);
x_7 = x_6;
return x_7;
}
}
obj* _init_l_lean_elaborator_run___closed__4() {
_start:
{
uint8 x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = 0;
x_1 = l_lean_elaborator_max__commands;
x_2 = lean::box(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_commands_elaborate___boxed), 5, 2);
lean::closure_set(x_3, 0, x_2);
lean::closure_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_lean_elaborator_run___closed__5() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__1), 3, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__6() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__7), 4, 0);
return x_0;
}
}
obj* _init_l_lean_elaborator_run___closed__7() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_elaborator_run___lambda__8), 1, 0);
return x_0;
}
}
obj* l_lean_elaborator_run(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_1 = lean::box(0);
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = l_lean_expander_builtin__transformers;
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_4);
lean::cnstr_set(x_7, 1, x_6);
x_8 = lean::mk_nat_obj(0u);
x_9 = l_lean_elaborator_run___closed__1;
x_10 = l_lean_message__log_empty;
x_11 = l_lean_elaborator_run___closed__2;
x_12 = l_lean_elaborator_run___closed__3;
x_13 = lean::alloc_cnstr(0, 11, 0);
lean::cnstr_set(x_13, 0, x_1);
lean::cnstr_set(x_13, 1, x_1);
lean::cnstr_set(x_13, 2, x_8);
lean::cnstr_set(x_13, 3, x_1);
lean::cnstr_set(x_13, 4, x_9);
lean::cnstr_set(x_13, 5, x_10);
lean::cnstr_set(x_13, 6, x_2);
lean::cnstr_set(x_13, 7, x_7);
lean::cnstr_set(x_13, 8, x_11);
lean::cnstr_set(x_13, 9, x_12);
lean::cnstr_set(x_13, 10, x_8);
x_14 = l_lean_elaborator_run___closed__4;
x_15 = l_lean_elaborator_run___closed__5;
x_16 = l_lean_elaborator_run___closed__6;
x_17 = l_lean_elaborator_max__recursion;
x_18 = l_lean_parser_rec__t_run___at_lean_elaborator_run___spec__5(x_14, x_15, x_16, x_17, x_0, x_13);
x_19 = l_lean_elaborator_run___closed__7;
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_coroutine_bind___main___rarg), 3, 2);
lean::closure_set(x_20, 0, x_18);
lean::closure_set(x_20, 1, x_19);
return x_20;
}
}
void initialize_init_lean_parser_module();
void initialize_init_lean_expander();
void initialize_init_lean_expr();
void initialize_init_lean_options();
static bool _G_initialized = false;
void initialize_init_lean_elaborator() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_module();
 initialize_init_lean_expander();
 initialize_init_lean_expr();
 initialize_init_lean_options();
 l_lean_elaborator_ordered__rbmap_empty___closed__1 = _init_l_lean_elaborator_ordered__rbmap_empty___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___closed__1);
 l_lean_elaborator_elaborator__t = _init_l_lean_elaborator_elaborator__t();
lean::mark_persistent(l_lean_elaborator_elaborator__t);
 l_lean_elaborator_elaborator__m = _init_l_lean_elaborator_elaborator__m();
lean::mark_persistent(l_lean_elaborator_elaborator__m);
 l_lean_elaborator_elaborator = _init_l_lean_elaborator_elaborator();
lean::mark_persistent(l_lean_elaborator_elaborator);
 l_lean_elaborator_coelaborator__m = _init_l_lean_elaborator_coelaborator__m();
lean::mark_persistent(l_lean_elaborator_coelaborator__m);
 l_lean_elaborator_coelaborator = _init_l_lean_elaborator_coelaborator();
lean::mark_persistent(l_lean_elaborator_coelaborator);
 l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2 = _init_l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2();
lean::mark_persistent(l_lean_elaborator_elaborator__t___at_lean_elaborator_command_elaborate___spec__2);
 l_lean_elaborator_coelaborator__m_monad__coroutine = _init_l_lean_elaborator_coelaborator__m_monad__coroutine();
lean::mark_persistent(l_lean_elaborator_coelaborator__m_monad__coroutine);
 l_lean_elaborator_current__command___rarg___closed__1 = _init_l_lean_elaborator_current__command___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_current__command___rarg___closed__1);
 l_lean_elaborator_level__get__app__args___main___closed__1 = _init_l_lean_elaborator_level__get__app__args___main___closed__1();
lean::mark_persistent(l_lean_elaborator_level__get__app__args___main___closed__1);
 l_lean_elaborator_to__level___main___closed__1 = _init_l_lean_elaborator_to__level___main___closed__1();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__1);
 l_lean_elaborator_to__level___main___closed__2 = _init_l_lean_elaborator_to__level___main___closed__2();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__2);
 l_lean_elaborator_to__level___main___closed__3 = _init_l_lean_elaborator_to__level___main___closed__3();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__3);
 l_lean_elaborator_to__level___main___closed__4 = _init_l_lean_elaborator_to__level___main___closed__4();
lean::mark_persistent(l_lean_elaborator_to__level___main___closed__4);
 l_lean_elaborator_expr_mk__annotation___closed__1 = _init_l_lean_elaborator_expr_mk__annotation___closed__1();
lean::mark_persistent(l_lean_elaborator_expr_mk__annotation___closed__1);
 l_lean_elaborator_dummy = _init_l_lean_elaborator_dummy();
lean::mark_persistent(l_lean_elaborator_dummy);
 l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1 = _init_l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1();
lean::mark_persistent(l_list_map___main___at_lean_elaborator_mk__eqns___spec__1___closed__1);
 l_lean_elaborator_mk__eqns___closed__1 = _init_l_lean_elaborator_mk__eqns___closed__1();
lean::mark_persistent(l_lean_elaborator_mk__eqns___closed__1);
 l_lean_elaborator_mk__eqns___closed__2 = _init_l_lean_elaborator_mk__eqns___closed__2();
lean::mark_persistent(l_lean_elaborator_mk__eqns___closed__2);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__4___closed__1);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__1);
 l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_to__pexpr___main___spec__8___closed__2);
 l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1 = _init_l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1();
lean::mark_persistent(l_list_foldr___main___at_lean_elaborator_to__pexpr___main___spec__9___closed__1);
 l_lean_elaborator_to__pexpr___main___closed__1 = _init_l_lean_elaborator_to__pexpr___main___closed__1();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__1);
 l_lean_elaborator_to__pexpr___main___closed__2 = _init_l_lean_elaborator_to__pexpr___main___closed__2();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__2);
 l_lean_elaborator_to__pexpr___main___closed__3 = _init_l_lean_elaborator_to__pexpr___main___closed__3();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__3);
 l_lean_elaborator_to__pexpr___main___closed__4 = _init_l_lean_elaborator_to__pexpr___main___closed__4();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__4);
 l_lean_elaborator_to__pexpr___main___closed__5 = _init_l_lean_elaborator_to__pexpr___main___closed__5();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__5);
 l_lean_elaborator_to__pexpr___main___closed__6 = _init_l_lean_elaborator_to__pexpr___main___closed__6();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__6);
 l_lean_elaborator_to__pexpr___main___closed__7 = _init_l_lean_elaborator_to__pexpr___main___closed__7();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__7);
 l_lean_elaborator_to__pexpr___main___closed__8 = _init_l_lean_elaborator_to__pexpr___main___closed__8();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__8);
 l_lean_elaborator_to__pexpr___main___closed__9 = _init_l_lean_elaborator_to__pexpr___main___closed__9();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__9);
 l_lean_elaborator_to__pexpr___main___closed__10 = _init_l_lean_elaborator_to__pexpr___main___closed__10();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__10);
 l_lean_elaborator_to__pexpr___main___closed__11 = _init_l_lean_elaborator_to__pexpr___main___closed__11();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__11);
 l_lean_elaborator_to__pexpr___main___closed__12 = _init_l_lean_elaborator_to__pexpr___main___closed__12();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__12);
 l_lean_elaborator_to__pexpr___main___closed__13 = _init_l_lean_elaborator_to__pexpr___main___closed__13();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__13);
 l_lean_elaborator_to__pexpr___main___closed__14 = _init_l_lean_elaborator_to__pexpr___main___closed__14();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__14);
 l_lean_elaborator_to__pexpr___main___closed__15 = _init_l_lean_elaborator_to__pexpr___main___closed__15();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__15);
 l_lean_elaborator_to__pexpr___main___closed__16 = _init_l_lean_elaborator_to__pexpr___main___closed__16();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__16);
 l_lean_elaborator_to__pexpr___main___closed__17 = _init_l_lean_elaborator_to__pexpr___main___closed__17();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__17);
 l_lean_elaborator_to__pexpr___main___closed__18 = _init_l_lean_elaborator_to__pexpr___main___closed__18();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__18);
 l_lean_elaborator_to__pexpr___main___closed__19 = _init_l_lean_elaborator_to__pexpr___main___closed__19();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__19);
 l_lean_elaborator_to__pexpr___main___closed__20 = _init_l_lean_elaborator_to__pexpr___main___closed__20();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__20);
 l_lean_elaborator_to__pexpr___main___closed__21 = _init_l_lean_elaborator_to__pexpr___main___closed__21();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__21);
 l_lean_elaborator_to__pexpr___main___closed__22 = _init_l_lean_elaborator_to__pexpr___main___closed__22();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__22);
 l_lean_elaborator_to__pexpr___main___closed__23 = _init_l_lean_elaborator_to__pexpr___main___closed__23();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__23);
 l_lean_elaborator_to__pexpr___main___closed__24 = _init_l_lean_elaborator_to__pexpr___main___closed__24();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__24);
 l_lean_elaborator_to__pexpr___main___closed__25 = _init_l_lean_elaborator_to__pexpr___main___closed__25();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__25);
 l_lean_elaborator_to__pexpr___main___closed__26 = _init_l_lean_elaborator_to__pexpr___main___closed__26();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__26);
 l_lean_elaborator_to__pexpr___main___closed__27 = _init_l_lean_elaborator_to__pexpr___main___closed__27();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__27);
 l_lean_elaborator_to__pexpr___main___closed__28 = _init_l_lean_elaborator_to__pexpr___main___closed__28();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__28);
 l_lean_elaborator_to__pexpr___main___closed__29 = _init_l_lean_elaborator_to__pexpr___main___closed__29();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__29);
 l_lean_elaborator_to__pexpr___main___closed__30 = _init_l_lean_elaborator_to__pexpr___main___closed__30();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__30);
 l_lean_elaborator_to__pexpr___main___closed__31 = _init_l_lean_elaborator_to__pexpr___main___closed__31();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__31);
 l_lean_elaborator_to__pexpr___main___closed__32 = _init_l_lean_elaborator_to__pexpr___main___closed__32();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__32);
 l_lean_elaborator_to__pexpr___main___closed__33 = _init_l_lean_elaborator_to__pexpr___main___closed__33();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__33);
 l_lean_elaborator_to__pexpr___main___closed__34 = _init_l_lean_elaborator_to__pexpr___main___closed__34();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__34);
 l_lean_elaborator_to__pexpr___main___closed__35 = _init_l_lean_elaborator_to__pexpr___main___closed__35();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__35);
 l_lean_elaborator_to__pexpr___main___closed__36 = _init_l_lean_elaborator_to__pexpr___main___closed__36();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__36);
 l_lean_elaborator_to__pexpr___main___closed__37 = _init_l_lean_elaborator_to__pexpr___main___closed__37();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__37);
 l_lean_elaborator_to__pexpr___main___closed__38 = _init_l_lean_elaborator_to__pexpr___main___closed__38();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__38);
 l_lean_elaborator_to__pexpr___main___closed__39 = _init_l_lean_elaborator_to__pexpr___main___closed__39();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__39);
 l_lean_elaborator_to__pexpr___main___closed__40 = _init_l_lean_elaborator_to__pexpr___main___closed__40();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__40);
 l_lean_elaborator_to__pexpr___main___closed__41 = _init_l_lean_elaborator_to__pexpr___main___closed__41();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__41);
 l_lean_elaborator_to__pexpr___main___closed__42 = _init_l_lean_elaborator_to__pexpr___main___closed__42();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__42);
 l_lean_elaborator_to__pexpr___main___closed__43 = _init_l_lean_elaborator_to__pexpr___main___closed__43();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__43);
 l_lean_elaborator_to__pexpr___main___closed__44 = _init_l_lean_elaborator_to__pexpr___main___closed__44();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__44);
 l_lean_elaborator_to__pexpr___main___closed__45 = _init_l_lean_elaborator_to__pexpr___main___closed__45();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__45);
 l_lean_elaborator_to__pexpr___main___closed__46 = _init_l_lean_elaborator_to__pexpr___main___closed__46();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__46);
 l_lean_elaborator_to__pexpr___main___closed__47 = _init_l_lean_elaborator_to__pexpr___main___closed__47();
lean::mark_persistent(l_lean_elaborator_to__pexpr___main___closed__47);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__6);
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__1___closed__1);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_old__elab__command___spec__13);
 l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1 = _init_l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_of__list___at_lean_elaborator_old__elab__command___spec__8___closed__1);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__1 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__1();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__1);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__2 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__2();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__2);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__3 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__3();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__3);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__4 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__4();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__4);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__5 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__5();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__5);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__6 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__6();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__6);
 l_lean_elaborator_decl__modifiers__to__pexpr___closed__7 = _init_l_lean_elaborator_decl__modifiers__to__pexpr___closed__7();
lean::mark_persistent(l_lean_elaborator_decl__modifiers__to__pexpr___closed__7);
 l_lean_elaborator_locally___rarg___closed__1 = _init_l_lean_elaborator_locally___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___rarg___closed__1);
 l_lean_elaborator_elab__def__like___closed__1 = _init_l_lean_elaborator_elab__def__like___closed__1();
lean::mark_persistent(l_lean_elaborator_elab__def__like___closed__1);
 l_lean_elaborator_elab__def__like___closed__2 = _init_l_lean_elaborator_elab__def__like___closed__2();
lean::mark_persistent(l_lean_elaborator_elab__def__like___closed__2);
 l_lean_elaborator_infer__mod__to__pexpr___closed__1 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__1();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__1);
 l_lean_elaborator_infer__mod__to__pexpr___closed__2 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__2();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__2);
 l_lean_elaborator_infer__mod__to__pexpr___closed__3 = _init_l_lean_elaborator_infer__mod__to__pexpr___closed__3();
lean::mark_persistent(l_lean_elaborator_infer__mod__to__pexpr___closed__3);
 l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_declaration_elaborate___spec__1___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__2);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__3);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__4);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__5);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__6);
 l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7 = _init_l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_declaration_elaborate___spec__14___closed__7);
 l_lean_elaborator_variables_elaborate___closed__1 = _init_l_lean_elaborator_variables_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_variables_elaborate___closed__1);
 l_lean_elaborator_variables_elaborate___closed__2 = _init_l_lean_elaborator_variables_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_variables_elaborate___closed__2);
 l_lean_elaborator_module_header_elaborate___closed__1 = _init_l_lean_elaborator_module_header_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_module_header_elaborate___closed__1);
 l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1 = _init_l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1();
lean::mark_persistent(l_list_mfoldl___main___at_lean_elaborator_command__parser__config_register__notation__tokens___spec__1___closed__1);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__1);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__2);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__3);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__4);
 l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5 = _init_l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_command__parser__config_register__notation__parser___spec__2___closed__5);
 l_lean_elaborator_command__parser__config_register__notation__parser___closed__1 = _init_l_lean_elaborator_command__parser__config_register__notation__parser___closed__1();
lean::mark_persistent(l_lean_elaborator_command__parser__config_register__notation__parser___closed__1);
 l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1();
lean::mark_persistent(l_lean_elaborator_yield__to__outside___rarg___lambda__2___closed__1);
 l_lean_elaborator_yield__to__outside___rarg___closed__1 = _init_l_lean_elaborator_yield__to__outside___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_yield__to__outside___rarg___closed__1);
 l_lean_elaborator_postprocess__notation__spec___closed__1 = _init_l_lean_elaborator_postprocess__notation__spec___closed__1();
lean::mark_persistent(l_lean_elaborator_postprocess__notation__spec___closed__1);
 l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_match__spec___spec__1___closed__1);
 l_lean_elaborator_match__spec___closed__1 = _init_l_lean_elaborator_match__spec___closed__1();
lean::mark_persistent(l_lean_elaborator_match__spec___closed__1);
 l_lean_elaborator_notation_elaborate__aux___closed__1 = _init_l_lean_elaborator_notation_elaborate__aux___closed__1();
lean::mark_persistent(l_lean_elaborator_notation_elaborate__aux___closed__1);
 l_lean_elaborator_mk__notation__kind___rarg___closed__1 = _init_l_lean_elaborator_mk__notation__kind___rarg___closed__1();
lean::mark_persistent(l_lean_elaborator_mk__notation__kind___rarg___closed__1);
 l_lean_elaborator_notation_elaborate___closed__1 = _init_l_lean_elaborator_notation_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_notation_elaborate___closed__1);
 l_lean_elaborator_notation_elaborate___closed__2 = _init_l_lean_elaborator_notation_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_notation_elaborate___closed__2);
 l_lean_elaborator_universe_elaborate___closed__1 = _init_l_lean_elaborator_universe_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_universe_elaborate___closed__1);
 l_lean_elaborator_universe_elaborate___closed__2 = _init_l_lean_elaborator_universe_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_universe_elaborate___closed__2);
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__1);
 l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2 = _init_l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2();
lean::mark_persistent(l_list_mmap___main___at_lean_elaborator_attribute_elaborate___spec__1___closed__2);
 l_lean_elaborator_attribute_elaborate___closed__1 = _init_l_lean_elaborator_attribute_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_attribute_elaborate___closed__1);
 l_lean_elaborator_attribute_elaborate___closed__2 = _init_l_lean_elaborator_attribute_elaborate___closed__2();
lean::mark_persistent(l_lean_elaborator_attribute_elaborate___closed__2);
 l_lean_elaborator_check_elaborate___closed__1 = _init_l_lean_elaborator_check_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_check_elaborate___closed__1);
 l_lean_elaborator_init__quot_elaborate___closed__1 = _init_l_lean_elaborator_init__quot_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_init__quot_elaborate___closed__1);
 l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1 = _init_l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1();
lean::mark_persistent(l_list_mmap_x_27___main___at_lean_elaborator_no__kind_elaborate___spec__2___closed__1);
 l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_no__kind_elaborate___lambda__1___closed__1);
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__4___closed__1);
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__4___closed__2);
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__4___closed__3);
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__4___closed__4);
 l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5 = _init_l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__4___closed__5);
 l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1 = _init_l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1();
lean::mark_persistent(l_lean_elaborator_commands_elaborate___main___lambda__5___closed__1);
 l_lean_elaborator_end__scope___lambda__2___closed__1 = _init_l_lean_elaborator_end__scope___lambda__2___closed__1();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__2___closed__1);
 l_lean_elaborator_end__scope___lambda__2___closed__2 = _init_l_lean_elaborator_end__scope___lambda__2___closed__2();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__2___closed__2);
 l_lean_elaborator_end__scope___lambda__3___closed__1 = _init_l_lean_elaborator_end__scope___lambda__3___closed__1();
lean::mark_persistent(l_lean_elaborator_end__scope___lambda__3___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___lambda__4___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__1);
 l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2 = _init_l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2();
lean::mark_persistent(l_lean_elaborator_locally___at_lean_elaborator_section_elaborate___spec__2___closed__2);
 l_lean_elaborator_section_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_section_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_section_elaborate___lambda__1___closed__1);
 l_lean_elaborator_section_elaborate___closed__1 = _init_l_lean_elaborator_section_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_section_elaborate___closed__1);
 l_lean_elaborator_namespace_elaborate___lambda__1___closed__1 = _init_l_lean_elaborator_namespace_elaborate___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_namespace_elaborate___lambda__1___closed__1);
 l_lean_elaborator_namespace_elaborate___closed__1 = _init_l_lean_elaborator_namespace_elaborate___closed__1();
lean::mark_persistent(l_lean_elaborator_namespace_elaborate___closed__1);
 l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1 = _init_l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1();
lean::mark_persistent(l_rbmap_from__list___at_lean_elaborator_elaborators___spec__1);
 l_lean_elaborator_elaborators = _init_l_lean_elaborator_elaborators();
lean::mark_persistent(l_lean_elaborator_elaborators);
 l_lean_elaborator_resolve__context___main___closed__1 = _init_l_lean_elaborator_resolve__context___main___closed__1();
lean::mark_persistent(l_lean_elaborator_resolve__context___main___closed__1);
 l_lean_elaborator_max__recursion = _init_l_lean_elaborator_max__recursion();
lean::mark_persistent(l_lean_elaborator_max__recursion);
 l_lean_elaborator_max__commands = _init_l_lean_elaborator_max__commands();
lean::mark_persistent(l_lean_elaborator_max__commands);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__1);
 l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2 = _init_l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2();
lean::mark_persistent(l_lean_elaborator_ordered__rbmap_empty___at_lean_elaborator_run___spec__2);
 l_lean_elaborator_run___lambda__1___closed__1 = _init_l_lean_elaborator_run___lambda__1___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__1___closed__1);
 l_lean_elaborator_run___lambda__2___closed__1 = _init_l_lean_elaborator_run___lambda__2___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__2___closed__1);
 l_lean_elaborator_run___lambda__4___closed__1 = _init_l_lean_elaborator_run___lambda__4___closed__1();
lean::mark_persistent(l_lean_elaborator_run___lambda__4___closed__1);
 l_lean_elaborator_run___closed__1 = _init_l_lean_elaborator_run___closed__1();
lean::mark_persistent(l_lean_elaborator_run___closed__1);
 l_lean_elaborator_run___closed__2 = _init_l_lean_elaborator_run___closed__2();
lean::mark_persistent(l_lean_elaborator_run___closed__2);
 l_lean_elaborator_run___closed__3 = _init_l_lean_elaborator_run___closed__3();
lean::mark_persistent(l_lean_elaborator_run___closed__3);
 l_lean_elaborator_run___closed__4 = _init_l_lean_elaborator_run___closed__4();
lean::mark_persistent(l_lean_elaborator_run___closed__4);
 l_lean_elaborator_run___closed__5 = _init_l_lean_elaborator_run___closed__5();
lean::mark_persistent(l_lean_elaborator_run___closed__5);
 l_lean_elaborator_run___closed__6 = _init_l_lean_elaborator_run___closed__6();
lean::mark_persistent(l_lean_elaborator_run___closed__6);
 l_lean_elaborator_run___closed__7 = _init_l_lean_elaborator_run___closed__7();
lean::mark_persistent(l_lean_elaborator_run___closed__7);
}
