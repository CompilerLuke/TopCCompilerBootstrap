struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST* _global_self, struct _global_Context* f);

static inline struct ast_AST* _global_Maybe_unwrap_rast_AST(struct ast_AST**,struct _global_Context* f);

struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST*,struct _global_Context* f);
struct error_CompilerError* ifStatement_if_body(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_cond;ifStatement_cond = ast_make_AST_rparser_Parser(ifStatement_self,ast_Condition,f);;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
parser_Parser_push_current_node(ifStatement_self,ifStatement_cond,f);
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
_Bool ifStatement_in_block;ifStatement_in_block = 0;;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;while(!(parser_Parser_is_end(ifStatement_self,f))){struct lexer_Token ifStatement_token;ifStatement_token = parser_Parser_next(ifStatement_self,f);;if(_global_String_op_eqByValue((ifStatement_token).value,_global_StringInit(1,":"),f)&&!(ifStatement_in_block)){;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct error_CompilerError* g =parser_Parser_pop_current_node(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
ifStatement_in_block = 1;;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
else{struct error_CompilerError* h =parser_Parser_eval(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};};
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
if(!(ifStatement_in_block)){;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(11,"Expecting :"),f);
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct error_CompilerError* j =parser_Parser_pop_current_node(ifStatement_self,f);if(j != NULL){struct error_CompilerError* ifStatement__x = j;

#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;return NULL;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* ifStatement_if_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_toplevel;ifStatement_toplevel = ast_make_AST_rparser_Parser(ifStatement_self,ast_If,f);;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
parser_Parser_push_current_node(ifStatement_self,ifStatement_toplevel,f);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct error_CompilerError* g =ifStatement_if_body(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct error_CompilerError* h =parser_Parser_pop_current_node(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;return NULL;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* ifStatement_else_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
parser_Parser_expect_next_token(ifStatement_self,_global_StringInit(1,":"),_global_StringInit(11,"Expecting :"),f);
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
_Bool ifStatement_is_if_condition;ifStatement_is_if_condition = 0;;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
if((((ifStatement_self)->current_node)->nodes).length>0){;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_node;ifStatement_node = *(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
if(((ifStatement_node)->payload).tag==(ast_If).tag){;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
_global_assert(((ifStatement_node)->nodes).length>=2,_global_StringInit(17,"If block is empty"),f);
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_if_condition;ifStatement_if_condition = *(_global_Array_op_get_rast_AST(&((ifStatement_node)->nodes),(unsigned int)((ifStatement_node)->nodes).length-2,f));;
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
ifStatement_is_if_condition = ((ifStatement_if_condition)->payload).tag==(ast_Condition).tag;;
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
if(!(ifStatement_is_if_condition)){;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(15,"Unexpected else"),f);
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
(ifStatement_self)->current_node = *(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
ast_AST_add((ifStatement_self)->current_node,ast_make_AST_rparser_Parser(ifStatement_self,ast_Else,f),f);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;while(!(parser_Parser_is_end(ifStatement_self,f))){parser_Parser_next(ifStatement_self,f);struct error_CompilerError* g =parser_Parser_eval(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;};
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
struct error_CompilerError* h =parser_Parser_pop_current_node(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
return ifStatement__x;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
else if(1){
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;}
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
(ifStatement_self)->current_node = _global_Maybe_unwrap_rast_ASTByValue(((ifStatement_self)->current_node)->owner,f);;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;return NULL;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST* _global_self, struct _global_Context* f){;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
struct ast_AST* _global_x;;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
struct ast_AST* g =_global_self;if(g != NULL){_global_x = g;

#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
else if(1){
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),f);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;return _global_x;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
static inline struct ast_AST* _global_Maybe_unwrap_rast_AST(struct ast_AST** h,struct _global_Context* f){
return _global_Maybe_unwrap_rast_ASTByValue(*h,f);
}
void ifStatementInitTypes() { 
 
 }
void ifStatementInit() { 
;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/ifStatement.top"
;
};