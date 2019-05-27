struct _global_Result_string_Result_T_Ok {
void* field0;

};struct _global_Result_string_Result_T_Error {
struct _global_String field0;

};union _global_Result_string_Result_T_cases {
struct _global_Result_string_Result_T_Ok Ok;
struct _global_Result_string_Result_T_Error Error;

};
struct _global_Result_string_Result_T {
union _global_Result_string_Result_T_cases cases;
unsigned char tag;
};
struct _global_Result_string_Result_T _global_Ok_string_Result_T(void* c,struct _global_Context* d){
struct _global_Result_string_Result_T f;
f.cases.Ok.field0 = c;f.tag = 0;
return f;}
struct _global_Result_string_Result_T _global_Error_string_Result_T(struct _global_String g,struct _global_Context* h){
struct _global_Result_string_Result_T j;
j.cases.Error.field0 = g;j.tag = 1;
return j;}
struct _global_EnumType _global_Result_string_Result_TType;struct _global_EnumType* _global_Result_string_Result_T_get_type(struct _global_Result_string_Result_T* self, struct _global_Context* c){return &_global_Result_string_Result_TType;}
struct _global_EnumType* _global_Result_string_Result_T_get_typeByValue(struct _global_Result_string_Result_T self, struct _global_Context* c){return &_global_Result_string_Result_TType;}
struct _global_StaticArray_1_string {
struct _global_String data[1];
};
struct _global_StaticArray_1_string _global_StaticArray_1_stringFill_array(struct _global_String with){
struct _global_StaticArray_1_string tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_string _global_StaticArray_1_stringInit(struct _global_String m){
struct _global_StaticArray_1_string tmp;
tmp.data[0] = m;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_stringType;struct _global_ArrayType* _global_StaticArray_1_string_get_type(struct _global_StaticArray_1_string* self, struct _global_Context* c){return &_global_StaticArray_1_stringType;}
struct _global_ArrayType* _global_StaticArray_1_string_get_typeByValue(struct _global_StaticArray_1_string self, struct _global_Context* c){return &_global_StaticArray_1_stringType;}
struct _global_ArrayType _global_StaticArray_1_stringType;struct _global_Result_Result_E_Result_T_Ok {
void* field0;

};struct _global_Result_Result_E_Result_T_Error {
void* field0;

};union _global_Result_Result_E_Result_T_cases {
struct _global_Result_Result_E_Result_T_Ok Ok;
struct _global_Result_Result_E_Result_T_Error Error;

};
struct _global_Result_Result_E_Result_T {
union _global_Result_Result_E_Result_T_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E_Result_T _global_Ok_Result_E_Result_T(void* n,struct _global_Context* p){
struct _global_Result_Result_E_Result_T q;
q.cases.Ok.field0 = n;q.tag = 0;
return q;}
struct _global_Result_Result_E_Result_T _global_Error_Result_E_Result_T(void* r,struct _global_Context* s){
struct _global_Result_Result_E_Result_T t;
t.cases.Error.field0 = r;t.tag = 1;
return t;}
struct _global_EnumType _global_Result_Result_E_Result_TType;struct _global_EnumType* _global_Result_Result_E_Result_T_get_type(struct _global_Result_Result_E_Result_T* self, struct _global_Context* c){return &_global_Result_Result_E_Result_TType;}
struct _global_EnumType* _global_Result_Result_E_Result_T_get_typeByValue(struct _global_Result_Result_E_Result_T self, struct _global_Context* c){return &_global_Result_Result_E_Result_TType;}

struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* b);
