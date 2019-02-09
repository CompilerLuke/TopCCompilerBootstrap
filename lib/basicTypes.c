struct types_CompilerType_VTABLE rtypes_Int_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_int_literal;basicTypes_int_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Int(basicTypes_token,f),f);;
(basicTypes_int_literal)->_type=types_CompilerTypeFromStruct(types_make_Int(f),&rtypes_Int_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Int_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Int_toString, &types_Int_duck_type, &types_Int_equals, &types_Int_calc_size);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_int_literal,f);
;return NULL;
;}
struct types_CompilerType_VTABLE rtypes_Float_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_float_literal;basicTypes_float_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Float(basicTypes_token,f),f);;
(basicTypes_float_literal)->_type=types_CompilerTypeFromStruct(types_make_Float(f),&rtypes_Float_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Float_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Float_toString, &types_Float_duck_type, &types_Float_equals, &types_Float_calc_size);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_float_literal,f);
;return NULL;
;}

static inline _Bool tmpbasicTypesB(struct parser_Parser** basicTypes_self,struct _global_String* basicTypes_token,_Bool* basicTypes_as_bool, struct _global_Context* f) {
struct _global_String g =*basicTypes_token;
if(_global_String_op_eqByValue(g,_global_StringInit(4,"true"),NULL)){return 1;}else if(1){return 0;}
}
struct types_CompilerType_VTABLE rtypes_Bool_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
_Bool basicTypes_as_bool;basicTypes_as_bool = tmpbasicTypesB(&basicTypes_self,&basicTypes_token,&basicTypes_as_bool, f);;
struct ast_AST* basicTypes_bool_literal;basicTypes_bool_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Bool(basicTypes_as_bool,f),f);;
(basicTypes_bool_literal)->_type=types_CompilerTypeFromStruct(types_make_Bool(f),&rtypes_Bool_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Bool_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Bool_toString, &types_Bool_duck_type, &types_Bool_equals, &types_Bool_calc_size);;
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