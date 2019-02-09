struct types_Void {
};
static inline struct types_Void types_VoidInit(){
struct types_Void c;
return c;
};
struct _global_StructType types_VoidType;struct _global_StructType* types_Void_get_type(struct types_Void* self, struct _global_Context* c){return &types_VoidType;}
struct _global_Field* types_VoidType_fields;
struct error_Thrower {
struct error_Thrower_VTABLE* vtable;
void* data;
};struct error_Thrower_VTABLE {struct _global_Type type;struct _global_String(*method_get_filename)(void*,struct _global_Context*);
unsigned int(*method_get_line)(void*,struct _global_Context*);
unsigned int(*method_get_column)(void*,struct _global_Context*);
};static inline struct error_Thrower error_ThrowerFromStruct(void* data, struct error_Thrower_VTABLE* vtable, struct _global_Type typ, struct _global_String(*g)(void*,struct _global_Context*), unsigned int(*h)(void*,struct _global_Context*), unsigned int(*j)(void*,struct _global_Context*)){ 
struct error_Thrower k;
k.data = data;k.vtable = vtable;k.vtable->method_get_filename = g;
k.vtable->method_get_line = h;
k.vtable->method_get_column = j;
k.vtable->type = typ;
return k; 
}void* error_Thrower_get_pointer_to_data(struct error_Thrower* self, struct _global_Context* context) { return self->data; }static inline struct _global_String error_Thrower_get_filename(struct error_Thrower* k,struct _global_Context* f){
return k->vtable->method_get_filename(k->data,f);
};static inline struct _global_String error_Thrower_get_filenameByValue(struct error_Thrower k,struct _global_Context* f){
return k.vtable->method_get_filename(k.data,f);
};static inline unsigned int error_Thrower_get_line(struct error_Thrower* k,struct _global_Context* f){
return k->vtable->method_get_line(k->data,f);
};static inline unsigned int error_Thrower_get_lineByValue(struct error_Thrower k,struct _global_Context* f){
return k.vtable->method_get_line(k.data,f);
};static inline unsigned int error_Thrower_get_column(struct error_Thrower* k,struct _global_Context* f){
return k->vtable->method_get_column(k->data,f);
};static inline unsigned int error_Thrower_get_columnByValue(struct error_Thrower k,struct _global_Context* f){
return k.vtable->method_get_column(k.data,f);
};struct _global_Type error_Thrower_get_type(struct error_Thrower* k, struct _global_Context* context){ return k->vtable->type; }struct _global_Type error_Thrower_get_typeByValue(struct error_Thrower k, struct _global_Context* context){ return k.vtable->type; }
struct _global_InterfaceType error_Thrower_Type;struct types_CompilerType {
struct types_CompilerType_VTABLE* vtable;
void* data;
};struct types_CompilerType_VTABLE {struct _global_Type type;struct _global_String(*method_toString)(void*,struct _global_Context*);
struct error_CompilerError*(*method_duck_type)(void*,struct types_CompilerType,struct error_Thrower,struct _global_Context*);
_Bool(*method_equals)(void*,struct types_CompilerType,struct _global_Context*);
unsigned int(*method_calc_size)(void*,struct _global_Context*);
};static inline struct types_CompilerType types_CompilerTypeFromStruct(void* data, struct types_CompilerType_VTABLE* vtable, struct _global_Type typ, struct _global_String(*p)(void*,struct _global_Context*), struct error_CompilerError*(*q)(void*,struct types_CompilerType,struct error_Thrower,struct _global_Context*), _Bool(*r)(void*,struct types_CompilerType,struct _global_Context*), unsigned int(*s)(void*,struct _global_Context*)){ 
struct types_CompilerType t;
t.data = data;t.vtable = vtable;t.vtable->method_toString = p;
t.vtable->method_duck_type = q;
t.vtable->method_equals = r;
t.vtable->method_calc_size = s;
t.vtable->type = typ;
return t; 
}void* types_CompilerType_get_pointer_to_data(struct types_CompilerType* self, struct _global_Context* context) { return self->data; }static inline struct _global_String types_CompilerType_toString(struct types_CompilerType* t,struct _global_Context* d){
return t->vtable->method_toString(t->data,d);
};static inline struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType t,struct _global_Context* d){
return t.vtable->method_toString(t.data,d);
};static inline struct error_CompilerError* types_CompilerType_duck_type(struct types_CompilerType* t,struct types_CompilerType w,struct error_Thrower x,struct _global_Context* d){
return t->vtable->method_duck_type(t->data,w,x,d);
};static inline struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType t,struct types_CompilerType w,struct error_Thrower x,struct _global_Context* d){
return t.vtable->method_duck_type(t.data,w,x,d);
};static inline _Bool types_CompilerType_equals(struct types_CompilerType* t,struct types_CompilerType z,struct _global_Context* d){
return t->vtable->method_equals(t->data,z,d);
};static inline _Bool types_CompilerType_equalsByValue(struct types_CompilerType t,struct types_CompilerType z,struct _global_Context* d){
return t.vtable->method_equals(t.data,z,d);
};static inline unsigned int types_CompilerType_calc_size(struct types_CompilerType* t,struct _global_Context* d){
return t->vtable->method_calc_size(t->data,d);
};static inline unsigned int types_CompilerType_calc_sizeByValue(struct types_CompilerType t,struct _global_Context* d){
return t.vtable->method_calc_size(t.data,d);
};struct _global_Type types_CompilerType_get_type(struct types_CompilerType* t, struct _global_Context* context){ return t->vtable->type; }struct _global_Type types_CompilerType_get_typeByValue(struct types_CompilerType t, struct _global_Context* context){ return t.vtable->type; }
struct _global_InterfaceType types_CompilerType_Type;struct types_Float {
};
static inline struct types_Float types_FloatInit(){
struct types_Float D;
return D;
};
struct _global_StructType types_FloatType;struct _global_StructType* types_Float_get_type(struct types_Float* self, struct _global_Context* c){return &types_FloatType;}
struct _global_Field* types_FloatType_fields;
struct types_Int {
};
static inline struct types_Int types_IntInit(){
struct types_Int F;
return F;
};
struct _global_StructType types_IntType;struct _global_StructType* types_Int_get_type(struct types_Int* self, struct _global_Context* c){return &types_IntType;}
struct _global_Field* types_IntType_fields;
struct types_Bool {
};
static inline struct types_Bool types_BoolInit(){
struct types_Bool G;
return G;
};
struct _global_StructType types_BoolType;struct _global_StructType* types_Bool_get_type(struct types_Bool* self, struct _global_Context* c){return &types_BoolType;}
struct _global_Field* types_BoolType_fields;
struct _global_StaticArray_StaticArray_S_types_CompilerType {
struct types_CompilerType* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_types_CompilerType _global_StaticArray_StaticArray_S_types_CompilerTypeInit(struct types_CompilerType* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_types_CompilerType H;
H.data=data;H.length=length;return H;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_type(struct _global_StaticArray_StaticArray_S_types_CompilerType* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_typeByValue(struct _global_StaticArray_StaticArray_S_types_CompilerType self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct types_FuncPtr {
struct _global_StaticArray_StaticArray_S_types_CompilerType args;
struct types_CompilerType return_type;
_Bool external;
};
static inline struct types_FuncPtr types_FuncPtrInit(struct _global_StaticArray_StaticArray_S_types_CompilerType args,struct types_CompilerType return_type,_Bool external){
struct types_FuncPtr J;
J.args=args;J.return_type=return_type;J.external=external;return J;
};
struct _global_StructType types_FuncPtrType;struct _global_StructType* types_FuncPtr_get_type(struct types_FuncPtr* self, struct _global_Context* c){return &types_FuncPtrType;}
struct _global_Field* types_FuncPtrType_fields;

struct _global_String types_Void_toString(struct types_Void* types_self, struct _global_Context* b);

struct _global_String types_Void_toString(struct types_Void*,struct _global_Context* b);
struct error_CompilerError* types_Void_duck_type(struct types_Void* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* c);
_Bool types_Void_equals(struct types_Void* types_self, struct types_CompilerType types_other, struct _global_Context* d);
unsigned int types_Void_calc_size(struct types_Void* types_self, struct _global_Context* f);
struct types_Void* types_make_Void(struct _global_Context* g);
struct _global_String types_Float_toString(struct types_Float* types_self, struct _global_Context* h);

struct _global_String types_Float_toString(struct types_Float*,struct _global_Context* h);
struct error_CompilerError* types_Float_duck_type(struct types_Float* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* j);
_Bool types_Float_equals(struct types_Float* types_self, struct types_CompilerType types_other, struct _global_Context* k);
unsigned int types_Float_calc_size(struct types_Float* types_self, struct _global_Context* l);
struct types_Float* types_make_Float(struct _global_Context* m);
struct _global_String types_Int_toString(struct types_Int* types_self, struct _global_Context* n);

struct _global_String types_Int_toString(struct types_Int*,struct _global_Context* n);
struct error_CompilerError* types_Int_duck_type(struct types_Int* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* p);
_Bool types_Int_equals(struct types_Int* types_self, struct types_CompilerType types_other, struct _global_Context* q);
unsigned int types_Int_calc_size(struct types_Int* types_self, struct _global_Context* r);
struct types_Int* types_make_Int(struct _global_Context* s);
struct _global_String types_Bool_toString(struct types_Bool* types_self, struct _global_Context* t);

struct _global_String types_Bool_toString(struct types_Bool*,struct _global_Context* t);
struct error_CompilerError* types_Bool_duck_type(struct types_Bool* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* v);
_Bool types_Bool_equals(struct types_Bool* types_self, struct types_CompilerType types_other, struct _global_Context* w);
unsigned int types_Bool_calc_size(struct types_Bool* types_self, struct _global_Context* x);
struct types_Bool* types_make_Bool(struct _global_Context* y);
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* z);

struct _global_String types_FuncPtr_toString(struct types_FuncPtr*,struct _global_Context* z);
struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* B);
_Bool types_FuncPtr_equals(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct _global_Context* C);
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* D);
struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* F);
