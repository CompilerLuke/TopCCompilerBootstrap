struct _global_StaticArray_11_string {
struct _global_String data[11];
};
struct _global_StaticArray_11_string _global_StaticArray_11_stringFill_array(struct _global_String with){
struct _global_StaticArray_11_string tmp;
for (unsigned int i = 0; i < 11; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_11_string _global_StaticArray_11_stringInit(struct _global_String c,struct _global_String d,struct _global_String f,struct _global_String g,struct _global_String h,struct _global_String j,struct _global_String k,struct _global_String l,struct _global_String m,struct _global_String n,struct _global_String p){
struct _global_StaticArray_11_string tmp;
tmp.data[0] = c;
tmp.data[1] = d;
tmp.data[2] = f;
tmp.data[3] = g;
tmp.data[4] = h;
tmp.data[5] = j;
tmp.data[6] = k;
tmp.data[7] = l;
tmp.data[8] = m;
tmp.data[9] = n;
tmp.data[10] = p;
return tmp; }
struct _global_ArrayType _global_StaticArray_11_stringType;struct _global_ArrayType* _global_StaticArray_11_string_get_type(struct _global_StaticArray_11_string* self, struct _global_Context* c){return &_global_StaticArray_11_stringType;}
struct _global_ArrayType* _global_StaticArray_11_string_get_typeByValue(struct _global_StaticArray_11_string self, struct _global_Context* c){return &_global_StaticArray_11_stringType;}
struct _global_ArrayType _global_StaticArray_11_stringType;struct _global_StaticArray_4_u8 {
unsigned char data[4];
};
struct _global_StaticArray_4_u8 _global_StaticArray_4_u8Fill_array(unsigned char with){
struct _global_StaticArray_4_u8 tmp;
for (unsigned int i = 0; i < 4; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_4_u8 _global_StaticArray_4_u8Init(unsigned char q,unsigned char r,unsigned char s,unsigned char t){
struct _global_StaticArray_4_u8 tmp;
tmp.data[0] = q;
tmp.data[1] = r;
tmp.data[2] = s;
tmp.data[3] = t;
return tmp; }
struct _global_ArrayType _global_StaticArray_4_u8Type;struct _global_ArrayType* _global_StaticArray_4_u8_get_type(struct _global_StaticArray_4_u8* self, struct _global_Context* c){return &_global_StaticArray_4_u8Type;}
struct _global_ArrayType* _global_StaticArray_4_u8_get_typeByValue(struct _global_StaticArray_4_u8 self, struct _global_Context* c){return &_global_StaticArray_4_u8Type;}
struct _global_ArrayType _global_StaticArray_4_u8Type;
_Bool operatorParser_is_unary(struct parser_Parser* operatorParser_self, struct _global_Context* b);
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* c);
struct operatorParser_OpStack operatorParser_make_OpStack(struct _global_Context* d);
struct error_CompilerError* operatorParser_OpStack_push_op(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct operatorParser_OpDesc operatorParser_desc, struct _global_Context* f);
struct error_CompilerError* operatorParser_parse_operator(struct parser_Parser* operatorParser_self, struct _global_String operatorParser_kind, struct _global_Context* g);
void operatorParser_OpStack_push(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* h);
struct error_CompilerError* operatorParser_OpStack_pop(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* j);
