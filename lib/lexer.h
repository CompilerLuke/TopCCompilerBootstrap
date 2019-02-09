union lexer_TokenType_cases {

};
struct lexer_TokenType {
union lexer_TokenType_cases cases;
unsigned char tag;
};
struct lexer_TokenType lexer_Integer;
struct lexer_TokenType lexer_Float;
struct lexer_TokenType lexer_Identifier;
struct lexer_TokenType lexer_Operator;
struct lexer_TokenType lexer_Invalid;
struct lexer_TokenType lexer_Symbol;
struct lexer_TokenType lexer_Indent;
struct lexer_TokenType lexer_Keyword;
struct _global_EnumType lexer_TokenTypeType;struct _global_EnumType* lexer_TokenType_get_type(struct lexer_TokenType* self, struct _global_Context* c){return &lexer_TokenTypeType;}
struct _global_EnumType* lexer_TokenType_get_typeByValue(struct lexer_TokenType self, struct _global_Context* c){return &lexer_TokenTypeType;}
struct lexer_Token {
struct lexer_TokenType kind;
struct _global_String value;
unsigned int line;
unsigned int column;
};
static inline struct lexer_Token lexer_TokenInit(struct lexer_TokenType kind,struct _global_String value,unsigned int line,unsigned int column){
struct lexer_Token f;
f.kind=kind;f.value=value;f.line=line;f.column=column;return f;
};
struct _global_StructType lexer_TokenType;struct _global_StructType* lexer_Token_get_type(struct lexer_Token* self, struct _global_Context* c){return &lexer_TokenType;}
struct _global_Field* lexer_TokenType_fields;
struct _global_Array_lexer_Token {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct lexer_Token* data;
};
static inline struct _global_Array_lexer_Token _global_Array_lexer_TokenInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct lexer_Token* data){
struct _global_Array_lexer_Token g;
g.length=length;g.capacity=capacity;g.allocator=allocator;g.data=data;return g;
};
struct _global_ArrayType _global_Array_lexer_TokenType;struct _global_ArrayType* _global_Array_lexer_Token_get_type(struct _global_Array_lexer_Token* self, struct _global_Context* c){return &_global_Array_lexer_TokenType;}
struct _global_ArrayType* _global_Array_lexer_Token_get_typeByValue(struct _global_Array_lexer_Token self, struct _global_Context* c){return &_global_Array_lexer_TokenType;}
struct _global_ArrayType _global_Array_lexer_TokenType;struct _global_PointerType _global_Maybe_rlexer_TokenType;struct _global_PointerType* _global_Maybe_rlexer_Token_get_type(struct lexer_Token*** self, struct _global_Context* c){return &_global_Maybe_rlexer_TokenType;}
struct _global_PointerType* _global_Maybe_rlexer_Token_get_typeByValue(struct lexer_Token** self, struct _global_Context* c){return &_global_Maybe_rlexer_TokenType;}
struct lexer_Lexer {
struct _global_Array_char tok;
struct _global_String src;
unsigned int i;
struct _global_Array_lexer_Token tokens;
struct _global_String filename;
unsigned int line;
unsigned int column;
};
static inline struct lexer_Lexer lexer_LexerInit(struct _global_Array_char tok,struct _global_String src,unsigned int i,struct _global_Array_lexer_Token tokens,struct _global_String filename,unsigned int line,unsigned int column){
struct lexer_Lexer h;
h.tok=tok;h.src=src;h.i=i;h.tokens=tokens;h.filename=filename;h.line=line;h.column=column;return h;
};
struct _global_StructType lexer_LexerType;struct _global_StructType* lexer_Lexer_get_type(struct lexer_Lexer* self, struct _global_Context* c){return &lexer_LexerType;}
struct _global_Field* lexer_LexerType_fields;
struct _global_StaticArray_StaticArray_S_char {
char* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_char _global_StaticArray_StaticArray_S_charInit(char* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_char j;
j.data=data;j.length=length;return j;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_charType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_char_get_type(struct _global_StaticArray_StaticArray_S_char* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_charType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_char_get_typeByValue(struct _global_StaticArray_StaticArray_S_char self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_charType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_charType;struct _global_PointerType _global_Maybe_rerror_CompilerErrorType;struct _global_PointerType* _global_Maybe_rerror_CompilerError_get_type(struct error_CompilerError*** self, struct _global_Context* c){return &_global_Maybe_rerror_CompilerErrorType;}
struct _global_PointerType* _global_Maybe_rerror_CompilerError_get_typeByValue(struct error_CompilerError** self, struct _global_Context* c){return &_global_Maybe_rerror_CompilerErrorType;}
struct plexer_TokenTypecstringp  { struct lexer_TokenType field0;struct _global_String field1; };
struct plexer_TokenTypecstringp plexer_TokenTypecstringpInit(struct lexer_TokenType field0,struct _global_String field1) {struct plexer_TokenTypecstringp tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;
struct _global_Maybe_plexer_TokenTypecstringp_Some {
struct plexer_TokenTypecstringp field0;

};union _global_Maybe_plexer_TokenTypecstringp_cases {
struct _global_Maybe_plexer_TokenTypecstringp_Some Some;

};
struct _global_Maybe_plexer_TokenTypecstringp {
union _global_Maybe_plexer_TokenTypecstringp_cases cases;
unsigned char tag;
};
struct _global_Maybe_plexer_TokenTypecstringp _global_Some_plexer_TokenTypecstringp(struct plexer_TokenTypecstringp k,struct _global_Context* l){
struct _global_Maybe_plexer_TokenTypecstringp m;
m.cases.Some.field0 = k;m.tag = 0;
return m;}
struct _global_EnumType _global_Maybe_plexer_TokenTypecstringpType;struct _global_EnumType* _global_Maybe_plexer_TokenTypecstringp_get_type(struct _global_Maybe_plexer_TokenTypecstringp* self, struct _global_Context* c){return &_global_Maybe_plexer_TokenTypecstringpType;}
struct _global_EnumType* _global_Maybe_plexer_TokenTypecstringp_get_typeByValue(struct _global_Maybe_plexer_TokenTypecstringp self, struct _global_Context* c){return &_global_Maybe_plexer_TokenTypecstringpType;}
struct _global_StaticArray_StaticArray_S_lexer_Token {
struct lexer_Token* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_lexer_Token _global_StaticArray_StaticArray_S_lexer_TokenInit(struct lexer_Token* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_lexer_Token q;
q.data=data;q.length=length;return q;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_lexer_TokenType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_lexer_Token_get_type(struct _global_StaticArray_StaticArray_S_lexer_Token* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_lexer_TokenType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_lexer_Token_get_typeByValue(struct _global_StaticArray_StaticArray_S_lexer_Token self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_lexer_TokenType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_lexer_TokenType;struct _global_Result_rerror_CompilerError___lexer_Token_Ok {
struct _global_StaticArray_StaticArray_S_lexer_Token field0;

};struct _global_Result_rerror_CompilerError___lexer_Token_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError___lexer_Token_cases {
struct _global_Result_rerror_CompilerError___lexer_Token_Ok Ok;
struct _global_Result_rerror_CompilerError___lexer_Token_Error Error;

};
struct _global_Result_rerror_CompilerError___lexer_Token {
union _global_Result_rerror_CompilerError___lexer_Token_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError___lexer_Token _global_Ok_rerror_CompilerError___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token r,struct _global_Context* s){
struct _global_Result_rerror_CompilerError___lexer_Token t;
t.cases.Ok.field0 = r;t.tag = 0;
return t;}
struct _global_Result_rerror_CompilerError___lexer_Token _global_Error_rerror_CompilerError___lexer_Token(struct error_CompilerError* v,struct _global_Context* w){
struct _global_Result_rerror_CompilerError___lexer_Token x;
x.cases.Error.field0 = v;x.tag = 1;
return x;}
struct _global_EnumType _global_Result_rerror_CompilerError___lexer_TokenType;struct _global_EnumType* _global_Result_rerror_CompilerError___lexer_Token_get_type(struct _global_Result_rerror_CompilerError___lexer_Token* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError___lexer_TokenType;}
struct _global_EnumType* _global_Result_rerror_CompilerError___lexer_Token_get_typeByValue(struct _global_Result_rerror_CompilerError___lexer_Token self, struct _global_Context* c){return &_global_Result_rerror_CompilerError___lexer_TokenType;}
struct _global_StaticArray_4_string {
struct _global_String data[4];
};
struct _global_StaticArray_4_string _global_StaticArray_4_stringFill_array(struct _global_String with){
struct _global_StaticArray_4_string tmp;
for (unsigned int i = 0; i < 4; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_4_string _global_StaticArray_4_stringInit(struct _global_String B,struct _global_String C,struct _global_String D,struct _global_String F){
struct _global_StaticArray_4_string tmp;
tmp.data[0] = B;
tmp.data[1] = C;
tmp.data[2] = D;
tmp.data[3] = F;
return tmp; }
struct _global_ArrayType _global_StaticArray_4_stringType;struct _global_ArrayType* _global_StaticArray_4_string_get_type(struct _global_StaticArray_4_string* self, struct _global_Context* c){return &_global_StaticArray_4_stringType;}
struct _global_ArrayType* _global_StaticArray_4_string_get_typeByValue(struct _global_StaticArray_4_string self, struct _global_Context* c){return &_global_StaticArray_4_stringType;}
struct _global_ArrayType _global_StaticArray_4_stringType;struct _global_Result_rerror_CompilerError_Result_T_Ok {
void* field0;

};struct _global_Result_rerror_CompilerError_Result_T_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError_Result_T_cases {
struct _global_Result_rerror_CompilerError_Result_T_Ok Ok;
struct _global_Result_rerror_CompilerError_Result_T_Error Error;

};
struct _global_Result_rerror_CompilerError_Result_T {
union _global_Result_rerror_CompilerError_Result_T_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError_Result_T _global_Ok_rerror_CompilerError_Result_T(void* G,struct _global_Context* H){
struct _global_Result_rerror_CompilerError_Result_T J;
J.cases.Ok.field0 = G;J.tag = 0;
return J;}
struct _global_Result_rerror_CompilerError_Result_T _global_Error_rerror_CompilerError_Result_T(struct error_CompilerError* K,struct _global_Context* L){
struct _global_Result_rerror_CompilerError_Result_T M;
M.cases.Error.field0 = K;M.tag = 1;
return M;}
struct _global_EnumType _global_Result_rerror_CompilerError_Result_TType;struct _global_EnumType* _global_Result_rerror_CompilerError_Result_T_get_type(struct _global_Result_rerror_CompilerError_Result_T* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_Result_TType;}
struct _global_EnumType* _global_Result_rerror_CompilerError_Result_T_get_typeByValue(struct _global_Result_rerror_CompilerError_Result_T self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_Result_TType;}
struct _global_Result_Result_E___lexer_Token_Ok {
struct _global_StaticArray_StaticArray_S_lexer_Token field0;

};struct _global_Result_Result_E___lexer_Token_Error {
void* field0;

};union _global_Result_Result_E___lexer_Token_cases {
struct _global_Result_Result_E___lexer_Token_Ok Ok;
struct _global_Result_Result_E___lexer_Token_Error Error;

};
struct _global_Result_Result_E___lexer_Token {
union _global_Result_Result_E___lexer_Token_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E___lexer_Token _global_Ok_Result_E___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token Q,struct _global_Context* R){
struct _global_Result_Result_E___lexer_Token S;
S.cases.Ok.field0 = Q;S.tag = 0;
return S;}
struct _global_Result_Result_E___lexer_Token _global_Error_Result_E___lexer_Token(void* T,struct _global_Context* V){
struct _global_Result_Result_E___lexer_Token W;
W.cases.Error.field0 = T;W.tag = 1;
return W;}
struct _global_EnumType _global_Result_Result_E___lexer_TokenType;struct _global_EnumType* _global_Result_Result_E___lexer_Token_get_type(struct _global_Result_Result_E___lexer_Token* self, struct _global_Context* c){return &_global_Result_Result_E___lexer_TokenType;}
struct _global_EnumType* _global_Result_Result_E___lexer_Token_get_typeByValue(struct _global_Result_Result_E___lexer_Token self, struct _global_Context* c){return &_global_Result_Result_E___lexer_TokenType;}

struct _global_String lexer_TokenType_toString(struct lexer_TokenType* lexer_self, struct _global_Context* b);

struct _global_String lexer_TokenType_toString(struct lexer_TokenType*,struct _global_Context* b);
struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* c);

struct _global_String lexer_Token_toString(struct lexer_Token*,struct _global_Context* c);
struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* d);
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* f);
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* g);
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* h);
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* j);
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* k);
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* l);
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* m);
_Bool lexer_is_digit(char lexer_c, struct _global_Context* n);
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* p);
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* q);
_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* r);
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* s);
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* t);
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* v);
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* w);
