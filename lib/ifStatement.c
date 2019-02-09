struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST* _global_self, struct _global_Context* f);

static inline struct ast_AST* _global_Maybe_unwrap_rast_AST(struct ast_AST**,struct _global_Context* f);

struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST*,struct _global_Context* f);
struct error_CompilerError* ifStatement_if_body(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
struct ast_AST* ifStatement_cond;ifStatement_cond = ast_make_AST_rparser_Parser(ifStatement_self,ast_IfCondition,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_cond,f);
_Bool ifStatement_in_block;ifStatement_in_block = 0;;
unsigned int ifStatement_indent;ifStatement_indent = (ifStatement_self)->num_indent;;
;while(!(((parser_Parser_is_end(ifStatement_self,ifStatement_indent,f))&&ifStatement_in_block))){struct lexer_Token ifStatement_token;ifStatement_token = parser_Parser_next(ifStatement_self,f);;if(_global_String_op_eqByValue((ifStatement_token).value,_global_StringInit(1,":"),f)&&!(ifStatement_in_block)){;
parser_Parser_pop_current_node(ifStatement_self,f);
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
ifStatement_in_block=1;;
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
 continue;;
;};parser_Parser_eval(ifStatement_self,f);};
parser_Parser_pop_current_node(ifStatement_self,f);
;return NULL;
;}
struct error_CompilerError* ifStatement_if_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
struct ast_AST* ifStatement_toplevel;ifStatement_toplevel = ast_make_AST_rparser_Parser(ifStatement_self,ast_If,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_toplevel,f);
struct error_CompilerError* g =ifStatement_if_body(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement_e = g;

return ifStatement_e;
;
;}
else if(1){
;}
;
parser_Parser_pop_current_node(ifStatement_self,f);
;return NULL;
;}
struct error_CompilerError* ifStatement_else_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
_Bool ifStatement_is_if_condition;ifStatement_is_if_condition = 0;;
if((((ifStatement_self)->current_node)->nodes).length>0){;
struct ast_AST* ifStatement_node;ifStatement_node = *(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
if(((ifStatement_node)->payload).tag==(ast_If).tag){;
_global_assert(((ifStatement_node)->nodes).length>=2,_global_StringInit(17,"If block is empty"),f);
struct ast_AST* ifStatement_if_condition;ifStatement_if_condition = *(_global_Array_op_get_rast_AST(&((ifStatement_node)->nodes),(unsigned int)((ifStatement_node)->nodes).length-2,f));;
ifStatement_is_if_condition=((ifStatement_if_condition)->payload).tag==(ast_IfCondition).tag;;
;};
;};
if(!(ifStatement_is_if_condition)){;
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(15,"Unexpected else"),f);
;
;};
if(!(_global_String_op_eqByValue((parser_Parser_next(ifStatement_self,f)).value,_global_StringInit(1,":"),f))){;
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(11,"Expecting :"),f);
;
;};
(ifStatement_self)->current_node=*(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
ast_AST_add((ifStatement_self)->current_node,ast_make_AST_rparser_Parser(ifStatement_self,ast_Else,f),f);
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
unsigned int ifStatement_indent;ifStatement_indent = (ifStatement_self)->num_indent;;
;while(!((parser_Parser_is_end(ifStatement_self,ifStatement_indent,f)))){parser_Parser_next(ifStatement_self,f);parser_Parser_eval(ifStatement_self,f);};
parser_Parser_pop_current_node(ifStatement_self,f);
(ifStatement_self)->current_node=_global_Maybe_unwrap_rast_ASTByValue(((ifStatement_self)->current_node)->owner,f);;
;return NULL;
;}
struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST* _global_self, struct _global_Context* f){;
struct ast_AST* _global_x;;
struct ast_AST* g =_global_self;if(g != NULL){_global_x = g;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),f);
;}
;
;return _global_x;
;}
static inline struct ast_AST* _global_Maybe_unwrap_rast_AST(struct ast_AST** h,struct _global_Context* f){
return _global_Maybe_unwrap_rast_ASTByValue(*h,f);
}
void ifStatementInitTypes() { 
 
 }
void ifStatementInit() { 
;
;
};