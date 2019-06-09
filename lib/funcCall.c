struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* c){;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct ast_AST* funcCall_func_call;funcCall_func_call = ast_make_AST_rparser_Parser(funcCall_self,ast_FuncCall,c);;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct ast_AST* funcCall_calling;struct error_CompilerError* funcCall_e;;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct _global_Result_rerror_CompilerError_rast_AST d =parser_Parser_pop(funcCall_self,_global_StringInit(24,"Unexpected function call"),c);if(d.tag==0){funcCall_calling = d.cases.Ok.field0;

#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
else if(d.tag==1){funcCall_e = d.cases.Error.field0;

#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
return funcCall_e;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
ast_AST_add(funcCall_func_call,funcCall_calling,c);
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
parser_Parser_push_current_node(funcCall_self,funcCall_func_call,c);
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
unsigned int funcCall_num_paren;funcCall_num_paren = parser_Parser_push_paren(funcCall_self,c);;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;while((funcCall_self)->num_paren>funcCall_num_paren){struct _global_String f =(parser_Parser_next(funcCall_self,c)).value;if(_global_String_op_eqByValue(f,_global_StringInit(1,","),NULL)){
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct error_CompilerError* g =parser_Parser_comma(funcCall_self,c);if(g != NULL){struct error_CompilerError* funcCall__x = g;

#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
return funcCall__x;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
else if(1){
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
else if(1){
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct error_CompilerError* h =parser_Parser_eval(funcCall_self,c);if(h != NULL){struct error_CompilerError* funcCall__x = h;

#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
return funcCall__x;
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
else if(1){
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;};
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
struct error_CompilerError* j =parser_Parser_pop_current_node(funcCall_self,c);if(j != NULL){struct error_CompilerError* funcCall__x = j;

#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
return funcCall__x;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
else if(1){
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;}
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/funcCall.top"
;return NULL;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}

void funcCallInitTypes() { 
 
 }
void funcCallInit() { 
;
};