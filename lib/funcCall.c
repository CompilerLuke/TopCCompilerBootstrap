struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* c){;
unsigned int funcCall_num_paren;funcCall_num_paren = (funcCall_self)->num_paren;;
struct ast_AST* funcCall_func_call;funcCall_func_call = ast_make_AST_rparser_Parser(funcCall_self,ast_FuncCall,c);;
if((((funcCall_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(funcCall_self,_global_StringInit(24,"Unexpected function call"),c);
;
;};
struct ast_AST* funcCall_calling;funcCall_calling = _global_Array_pop_rast_AST(&(((funcCall_self)->current_node)->nodes),c);;
ast_AST_add(funcCall_func_call,funcCall_calling,c);
parser_Parser_push_current_node(funcCall_self,funcCall_func_call,c);
(funcCall_self)->num_paren=(funcCall_self)->num_paren+1;;
;while((funcCall_self)->num_paren>funcCall_num_paren){parser_Parser_next(funcCall_self,c);parser_Parser_eval(funcCall_self,c);};
parser_Parser_pop_current_node(funcCall_self,c);
;return NULL;
;}

void funcCallInitTypes() { 
 
 }
void funcCallInit() { 
;
};