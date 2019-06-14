struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* c){;
struct ast_AST* funcCall_func_call;funcCall_func_call = ast_make_AST_rparser_Parser(funcCall_self,ast_FuncCall,c);;
struct ast_AST* funcCall_calling;struct error_CompilerError* funcCall_e;;
struct _global_Result_rerror_CompilerError_rast_AST d =parser_Parser_pop(funcCall_self,_global_StringInit(24,"Unexpected function call"),c);if(d.tag==0){funcCall_calling = d.cases.Ok.field0;

;}
else if(d.tag==1){funcCall_e = d.cases.Error.field0;

return funcCall_e;
;
;}
;
ast_AST_add(funcCall_func_call,funcCall_calling,c);
parser_Parser_push_current_node(funcCall_self,funcCall_func_call,c);
unsigned int funcCall_num_paren;funcCall_num_paren = parser_Parser_push_paren(funcCall_self,c);;
;while((funcCall_self)->num_paren>funcCall_num_paren){struct _global_String f =(parser_Parser_next(funcCall_self,c)).value;if(_global_String_op_eqByValue(f,_global_StringInit(1,","),NULL)){
struct error_CompilerError* g =parser_Parser_comma(funcCall_self,c);if(g != NULL){struct error_CompilerError* funcCall__x = g;

return funcCall__x;
;
;}
else if(1){
;}
;
;}
else if(1){
struct error_CompilerError* h =parser_Parser_eval(funcCall_self,c);if(h != NULL){struct error_CompilerError* funcCall__x = h;

return funcCall__x;
;
;}
else if(1){
;}
;
;}
;};
struct error_CompilerError* j =parser_Parser_pop_current_node(funcCall_self,c);if(j != NULL){struct error_CompilerError* funcCall__x = j;

return funcCall__x;
;
;}
else if(1){
;}
;
;return NULL;
;}

void funcCallInitTypes() { 
 
 }
void funcCallInit() { 
;
};