void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* x);
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* x);
struct _global_String* _global_StaticArray_op_get_4_string(struct _global_StaticArray_4_string* _global_self, unsigned int _global_index, struct _global_Context* x);
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* x);
struct lexer_Token* _global_Maybe_unwrap_rlexer_TokenByValue(struct lexer_Token* _global_self, struct _global_Context* x);

static inline struct lexer_Token* _global_Maybe_unwrap_rlexer_Token(struct lexer_Token**,struct _global_Context* x);

struct lexer_Token* _global_Maybe_unwrap_rlexer_TokenByValue(struct lexer_Token*,struct _global_Context* x);
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* x);
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* x);
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* x);
void _global_Array_clear_char(struct _global_Array_char* _global_self, struct _global_Context* x);
_Bool _global_StaticArray_contains_4_string(struct _global_StaticArray_4_string* _global_self, struct _global_String _global_elem, struct _global_Context* x);
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* x);
struct _global_String lexer_TokenType_toString(struct lexer_TokenType* lexer_self, struct _global_Context* x){;
struct _global_EnumType* lexer_enum_type;lexer_enum_type = lexer_TokenType_get_type(NULL,x);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((lexer_enum_type)->cases),(unsigned int)(lexer_self)->tag,x))).name;
;}
static inline struct _global_String lexer_TokenType_toStringByValue(struct lexer_TokenType y,struct _global_Context* x){
return lexer_TokenType_toString(&y,x);
}struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* x){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((lexer_self)->kind),x),x),_global_StringInit(3," : "),x),((lexer_self)->value),x),_global_StringInit(0,""),x);
;}
static inline struct _global_String lexer_Token_toStringByValue(struct lexer_Token y,struct _global_Context* x){
return lexer_Token_toString(&y,x);
}struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
;return (lexer_self)->filename;
;}
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
;return (lexer_self)->line;
;}
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
;return *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,x));
;}
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
(lexer_self)->i=(lexer_self)->i+1;;
;return ((lexer_self)->i<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,x)):('\0'));
;}
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
;return ((lexer_self)->i+1<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i+1,x)):('\0'));
;}
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* x){;
char* lexer_buffer;lexer_buffer = _global_longterm_alloc_char((uint64_t)(lexer_arr).length,x);;
_global_memcpy_char(lexer_buffer,(lexer_arr).data,(lexer_arr).length,x);
;return _global_make_String((lexer_arr).length,lexer_buffer,x);
;}
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
if(((lexer_self)->tok).length>0){;
struct lexer_TokenType lexer_kind;struct _global_String lexer_value;struct plexer_TokenTypecstringp y;y = lexer_determine_token(lexer_char_array_toString(_global_StaticArray_StaticArray_S_charInit((lexer_self)->tok.data, (lexer_self)->tok.length),x),x);lexer_kind=y.field0;lexer_value=y.field1;;
if((lexer_kind).tag==(lexer_Invalid).tag){;
return error_make_Error_rlexer_Lexer(lexer_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown token "),(lexer_char_array_toString(_global_StaticArray_StaticArray_S_charInit((lexer_self)->tok.data, (lexer_self)->tok.length),x)),x),_global_StringInit(0,""),x),x);
;
;};
lexer_Lexer_append_token(lexer_self,lexer_kind,lexer_value,x);
;};
_global_Array_clear_char(&((lexer_self)->tok),x);
;return NULL;
;}
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
;return (lexer_self)->column;
;}
_Bool lexer_is_digit(char lexer_c, struct _global_Context* x){;
;return ((int)'0')<=((int)lexer_c)&&((int)lexer_c)<=((int)'9');
;}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerc(struct _global_Maybe_Maybe_T C) {
struct _global_Maybe_plexer_TokenTypecstringp B;B.tag = C.tag;B.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(C.cases);return B;
}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerd(struct _global_Maybe_Maybe_T F) {
struct _global_Maybe_plexer_TokenTypecstringp D;D.tag = F.tag;D.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(F.cases);return D;
}
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* x){;
_Bool lexer_dot;lexer_dot = 0;;
struct _global_Range y =_global_RangeInit(0,(lexer_s).length);
for (unsigned int z = y.start; z < y.end; z++) {
unsigned int lexer_i;lexer_i = z;
;if(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,x))=='.'){;
if(lexer_dot){;
return tmplexerc(_global_None);
;
;};
lexer_dot=1;;
;}else if(!(lexer_is_digit(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,x)),x))){;
return tmplexerd(_global_None);
;
;};
}
;
;return (lexer_dot ? _global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Float,lexer_s),x):(_global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Integer,lexer_s),x)));
;}
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* x){;
;return 1;
;}
struct _global_StaticArray_4_string lexer_keywords;_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* x){;
;return _global_StaticArray_contains_4_string(&(lexer_keywords),lexer_s,x);
;}
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* x){;
;struct _global_Maybe_plexer_TokenTypecstringp y =lexer_is_number(lexer_s,x);
if(y.tag==0){struct plexer_TokenTypecstringp lexer_token = y.cases.Some.field0;
return lexer_token;}else if(1){return (lexer_is_keyword(lexer_s,x) ? plexer_TokenTypecstringpInit(lexer_Keyword,lexer_s) : (lexer_is_identifier(lexer_s,x)) ? plexer_TokenTypecstringpInit(lexer_Identifier,lexer_s):(plexer_TokenTypecstringpInit(lexer_Invalid,lexer_s)));};
;}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* x){;
;
struct _global_Array_lexer_Token lexer_tokens;lexer_tokens = _global_Array_lexer_TokenInit(0, 0, NULL, NULL);;
(lexer_tokens).allocator=(x)->longterm_storage;;
struct lexer_Lexer lexer_lexer;lexer_lexer = lexer_LexerInit(_global_Array_charInit(0, 0, NULL, NULL),lexer_src,0,lexer_tokens,lexer_filename,1,0);;
;return lexer_Lexer_lex(&(lexer_lexer),x);
;}
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* x){;
;
;
struct lexer_Token lexer_tok;lexer_tok = lexer_TokenInit(lexer_kind,lexer_value,(lexer_self)->line,((lexer_self)->column-((lexer_value).length/2))-1);;
_global_Array_append_lexer_Token(&((lexer_self)->tokens),lexer_tok,x);
;}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerf(struct _global_Result_rerror_CompilerError_Result_T F) {
struct _global_Result_rerror_CompilerError___lexer_Token D;D.tag = F.tag;D.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(F.cases);return D;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerg(struct _global_Result_rerror_CompilerError_Result_T J) {
struct _global_Result_rerror_CompilerError___lexer_Token H;H.tag = J.tag;H.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(J.cases);return H;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerh(struct _global_Result_rerror_CompilerError_Result_T M) {
struct _global_Result_rerror_CompilerError___lexer_Token L;L.tag = M.tag;L.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(M.cases);return L;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerj(struct _global_Result_rerror_CompilerError_Result_T Q) {
struct _global_Result_rerror_CompilerError___lexer_Token P;P.tag = Q.tag;P.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(Q.cases);return P;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerk(struct _global_Result_rerror_CompilerError_Result_T V) {
struct _global_Result_rerror_CompilerError___lexer_Token T;T.tag = V.tag;T.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(V.cases);return T;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerl(struct _global_Result_rerror_CompilerError_Result_T Y) {
struct _global_Result_rerror_CompilerError___lexer_Token X;X.tag = Y.tag;X.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(Y.cases);return X;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerm(struct _global_Result_rerror_CompilerError_Result_T bd) {
struct _global_Result_rerror_CompilerError___lexer_Token bc;bc.tag = bd.tag;bc.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bd.cases);return bc;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexern(struct _global_Result_rerror_CompilerError_Result_T bh) {
struct _global_Result_rerror_CompilerError___lexer_Token bg;bg.tag = bh.tag;bg.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bh.cases);return bg;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerp(struct _global_Result_rerror_CompilerError_Result_T bm) {
struct _global_Result_rerror_CompilerError___lexer_Token bl;bl.tag = bm.tag;bl.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bm.cases);return bl;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerq(struct _global_Result_rerror_CompilerError_Result_T bq) {
struct _global_Result_rerror_CompilerError___lexer_Token bp;bp.tag = bq.tag;bp.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bq.cases);return bp;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerr(struct _global_Result_rerror_CompilerError_Result_T bw) {
struct _global_Result_rerror_CompilerError___lexer_Token bv;bv.tag = bw.tag;bv.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bw.cases);return bv;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexers(struct _global_Result_rerror_CompilerError_Result_T bz) {
struct _global_Result_rerror_CompilerError___lexer_Token by;by.tag = bz.tag;by.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bz.cases);return by;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexert(struct _global_Result_Result_E___lexer_Token bD) {
struct _global_Result_rerror_CompilerError___lexer_Token bC;bC.tag = bD.tag;bC.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bD.cases);return bC;
}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* x){;
struct _global_Allocator* y = (x)->allocator;
uint64_t z = _global_Allocator_get_occupied((x)->allocator,x);
;
;while((lexer_self)->i<((lexer_self)->src).length){char lexer_t;lexer_t = lexer_Lexer_current(lexer_self,x);;(lexer_self)->column=(lexer_self)->column+1;;char B =lexer_t;if(B=='('){
struct error_CompilerError* C =lexer_Lexer_reset_tok(lexer_self,x);if(C != NULL){struct error_CompilerError* lexer_e = C;

_global_Allocator_reset_to(y,z,x);
return tmplexerf(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"("),x);
;}
else if(B==')'){
struct error_CompilerError* G =lexer_Lexer_reset_tok(lexer_self,x);if(G != NULL){struct error_CompilerError* lexer_e = G;

_global_Allocator_reset_to(y,z,x);
return tmplexerg(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,")"),x);
;}
else if(B==' '){
struct error_CompilerError* K =lexer_Lexer_reset_tok(lexer_self,x);if(K != NULL){struct error_CompilerError* lexer_e = K;

_global_Allocator_reset_to(y,z,x);
return tmplexerh(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
;}
else if(B==':'){
struct error_CompilerError* N =lexer_Lexer_reset_tok(lexer_self,x);if(N != NULL){struct error_CompilerError* lexer_e = N;

_global_Allocator_reset_to(y,z,x);
return tmplexerj(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
char R =lexer_Lexer_next(lexer_self,x);if(R=='='){
lexer_Lexer_advance(lexer_self,x);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,":="),x);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,":"),x);
;}
;
;}
else if(B=='\n'){
struct error_CompilerError* S =lexer_Lexer_reset_tok(lexer_self,x);if(S != NULL){struct error_CompilerError* lexer_e = S;

_global_Allocator_reset_to(y,z,x);
return tmplexerk(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
struct stringBuilder_StringBuilder lexer_s;lexer_s = stringBuilder_make_StringBuilder(x);;
((lexer_s).chars).allocator=(x)->longterm_storage;;
;while(lexer_Lexer_next(lexer_self,x)==' '){lexer_Lexer_advance(lexer_self,x);_global_Array_append_char(&((lexer_s).chars),' ',x);};
_global_Array_append_char(&((lexer_s).chars),'\0',x);
(lexer_self)->line=(lexer_self)->line+1;;
(lexer_self)->column=0;;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"\n"),x);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_make_String(((lexer_s).chars).length-1,_global_Maybe_unwrap_rcharByValue(((lexer_s).chars).data,x),x),x);
;}
else if(B=='+'){
struct error_CompilerError* W =lexer_Lexer_reset_tok(lexer_self,x);if(W != NULL){struct error_CompilerError* lexer_e = W;

_global_Allocator_reset_to(y,z,x);
return tmplexerl(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
char Z =lexer_Lexer_next(lexer_self,x);if(Z=='+'){
lexer_Lexer_advance(lexer_self,x);
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(2,"++"),x);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"+"),x);
;}
;
;}
else if(B=='*'){
struct error_CompilerError* bb =lexer_Lexer_reset_tok(lexer_self,x);if(bb != NULL){struct error_CompilerError* lexer_e = bb;

_global_Allocator_reset_to(y,z,x);
return tmplexerm(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"*"),x);
;}
else if(B=='/'){
struct error_CompilerError* bf =lexer_Lexer_reset_tok(lexer_self,x);if(bf != NULL){struct error_CompilerError* lexer_e = bf;

_global_Allocator_reset_to(y,z,x);
return tmplexern(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
char bj =lexer_Lexer_next(lexer_self,x);if(bj=='/'){
struct error_CompilerError* bk =lexer_Lexer_reset_tok(lexer_self,x);if(bk != NULL){struct error_CompilerError* lexer_e = bk;

_global_Allocator_reset_to(y,z,x);
return tmplexerp(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
;while(!(lexer_Lexer_current(lexer_self,x)=='\n')){lexer_Lexer_advance(lexer_self,x);};
;}
else if(bj=='*'){
struct error_CompilerError* bn =lexer_Lexer_reset_tok(lexer_self,x);if(bn != NULL){struct error_CompilerError* lexer_e = bn;

_global_Allocator_reset_to(y,z,x);
return tmplexerq(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
unsigned int lexer_num;lexer_num = 1;;
;while(lexer_num>0){char br =lexer_Lexer_advance(lexer_self,x);if(br=='*'){
char bs =lexer_Lexer_next(lexer_self,x);if(bs=='/'){
lexer_num=lexer_num-1;;
lexer_Lexer_advance(lexer_self,x);
;}
else if(1){
;}
;
;}
else if(br=='/'){
char bt =lexer_Lexer_next(lexer_self,x);if(bt=='*'){
lexer_num=lexer_num+1;;
lexer_Lexer_advance(lexer_self,x);
;}
else if(1){
;}
;
;}
else if(br=='\0'){
_global_Allocator_reset_to(y,z,x);
return tmplexerr(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rlexer_Lexer(lexer_self,_global_StringInit(12,"Expecting */"),x),x));
;
;}
else if(1){
;}
;};
_global_log_string(_global_StringInit(6,"exited"),x);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"/"),x);
;}
;
;}
else if(1){
_global_Array_append_char(&((lexer_self)->tok),lexer_t,x);
;}
;lexer_Lexer_advance(lexer_self,x);};
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"\n"),x);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_StringInit(0,""),x);
struct error_CompilerError* bx =lexer_Lexer_reset_tok(lexer_self,x);if(bx != NULL){struct error_CompilerError* lexer_e = bx;

_global_Allocator_reset_to(y,z,x);
return tmplexers(_global_Error_rerror_CompilerError_Result_T(lexer_e,x));
;
;}
else if(1){
;}
;
struct _global_Array_lexer_Token lexer_ts;lexer_ts = (lexer_self)->tokens;;
;struct _global_Result_rerror_CompilerError___lexer_Token bB =tmplexert(_global_Ok_Result_E___lexer_Token((_global_StaticArray_StaticArray_S_lexer_TokenInit(lexer_ts.data, lexer_ts.length)),x));
_global_Allocator_reset_to(y,z,x);
return bB;
 }void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* x){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct lexer_Token),x);
;}
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* x){;
struct error_CompilerError* _global_pointer;_global_pointer = (struct error_CompilerError*)(_global_Allocator_alloc((x)->longterm_storage,(uint64_t)sizeof(struct error_CompilerError),x));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct _global_String* _global_StaticArray_op_get_4_string(struct _global_StaticArray_4_string* _global_self, unsigned int _global_index, struct _global_Context* x){;
;
_global_assert(_global_index<4,_global_StringInit(13,"Out of bounds"),x);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct lexer_Token* tmplexerv(struct _global_Array_lexer_Token** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* x) {
struct lexer_Token* y =(*_global_self)->data;
if(y != NULL){struct lexer_Token* _global_data = y;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),x);
struct lexer_Token* _global_newData;_global_newData = (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),x));;
_global_memcpy_lexer_Token(_global_newData,_global_data,(*_global_self)->length,x);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,x);
return _global_newData;}else if(y == NULL){return (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),x));}
}
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* x){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(x)->allocator,x);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmplexerv(&_global_self,&_global_newSize,&_global_allocator, x);;
;}
struct lexer_Token* _global_Maybe_unwrap_rlexer_TokenByValue(struct lexer_Token* _global_self, struct _global_Context* x){;
struct lexer_Token* _global_x;;
struct lexer_Token* y =_global_self;if(y != NULL){_global_x = y;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),x);
;}
;
;return _global_x;
;}
static inline struct lexer_Token* _global_Maybe_unwrap_rlexer_Token(struct lexer_Token** z,struct _global_Context* x){
return _global_Maybe_unwrap_rlexer_TokenByValue(*z,x);
}struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* x){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),x);
;return ((_global_self)->data + (int64_t)_global_index);
;}
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* x){;
;return (char*)(_global_Allocator_alloc((x)->longterm_storage,_global_num*(uint64_t)sizeof(char),x));
;}
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* x){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(lexer_Lexer_get_filename(error_self,x),lexer_Lexer_get_line(error_self,x),error_mesg,lexer_Lexer_get_column(error_self,x)),x);
;}
void _global_Array_clear_char(struct _global_Array_char* _global_self, struct _global_Context* x){;
(_global_self)->length=0;;
;}
_Bool _global_StaticArray_contains_4_string(struct _global_StaticArray_4_string* _global_self, struct _global_String _global_elem, struct _global_Context* x){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<4){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_4_string(_global_self,(unsigned int)_global_i,x))),&(_global_elem),x)){;
return 1;
;
;};_global_i=_global_i+1;;};
;return 0;
;}
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* x){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_lexer_Token(_global_self,1,x);
;}
else{_global_Array_reserve_lexer_Token(_global_self,(_global_self)->capacity*2,x);
;};
;};
*(((_global_Maybe_unwrap_rlexer_TokenByValue((_global_self)->data,x) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

void lexerInitTypes() { 
 errorInitTypes();
lexer_Integer.tag = 0;
lexer_Float.tag = 1;
lexer_Identifier.tag = 2;
lexer_Operator.tag = 3;
lexer_Invalid.tag = 4;
lexer_Symbol.tag = 5;
lexer_Indent.tag = 6;
lexer_Keyword.tag = 7;
struct _global_Case* c =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 8);
c[0].name = _global_StringInit(7, "Integer");
c[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[1].name = _global_StringInit(5, "Float");
c[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[2].name = _global_StringInit(10, "Identifier");
c[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[3].name = _global_StringInit(8, "Operator");
c[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[4].name = _global_StringInit(7, "Invalid");
c[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[5].name = _global_StringInit(6, "Symbol");
c[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[6].name = _global_StringInit(6, "Indent");
c[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[7].name = _global_StringInit(7, "Keyword");
c[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
lexer_TokenTypeType.tag_field.name = _global_StringInit(3, "tag");

lexer_TokenTypeType.tag_field.offset = offsetof(struct lexer_TokenType, tag);
lexer_TokenTypeType.tag_field.field_type = 
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

lexer_TokenTypeType.size = sizeof(struct lexer_TokenType);

lexer_TokenTypeType.package = _global_StringInit(5, "lexer");
lexer_TokenTypeType.name = _global_StringInit(9, "TokenType");
lexer_TokenTypeType.cases.data = c;
lexer_TokenTypeType.cases.length = 8;
lexer_TokenType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
lexer_TokenType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_TokenType_fields
,4
);
lexer_TokenType.package = _global_StringInit(5, "lexer");
lexer_TokenType.name = _global_StringInit(5, "Token");
lexer_TokenType.size = sizeof(struct lexer_Token);
lexer_TokenType_fields[0].name = _global_StringInit(4, "kind");
lexer_TokenType_fields[0].offset = offsetof(struct lexer_Token, kind);
lexer_TokenType_fields[0].field_type = 
_global_TypeFromStruct(
lexer_TokenType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
lexer_TokenType_fields[1].name = _global_StringInit(5, "value");
lexer_TokenType_fields[1].offset = offsetof(struct lexer_Token, value);
lexer_TokenType_fields[1].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
lexer_TokenType_fields[2].name = _global_StringInit(4, "line");
lexer_TokenType_fields[2].offset = offsetof(struct lexer_Token, line);
lexer_TokenType_fields[2].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
lexer_TokenType_fields[3].name = _global_StringInit(6, "column");
lexer_TokenType_fields[3].offset = offsetof(struct lexer_Token, column);
lexer_TokenType_fields[3].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_lexer_TokenType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_lexer_TokenType.size->tag = 1;
_global_Array_lexer_TokenType.array_type=
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rlexer_TokenType.p_type =
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rlexer_TokenType.nullable = 1;lexer_LexerType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
lexer_LexerType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_LexerType_fields
,7
);
lexer_LexerType.package = _global_StringInit(5, "lexer");
lexer_LexerType.name = _global_StringInit(5, "Lexer");
lexer_LexerType.size = sizeof(struct lexer_Lexer);
lexer_LexerType_fields[0].name = _global_StringInit(3, "tok");
lexer_LexerType_fields[0].offset = offsetof(struct lexer_Lexer, tok);
lexer_LexerType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_char_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
lexer_LexerType_fields[1].name = _global_StringInit(3, "src");
lexer_LexerType_fields[1].offset = offsetof(struct lexer_Lexer, src);
lexer_LexerType_fields[1].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
lexer_LexerType_fields[2].name = _global_StringInit(1, "i");
lexer_LexerType_fields[2].offset = offsetof(struct lexer_Lexer, i);
lexer_LexerType_fields[2].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
lexer_LexerType_fields[3].name = _global_StringInit(6, "tokens");
lexer_LexerType_fields[3].offset = offsetof(struct lexer_Lexer, tokens);
lexer_LexerType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Array_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
lexer_LexerType_fields[4].name = _global_StringInit(8, "filename");
lexer_LexerType_fields[4].offset = offsetof(struct lexer_Lexer, filename);
lexer_LexerType_fields[4].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
lexer_LexerType_fields[5].name = _global_StringInit(4, "line");
lexer_LexerType_fields[5].offset = offsetof(struct lexer_Lexer, line);
lexer_LexerType_fields[5].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
lexer_LexerType_fields[6].name = _global_StringInit(6, "column");
lexer_LexerType_fields[6].offset = offsetof(struct lexer_Lexer, column);
lexer_LexerType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StaticArray_StaticArray_S_charType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_charType.size->tag = 2;
_global_StaticArray_StaticArray_S_charType.array_type=
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
rCharType_VTABLE_FOR_Type.type
, &_global_CharType_toString
, &_global_CharType_get_size
)
;_global_Maybe_rerror_CompilerErrorType.p_type =
_global_TypeFromStruct(
error_CompilerError_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rerror_CompilerErrorType.nullable = 1;struct _global_Case* n =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
n[0].name = _global_StringInit(4, "Some");
n[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
n[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; n[0].args.data[0].offset = offsetof(struct _global_Maybe_plexer_TokenTypecstringp_Some, field0);
n[1].name = _global_StringInit(4, "None");
n[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_plexer_TokenTypecstringpType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_plexer_TokenTypecstringpType.tag_field.offset = offsetof(struct _global_Maybe_plexer_TokenTypecstringp, tag);
_global_Maybe_plexer_TokenTypecstringpType.tag_field.field_type = 
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

_global_Maybe_plexer_TokenTypecstringpType.size = sizeof(struct _global_Maybe_plexer_TokenTypecstringp);

_global_Maybe_plexer_TokenTypecstringpType.package = _global_StringInit(7, "_global");
_global_Maybe_plexer_TokenTypecstringpType.name = _global_StringInit(30, "Maybe_plexer_TokenTypecstringp");
_global_Maybe_plexer_TokenTypecstringpType.cases.data = n;
_global_Maybe_plexer_TokenTypecstringpType.cases.length = 2;
_global_StaticArray_StaticArray_S_lexer_TokenType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_lexer_TokenType.size->tag = 2;
_global_StaticArray_StaticArray_S_lexer_TokenType.array_type=
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;struct _global_Case* y =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
y[0].name = _global_StringInit(2, "Ok");
y[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; y[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Ok, field0);
y[1].name = _global_StringInit(5, "Error");
y[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[1].args.data[0].arg_type = 
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
; y[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Error, field0);
_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token, tag);
_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError___lexer_TokenType.size = sizeof(struct _global_Result_rerror_CompilerError___lexer_Token);

_global_Result_rerror_CompilerError___lexer_TokenType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError___lexer_TokenType.name = _global_StringInit(41, "Result_rerror_CompilerError___lexer_Token");
_global_Result_rerror_CompilerError___lexer_TokenType.cases.data = y;
_global_Result_rerror_CompilerError___lexer_TokenType.cases.length = 2;
_global_StaticArray_4_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_4_stringType.size->tag = 0;
_global_StaticArray_4_stringType.size->cases.Static.field0 = 4;
_global_StaticArray_4_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;struct _global_Case* N =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
N[0].name = _global_StringInit(2, "Ok");
N[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
N[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; N[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Ok, field0);
N[1].name = _global_StringInit(5, "Error");
N[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
N[1].args.data[0].arg_type = 
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
; N[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Error, field0);
_global_Result_rerror_CompilerError_Result_TType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_Result_TType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T, tag);
_global_Result_rerror_CompilerError_Result_TType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError_Result_TType.size = sizeof(struct _global_Result_rerror_CompilerError_Result_T);

_global_Result_rerror_CompilerError_Result_TType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_Result_TType.name = _global_StringInit(36, "Result_rerror_CompilerError_Result_T");
_global_Result_rerror_CompilerError_Result_TType.cases.data = N;
_global_Result_rerror_CompilerError_Result_TType.cases.length = 2;
struct _global_Case* X =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
X[0].name = _global_StringInit(2, "Ok");
X[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
X[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; X[0].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Ok, field0);
X[1].name = _global_StringInit(5, "Error");
X[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
X[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; X[1].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Error, field0);
_global_Result_Result_E___lexer_TokenType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E___lexer_TokenType.tag_field.offset = offsetof(struct _global_Result_Result_E___lexer_Token, tag);
_global_Result_Result_E___lexer_TokenType.tag_field.field_type = 
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

_global_Result_Result_E___lexer_TokenType.size = sizeof(struct _global_Result_Result_E___lexer_Token);

_global_Result_Result_E___lexer_TokenType.package = _global_StringInit(7, "_global");
_global_Result_Result_E___lexer_TokenType.name = _global_StringInit(29, "Result_Result_E___lexer_Token");
_global_Result_Result_E___lexer_TokenType.cases.data = X;
_global_Result_Result_E___lexer_TokenType.cases.length = 2;
 }
void lexerInit() { 
errorInit();;
;
;
lexer_keywords = _global_StaticArray_4_stringInit(_global_StringInit(4,"true"),_global_StringInit(5,"false"),_global_StringInit(2,"if"),_global_StringInit(4,"else"));;
;
};