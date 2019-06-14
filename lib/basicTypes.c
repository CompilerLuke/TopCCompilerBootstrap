struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_int_literal;basicTypes_int_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Int(basicTypes_token,f),f);;
(basicTypes_int_literal)->_type = types_make_Int(f);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_int_literal,f);
;return NULL;
;}
struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_float_literal;basicTypes_float_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Float(basicTypes_token,f),f);;
(basicTypes_float_literal)->_type = types_make_Float(f);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_float_literal,f);
;return NULL;
;}

static inline _Bool tmpbasicTypesv(struct parser_Parser** basicTypes_self,struct _global_String* basicTypes_token,_Bool* basicTypes_as_bool, struct _global_Context* f) {
struct _global_String g =*basicTypes_token;
if(_global_String_op_eqByValue(g,_global_StringInit(4,"true"),NULL)){return 1;}else if(1){return 0;}
}
struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
_Bool basicTypes_as_bool;basicTypes_as_bool = tmpbasicTypesv(&basicTypes_self,&basicTypes_token,&basicTypes_as_bool, f);;
struct ast_AST* basicTypes_bool_literal;basicTypes_bool_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Bool(basicTypes_as_bool,f),f);;
(basicTypes_bool_literal)->_type = types_Bool;;
ast_AST_add((basicTypes_self)->current_node,basicTypes_bool_literal,f);
;return NULL;
;}

void basicTypesInitTypes() { 
 
 }
void basicTypesInit() { 
;
;
;
};