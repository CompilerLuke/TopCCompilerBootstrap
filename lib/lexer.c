void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* C);
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* C);
struct _global_String* _global_StaticArray_op_get_7_string(struct _global_StaticArray_7_string* _global_self, unsigned int _global_index, struct _global_Context* C);
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* C);
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* C);
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* C);
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* C);
_Bool _global_StaticArray_contains_7_string(struct _global_StaticArray_7_string* _global_self, struct _global_String _global_elem, struct _global_Context* C);
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* C);
struct _global_String lexer_TokenType_toString(struct lexer_TokenType* lexer_self, struct _global_Context* C){;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct _global_EnumType* lexer_enum_type;lexer_enum_type = lexer_TokenType_get_type(NULL,C);;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((lexer_enum_type)->cases),(unsigned int)(lexer_self)->tag,C))).name;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
static inline struct _global_String lexer_TokenType_toStringByValue(struct lexer_TokenType D,struct _global_Context* C){
return lexer_TokenType_toString(&D,C);
}struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* C){;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((lexer_self)->kind),C),C),_global_StringInit(3," : "),C),((lexer_self)->value),C),_global_StringInit(0,""),C);
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
static inline struct _global_String lexer_Token_toStringByValue(struct lexer_Token D,struct _global_Context* C){
return lexer_Token_toString(&D,C);
}unsigned int lexer_Tok_length(struct lexer_Tok* lexer_self, struct _global_Context* C){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (lexer_self)->end-(lexer_self)->start;
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct _global_String lexer_Tok_slice(struct lexer_Tok* lexer_self, struct _global_String lexer_s, struct _global_Context* C){;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return _global_String_sliceByValue(lexer_s,(lexer_self)->start,(lexer_self)->end,C);
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
void lexer_Tok_clear(struct lexer_Tok* lexer_self, struct _global_Context* C){;
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->active = 0;;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->end = (lexer_self)->start;;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
void lexer_Tok_include(struct lexer_Tok* lexer_self, unsigned int lexer_i, struct _global_Context* C){;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
if(!((lexer_self)->active)){;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->active = 1;;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->start = lexer_i;;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->end = lexer_i+1;;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (lexer_self)->filename;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (lexer_self)->line;
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C));
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->i = (lexer_self)->i+1;;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return ((lexer_self)->i<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C)):('\0'));
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return ((lexer_self)->i+1<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i+1,C)):('\0'));
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* C){;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char* lexer_buffer;lexer_buffer = _global_longterm_alloc_char((uint64_t)(lexer_arr).length+1,C);;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
_global_memcpy_char(lexer_buffer,(lexer_arr).data,(lexer_arr).length,C);
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
*(((lexer_buffer + (int64_t)(lexer_arr).length))) = _global_null_terminated;;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return _global_make_String((lexer_arr).length,lexer_buffer,C);
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
if(lexer_Tok_length(&((lexer_self)->tok),C)>0){;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct lexer_TokenType lexer_kind;struct _global_String lexer_value;struct plexer_TokenTypecstringp D;D = lexer_determine_token(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);lexer_kind=D.field0;lexer_value=D.field1;;
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
if((lexer_kind).tag==(lexer_Invalid).tag){;
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return error_make_Error_rlexer_Lexer(lexer_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown token "),(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C)),C),_global_StringInit(0,""),C),C);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_kind,lexer_value,C);
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Tok_clear(&((lexer_self)->tok),C);
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return NULL;
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (lexer_self)->column;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
_Bool lexer_is_digit(char lexer_c, struct _global_Context* C){;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return ((int)'0')<=((int)lexer_c)&&((int)lexer_c)<=((int)'9');
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerc(struct _global_Maybe_Maybe_T H) {
struct _global_Maybe_plexer_TokenTypecstringp G;G.tag = H.tag;G.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(H.cases);return G;
}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerd(struct _global_Maybe_Maybe_T K) {
struct _global_Maybe_plexer_TokenTypecstringp J;J.tag = K.tag;J.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(K.cases);return J;
}
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* C){;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
_Bool lexer_dot;lexer_dot = 0;;
#line 102 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct _global_Range D =_global_RangeInit(0,(lexer_s).length);
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
for (unsigned int F = D.start; F < D.end; F++) {
unsigned int lexer_i;lexer_i = F;
;if(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C))=='.'){;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
if(lexer_dot){;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerc(_global_None);
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_dot = 1;;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}else if(!(lexer_is_digit(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C)),C))){;
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerd(_global_None);
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
}
;
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return (lexer_dot ? _global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Float,lexer_s),C):(_global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Integer,lexer_s),C)));
#line 110 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* C){;
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return 1;
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct _global_StaticArray_7_string lexer_keywords;_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* C){;
#line 120 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return _global_StaticArray_contains_7_string(&(lexer_keywords),lexer_s,C);
#line 121 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* C){;
#line 123 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;struct _global_Maybe_plexer_TokenTypecstringp D =lexer_is_number(lexer_s,C);
if(D.tag==0){struct plexer_TokenTypecstringp lexer_token = D.cases.Some.field0;
return lexer_token;}else if(1){return (lexer_is_keyword(lexer_s,C) ? plexer_TokenTypecstringpInit(lexer_Keyword,lexer_s) : ((lexer_is_identifier(lexer_s,C))) ? plexer_TokenTypecstringpInit(lexer_Identifier,lexer_s):(plexer_TokenTypecstringpInit(lexer_Invalid,lexer_s)));};
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* C){;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct _global_Array_lexer_Token lexer_tokens;lexer_tokens = _global_Array_lexer_TokenInit(0, 0, NULL, NULL);;
#line 131 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_tokens).allocator = (C)->longterm_storage;;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct lexer_Lexer lexer_lexer;lexer_lexer = lexer_LexerInit(lexer_TokInit(0,0,0),lexer_src,0,lexer_tokens,lexer_filename,1,0);;
#line 134 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return lexer_Lexer_lex(&(lexer_lexer),C);
#line 144 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* C){;
#line 146 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 146 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 146 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
unsigned int lexer_column;lexer_column = (lexer_self)->column-((lexer_value).length/2);;
#line 147 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
if(lexer_column>0){;
#line 148 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_column = lexer_column-1;;
#line 149 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 148 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct lexer_Token lexer_tok;lexer_tok = lexer_TokenInit(lexer_kind,lexer_value,(lexer_self)->line,lexer_column);;
#line 151 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
_global_Array_append_lexer_Token(&((lexer_self)->tokens),lexer_tok,C);
#line 158 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerf(struct _global_Result_rerror_CompilerError_Result_T H) {
struct _global_Result_rerror_CompilerError___lexer_Token G;G.tag = H.tag;G.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(H.cases);return G;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerg(struct _global_Result_rerror_CompilerError_Result_T L) {
struct _global_Result_rerror_CompilerError___lexer_Token K;K.tag = L.tag;K.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(L.cases);return K;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerh(struct _global_Result_rerror_CompilerError_Result_T P) {
struct _global_Result_rerror_CompilerError___lexer_Token N;N.tag = P.tag;N.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(P.cases);return N;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerj(struct _global_Result_rerror_CompilerError_Result_T S) {
struct _global_Result_rerror_CompilerError___lexer_Token R;R.tag = S.tag;R.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(S.cases);return R;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerk(struct _global_Result_rerror_CompilerError_Result_T W) {
struct _global_Result_rerror_CompilerError___lexer_Token V;V.tag = W.tag;V.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(W.cases);return V;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerl(struct _global_Result_rerror_CompilerError_Result_T bb) {
struct _global_Result_rerror_CompilerError___lexer_Token Z;Z.tag = bb.tag;Z.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bb.cases);return Z;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerm(struct _global_Result_rerror_CompilerError_Result_T bf) {
struct _global_Result_rerror_CompilerError___lexer_Token bd;bd.tag = bf.tag;bd.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bf.cases);return bd;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexern(struct _global_Result_rerror_CompilerError_Result_T bk) {
struct _global_Result_rerror_CompilerError___lexer_Token bj;bj.tag = bk.tag;bj.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bk.cases);return bj;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerp(struct _global_Result_rerror_CompilerError_Result_T bp) {
struct _global_Result_rerror_CompilerError___lexer_Token bn;bn.tag = bp.tag;bn.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bp.cases);return bn;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerq(struct _global_Result_rerror_CompilerError_Result_T bs) {
struct _global_Result_rerror_CompilerError___lexer_Token br;br.tag = bs.tag;br.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bs.cases);return br;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerr(struct _global_Result_rerror_CompilerError_Result_T bw) {
struct _global_Result_rerror_CompilerError___lexer_Token bv;bv.tag = bw.tag;bv.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bw.cases);return bv;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexers(struct _global_Result_rerror_CompilerError_Result_T bz) {
struct _global_Result_rerror_CompilerError___lexer_Token by;by.tag = bz.tag;by.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bz.cases);return by;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexert(struct _global_Result_rerror_CompilerError_Result_T bD) {
struct _global_Result_rerror_CompilerError___lexer_Token bC;bC.tag = bD.tag;bC.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bD.cases);return bC;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerv(struct _global_Result_rerror_CompilerError_Result_T bJ) {
struct _global_Result_rerror_CompilerError___lexer_Token bH;bH.tag = bJ.tag;bH.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bJ.cases);return bH;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerw(struct _global_Result_rerror_CompilerError_Result_T bM) {
struct _global_Result_rerror_CompilerError___lexer_Token bL;bL.tag = bM.tag;bL.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bM.cases);return bL;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerx(struct _global_Result_rerror_CompilerError_Result_T bS) {
struct _global_Result_rerror_CompilerError___lexer_Token bR;bR.tag = bS.tag;bR.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bS.cases);return bR;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexery(struct _global_Result_rerror_CompilerError_Result_T bW) {
struct _global_Result_rerror_CompilerError___lexer_Token bV;bV.tag = bW.tag;bV.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bW.cases);return bV;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerz(struct _global_Result_Result_E___lexer_Token bY) {
struct _global_Result_rerror_CompilerError___lexer_Token bX;bX.tag = bY.tag;bX.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bY.cases);return bX;
}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
#line 160 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;while((lexer_self)->i<((lexer_self)->src).length){char lexer_t;lexer_t = lexer_Lexer_current(lexer_self,C);;(lexer_self)->column = (lexer_self)->column+1;;char D =lexer_t;if(D=='('){
#line 166 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* F =lexer_Lexer_reset_tok(lexer_self,C);if(F != NULL){struct error_CompilerError* lexer__x = F;

#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerf(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"("),C);
#line 168 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 166 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D==')'){
#line 170 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* J =lexer_Lexer_reset_tok(lexer_self,C);if(J != NULL){struct error_CompilerError* lexer__x = J;

#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerg(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 171 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,")"),C);
#line 172 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 170 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='='){
#line 173 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* M =lexer_Lexer_reset_tok(lexer_self,C);if(M != NULL){struct error_CompilerError* lexer__x = M;

#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerh(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"="),C);
#line 175 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 173 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D==' '){
#line 176 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* Q =lexer_Lexer_reset_tok(lexer_self,C);if(Q != NULL){struct error_CompilerError* lexer__x = Q;

#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerj(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 176 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D==':'){
#line 178 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* T =lexer_Lexer_reset_tok(lexer_self,C);if(T != NULL){struct error_CompilerError* lexer__x = T;

#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerk(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char X =lexer_Lexer_next(lexer_self,C);if(X=='='){
#line 181 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 182 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,":="),C);
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 181 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 185 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,":"),C);
#line 186 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 185 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 178 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='\n'){
#line 188 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* Y =lexer_Lexer_reset_tok(lexer_self,C);if(Y != NULL){struct error_CompilerError* lexer__x = Y;

#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerl(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 189 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct stringBuilder_StringBuilder lexer_s;lexer_s = stringBuilder_make_StringBuilder(C);;
#line 191 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
((lexer_s).chars).allocator = (C)->longterm_storage;;
#line 192 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->line = (lexer_self)->line+1;;
#line 194 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
(lexer_self)->column = 0;;
#line 195 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;while(lexer_Lexer_next(lexer_self,C)==' '){lexer_Lexer_advance(lexer_self,C);_global_Array_append_char(&((lexer_s).chars),' ',C);(lexer_self)->column = (lexer_self)->column+1;;};
#line 197 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
_global_Array_append_char(&((lexer_s).chars),'\0',C);
#line 201 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
#line 203 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_make_String(((lexer_s).chars).length-1,_global_Maybe_unwrap_rcharByValue(((lexer_s).chars).data,C),C),C);
#line 204 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 188 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='+'){
#line 206 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bc =lexer_Lexer_reset_tok(lexer_self,C);if(bc != NULL){struct error_CompilerError* lexer__x = bc;

#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerm(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 208 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 207 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char bg =lexer_Lexer_next(lexer_self,C);if(bg=='+'){
#line 210 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 211 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(2,"++"),C);
#line 212 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 210 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(bg=='='){
#line 213 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 214 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"+="),C);
#line 215 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 213 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 216 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"+"),C);
#line 217 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 216 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 209 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 206 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='-'){
#line 219 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bh =lexer_Lexer_reset_tok(lexer_self,C);if(bh != NULL){struct error_CompilerError* lexer__x = bh;

#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexern(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 220 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char bl =lexer_Lexer_next(lexer_self,C);if(bl=='='){
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 224 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"-="),C);
#line 225 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 226 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"-"),C);
#line 227 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 226 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 222 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 219 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='*'){
#line 228 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bm =lexer_Lexer_reset_tok(lexer_self,C);if(bm != NULL){struct error_CompilerError* lexer__x = bm;

#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerp(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"*"),C);
#line 230 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 228 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='<'){
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bq =lexer_Lexer_reset_tok(lexer_self,C);if(bq != NULL){struct error_CompilerError* lexer__x = bq;

#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerq(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 233 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"<"),C);
#line 234 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D==','){
#line 236 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bt =lexer_Lexer_reset_tok(lexer_self,C);if(bt != NULL){struct error_CompilerError* lexer__x = bt;

#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerr(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,","),C);
#line 238 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 236 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='"'){
#line 240 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bx =lexer_Lexer_reset_tok(lexer_self,C);if(bx != NULL){struct error_CompilerError* lexer__x = bx;

#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexers(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 242 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 241 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;while((lexer_self)->i<((lexer_self)->src).length&&!(lexer_Lexer_next(lexer_self,C)=='"')){lexer_Lexer_advance(lexer_self,C);lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);};
#line 243 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_String,lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);
#line 247 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Tok_clear(&((lexer_self)->tok),C);
#line 248 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 249 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 240 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(D=='/'){
#line 251 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bB =lexer_Lexer_reset_tok(lexer_self,C);if(bB != NULL){struct error_CompilerError* lexer__x = bB;

#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexert(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 253 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 252 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char bF =lexer_Lexer_next(lexer_self,C);if(bF=='/'){
#line 255 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bG =lexer_Lexer_reset_tok(lexer_self,C);if(bG != NULL){struct error_CompilerError* lexer__x = bG;

#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerv(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 257 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 256 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;while(!(lexer_Lexer_current(lexer_self,C)=='\n')){lexer_Lexer_advance(lexer_self,C);};
#line 258 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 255 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(bF=='*'){
#line 261 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bK =lexer_Lexer_reset_tok(lexer_self,C);if(bK != NULL){struct error_CompilerError* lexer__x = bK;

#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerw(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 263 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 262 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
unsigned int lexer_num;lexer_num = 1;;
#line 264 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;while(lexer_num>0){char bN =lexer_Lexer_advance(lexer_self,C);if(bN=='*'){
#line 267 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char bP =lexer_Lexer_next(lexer_self,C);if(bP=='/'){
#line 269 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_num = lexer_num-1;;
#line 270 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 271 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 269 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 273 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 273 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 268 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 267 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(bN=='/'){
#line 275 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
char bQ =lexer_Lexer_next(lexer_self,C);if(bQ=='*'){
#line 277 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_num = lexer_num+1;;
#line 278 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_advance(lexer_self,C);
#line 279 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 277 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 281 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 281 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 276 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 275 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(bN=='\0'){
#line 283 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexerx(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rlexer_Lexer(lexer_self,_global_StringInit(12,"Expecting */"),C),C));
#line 284 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 284 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 283 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 285 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 285 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;};
#line 265 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 261 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 287 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"/"),C);
#line 287 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 287 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 254 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 251 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 289 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);
#line 289 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 289 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;lexer_Lexer_advance(lexer_self,C);};
#line 161 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct error_CompilerError* bT =lexer_Lexer_reset_tok(lexer_self,C);if(bT != NULL){struct error_CompilerError* lexer__x = bT;

#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
return tmplexery(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
else if(1){
#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;}
#line 294 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 293 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
#line 295 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_StringInit(0,""),C);
#line 296 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
struct _global_Array_lexer_Token lexer_ts;lexer_ts = (lexer_self)->tokens;;
#line 298 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;return tmplexerz(_global_Ok_Result_E___lexer_Token((_global_StaticArray_StaticArray_S_lexer_TokenInit(lexer_ts.data, lexer_ts.length)),C));
#line 300 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* C){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct lexer_Token),C);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* C){;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct error_CompilerError* _global_pointer;_global_pointer = (struct error_CompilerError*)(_global_Allocator_alloc((C)->longterm_storage,(uint64_t)sizeof(struct error_CompilerError),C));;
#line 102 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct _global_String* _global_StaticArray_op_get_7_string(struct _global_StaticArray_7_string* _global_self, unsigned int _global_index, struct _global_Context* C){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<7,_global_StringInit(13,"Out of bounds"),C);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}

static inline struct lexer_Token* tmplexerB(struct _global_Array_lexer_Token** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* C) {
struct lexer_Token* D =(*_global_self)->data;
if(D != NULL){struct lexer_Token* _global_data = D;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),C);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct lexer_Token* _global_newData;_global_newData = (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_lexer_Token(_global_newData,_global_data,(*_global_self)->length,C);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,C);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(D == NULL){return (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));}
}
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* C){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(C)->allocator,C);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmplexerB(&_global_self,&_global_newSize,&_global_allocator, C);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* C){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),C);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* C){;
#line 89 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return (char*)(_global_Allocator_alloc((C)->longterm_storage,_global_num*(uint64_t)sizeof(char),C));
#line 90 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* C){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
struct error_CompilerError* error_err;error_err = _global_box_longterm_error_CompilerError(error_CompilerErrorInit(lexer_Lexer_get_filename(error_self,C),lexer_Lexer_get_line(error_self,C),error_mesg,lexer_Lexer_get_column(error_self,C)),C);;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
_global_panic(error_CompilerError_toString(error_err,C),C);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;return error_err;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;}
_Bool _global_StaticArray_contains_7_string(struct _global_StaticArray_7_string* _global_self, struct _global_String _global_elem, struct _global_Context* C){;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
unsigned int _global_i;_global_i = 0;;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;while(_global_i<7){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_7_string(_global_self,(unsigned int)_global_i,C))),&(_global_elem),C)){;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
return 1;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;};_global_i = _global_i+1;;};
#line 24 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return 0;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* C){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_lexer_Token(_global_self,1,C);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_lexer_Token(_global_self,(_global_self)->capacity*2,C);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct lexer_Token*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
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
lexer_String.tag = 8;
struct _global_Case* c =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 9);
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
c[8].name = _global_StringInit(6, "String");
c[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
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
lexer_TokenTypeType.cases.length = 9;
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
;lexer_TokType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
lexer_TokType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_TokType_fields
,3
);
lexer_TokType.package = _global_StringInit(5, "lexer");
lexer_TokType.name = _global_StringInit(3, "Tok");
lexer_TokType.size = sizeof(struct lexer_Tok);
lexer_TokType_fields[0].name = _global_StringInit(6, "active");
lexer_TokType_fields[0].offset = offsetof(struct lexer_Tok, active);
lexer_TokType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;
lexer_TokType_fields[1].name = _global_StringInit(5, "start");
lexer_TokType_fields[1].offset = offsetof(struct lexer_Tok, start);
lexer_TokType_fields[1].field_type = 
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
lexer_TokType_fields[2].name = _global_StringInit(3, "end");
lexer_TokType_fields[2].offset = offsetof(struct lexer_Tok, end);
lexer_TokType_fields[2].field_type = 
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
lexer_Tok_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
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
_global_Maybe_rerror_CompilerErrorType.nullable = 1;struct _global_Case* p =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
p[0].name = _global_StringInit(4, "Some");
p[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
p[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; p[0].args.data[0].offset = offsetof(struct _global_Maybe_plexer_TokenTypecstringp_Some, field0);
p[1].name = _global_StringInit(4, "None");
p[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
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
_global_Maybe_plexer_TokenTypecstringpType.cases.data = p;
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
;struct _global_Case* z =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
z[0].name = _global_StringInit(2, "Ok");
z[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
z[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; z[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Ok, field0);
z[1].name = _global_StringInit(5, "Error");
z[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
z[1].args.data[0].arg_type = 
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
; z[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Error, field0);
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
_global_Result_rerror_CompilerError___lexer_TokenType.cases.data = z;
_global_Result_rerror_CompilerError___lexer_TokenType.cases.length = 2;
_global_StaticArray_7_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_7_stringType.size->tag = 0;
_global_StaticArray_7_stringType.size->cases.Static.field0 = 7;
_global_StaticArray_7_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;struct _global_Case* S =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
S[0].name = _global_StringInit(2, "Ok");
S[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
S[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; S[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Ok, field0);
S[1].name = _global_StringInit(5, "Error");
S[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
S[1].args.data[0].arg_type = 
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
; S[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Error, field0);
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
_global_Result_rerror_CompilerError_Result_TType.cases.data = S;
_global_Result_rerror_CompilerError_Result_TType.cases.length = 2;
struct _global_Case* bc =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
bc[0].name = _global_StringInit(2, "Ok");
bc[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bc[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; bc[0].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Ok, field0);
bc[1].name = _global_StringInit(5, "Error");
bc[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bc[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; bc[1].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Error, field0);
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
_global_Result_Result_E___lexer_TokenType.cases.data = bc;
_global_Result_Result_E___lexer_TokenType.cases.length = 2;
 }
void lexerInit() { 
errorInit();;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
lexer_keywords = _global_StaticArray_7_stringInit(_global_StringInit(4,"true"),_global_StringInit(5,"false"),_global_StringInit(2,"if"),_global_StringInit(4,"else"),_global_StringInit(5,"while"),_global_StringInit(3,"def"),_global_StringInit(4,"type"));;
#line 118 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//lexer.top"
;
};