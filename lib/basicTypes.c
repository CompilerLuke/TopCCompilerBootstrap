struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
struct ast_AST* basicTypes_int_literal;basicTypes_int_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Int(basicTypes_token,f),f);;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
(basicTypes_int_literal)->_type = types_make_Int(f);;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
ast_AST_add((basicTypes_self)->current_node,basicTypes_int_literal,f);
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;return NULL;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
struct ast_AST* basicTypes_float_literal;basicTypes_float_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Float(basicTypes_token,f),f);;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
(basicTypes_float_literal)->_type = types_make_Float(f);;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
ast_AST_add((basicTypes_self)->current_node,basicTypes_float_literal,f);
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;return NULL;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}

static inline _Bool tmpbasicTypesQ(struct parser_Parser** basicTypes_self,struct _global_String* basicTypes_token,_Bool* basicTypes_as_bool, struct _global_Context* f) {
struct _global_String g =*basicTypes_token;
if(_global_String_op_eqByValue(g,_global_StringInit(4,"true"),NULL)){return 1;}else if(1){return 0;}
}
struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
_Bool basicTypes_as_bool;basicTypes_as_bool = tmpbasicTypesQ(&basicTypes_self,&basicTypes_token,&basicTypes_as_bool, f);;
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
struct ast_AST* basicTypes_bool_literal;basicTypes_bool_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Bool(basicTypes_as_bool,f),f);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
(basicTypes_bool_literal)->_type = types_Bool;;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
ast_AST_add((basicTypes_self)->current_node,basicTypes_bool_literal,f);
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;return NULL;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}

void basicTypesInitTypes() { 
 
 }
void basicTypesInit() { 
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/basicTypes.top"
;
};