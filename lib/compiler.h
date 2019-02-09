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
struct _global_Result_Result_E_Result_T_Ok {
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
struct _global_Result_Result_E_Result_T _global_Ok_Result_E_Result_T(void* m,struct _global_Context* n){
struct _global_Result_Result_E_Result_T p;
p.cases.Ok.field0 = m;p.tag = 0;
return p;}
struct _global_Result_Result_E_Result_T _global_Error_Result_E_Result_T(void* q,struct _global_Context* r){
struct _global_Result_Result_E_Result_T s;
s.cases.Error.field0 = q;s.tag = 1;
return s;}
struct _global_EnumType _global_Result_Result_E_Result_TType;struct _global_EnumType* _global_Result_Result_E_Result_T_get_type(struct _global_Result_Result_E_Result_T* self, struct _global_Context* c){return &_global_Result_Result_E_Result_TType;}
struct _global_EnumType* _global_Result_Result_E_Result_T_get_typeByValue(struct _global_Result_Result_E_Result_T self, struct _global_Context* c){return &_global_Result_Result_E_Result_TType;}

struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* b);
