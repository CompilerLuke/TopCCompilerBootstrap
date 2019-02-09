struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* d);
struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* d){;
;
struct ast_AST* varParser_id;varParser_id = ast_make_AST_rparser_Parser(varParser_self,ast_Identifier(_global_box_ast_ReadInfo(ast_ReadInfoInit(1,varParser_name),d),d),d);;
ast_AST_add((varParser_self)->current_node,varParser_id,d);
;return NULL;
;}
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* d){;
if((((varParser_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(varParser_self,_global_StringInit(17,"Unexpected assign"),d);
;
;};
struct ast_AST* varParser_v;varParser_v = _global_Array_pop_rast_AST(&(((varParser_self)->current_node)->nodes),d);;
struct ast_AST* varParser_node;varParser_node = ast_make_AST_rparser_Parser(varParser_self,ast_CreateAssign,d);;
struct ast_AST* varParser_create;varParser_create = ast_make_AST_rparser_Parser(varParser_self,ast_Create,d);;
ast_AST_add(varParser_create,varParser_v,d);
ast_AST_add(varParser_node,varParser_create,d);
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,d);;
parser_Parser_push_current_node(varParser_self,varParser_node,d);
parser_Parser_push_current_node(varParser_self,varParser_assign,d);
unsigned int varParser_indent;varParser_indent = (varParser_self)->num_indent;;
;while(!((parser_Parser_is_end(varParser_self,varParser_indent,d)))){parser_Parser_next(varParser_self,d);struct error_CompilerError* f =parser_Parser_eval(varParser_self,d);if(f != NULL){struct error_CompilerError* varParser_e = f;

return varParser_e;
;
;}
else if(1){
;}
;};
parser_Parser_pop_current_node(varParser_self,d);
parser_Parser_pop_current_node(varParser_self,d);
;return NULL;
;}
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* d){;
struct ast_ReadInfo* _global_pointer;_global_pointer = (struct ast_ReadInfo*)(_global_Allocator_alloc((d)->allocator,(uint64_t)sizeof(struct ast_ReadInfo),d));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}

void varParserInitTypes() { 
 
 }
void varParserInit() { 
;
};