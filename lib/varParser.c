struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* j);
struct ast_AST* ast_make_AST_rast_AST(struct ast_AST* ast_t, struct ast_Payload ast_payload, struct _global_Context* j);
struct ast_AST* _global_box_ast_AST(struct ast_AST _global_value, struct _global_Context* j);
struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* j){;
;
struct ast_AST* varParser_id;varParser_id = ast_make_AST_rparser_Parser(varParser_self,ast_Identifier(_global_box_ast_ReadInfo(ast_ReadInfoInit(1,varParser_name),j),j),j);;
ast_AST_add((varParser_self)->current_node,varParser_id,j);
;return NULL;
;}
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
struct ast_AST* varParser_v;struct error_CompilerError* varParser_err;;
struct _global_Result_rerror_CompilerError_rast_AST k =parser_Parser_pop_last(varParser_self,j);if(k.tag==0){varParser_v = k.cases.Ok.field0;

;}
else if(k.tag==1){varParser_err = k.cases.Error.field0;

return varParser_err;
;
;}
;
struct ast_AST* varParser_node;varParser_node = ast_make_AST_rparser_Parser(varParser_self,ast_CreateAssign,j);;
struct ast_AST* varParser_create;varParser_create = ast_make_AST_rparser_Parser(varParser_self,ast_Create,j);;
ast_AST_add(varParser_create,varParser_v,j);
ast_AST_add(varParser_node,varParser_create,j);
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,j);;
parser_Parser_push_current_node(varParser_self,varParser_node,j);
parser_Parser_push_current_node(varParser_self,varParser_assign,j);
struct error_CompilerError* l =parser_Parser_eval_till_end(varParser_self,j);if(l != NULL){struct error_CompilerError* varParser__x = l;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* m =parser_Parser_pop_current_node(varParser_self,j);if(m != NULL){struct error_CompilerError* varParser__x = m;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* n =parser_Parser_pop_current_node(varParser_self,j);if(n != NULL){struct error_CompilerError* varParser__x = n;

return varParser__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* varParser_parse_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
if((((varParser_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(varParser_self,_global_StringInit(17,"Unexpected assign"),j);
;
;};
struct ast_AST* varParser_v;varParser_v = _global_Array_pop_rast_AST(&(((varParser_self)->current_node)->nodes),j);;
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,j);;
ast_AST_add(varParser_assign,varParser_v,j);
parser_Parser_push_current_node(varParser_self,varParser_assign,j);
parser_Parser_set_active_index(varParser_self,1,j);
struct error_CompilerError* k =parser_Parser_eval_till_end(varParser_self,j);if(k != NULL){struct error_CompilerError* varParser__x = k;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* l =parser_Parser_pop_current_node(varParser_self,j);if(l != NULL){struct error_CompilerError* varParser__x = l;

return varParser__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* varParser_parse_op_assign(struct parser_Parser* varParser_self, struct ast_OperatorKind varParser_op, struct _global_Context* j){;
;
struct error_CompilerError* k =varParser_parse_assign(varParser_self,j);if(k != NULL){struct error_CompilerError* varParser__x = k;

return varParser__x;
;
;}
else if(1){
;}
;
struct ast_AST* varParser_assign;varParser_assign = *(ast_AST_op_get((varParser_self)->current_node,(unsigned int)ast_AST_length((varParser_self)->current_node,j)-1,j));;
struct ast_AST* varParser_add;varParser_add = ast_make_AST_rast_AST(varParser_assign,ast_Operator(varParser_op,j),j);;
struct ast_AST* varParser_value;varParser_value = *(ast_AST_op_get(varParser_assign,(unsigned int)1,j));;
ast_AST_add(varParser_add,_global_box_ast_AST(*(*(ast_AST_op_get(varParser_assign,(unsigned int)0,j))),j),j);
ast_AST_add(varParser_add,varParser_value,j);
(varParser_add)->owner = varParser_assign;;
*(ast_AST_op_get(varParser_assign,(unsigned int)1,j)) = varParser_add;;
;return NULL;
;}
struct error_CompilerError* varParser_parse_add_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
;return varParser_parse_op_assign(varParser_self,ast_Add,j);
;}
struct error_CompilerError* varParser_parse_sub_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
;return varParser_parse_op_assign(varParser_self,ast_Sub,j);
;}
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* j){;
struct ast_ReadInfo* _global_pointer;_global_pointer = (struct ast_ReadInfo*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct ast_ReadInfo),j));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct ast_AST* ast_make_AST_rast_AST(struct ast_AST* ast_t, struct ast_Payload ast_payload, struct _global_Context* j){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator = (j)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_Void,NULL,ast_AST_get_filename(ast_t,j),ast_AST_get_line(ast_t,j),ast_AST_get_column(ast_t,j)),j);
;}
struct ast_AST* _global_box_ast_AST(struct ast_AST _global_value, struct _global_Context* j){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct ast_AST),j));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void varParserInitTypes() { 
 
struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(2, "Ok");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; k[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
error_CompilerError_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; k[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Error, field0);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_rast_ASTType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST, tag);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

_global_Result_rerror_CompilerError_rast_ASTType.size = sizeof(struct _global_Result_rerror_CompilerError_rast_AST);

_global_Result_rerror_CompilerError_rast_ASTType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_rast_ASTType.name = _global_StringInit(36, "Result_rerror_CompilerError_rast_AST");
_global_Result_rerror_CompilerError_rast_ASTType.cases.data = k;
_global_Result_rerror_CompilerError_rast_ASTType.cases.length = 2;
 }
void varParserInit() { 
;
};