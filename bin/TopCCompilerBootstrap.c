#include <llvm-c/Core.h>
#include <llvm-c/ExecutionEngine.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>
#include <llvm-c/Analysis.h>
#include <llvm-c/BitWriter.h>
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <stdint.h>

struct _global_String {
    unsigned int length;
    char* data;
};

struct BoolType {};
struct StringType {};
struct NoneType {};
struct CharType {};

struct IntType {
    _Bool sign;
    unsigned int size;
};

struct FloatType {
    unsigned int size;
};
struct _global_Type {
struct _global_Type_VTABLE* vtable;
void* data;
};struct _global_Type_VTABLE {struct _global_Type type;struct _global_String(*method_toString)(void*,struct _global_Context*);
uint64_t(*method_get_size)(void*,struct _global_Context*);
};static inline struct _global_Type _global_TypeFromStruct(void* data, struct _global_Type_VTABLE* vtable, struct _global_Type typ, struct _global_String(*c)(void*,struct _global_Context*), uint64_t(*d)(void*,struct _global_Context*)){ 
struct _global_Type f;
f.data = data;f.vtable = vtable;f.vtable->method_toString = c;
f.vtable->method_get_size = d;
f.vtable->type = typ;
return f; 
}void* _global_Type_get_pointer_to_data(struct _global_Type* self, struct _global_Context* context) { return self->data; }static inline struct _global_String _global_Type_toString(struct _global_Type* f,struct _global_Context* b){
return f->vtable->method_toString(f->data,b);
};static inline struct _global_String _global_Type_toStringByValue(struct _global_Type f,struct _global_Context* b){
return f.vtable->method_toString(f.data,b);
};static inline uint64_t _global_Type_get_size(struct _global_Type* f,struct _global_Context* b){
return f->vtable->method_get_size(f->data,b);
};static inline uint64_t _global_Type_get_sizeByValue(struct _global_Type f,struct _global_Context* b){
return f.vtable->method_get_size(f.data,b);
};struct _global_Type _global_Type_get_type(struct _global_Type* f, struct _global_Context* context){ return f->vtable->type; }struct _global_Type _global_Type_get_typeByValue(struct _global_Type f, struct _global_Context* context){ return f.vtable->type; }
struct _global_InterfaceType _global_Type_Type;struct _global_StaticArray_StaticArray_S_Field {
struct _global_Field* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_Field _global_StaticArray_StaticArray_S_FieldInit(struct _global_Field* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_Field B;
B.data=data;B.length=length;return B;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_FieldType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_Field_get_type(struct _global_StaticArray_StaticArray_S_Field* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_FieldType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_Field_get_typeByValue(struct _global_StaticArray_StaticArray_S_Field self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_FieldType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_FieldType;struct _global_StructType {
struct _global_String name;
struct _global_String package;
struct _global_Type real_type;
struct _global_StaticArray_StaticArray_S_Field fields;
uint64_t size;
};
static inline struct _global_StructType _global_StructTypeInit(struct _global_String name,struct _global_String package,struct _global_Type real_type,struct _global_StaticArray_StaticArray_S_Field fields,uint64_t size){
struct _global_StructType k;
k.name=name;k.package=package;k.real_type=real_type;k.fields=fields;k.size=size;return k;
};
struct _global_StructType _global_StructTypeType;struct _global_StructType* _global_StructType_get_type(struct _global_StructType* self, struct _global_Context* c){return &_global_StructTypeType;}
struct _global_Field* _global_StructTypeType_fields;
struct _global_Type_VTABLE rStringType_VTABLE_FOR_Type;struct _global_Type_VTABLE rStructType_VTABLE_FOR_Type;struct _global_Type_VTABLE rInterfaceType_VTABLE_FOR_Type;struct _global_Type_VTABLE rArrayType_VTABLE_FOR_Type;struct _global_StructType _global_StringTypeType;struct _global_StructType* _global_StringType_get_type(struct StringType* self, struct _global_Context* c){return &_global_StringTypeType;}
struct _global_Field* _global_StringTypeType_fields;
struct _global_InterfaceType {
struct _global_String name;
struct _global_String package;
struct _global_StaticArray_StaticArray_S_Field fields;
struct _global_StaticArray_StaticArray_S_Method* methods;
};
static inline struct _global_InterfaceType _global_InterfaceTypeInit(struct _global_String name,struct _global_String package,struct _global_StaticArray_StaticArray_S_Field fields,struct _global_StaticArray_StaticArray_S_Method* methods){
struct _global_InterfaceType C;
C.name=name;C.package=package;C.fields=fields;C.methods=methods;return C;
};
struct _global_StructType _global_InterfaceTypeType;struct _global_StructType* _global_InterfaceType_get_type(struct _global_InterfaceType* self, struct _global_Context* c){return &_global_InterfaceTypeType;}
struct _global_Field* _global_InterfaceTypeType_fields;
struct _global_StaticArray_StaticArray_S_Case {
struct _global_Case* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_Case _global_StaticArray_StaticArray_S_CaseInit(struct _global_Case* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_Case p;
p.data=data;p.length=length;return p;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_CaseType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_Case_get_type(struct _global_StaticArray_StaticArray_S_Case* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_CaseType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_Case_get_typeByValue(struct _global_StaticArray_StaticArray_S_Case self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_CaseType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_CaseType;struct _global_StaticArray_StaticArray_S_CaseArg {
struct _global_CaseArg* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_CaseArg _global_StaticArray_StaticArray_S_CaseArgInit(struct _global_CaseArg* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_CaseArg m;
m.data=data;m.length=length;return m;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_CaseArgType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_CaseArg_get_type(struct _global_StaticArray_StaticArray_S_CaseArg* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_CaseArgType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_CaseArg_get_typeByValue(struct _global_StaticArray_StaticArray_S_CaseArg self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_CaseArgType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_CaseArgType;struct _global_StructType _global_IntTypeType;struct _global_StructType* _global_IntType_get_type(struct IntType* self, struct _global_Context* c){return &_global_IntTypeType;}
struct _global_Field* _global_IntTypeType_fields;
struct _global_CaseArg {
struct _global_Type arg_type;
unsigned int offset;
};
static inline struct _global_CaseArg _global_CaseArgInit(struct _global_Type arg_type,unsigned int offset){
struct _global_CaseArg l;
l.arg_type=arg_type;l.offset=offset;return l;
};
struct _global_StructType _global_CaseArgType;struct _global_StructType* _global_CaseArg_get_type(struct _global_CaseArg* self, struct _global_Context* c){return &_global_CaseArgType;}
struct _global_Field* _global_CaseArgType_fields;
struct _global_Type_VTABLE rIntType_VTABLE_FOR_Type;struct _global_ArrayType {
struct _global_ArraySize* size;
struct _global_Type array_type;
};
static inline struct _global_ArrayType _global_ArrayTypeInit(struct _global_ArraySize* size,struct _global_Type array_type){
struct _global_ArrayType z;
z.size=size;z.array_type=array_type;return z;
};
struct _global_StructType _global_ArrayTypeType;struct _global_StructType* _global_ArrayType_get_type(struct _global_ArrayType* self, struct _global_Context* c){return &_global_ArrayTypeType;}
struct _global_Field* _global_ArrayTypeType_fields;
struct _global_Type_VTABLE rEnumType_VTABLE_FOR_Type;struct _global_Case {
struct _global_String name;
struct _global_StaticArray_StaticArray_S_CaseArg args;
};
static inline struct _global_Case _global_CaseInit(struct _global_String name,struct _global_StaticArray_StaticArray_S_CaseArg args){
struct _global_Case n;
n.name=name;n.args=args;return n;
};
struct _global_StructType _global_CaseType;struct _global_StructType* _global_Case_get_type(struct _global_Case* self, struct _global_Context* c){return &_global_CaseType;}
struct _global_Field* _global_CaseType_fields;
struct _global_StaticArray_StaticArray_S_Method {
struct _global_Method* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_Method _global_StaticArray_StaticArray_S_MethodInit(struct _global_Method* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_Method r;
r.data=data;r.length=length;return r;
};
struct _global_ArrayType* _global_StaticArray_StaticArray_S_Method_get_type(struct _global_StaticArray_StaticArray_S_Method* self, struct _global_Context* c){return NULL;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_Method_get_typeByValue(struct _global_StaticArray_StaticArray_S_Method self, struct _global_Context* c){return NULL;}
struct _global_StructType _global_NoneTypeType;struct _global_StructType* _global_NoneType_get_type(struct NoneType* self, struct _global_Context* c){return &_global_NoneTypeType;}
struct _global_Field* _global_NoneTypeType_fields;
struct _global_PointerType {
struct _global_Type p_type;
_Bool nullable;
};
static inline struct _global_PointerType _global_PointerTypeInit(struct _global_Type p_type,_Bool nullable){
struct _global_PointerType D;
D.p_type=p_type;D.nullable=nullable;return D;
};
struct _global_StructType _global_PointerTypeType;struct _global_StructType* _global_PointerType_get_type(struct _global_PointerType* self, struct _global_Context* c){return &_global_PointerTypeType;}
struct _global_Field* _global_PointerTypeType_fields;
struct _global_Type_VTABLE rBoolType_VTABLE_FOR_Type;struct _global_Method {
struct _global_String name;
void* pointer_to_method;
};
static inline struct _global_Method _global_MethodInit(struct _global_String name,void* pointer_to_method){
struct _global_Method q;
q.name=name;q.pointer_to_method=pointer_to_method;return q;
};
struct _global_StructType _global_MethodType;struct _global_StructType* _global_Method_get_type(struct _global_Method* self, struct _global_Context* c){return &_global_MethodType;}
struct _global_Field* _global_MethodType_fields;
struct _global_Type_VTABLE rPointerType_VTABLE_FOR_Type;struct _global_Type_VTABLE rNoneType_VTABLE_FOR_Type;struct _global_Field {
struct _global_String name;
unsigned int offset;
struct _global_Type field_type;
};
static inline struct _global_Field _global_FieldInit(struct _global_String name,unsigned int offset,struct _global_Type field_type){
struct _global_Field j;
j.name=name;j.offset=offset;j.field_type=field_type;return j;
};
struct _global_StructType _global_FieldType;struct _global_StructType* _global_Field_get_type(struct _global_Field* self, struct _global_Context* c){return &_global_FieldType;}
struct _global_Field* _global_FieldType_fields;
struct _global_EnumType {
struct _global_String name;
struct _global_String package;
struct _global_StaticArray_StaticArray_S_Case cases;
struct _global_StaticArray_StaticArray_S_Method methods;
struct _global_Field tag_field;
uint64_t size;
};
static inline struct _global_EnumType _global_EnumTypeInit(struct _global_String name,struct _global_String package,struct _global_StaticArray_StaticArray_S_Case cases,struct _global_StaticArray_StaticArray_S_Method methods,struct _global_Field tag_field,uint64_t size){
struct _global_EnumType s;
s.name=name;s.package=package;s.cases=cases;s.methods=methods;s.tag_field=tag_field;s.size=size;return s;
};
struct _global_StructType _global_EnumTypeType;struct _global_StructType* _global_EnumType_get_type(struct _global_EnumType* self, struct _global_Context* c){return &_global_EnumTypeType;}
struct _global_Field* _global_EnumTypeType_fields;
struct _global_ArraySize_Static {
unsigned int field0;

};union _global_ArraySize_cases {
struct _global_ArraySize_Static Static;

};
struct _global_ArraySize {
union _global_ArraySize_cases cases;
unsigned char tag;
};
struct _global_ArraySize _global_Static(unsigned int t,struct _global_Context* v){
struct _global_ArraySize w;
w.cases.Static.field0 = t;w.tag = 0;
return w;}
struct _global_ArraySize _global_Dynamic;
struct _global_ArraySize _global_Both;
struct _global_EnumType _global_ArraySizeType;struct _global_EnumType* _global_ArraySize_get_type(struct _global_ArraySize* self, struct _global_Context* c){return &_global_ArraySizeType;}
struct _global_EnumType* _global_ArraySize_get_typeByValue(struct _global_ArraySize self, struct _global_Context* c){return &_global_ArraySizeType;}
struct _global_StructType _global_BoolTypeType;struct _global_StructType* _global_BoolType_get_type(struct BoolType* self, struct _global_Context* c){return &_global_BoolTypeType;}
struct _global_Field* _global_BoolTypeType_fields;
struct _global_AliasType {
struct _global_String name;
struct _global_String package;
struct _global_Type real_type;
};
static inline struct _global_AliasType _global_AliasTypeInit(struct _global_String name,struct _global_String package,struct _global_Type real_type){
struct _global_AliasType G;
G.name=name;G.package=package;G.real_type=real_type;return G;
};
struct _global_StructType _global_AliasTypeType;struct _global_StructType* _global_AliasType_get_type(struct _global_AliasType* self, struct _global_Context* c){return &_global_AliasTypeType;}
struct _global_Field* _global_AliasTypeType_fields;
struct _global_AliasType _global_SizeT_Type;struct _global_Allocator {
struct _global_Allocator_VTABLE* vtable;
void* data;
};struct _global_Allocator_VTABLE {struct _global_Type type;uint64_t(*method_get_occupied)(void*,struct _global_Context*);
void*(*method_alloc)(void*,uint64_t,struct _global_Context*);
void(*method_dealloc)(void*,void*,struct _global_Context*);
void(*method_reset_to)(void*,uint64_t,struct _global_Context*);
void(*method_free_allocator)(void*,struct _global_Context*);
};static inline struct _global_Allocator _global_AllocatorFromStruct(void* data, struct _global_Allocator_VTABLE* vtable, struct _global_Type typ, uint64_t(*H)(void*,struct _global_Context*), void*(*J)(void*,uint64_t,struct _global_Context*), void(*K)(void*,void*,struct _global_Context*), void(*L)(void*,uint64_t,struct _global_Context*), void(*M)(void*,struct _global_Context*)){ 
struct _global_Allocator N;
N.data = data;N.vtable = vtable;N.vtable->method_get_occupied = H;
N.vtable->method_alloc = J;
N.vtable->method_dealloc = K;
N.vtable->method_reset_to = L;
N.vtable->method_free_allocator = M;
N.vtable->type = typ;
return N; 
}void* _global_Allocator_get_pointer_to_data(struct _global_Allocator* self, struct _global_Context* context) { return self->data; }static inline uint64_t _global_Allocator_get_occupied(struct _global_Allocator* N,struct _global_Context* F){
return N->vtable->method_get_occupied(N->data,F);
};static inline uint64_t _global_Allocator_get_occupiedByValue(struct _global_Allocator N,struct _global_Context* F){
return N.vtable->method_get_occupied(N.data,F);
};static inline void* _global_Allocator_alloc(struct _global_Allocator* N,uint64_t Q,struct _global_Context* F){
return N->vtable->method_alloc(N->data,Q,F);
};static inline void* _global_Allocator_allocByValue(struct _global_Allocator N,uint64_t Q,struct _global_Context* F){
return N.vtable->method_alloc(N.data,Q,F);
};static inline void _global_Allocator_dealloc(struct _global_Allocator* N,void* S,struct _global_Context* F){
return N->vtable->method_dealloc(N->data,S,F);
};static inline void _global_Allocator_deallocByValue(struct _global_Allocator N,void* S,struct _global_Context* F){
return N.vtable->method_dealloc(N.data,S,F);
};static inline void _global_Allocator_reset_to(struct _global_Allocator* N,uint64_t V,struct _global_Context* F){
return N->vtable->method_reset_to(N->data,V,F);
};static inline void _global_Allocator_reset_toByValue(struct _global_Allocator N,uint64_t V,struct _global_Context* F){
return N.vtable->method_reset_to(N.data,V,F);
};static inline void _global_Allocator_free_allocator(struct _global_Allocator* N,struct _global_Context* F){
return N->vtable->method_free_allocator(N->data,F);
};static inline void _global_Allocator_free_allocatorByValue(struct _global_Allocator N,struct _global_Context* F){
return N.vtable->method_free_allocator(N.data,F);
};struct _global_Type _global_Allocator_get_type(struct _global_Allocator* N, struct _global_Context* context){ return N->vtable->type; }struct _global_Type _global_Allocator_get_typeByValue(struct _global_Allocator N, struct _global_Context* context){ return N.vtable->type; }
struct _global_InterfaceType _global_Allocator_Type;struct _global_Context {
struct _global_Allocator* allocator;struct _global_Allocator* longterm_storage;};
struct _global_Context _global_context;
#define __Context struct _global_Context* context
#define alloc _global_Allocator_alloc

static inline struct _global_String _global_StringInit(unsigned int length, char* data) {
    struct _global_String s;
    s.data = data;
    s.length = length;
    return s;
};
struct _global_String _global_String_toStringByValue(struct _global_String s,__Context) {
    return s;
}

struct _global_String _global_String_toString(struct _global_String* s,__Context) {
    return *s;
}

struct _global_String _global_Bool_toStringByValue(_Bool b, __Context) {
    if (b) {
        return _global_StringInit(4, "true");
    } else {
        return _global_StringInit(5, "false");
    }
}



#include <stdatomic.h>

void c_runtime_incr_atomic_uint(volatile atomic_uint* a, unsigned int value) {
    *a += value;
}

atomic_flag c_runtime_ATOMIC_FLAG_INIT = ATOMIC_FLAG_INIT;




struct BoolType _global_Bool_typ;

struct BoolType* _global_Bool_get_typeByValue(_Bool b, __Context) {
    return &_global_Bool_typ;
}

struct BoolType* _global_Bool_get_type(_Bool* b, __Context) {
    return &_global_Bool_typ;
}

struct CharType _global_Char_typ;

struct CharType* _global_char_get_typeByValue(char b, __Context) {
    return &_global_Char_typ;
}

struct CharType* _global_char_get_type(char* b, __Context) {
    return &_global_Char_typ;
}

struct _global_String _global_CharType_toString(struct CharType* self, __Context) {
    return _global_StringInit(4, "char");
}

struct _global_String _global_Bool_toString(_Bool* b, __Context) {
    return _global_Bool_toStringByValue(*b, context);
}


struct _global_String _global_String_sliceByValue(struct _global_String s, unsigned int from, unsigned int end, __Context) {
    int length = end - from;
    char* buffer = alloc(context->allocator, sizeof(char) * length + 1, context);
    memcpy(buffer, s.data + from, length);
    buffer[length] = '\0';
    return _global_StringInit(length, buffer);
}

char* _global_String_op_getByValue(struct _global_String s, unsigned int i, __Context) {
    if (i >= s.length) {
        printf("String acess out of bounds: %i", i);
        exit(1);
    }
    return &s.data[i];
}

_Bool _global_String_op_eqByValue(struct _global_String self, struct _global_String other, __Context) {
    if (self.length != other.length) {
        return 0;
    }

    for (unsigned int i =0; i < self.length; i++) {
        if (self.data[i] != other.data[i]) {
            return 0;
        }
    }
    return 1;
}

_Bool _global_String_op_eq(struct _global_String* s, struct _global_String* other, __Context) {
    return _global_String_op_eqByValue(*s, *other, context);
}

_Bool _global_String_op_neByValue(struct _global_String s, struct _global_String o, __Context) {
    return !_global_String_op_eqByValue(s,o,context);
}

void _global_log(struct _global_String,__Context);

struct _global_String _global_String_op_addByValue(struct _global_String a, struct _global_String b,__Context) {
    if (a.length == 0) {
        return b;
    } else if (b.length == 0) {
        return a;
    }

    struct _global_String newString;
    newString.length = a.length + b.length;
    newString.data = alloc(context->allocator, sizeof(char) * (newString.length+1), context);

    memcpy(newString.data, a.data, sizeof(char) * a.length);
    memcpy(newString.data + a.length, b.data, sizeof(char) * (b.length + 1));
    return newString;
};

struct _global_String _global_String_op_add(struct _global_String* a, struct _global_String b,__Context) {
    return _global_String_op_addByValue(*a, b, context);
}

struct _global_String _global_Float_toStringByValue(float x,__Context) {
    int len = snprintf(NULL, 0, "%f", x);
    char *result = (char *)alloc(context->allocator, len + 1, context);
    snprintf(result, len + 1, "%f", x);
    return _global_StringInit(len,result);
}

struct _global_String _global_Float_toString(float* x,__Context) {
    return _global_Float_toStringByValue(*x, context);
}

struct FloatType _global_FloatType;

struct FloatType* _global_Float_get_type(float* x, __Context) {
    return &_global_FloatType;
}

struct FloatType* _global_Float_get_typeByValue(float x, __Context) {
    return &_global_FloatType;
}

void _reverse_string(struct _global_String * self) {
    unsigned int half_length = self->length / 2;

    for (unsigned int i = 0; i < half_length; i++) {
        char tmp = self->data[i];
        self->data[i] = self->data[self->length - 1 - i];
        self->data[self->length - 1 - i] = tmp;
    }
}

struct NoneType _global_NoneTypeInit() {
    struct NoneType s;
    return s;
}

struct NoneType None_Type;

/*
void itoa(int value, char* str, int base) {
	static char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char* wstr=str;

	int sign;
	// Validate base
	if (base<2 || base>35){ *wstr='\0'; return; }
	// Take care of sign

	if ((sign=value) < 0) value = -value;
	// Conversion. Number is reversed.

	do *wstr++ = num[value%base]; while(value/=base);

	if(sign<0) *wstr++='-';

	*wstr='\0';
	// Reverse string
}
*/

struct _global_String _global_int_toStringByValue(int number,__Context) {
    unsigned int length = 1;
    unsigned int divisor = 10;

    int absNumber = number;
    if (absNumber < 0) {
        absNumber = -absNumber;
    }

    while (absNumber % divisor != absNumber) {
        length++;
        divisor *= 10;
    }

    if (number < 0) {
        length++;
    }

    char* memory = alloc(context->allocator, sizeof(char) * (length + 1), context);

    struct _global_String newString = _global_StringInit(length, memory);
    snprintf(newString.data, 10, "%d", number);

    return newString;
}

struct _global_String _global_int_toString(int* number,__Context) {
    return _global_int_toStringByValue(*number, context);
}

char* _global_String_to_c_string(struct _global_String* s, __Context) {
    return s->data;
}

char* _global_String_to_c_stringByValue(struct _global_String s, __Context) {
    return s.data;
}

struct IntType _global_IntType;

#define gen_integer(name, typ, sign_of_int) struct _global_String _global_##name##_toString(typ* number,__Context) {\
return _global_int_toStringByValue(*number, context); \
} \
struct _global_String _global_##name##_toStringByValue(typ number,__Context) {\
return _global_int_toStringByValue(number, context); \
} \
\
struct IntType _global_##name##Type;\
void _global_##name##TypeInit() { \
    _global_##name##Type.sign = sign_of_int; \
    _global_##name##Type.size = sizeof(typ); \
} \
struct IntType* _global_##name##_get_typeByValue(typ number, __Context) { \
    return &_global_##name##Type; \
} \
\
struct IntType* _global_##name##_get_type(typ* number, __Context) { \
    return &_global_##name##Type; \
}

struct IntType* _global_int_get_typeByValue(int number, __Context) {
    return &_global_IntType;
}

struct IntType* _global_int_get_type(int* number, __Context) {
    return &_global_IntType;
}


gen_integer(uint, unsigned int, 0)
gen_integer(u8, uint8_t, 0)
gen_integer(u16, uint16_t, 0)
gen_integer(u32, uint32_t, 0)
gen_integer(u64, uint64_t, 0)

gen_integer(i8, int8_t, 1)
gen_integer(i16, int16_t, 1)
gen_integer(i32, int32_t, 1)
gen_integer(i64, int64_t, 1)

void _global_c_log(struct _global_String s) {
    printf("%s\n", s.data);
    fflush(stdout);
};

#define _global_offsetPtr(ptr, offset, __Context) ((char*)ptr) + offset

struct _global_String _global_console_input(struct _global_String text, __Context) {
    char string[40];
    fputs(text.data, stdout);
    fflush(stdout);
    fgets(string, sizeof(string), stdin);
    fflush(stdin);

    unsigned int length = strlen(string) - 1;
    char* memory = alloc(context->allocator, sizeof(char) * (length + 1), context);
    memcpy(memory, string, length + 1);
    return _global_StringInit(length, memory);
}



FILE* _runtime_c_open_file(struct _global_String filename, struct _global_String acess) {
    char * buffer = 0;
    int length;
    FILE* f;
    #ifdef __APPLE__
        f = fopen(filename.data, acess.data);
    #else
        errno_t errors = fopen_s(&f, filename.data, acess.data);

        if (f == NULL && errors) {
            printf("%s\n", filename.data);
            printf("%i\n", (int)f);
            printf("error %i\n", errors);
            return NULL;
        }
    #endif

    return f;
}

#include <sys/stat.h>

struct _global_String _runtime_read_file(FILE* f, struct _global_String filename, __Context) {
    struct stat info[1];

    stat (filename.data, info);
    int length = info->st_size;
    char* buffer = alloc(context->allocator, length + 1, context);

    length = fread(buffer, sizeof(char), sizeof(char) * length, f);
    buffer[length] = '\0';

    return _global_StringInit(length, buffer);
}

void _runtime_write_file(FILE* f, struct _global_String s, __Context) {
    fwrite(s.data, sizeof(char), sizeof(char) * s.length, f);
}

void _runtime_c_close_file(FILE* file) {
    fclose (file);
}

struct _global_String _runtime_char_buffer_toString(char* buffer) {
    return _global_StringInit(strlen(buffer), buffer);
}

//char

struct _global_String _global_char_toStringByValue(char self, __Context) {
    char* buffer = alloc(context->allocator, 2, context);
    buffer[0] = self;
    buffer[1] = '\0';
    return _global_StringInit(1, buffer);
}

struct _global_String _global_char_toString(char* self, __Context) {
    return _global_char_toStringByValue(*self, context);
}

uint8_t _global_char_toU8ByValue(char self, __Context) {
    return (uint8_t) self;
}

uint8_t _global_char_toU8(char* self, __Context) {
    return (uint8_t) *self;
}

_Bool _global_String_starts_withByValue(struct _global_String str, struct _global_String pre, __Context) {
    if (str.length < pre.length) { return 0; }
    return strncmp(pre.data, str.data, pre.length) == 0;
}

_Bool _global_String_ends_withByValue(struct _global_String str, struct _global_String pre, __Context) {
    if (str.length < pre.length) { return 0; }
    return strncmp(pre.data, str.data + (str.length - pre.length), pre.length) == 0;
}


#define _global_indexPtr(value, by, c) value + by
#define _global_c_set_bit_to(number, n, x) (number & ~(1U << n) | (x << n))
#define _global_c_is_bit_set(number, n) ((number >> n) & 1U)
#define _global_c_bit_and(x,y) x & y

/*
void printI(int i) {
    printf("%i\n", i);
};
*/


struct StringType _global_StringType;

struct StringType* _global_String_get_type(struct _global_String* s, __Context) {
    return &_global_StringType;
}

struct StringType* _global_String_get_typeByValue(struct _global_String s, __Context) {
    return &_global_StringType;
}

struct _global_PointerType pointerTypes[200];
unsigned int pointerTypeCounter;

struct _global_PointerType* _global_boxPointerType(struct _global_PointerType p, __Context) {
    if (pointerTypeCounter > 199) {
        printf("More pointer types than available");
    }

    pointerTypes[pointerTypeCounter++] = p;
    return &pointerTypes[pointerTypeCounter - 1];
}


void _global_init_c_runtime() {
    printf("Initialized types\n");

    pointerTypeCounter = 0;
    _global_FloatType.size = sizeof(float);
    _global_IntType.sign = 1;
    _global_IntType.size = sizeof(int);

    _global_u8TypeInit();
    _global_u16TypeInit();
    _global_u32TypeInit();
    _global_u64TypeInit();
    _global_uintTypeInit();

    _global_i8TypeInit();
    _global_i16TypeInit();
    _global_i32TypeInit();
    _global_i64TypeInit();

    /*
    _global_##name##TypeInit()
    gen_integer(uint, unsigned int, 0)
gen_integer(u8, uint8_t, 0)
gen_integer(u16, uint16_t, 0)
gen_integer(u32, uint32_t, 0)
gen_integer(u64, uint64_t, 0)

gen_integer(i8, int8_t, 1)
gen_integer(i16, int16_t, 1)
gen_integer(i32, int32_t, 1)
gen_integer(i64, int64_t, 1) */
}
struct _global_TemporaryStorage {
uint64_t occupied;
uint64_t highest;
void* data;
uint64_t maxSize;
};
static inline struct _global_TemporaryStorage _global_TemporaryStorageInit(uint64_t occupied,uint64_t highest,void* data,uint64_t maxSize){
struct _global_TemporaryStorage c;
c.occupied=occupied;c.highest=highest;c.data=data;c.maxSize=maxSize;return c;
};
struct _global_StructType _global_TemporaryStorageType;struct _global_StructType* _global_TemporaryStorage_get_type(struct _global_TemporaryStorage* self, struct _global_Context* c){return &_global_TemporaryStorageType;}
struct _global_Field* _global_TemporaryStorageType_fields;
struct _global_Type_VTABLE rAliasType_VTABLE_FOR_Type;struct _global_Malloc {
};
static inline struct _global_Malloc _global_MallocInit(){
struct _global_Malloc d;
return d;
};
struct _global_StructType _global_MallocType;struct _global_StructType* _global_Malloc_get_type(struct _global_Malloc* self, struct _global_Context* c){return &_global_MallocType;}
struct _global_Field* _global_MallocType_fields;
struct _global_PointerType _global_Maybe_rAllocatorType;struct _global_PointerType* _global_Maybe_rAllocator_get_type(struct _global_Allocator*** self, struct _global_Context* c){return &_global_Maybe_rAllocatorType;}
struct _global_PointerType* _global_Maybe_rAllocator_get_typeByValue(struct _global_Allocator** self, struct _global_Context* c){return &_global_Maybe_rAllocatorType;}
struct _global_PointerType _global_Maybe_rArray_TType;struct _global_PointerType* _global_Maybe_rArray_T_get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rArray_TType;}
struct _global_PointerType* _global_Maybe_rArray_T_get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rArray_TType;}
struct _global_Array_Array_T {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_Array_T _global_Array_Array_TInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_Array_T f;
f.length=length;f.capacity=capacity;f.allocator=allocator;f.data=data;return f;
};
struct _global_ArrayType _global_Array_Array_TType;struct _global_ArrayType* _global_Array_Array_T_get_type(struct _global_Array_Array_T* self, struct _global_Context* c){return &_global_Array_Array_TType;}
struct _global_ArrayType* _global_Array_Array_T_get_typeByValue(struct _global_Array_Array_T self, struct _global_Context* c){return &_global_Array_Array_TType;}
struct _global_ArrayType _global_Array_Array_TType;struct _global_Range {
unsigned int start;
unsigned int end;
};
static inline struct _global_Range _global_RangeInit(unsigned int start,unsigned int end){
struct _global_Range g;
g.start=start;g.end=end;return g;
};
struct _global_StructType _global_RangeType;struct _global_StructType* _global_Range_get_type(struct _global_Range* self, struct _global_Context* c){return &_global_RangeType;}
struct _global_Field* _global_RangeType_fields;
struct _global_Maybe_uint_Some {
unsigned int field0;

};union _global_Maybe_uint_cases {
struct _global_Maybe_uint_Some Some;

};
struct _global_Maybe_uint {
union _global_Maybe_uint_cases cases;
unsigned char tag;
};
struct _global_Maybe_uint _global_Some_uint(unsigned int h,struct _global_Context* j){
struct _global_Maybe_uint k;
k.cases.Some.field0 = h;k.tag = 0;
return k;}
struct _global_EnumType _global_Maybe_uintType;struct _global_EnumType* _global_Maybe_uint_get_type(struct _global_Maybe_uint* self, struct _global_Context* c){return &_global_Maybe_uintType;}
struct _global_EnumType* _global_Maybe_uint_get_typeByValue(struct _global_Maybe_uint self, struct _global_Context* c){return &_global_Maybe_uintType;}
struct _global_RangeIterator {
struct _global_Range range;
unsigned int it;
};
static inline struct _global_RangeIterator _global_RangeIteratorInit(struct _global_Range range,unsigned int it){
struct _global_RangeIterator n;
n.range=range;n.it=it;return n;
};
struct _global_StructType _global_RangeIteratorType;struct _global_StructType* _global_RangeIterator_get_type(struct _global_RangeIterator* self, struct _global_Context* c){return &_global_RangeIteratorType;}
struct _global_Field* _global_RangeIteratorType_fields;
union _global_FileAcess_cases {

};
struct _global_FileAcess {
union _global_FileAcess_cases cases;
unsigned char tag;
};
struct _global_FileAcess _global_ReadFile;
struct _global_FileAcess _global_WriteFile;
struct _global_FileAcess _global_ReadBFile;
struct _global_FileAcess _global_WriteBFile;
struct _global_EnumType _global_FileAcessType;struct _global_EnumType* _global_FileAcess_get_type(struct _global_FileAcess* self, struct _global_Context* c){return &_global_FileAcessType;}
struct _global_EnumType* _global_FileAcess_get_typeByValue(struct _global_FileAcess self, struct _global_Context* c){return &_global_FileAcessType;}
struct _global_StructType _global_FILEType;struct _global_StructType* _global_FILE_get_type(struct FILE* self, struct _global_Context* c){return &_global_FILEType;}
struct _global_Field* _global_FILEType_fields;
struct _global_File {
struct FILE* c_file;
struct _global_FileAcess acess;
struct _global_String filename;
};
static inline struct _global_File _global_FileInit(struct FILE* c_file,struct _global_FileAcess acess,struct _global_String filename){
struct _global_File r;
r.c_file=c_file;r.acess=acess;r.filename=filename;return r;
};
struct _global_StructType _global_FileType;struct _global_StructType* _global_File_get_type(struct _global_File* self, struct _global_Context* c){return &_global_FileType;}
struct _global_Field* _global_FileType_fields;
struct _global_Maybe_File_Some {
struct _global_File field0;

};union _global_Maybe_File_cases {
struct _global_Maybe_File_Some Some;

};
struct _global_Maybe_File {
union _global_Maybe_File_cases cases;
unsigned char tag;
};
struct _global_Maybe_File _global_Some_File(struct _global_File s,struct _global_Context* t){
struct _global_Maybe_File v;
v.cases.Some.field0 = s;v.tag = 0;
return v;}
struct _global_EnumType _global_Maybe_FileType;struct _global_EnumType* _global_Maybe_File_get_type(struct _global_Maybe_File* self, struct _global_Context* c){return &_global_Maybe_FileType;}
struct _global_EnumType* _global_Maybe_File_get_typeByValue(struct _global_Maybe_File self, struct _global_Context* c){return &_global_Maybe_FileType;}
struct _global_StructType _global_FloatTypeType;struct _global_StructType* _global_FloatType_get_type(struct FloatType* self, struct _global_Context* c){return &_global_FloatTypeType;}
struct _global_Field* _global_FloatTypeType_fields;
struct _global_StaticArray_StaticArray_S_Type {
struct _global_Type* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_Type _global_StaticArray_StaticArray_S_TypeInit(struct _global_Type* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_Type y;
y.data=data;y.length=length;return y;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_TypeType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_Type_get_type(struct _global_StaticArray_StaticArray_S_Type* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_TypeType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_Type_get_typeByValue(struct _global_StaticArray_StaticArray_S_Type self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_TypeType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_TypeType;struct _global_FuncType {
struct _global_StaticArray_StaticArray_S_Type args;
struct _global_Type return_type;
};
static inline struct _global_FuncType _global_FuncTypeInit(struct _global_StaticArray_StaticArray_S_Type args,struct _global_Type return_type){
struct _global_FuncType z;
z.args=args;z.return_type=return_type;return z;
};
struct _global_StructType _global_FuncTypeType;struct _global_StructType* _global_FuncType_get_type(struct _global_FuncType* self, struct _global_Context* c){return &_global_FuncTypeType;}
struct _global_Field* _global_FuncTypeType_fields;
struct _global_CharType {
};
static inline struct _global_CharType _global_CharTypeInit(){
struct _global_CharType B;
return B;
};
struct _global_StructType _global_CharTypeType;struct _global_StructType* _global_CharType_get_type(struct _global_CharType* self, struct _global_Context* c){return &_global_CharTypeType;}
struct _global_Field* _global_CharTypeType_fields;
struct _global_Maybe_Maybe_T_Some {
void* field0;

};union _global_Maybe_Maybe_T_cases {
struct _global_Maybe_Maybe_T_Some Some;

};
struct _global_Maybe_Maybe_T {
union _global_Maybe_Maybe_T_cases cases;
unsigned char tag;
};
struct _global_Maybe_Maybe_T _global_Some_Maybe_T(void* C,struct _global_Context* D){
struct _global_Maybe_Maybe_T F;
F.cases.Some.field0 = C;F.tag = 0;
return F;}
struct _global_Maybe_Maybe_T _global_None;
struct _global_EnumType _global_Maybe_Maybe_TType;struct _global_EnumType* _global_Maybe_Maybe_T_get_type(struct _global_Maybe_Maybe_T* self, struct _global_Context* c){return &_global_Maybe_Maybe_TType;}
struct _global_EnumType* _global_Maybe_Maybe_T_get_typeByValue(struct _global_Maybe_Maybe_T self, struct _global_Context* c){return &_global_Maybe_Maybe_TType;}
struct _global_PointerType _global_Maybe_rFILEType;struct _global_PointerType* _global_Maybe_rFILE_get_type(struct FILE*** self, struct _global_Context* c){return &_global_Maybe_rFILEType;}
struct _global_PointerType* _global_Maybe_rFILE_get_typeByValue(struct FILE** self, struct _global_Context* c){return &_global_Maybe_rFILEType;}
typedef void(*pp___none)(struct _global_Context*) ;
struct bb {
struct bb_VTABLE* vtable;
void* data;
};struct bb_VTABLE {struct _global_Type type;};static inline struct bb bbFromStruct(void* data, struct bb_VTABLE* vtable, struct _global_Type typ){ 
struct bb K;
K.data = data;K.vtable = vtable;K.vtable->type = typ;
return K; 
}void* bb_get_pointer_to_data(struct bb* self, struct _global_Context* context) { return self->data; }struct _global_Type bb_get_type(struct bb* K, struct _global_Context* context){ return K->vtable->type; }struct _global_Type bb_get_typeByValue(struct bb K, struct _global_Context* context){ return K.vtable->type; }
struct _global_InterfaceType bb_Type;struct _global_Array_none {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void* data;
};
static inline struct _global_Array_none _global_Array_noneInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void* data){
struct _global_Array_none L;
L.length=length;L.capacity=capacity;L.allocator=allocator;L.data=data;return L;
};
struct _global_ArrayType _global_Array_noneType;struct _global_ArrayType* _global_Array_none_get_type(struct _global_Array_none* self, struct _global_Context* c){return &_global_Array_noneType;}
struct _global_ArrayType* _global_Array_none_get_typeByValue(struct _global_Array_none self, struct _global_Context* c){return &_global_Array_noneType;}
struct _global_ArrayType _global_Array_noneType;struct _global_PointerType _global_Maybe_rnoneType;struct _global_PointerType* _global_Maybe_rnone_get_type(void*** self, struct _global_Context* c){return &_global_Maybe_rnoneType;}
struct _global_PointerType* _global_Maybe_rnone_get_typeByValue(void** self, struct _global_Context* c){return &_global_Maybe_rnoneType;}
struct _global_StaticArray_StaticArray_S_none {
void* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_none _global_StaticArray_StaticArray_S_noneInit(void* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_none M;
M.data=data;M.length=length;return M;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_noneType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_none_get_type(struct _global_StaticArray_StaticArray_S_none* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_noneType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_none_get_typeByValue(struct _global_StaticArray_StaticArray_S_none self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_noneType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_noneType;
void _global_panic(struct _global_String _global_s, struct _global_Context* b);
void _global_assert(_Bool _global_b, struct _global_String _global_message, struct _global_Context* c);
struct _global_TemporaryStorage _global_new_TemporaryStorage(uint64_t _global_maxSize, struct _global_Context* d);
uint64_t _global_TemporaryStorage_get_occupied(struct _global_TemporaryStorage* _global_self, struct _global_Context* f);
void* _global_TemporaryStorage_alloc(struct _global_TemporaryStorage* _global_self, uint64_t _global_size, struct _global_Context* g);
void _global_TemporaryStorage_dealloc(struct _global_TemporaryStorage* _global_self, void* _global_p, struct _global_Context* h);
void _global_TemporaryStorage_reset_to(struct _global_TemporaryStorage* _global_self, uint64_t _global_occupied, struct _global_Context* j);
void* _global_Malloc_alloc(struct _global_Malloc* _global_self, uint64_t _global_size, struct _global_Context* k);
void _global_Malloc_dealloc(struct _global_Malloc* _global_self, void* _global_pointer, struct _global_Context* l);
unsigned int _global_Malloc_get_occupied(struct _global_Malloc* _global_self, struct _global_Context* m);
void _global_Malloc_free_allocator(struct _global_Malloc* _global_self, struct _global_Context* n);
void _global_Malloc_reset_to(struct _global_Malloc* _global_self, uint64_t _global_to, struct _global_Context* p);
void _global_free(void* _global_p, struct _global_Context* q);
void _global_free_longterm(void* _global_p, struct _global_Context* r);
void _global_TemporaryStorage_free_allocator(struct _global_TemporaryStorage* _global_self, struct _global_Context* s);
struct _global_Array_Array_T _global_empty_array(struct _global_Context* t);
void _global_Range_iteratorByValue(struct _global_Range _global_self, struct _global_Context* v);

static inline void _global_Range_iterator(struct _global_Range*,struct _global_Context* v);

void _global_Range_iteratorByValue(struct _global_Range,struct _global_Context* v);
struct _global_Maybe_uint _global_RangeIterator_next(struct _global_RangeIterator* _global_self, struct _global_Context* w);
struct _global_String _global_FileAcess_toStringByValue(struct _global_FileAcess _global_self, struct _global_Context* x);

static inline struct _global_String _global_FileAcess_toString(struct _global_FileAcess*,struct _global_Context* x);

struct _global_String _global_FileAcess_toStringByValue(struct _global_FileAcess,struct _global_Context* x);
struct _global_String _global_File_read(struct _global_File* _global_self, struct _global_Context* y);
void _global_File_write(struct _global_File* _global_self, struct _global_String _global_s, struct _global_Context* z);
void _global_File_freeByValue(struct _global_File _global_self, struct _global_Context* B);

static inline void _global_File_free(struct _global_File*,struct _global_Context* B);

void _global_File_freeByValue(struct _global_File,struct _global_Context* B);
struct _global_Maybe_File _global_open(struct _global_String _global_filename, struct _global_FileAcess _global_acess, struct _global_Context* C);
uint64_t _global_IntType_get_size(struct IntType* _global_self, struct _global_Context* D);
struct _global_String _global_IntType_toString(struct IntType* _global_self, struct _global_Context* F);

struct _global_String _global_IntType_toString(struct IntType*,struct _global_Context* F);
uint64_t _global_FloatType_get_size(struct FloatType* _global_self, struct _global_Context* G);
struct _global_String _global_FloatType_toString(struct FloatType* _global_self, struct _global_Context* H);

struct _global_String _global_FloatType_toString(struct FloatType*,struct _global_Context* H);
struct _global_String _global_BoolType_toString(struct BoolType* _global_self, struct _global_Context* J);

struct _global_String _global_BoolType_toString(struct BoolType*,struct _global_Context* J);
uint64_t _global_BoolType_get_size(struct BoolType* _global_self, struct _global_Context* K);
struct _global_String _global_StringType_toString(struct StringType* _global_self, struct _global_Context* L);

struct _global_String _global_StringType_toString(struct StringType*,struct _global_Context* L);
uint64_t _global_StringType_get_size(struct StringType* _global_self, struct _global_Context* M);
struct _global_String _global_AliasType_toString(struct _global_AliasType* _global_self, struct _global_Context* N);

struct _global_String _global_AliasType_toString(struct _global_AliasType*,struct _global_Context* N);
uint64_t _global_AliasType_get_size(struct _global_AliasType* _global_self, struct _global_Context* P);
struct _global_String _global_PointerType_toString(struct _global_PointerType* _global_self, struct _global_Context* Q);

struct _global_String _global_PointerType_toString(struct _global_PointerType*,struct _global_Context* Q);
uint64_t _global_PointerType_get_size(struct _global_PointerType* _global_self, struct _global_Context* R);
uint64_t _global_StructType_get_size(struct _global_StructType* _global_self, struct _global_Context* S);
struct _global_String _global_StructType_toString(struct _global_StructType* _global_self, struct _global_Context* T);

struct _global_String _global_StructType_toString(struct _global_StructType*,struct _global_Context* T);
unsigned char _global_EnumType_get_tag(struct _global_EnumType* _global_self, void* _global_ptr, struct _global_Context* V);
struct _global_String _global_EnumType_toString(struct _global_EnumType* _global_self, struct _global_Context* W);

struct _global_String _global_EnumType_toString(struct _global_EnumType*,struct _global_Context* W);
uint64_t _global_EnumType_get_size(struct _global_EnumType* _global_self, struct _global_Context* X);
uint64_t _global_FuncType_get_size(struct _global_FuncType* _global_self, struct _global_Context* Y);
struct _global_String _global_InterfaceType_toString(struct _global_InterfaceType* _global_self, struct _global_Context* Z);

struct _global_String _global_InterfaceType_toString(struct _global_InterfaceType*,struct _global_Context* Z);
uint64_t _global_InterfaceType_get_size(struct _global_InterfaceType* _global_self, struct _global_Context* bb);
uint64_t _global_ArrayType_get_size(struct _global_ArrayType* _global_self, struct _global_Context* bc);
struct _global_String _global_ArrayType_toString(struct _global_ArrayType* _global_self, struct _global_Context* bd);

struct _global_String _global_ArrayType_toString(struct _global_ArrayType*,struct _global_Context* bd);
uint64_t _global_CharType_get_size(struct _global_CharType* _global_self, struct _global_Context* bf);
struct _global_String _global_NoneType_toString(struct NoneType* _global_self, struct _global_Context* bg);

struct _global_String _global_NoneType_toString(struct NoneType*,struct _global_Context* bg);
uint64_t _global_NoneType_get_size(struct NoneType* _global_self, struct _global_Context* bh);
void _global_log_string(struct _global_String _global_s, struct _global_Context* bj);

#define _global_exit(bj,bk) exit(bj)

#define _global_c_log(bl,bm) _global_c_log(bl)
void _global_panic(struct _global_String _global_s, struct _global_Context* bn){;
_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(7,"panic: "),(_global_s),bn),_global_StringInit(0,""),bn),bn);
_global_exit(1,bn);
;}
void _global_assert(_Bool _global_b, struct _global_String _global_message, struct _global_Context* bn){;
;
if(!(_global_b)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(18,"Assertion failed: "),(_global_message),bn),_global_StringInit(0,""),bn),bn);
;};
;}

#define _global_c_memcpy(bn,bp,bq,br) memcpy(bn,bp,bq)

#define _global_c_alloc(bs,bt) malloc(bs)

#define _global_c_free(bv,bw) free(bv)

#define _global_c_memset(bx,by,bz,bB) memset(bx,by,bz)
struct _global_TemporaryStorage _global_temporary_storage;struct _global_TemporaryStorage _global_longterm_storage_allocator;struct _global_Malloc _global_malloc;struct _global_Allocator _global_temporary_storage_as_allocator;struct _global_Allocator_VTABLE rTemporaryStorage_VTABLE_FOR_Allocator;struct _global_Allocator _global_malloc_as_allocator;struct _global_Allocator_VTABLE rMalloc_VTABLE_FOR_Allocator;struct _global_Allocator _global_longterm_storage_as_allocator;struct _global_TemporaryStorage _global_new_TemporaryStorage(uint64_t _global_maxSize, struct _global_Context* bC){;
;return _global_TemporaryStorageInit((uint64_t)0,(uint64_t)0,_global_c_alloc(_global_maxSize,bC),_global_maxSize);
;}
uint64_t _global_TemporaryStorage_get_occupied(struct _global_TemporaryStorage* _global_self, struct _global_Context* bC){;
;return (_global_self)->occupied;
;}
void* _global_TemporaryStorage_alloc(struct _global_TemporaryStorage* _global_self, uint64_t _global_size, struct _global_Context* bC){;
;
uint64_t _global_occupied;_global_occupied = (_global_self)->occupied;;
(_global_self)->occupied = (_global_self)->occupied+_global_size;;
if((_global_self)->occupied>(_global_self)->highest){;
(_global_self)->highest = (_global_self)->occupied;;
;};
if((_global_self)->occupied>=(_global_self)->maxSize){;
(bC)->allocator = &(_global_malloc_as_allocator);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(48,"ERROR: used more tempory memory than available: "),_global_u64_toStringByValue(((_global_self)->maxSize),bC),bC),_global_StringInit(0,""),bC),bC);
;};
;return _global_offsetPtr((_global_self)->data,(int64_t)_global_occupied,bC);
;}
void _global_TemporaryStorage_dealloc(struct _global_TemporaryStorage* _global_self, void* _global_p, struct _global_Context* bC){;
;
;}
void _global_TemporaryStorage_reset_to(struct _global_TemporaryStorage* _global_self, uint64_t _global_occupied, struct _global_Context* bC){;
;
(_global_self)->occupied = _global_occupied;;
if((_global_self)->occupied>=(_global_self)->maxSize){;
(bC)->allocator = &(_global_malloc_as_allocator);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(48,"ERROR: used more tempory memory than available: "),_global_u64_toStringByValue(((_global_self)->occupied),bC),bC),_global_StringInit(0,""),bC),bC);
;};
;}
void* _global_Malloc_alloc(struct _global_Malloc* _global_self, uint64_t _global_size, struct _global_Context* bC){;
;
;return _global_c_alloc(_global_size,bC);
;}
void _global_Malloc_dealloc(struct _global_Malloc* _global_self, void* _global_pointer, struct _global_Context* bC){;
;
_global_c_free(_global_pointer,bC);
;}
unsigned int _global_Malloc_get_occupied(struct _global_Malloc* _global_self, struct _global_Context* bC){;
;return 0;
;}
void _global_Malloc_free_allocator(struct _global_Malloc* _global_self, struct _global_Context* bC){;
;}
void _global_Malloc_reset_to(struct _global_Malloc* _global_self, uint64_t _global_to, struct _global_Context* bC){;
;
;}
void _global_free(void* _global_p, struct _global_Context* bC){;
_global_Allocator_dealloc((bC)->allocator,_global_p,bC);
;}
void _global_free_longterm(void* _global_p, struct _global_Context* bC){;
_global_Allocator_dealloc((bC)->longterm_storage,_global_p,bC);
;}
void _global_TemporaryStorage_free_allocator(struct _global_TemporaryStorage* _global_self, struct _global_Context* bC){;
_global_c_free((_global_self)->data,bC);
;}

#define _global_char_buffer_toString(bC,bD) _runtime_char_buffer_toString(bC)

#define _global_null_terminated '\0'

#define _global_make_String(bF,bG,bH) _global_StringInit(bF,bG)
struct _global_Array_Array_T _global_empty_array(struct _global_Context* bJ){;return _global_Array_Array_TInit(0,0,NULL,NULL);
;}
void _global_Range_iteratorByValue(struct _global_Range _global_self, struct _global_Context* bJ){;
_global_RangeIteratorInit(_global_self,0);
;}
static inline void _global_Range_iterator(struct _global_Range* bK,struct _global_Context* bJ){
_global_Range_iteratorByValue(*bK,bJ);
}static inline struct _global_Maybe_uint tmp_globalb(struct _global_Maybe_Maybe_T bL) {
struct _global_Maybe_uint bK;bK.tag = bL.tag;bK.cases = *(union _global_Maybe_uint_cases*) &(bL.cases);return bK;
}
struct _global_Maybe_uint _global_RangeIterator_next(struct _global_RangeIterator* _global_self, struct _global_Context* bJ){;
struct _global_Range* _global_range;_global_range = &(((_global_self)->range));;
;if((_global_self)->it<(_global_range)->end){;
unsigned int _global_tmp;_global_tmp = (_global_self)->it;;
(_global_self)->it = (_global_self)->it+1;;
return _global_Some_uint(_global_tmp,bJ);}
else{return tmp_globalb(_global_None);};
;}
struct _global_String _global_FileAcess_toStringByValue(struct _global_FileAcess _global_self, struct _global_Context* bJ){;
;struct _global_FileAcess bK =_global_self;
if(bK.tag==0){return _global_StringInit(1,"r");}else if(bK.tag==1){return _global_StringInit(1,"w");}else if(bK.tag==2){return _global_StringInit(2,"rb");}else if(bK.tag==3){return _global_StringInit(2,"wb");};
;}
static inline struct _global_String _global_FileAcess_toString(struct _global_FileAcess* bL,struct _global_Context* bJ){
return _global_FileAcess_toStringByValue(*bL,bJ);
}
#define _global_c_open_file(bJ,bK,bL) _runtime_c_open_file(bJ,bK)

#define _global_c_close_file(bM,bN) _runtime_c_close_file(bM)

#define _global_c_read_file(bP,bQ,bR,bS) _runtime_read_file(bP,bQ,bR)

#define _global_c_write_file(bT,bV,bW,bX) _runtime_write_file(bT,bV,bW)
struct _global_String _global_File_read(struct _global_File* _global_self, struct _global_Context* bY){;
struct _global_FileAcess bZ =(_global_self)->acess;if(bZ.tag==0){
;}
else if(bZ.tag==2){
;}
else if(1){
_global_panic(_global_StringInit(40,"Trying to read from file not set to read"),bY);
;}
;
;return _global_c_read_file((_global_self)->c_file,(_global_self)->filename,bY,bY);
;}
void _global_File_write(struct _global_File* _global_self, struct _global_String _global_s, struct _global_Context* bY){;
;
struct _global_FileAcess bZ =(_global_self)->acess;if(bZ.tag==1){
;}
else if(bZ.tag==3){
;}
else if(1){
_global_panic(_global_StringInit(40,"Trying to write to file not set to write"),bY);
;}
;
_global_c_write_file((_global_self)->c_file,_global_s,bY,bY);
;}
void _global_File_freeByValue(struct _global_File _global_self, struct _global_Context* bY){;
_global_c_close_file((_global_self).c_file,bY);
;}
static inline void _global_File_free(struct _global_File* bZ,struct _global_Context* bY){
_global_File_freeByValue(*bZ,bY);
}static inline struct _global_Maybe_File tmp_globalc(struct _global_Maybe_Maybe_T db) {
struct _global_Maybe_File cb;cb.tag = db.tag;cb.cases = *(union _global_Maybe_File_cases*) &(db.cases);return cb;
}
struct _global_Maybe_File _global_open(struct _global_String _global_filename, struct _global_FileAcess _global_acess, struct _global_Context* bY){;
;
;struct FILE* bZ =_global_c_open_file(_global_filename,_global_FileAcess_toStringByValue(_global_acess,bY),bY);
if(bZ != NULL){struct FILE* _global_file = bZ;
return _global_Some_File(_global_FileInit(_global_file,_global_acess,_global_filename),bY);}else if(bZ == NULL){return tmp_globalc(_global_None);};
;}

#define _global_set_bit_to(bY,bZ,cb,db) _global_c_set_bit_to(bY,bZ,cb)

#define _global_is_bit_set(fb,gb,hb) _global_c_is_bit_set(fb,gb)

#define _global_bit_and(jb,kb,lb) _global_c_bit_and(jb,kb)

#define _global_null_char '\0'
uint64_t _global_IntType_get_size(struct IntType* _global_self, struct _global_Context* mb){;
;return (uint64_t)(_global_self)->size;
;}
struct _global_String _global_IntType_toString(struct IntType* _global_self, struct _global_Context* mb){;
;return ((_global_self)->sign ? _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"i"),_global_uint_toStringByValue(((_global_self)->size*8),mb),mb),_global_StringInit(0,""),mb):(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"u"),_global_uint_toStringByValue(((_global_self)->size*8),mb),mb),_global_StringInit(0,""),mb)));
;}
static inline struct _global_String _global_IntType_toStringByValue(struct IntType nb,struct _global_Context* mb){
return _global_IntType_toString(&nb,mb);
}uint64_t _global_FloatType_get_size(struct FloatType* _global_self, struct _global_Context* mb){;
;return (uint64_t)(_global_self)->size;
;}
struct _global_String _global_FloatType_toString(struct FloatType* _global_self, struct _global_Context* mb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"f"),_global_uint_toStringByValue(((_global_self)->size*8),mb),mb),_global_StringInit(0,""),mb);
;}
static inline struct _global_String _global_FloatType_toStringByValue(struct FloatType nb,struct _global_Context* mb){
return _global_FloatType_toString(&nb,mb);
}struct _global_String _global_BoolType_toString(struct BoolType* _global_self, struct _global_Context* mb){;
;return _global_StringInit(4,"bool");
;}
static inline struct _global_String _global_BoolType_toStringByValue(struct BoolType nb,struct _global_Context* mb){
return _global_BoolType_toString(&nb,mb);
}uint64_t _global_BoolType_get_size(struct BoolType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(_Bool);
;}
struct _global_String _global_StringType_toString(struct StringType* _global_self, struct _global_Context* mb){;
;return _global_StringInit(6,"string");
;}
static inline struct _global_String _global_StringType_toStringByValue(struct StringType nb,struct _global_Context* mb){
return _global_StringType_toString(&nb,mb);
}uint64_t _global_StringType_get_size(struct StringType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(struct _global_String);
;}
struct _global_String _global_AliasType_toString(struct _global_AliasType* _global_self, struct _global_Context* mb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),mb),_global_StringInit(1,"."),mb),((_global_self)->name),mb),_global_StringInit(0,""),mb);
;}
static inline struct _global_String _global_AliasType_toStringByValue(struct _global_AliasType nb,struct _global_Context* mb){
return _global_AliasType_toString(&nb,mb);
}uint64_t _global_AliasType_get_size(struct _global_AliasType* _global_self, struct _global_Context* mb){;
;return _global_Type_get_size(&((_global_self)->real_type),mb);
;}
struct _global_String _global_PointerType_toString(struct _global_PointerType* _global_self, struct _global_Context* mb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"&"),_global_Type_toStringByValue(((_global_self)->p_type),mb),mb),_global_StringInit(0,""),mb);
;}
static inline struct _global_String _global_PointerType_toStringByValue(struct _global_PointerType nb,struct _global_Context* mb){
return _global_PointerType_toString(&nb,mb);
}uint64_t _global_PointerType_get_size(struct _global_PointerType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(void*);
;}
uint64_t _global_StructType_get_size(struct _global_StructType* _global_self, struct _global_Context* mb){;
;return (_global_self)->size;
;}
struct _global_String _global_StructType_toString(struct _global_StructType* _global_self, struct _global_Context* mb){;
;return (_global_String_op_eqByValue((_global_self)->package,_global_StringInit(7,"_global"),mb) ? (_global_self)->name:(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),mb),_global_StringInit(1,"."),mb),((_global_self)->name),mb),_global_StringInit(0,""),mb)));
;}
static inline struct _global_String _global_StructType_toStringByValue(struct _global_StructType nb,struct _global_Context* mb){
return _global_StructType_toString(&nb,mb);
}unsigned char _global_EnumType_get_tag(struct _global_EnumType* _global_self, void* _global_ptr, struct _global_Context* mb){;
;
;return *((unsigned char*)(_global_offsetPtr(_global_ptr,(int64_t)((_global_self)->tag_field).offset,mb)));
;}
struct _global_String _global_EnumType_toString(struct _global_EnumType* _global_self, struct _global_Context* mb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),mb),_global_StringInit(1,"."),mb),((_global_self)->name),mb),_global_StringInit(0,""),mb);
;}
static inline struct _global_String _global_EnumType_toStringByValue(struct _global_EnumType nb,struct _global_Context* mb){
return _global_EnumType_toString(&nb,mb);
}uint64_t _global_EnumType_get_size(struct _global_EnumType* _global_self, struct _global_Context* mb){;
;return (_global_self)->size;
;}
uint64_t _global_FuncType_get_size(struct _global_FuncType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(pp___none);
;}
struct _global_String _global_InterfaceType_toString(struct _global_InterfaceType* _global_self, struct _global_Context* mb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),mb),_global_StringInit(1,"."),mb),((_global_self)->name),mb),_global_StringInit(0,""),mb);
;}
static inline struct _global_String _global_InterfaceType_toStringByValue(struct _global_InterfaceType nb,struct _global_Context* mb){
return _global_InterfaceType_toString(&nb,mb);
}uint64_t _global_InterfaceType_get_size(struct _global_InterfaceType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(struct bb);
;}
uint64_t _global_ArrayType_get_size(struct _global_ArrayType* _global_self, struct _global_Context* mb){;
;struct _global_ArraySize nb =*((_global_self)->size);
if(nb.tag==0){unsigned int _global_length = nb.cases.Static.field0;
return (uint64_t)_global_length*_global_Type_get_size(&((_global_self)->array_type),mb);}else if(nb.tag==1){return (uint64_t)sizeof(struct _global_Array_none);}else if(nb.tag==2){return (uint64_t)sizeof(struct _global_StaticArray_StaticArray_S_none);};
;}
struct _global_String _global_ArrayType_toString(struct _global_ArrayType* _global_self, struct _global_Context* mb){;
;struct _global_ArraySize nb =*((_global_self)->size);
if(nb.tag==0){unsigned int _global_length = nb.cases.Static.field0;
return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"["),_global_uint_toStringByValue((_global_length),mb),mb),_global_StringInit(1,"]"),mb),_global_Type_toStringByValue(((_global_self)->array_type),mb),mb),_global_StringInit(0,""),mb);}else if(nb.tag==1){return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"[..]"),_global_Type_toStringByValue(((_global_self)->array_type),mb),mb),_global_StringInit(0,""),mb);}else if(nb.tag==2){return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(2,"[]"),_global_Type_toStringByValue(((_global_self)->array_type),mb),mb),_global_StringInit(0,""),mb);};
;}
static inline struct _global_String _global_ArrayType_toStringByValue(struct _global_ArrayType pb,struct _global_Context* mb){
return _global_ArrayType_toString(&pb,mb);
}uint64_t _global_CharType_get_size(struct _global_CharType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(char);
;}
struct _global_String _global_NoneType_toString(struct NoneType* _global_self, struct _global_Context* mb){;
;return _global_StringInit(4,"none");
;}
static inline struct _global_String _global_NoneType_toStringByValue(struct NoneType nb,struct _global_Context* mb){
return _global_NoneType_toString(&nb,mb);
}uint64_t _global_NoneType_get_size(struct NoneType* _global_self, struct _global_Context* mb){;
;return (uint64_t)sizeof(char);
;}
void _global_log_string(struct _global_String _global_s, struct _global_Context* mb){;
_global_c_log(_global_String_toString(&(_global_s),mb),mb);
;}

void _globalInitTypes() { 
 
_global_TemporaryStorageType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
_global_TemporaryStorageType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_TemporaryStorageType_fields
,4
);
_global_TemporaryStorageType.package = _global_StringInit(7, "_global");
_global_TemporaryStorageType.name = _global_StringInit(16, "TemporaryStorage");
_global_TemporaryStorageType.size = sizeof(struct _global_TemporaryStorage);
_global_TemporaryStorageType_fields[0].name = _global_StringInit(8, "occupied");
_global_TemporaryStorageType_fields[0].offset = offsetof(struct _global_TemporaryStorage, occupied);
_global_TemporaryStorageType_fields[0].field_type = 
_global_TypeFromStruct(
&_global_SizeT_Type
,
&rAliasType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_AliasType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
;
_global_TemporaryStorageType_fields[1].name = _global_StringInit(7, "highest");
_global_TemporaryStorageType_fields[1].offset = offsetof(struct _global_TemporaryStorage, highest);
_global_TemporaryStorageType_fields[1].field_type = 
_global_TypeFromStruct(
&_global_SizeT_Type
,
&rAliasType_VTABLE_FOR_Type
,
rAliasType_VTABLE_FOR_Type.type
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
;
_global_TemporaryStorageType_fields[2].name = _global_StringInit(4, "data");
_global_TemporaryStorageType_fields[2].offset = offsetof(struct _global_TemporaryStorage, data);
_global_TemporaryStorageType_fields[2].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_TemporaryStorageType_fields[3].name = _global_StringInit(7, "maxSize");
_global_TemporaryStorageType_fields[3].offset = offsetof(struct _global_TemporaryStorage, maxSize);
_global_TemporaryStorageType_fields[3].field_type = 
_global_TypeFromStruct(
&_global_SizeT_Type
,
&rAliasType_VTABLE_FOR_Type
,
rAliasType_VTABLE_FOR_Type.type
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
;_global_MallocType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_MallocType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_MallocType_fields
,0
);
_global_MallocType.package = _global_StringInit(7, "_global");
_global_MallocType.name = _global_StringInit(6, "Malloc");
_global_MallocType.size = sizeof(struct _global_Malloc);_global_Maybe_rAllocatorType.p_type =
_global_TypeFromStruct(
&_global_Allocator_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
_global_Maybe_rAllocatorType.nullable = 1;_global_Maybe_rArray_TType.p_type =
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
;
_global_Maybe_rArray_TType.nullable = 1;_global_Array_Array_TType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Array_TType.size->tag = 1;
_global_Array_Array_TType.array_type=
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
;_global_RangeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_RangeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_RangeType_fields
,2
);
_global_RangeType.package = _global_StringInit(7, "_global");
_global_RangeType.name = _global_StringInit(5, "Range");
_global_RangeType.size = sizeof(struct _global_Range);
_global_RangeType_fields[0].name = _global_StringInit(5, "start");
_global_RangeType_fields[0].offset = offsetof(struct _global_Range, start);
_global_RangeType_fields[0].field_type = 
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
_global_RangeType_fields[1].name = _global_StringInit(3, "end");
_global_RangeType_fields[1].offset = offsetof(struct _global_Range, end);
_global_RangeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;struct _global_Case* l =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
l[0].name = _global_StringInit(4, "Some");
l[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
l[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; l[0].args.data[0].offset = offsetof(struct _global_Maybe_uint_Some, field0);
l[1].name = _global_StringInit(4, "None");
l[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_uintType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_uintType.tag_field.offset = offsetof(struct _global_Maybe_uint, tag);
_global_Maybe_uintType.tag_field.field_type = 
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

_global_Maybe_uintType.size = sizeof(struct _global_Maybe_uint);

_global_Maybe_uintType.package = _global_StringInit(7, "_global");
_global_Maybe_uintType.name = _global_StringInit(10, "Maybe_uint");
_global_Maybe_uintType.cases.data = l;
_global_Maybe_uintType.cases.length = 2;
_global_RangeIteratorType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_RangeIteratorType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_RangeIteratorType_fields
,2
);
_global_RangeIteratorType.package = _global_StringInit(7, "_global");
_global_RangeIteratorType.name = _global_StringInit(13, "RangeIterator");
_global_RangeIteratorType.size = sizeof(struct _global_RangeIterator);
_global_RangeIteratorType_fields[0].name = _global_StringInit(5, "range");
_global_RangeIteratorType_fields[0].offset = offsetof(struct _global_RangeIterator, range);
_global_RangeIteratorType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Range_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_RangeIteratorType_fields[1].name = _global_StringInit(2, "it");
_global_RangeIteratorType_fields[1].offset = offsetof(struct _global_RangeIterator, it);
_global_RangeIteratorType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_ReadFile.tag = 0;
_global_WriteFile.tag = 1;
_global_ReadBFile.tag = 2;
_global_WriteBFile.tag = 3;
struct _global_Case* p =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 4);
p[0].name = _global_StringInit(8, "ReadFile");
p[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
p[1].name = _global_StringInit(9, "WriteFile");
p[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
p[2].name = _global_StringInit(9, "ReadBFile");
p[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
p[3].name = _global_StringInit(10, "WriteBFile");
p[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_FileAcessType.tag_field.name = _global_StringInit(3, "tag");

_global_FileAcessType.tag_field.offset = offsetof(struct _global_FileAcess, tag);
_global_FileAcessType.tag_field.field_type = 
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

_global_FileAcessType.size = sizeof(struct _global_FileAcess);

_global_FileAcessType.package = _global_StringInit(7, "_global");
_global_FileAcessType.name = _global_StringInit(9, "FileAcess");
_global_FileAcessType.cases.data = p;
_global_FileAcessType.cases.length = 4;
_global_FILEType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_FILEType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_FILEType_fields
,0
);
_global_FILEType.package = _global_StringInit(7, "_global");
_global_FILEType.name = _global_StringInit(4, "FILE");_global_FileType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
_global_FileType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_FileType_fields
,3
);
_global_FileType.package = _global_StringInit(7, "_global");
_global_FileType.name = _global_StringInit(4, "File");
_global_FileType.size = sizeof(struct _global_File);
_global_FileType_fields[0].name = _global_StringInit(6, "c_file");
_global_FileType_fields[0].offset = offsetof(struct _global_File, c_file);
_global_FileType_fields[0].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_FILE_get_type(NULL,(&_global_context))
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
;
_global_FileType_fields[1].name = _global_StringInit(5, "acess");
_global_FileType_fields[1].offset = offsetof(struct _global_File, acess);
_global_FileType_fields[1].field_type = 
_global_TypeFromStruct(
_global_FileAcess_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_FileType_fields[2].name = _global_StringInit(8, "filename");
_global_FileType_fields[2].offset = offsetof(struct _global_File, filename);
_global_FileType_fields[2].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;struct _global_Case* w =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
w[0].name = _global_StringInit(4, "Some");
w[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
w[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_File_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; w[0].args.data[0].offset = offsetof(struct _global_Maybe_File_Some, field0);
w[1].name = _global_StringInit(4, "None");
w[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_FileType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_FileType.tag_field.offset = offsetof(struct _global_Maybe_File, tag);
_global_Maybe_FileType.tag_field.field_type = 
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

_global_Maybe_FileType.size = sizeof(struct _global_Maybe_File);

_global_Maybe_FileType.package = _global_StringInit(7, "_global");
_global_Maybe_FileType.name = _global_StringInit(10, "Maybe_File");
_global_Maybe_FileType.cases.data = w;
_global_Maybe_FileType.cases.length = 2;
_global_FloatTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_FloatTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_FloatTypeType_fields
,0
);
_global_FloatTypeType.package = _global_StringInit(7, "_global");
_global_FloatTypeType.name = _global_StringInit(9, "FloatType");_global_StaticArray_StaticArray_S_TypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_TypeType.size->tag = 2;
_global_StaticArray_StaticArray_S_TypeType.array_type=
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;_global_FuncTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_FuncTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_FuncTypeType_fields
,2
);
_global_FuncTypeType.package = _global_StringInit(7, "_global");
_global_FuncTypeType.name = _global_StringInit(8, "FuncType");
_global_FuncTypeType.size = sizeof(struct _global_FuncType);
_global_FuncTypeType_fields[0].name = _global_StringInit(4, "args");
_global_FuncTypeType_fields[0].offset = offsetof(struct _global_FuncType, args);
_global_FuncTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Type_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_FuncTypeType_fields[1].name = _global_StringInit(11, "return_type");
_global_FuncTypeType_fields[1].offset = offsetof(struct _global_FuncType, return_type);
_global_FuncTypeType_fields[1].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;_global_CharTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_CharTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_CharTypeType_fields
,0
);
_global_CharTypeType.package = _global_StringInit(7, "_global");
_global_CharTypeType.name = _global_StringInit(8, "CharType");
_global_CharTypeType.size = sizeof(struct _global_CharType);_global_None.tag = 1;
struct _global_Case* G =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
G[0].name = _global_StringInit(4, "Some");
G[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
G[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; G[0].args.data[0].offset = offsetof(struct _global_Maybe_Maybe_T_Some, field0);
G[1].name = _global_StringInit(4, "None");
G[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_Maybe_TType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_Maybe_TType.tag_field.offset = offsetof(struct _global_Maybe_Maybe_T, tag);
_global_Maybe_Maybe_TType.tag_field.field_type = 
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

_global_Maybe_Maybe_TType.size = sizeof(struct _global_Maybe_Maybe_T);

_global_Maybe_Maybe_TType.package = _global_StringInit(7, "_global");
_global_Maybe_Maybe_TType.name = _global_StringInit(13, "Maybe_Maybe_T");
_global_Maybe_Maybe_TType.cases.data = G;
_global_Maybe_Maybe_TType.cases.length = 2;
_global_Maybe_rFILEType.p_type =
_global_TypeFromStruct(
_global_FILE_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rFILEType.nullable = 1;bb_Type.name = _global_StringInit(0, "")
;bb_Type.package = _global_StringInit(0, "");_global_Array_noneType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_noneType.size->tag = 1;
_global_Array_noneType.array_type=
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
;_global_Maybe_rnoneType.p_type =
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
;
_global_Maybe_rnoneType.nullable = 1;_global_StaticArray_StaticArray_S_noneType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_noneType.size->tag = 2;
_global_StaticArray_StaticArray_S_noneType.array_type=
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; }
void _globalInit() { 
;
;
;
;
;
;
_global_temporary_storage = _global_new_TemporaryStorage((uint64_t)10000000,(&_global_context));;
_global_longterm_storage_allocator = _global_new_TemporaryStorage((uint64_t)1000000000,(&_global_context));;
_global_malloc = _global_MallocInit();;
_global_temporary_storage_as_allocator = _global_AllocatorFromStruct(&(_global_temporary_storage),&rTemporaryStorage_VTABLE_FOR_Allocator,_global_TypeFromStruct(_global_TemporaryStorage_get_type(NULL,(&_global_context)),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &_global_TemporaryStorage_get_occupied, &_global_TemporaryStorage_alloc, &_global_TemporaryStorage_dealloc, &_global_TemporaryStorage_reset_to, &_global_TemporaryStorage_free_allocator);;
_global_malloc_as_allocator = _global_AllocatorFromStruct(&(_global_malloc),&rMalloc_VTABLE_FOR_Allocator,_global_TypeFromStruct(_global_Malloc_get_type(NULL,(&_global_context)),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &_global_Malloc_get_occupied, &_global_Malloc_alloc, &_global_Malloc_dealloc, &_global_Malloc_reset_to, &_global_Malloc_free_allocator);;
_global_longterm_storage_as_allocator = _global_AllocatorFromStruct(&(_global_longterm_storage_allocator),&rTemporaryStorage_VTABLE_FOR_Allocator,rTemporaryStorage_VTABLE_FOR_Allocator.type, &_global_TemporaryStorage_get_occupied, &_global_TemporaryStorage_alloc, &_global_TemporaryStorage_dealloc, &_global_TemporaryStorage_reset_to, &_global_TemporaryStorage_free_allocator);;
(&_global_context)->allocator = &(_global_temporary_storage_as_allocator);
(&_global_context)->longterm_storage = &(_global_longterm_storage_as_allocator);
;
;
;
;
;
;
;
;
;
;
;
;
};
struct _global_Context _global_context;
struct _global_Array_char {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
char* data;
};
static inline struct _global_Array_char _global_Array_charInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,char* data){
struct _global_Array_char c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_charType;struct _global_ArrayType* _global_Array_char_get_type(struct _global_Array_char* self, struct _global_Context* c){return &_global_Array_charType;}
struct _global_ArrayType* _global_Array_char_get_typeByValue(struct _global_Array_char self, struct _global_Context* c){return &_global_Array_charType;}
struct _global_ArrayType _global_Array_charType;struct _global_PointerType _global_Maybe_rcharType;struct _global_PointerType* _global_Maybe_rchar_get_type(char*** self, struct _global_Context* c){return &_global_Maybe_rcharType;}
struct _global_PointerType* _global_Maybe_rchar_get_typeByValue(char** self, struct _global_Context* c){return &_global_Maybe_rcharType;}
struct _global_Type_VTABLE rCharType_VTABLE_FOR_Type;struct stringBuilder_StringBuilder {
struct _global_Array_char chars;
};
static inline struct stringBuilder_StringBuilder stringBuilder_StringBuilderInit(struct _global_Array_char chars){
struct stringBuilder_StringBuilder d;
d.chars=chars;return d;
};
struct _global_StructType stringBuilder_StringBuilderType;struct _global_StructType* stringBuilder_StringBuilder_get_type(struct stringBuilder_StringBuilder* self, struct _global_Context* c){return &stringBuilder_StringBuilderType;}
struct _global_Field* stringBuilder_StringBuilderType_fields;

void stringBuilder_StringBuilder_append(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_String stringBuilder_s, struct _global_Context* b);
void stringBuilder_StringBuilder_shorten(struct stringBuilder_StringBuilder* stringBuilder_self, unsigned int stringBuilder_num, struct _global_Context* c);
struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_Context* d);

struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder*,struct _global_Context* d);
struct stringBuilder_StringBuilder stringBuilder_make_StringBuilder(struct _global_Context* f);

struct error_CompilerError {
struct _global_String filename;
unsigned int line;
struct _global_String mesg;
unsigned int column;
};
static inline struct error_CompilerError error_CompilerErrorInit(struct _global_String filename,unsigned int line,struct _global_String mesg,unsigned int column){
struct error_CompilerError c;
c.filename=filename;c.line=line;c.mesg=mesg;c.column=column;return c;
};
struct _global_StructType error_CompilerErrorType;struct _global_StructType* error_CompilerError_get_type(struct error_CompilerError* self, struct _global_Context* c){return &error_CompilerErrorType;}
struct _global_Field* error_CompilerErrorType_fields;

struct error_CompilerError* error_CompilerError_before(struct error_CompilerError* error_self, struct _global_String error_mesg, struct _global_Context* b);
struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* c);

struct _global_String error_CompilerError_toString(struct error_CompilerError*,struct _global_Context* c);

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
struct lexer_TokenType lexer_String;
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
struct lexer_Tok {
_Bool active;
unsigned int start;
unsigned int end;
};
static inline struct lexer_Tok lexer_TokInit(_Bool active,unsigned int start,unsigned int end){
struct lexer_Tok g;
g.active=active;g.start=start;g.end=end;return g;
};
struct _global_StructType lexer_TokType;struct _global_StructType* lexer_Tok_get_type(struct lexer_Tok* self, struct _global_Context* c){return &lexer_TokType;}
struct _global_Field* lexer_TokType_fields;
struct _global_Array_lexer_Token {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct lexer_Token* data;
};
static inline struct _global_Array_lexer_Token _global_Array_lexer_TokenInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct lexer_Token* data){
struct _global_Array_lexer_Token h;
h.length=length;h.capacity=capacity;h.allocator=allocator;h.data=data;return h;
};
struct _global_ArrayType _global_Array_lexer_TokenType;struct _global_ArrayType* _global_Array_lexer_Token_get_type(struct _global_Array_lexer_Token* self, struct _global_Context* c){return &_global_Array_lexer_TokenType;}
struct _global_ArrayType* _global_Array_lexer_Token_get_typeByValue(struct _global_Array_lexer_Token self, struct _global_Context* c){return &_global_Array_lexer_TokenType;}
struct _global_ArrayType _global_Array_lexer_TokenType;struct _global_PointerType _global_Maybe_rlexer_TokenType;struct _global_PointerType* _global_Maybe_rlexer_Token_get_type(struct lexer_Token*** self, struct _global_Context* c){return &_global_Maybe_rlexer_TokenType;}
struct _global_PointerType* _global_Maybe_rlexer_Token_get_typeByValue(struct lexer_Token** self, struct _global_Context* c){return &_global_Maybe_rlexer_TokenType;}
struct lexer_Lexer {
struct lexer_Tok tok;
struct _global_String src;
unsigned int i;
struct _global_Array_lexer_Token tokens;
struct _global_String filename;
unsigned int line;
unsigned int column;
};
static inline struct lexer_Lexer lexer_LexerInit(struct lexer_Tok tok,struct _global_String src,unsigned int i,struct _global_Array_lexer_Token tokens,struct _global_String filename,unsigned int line,unsigned int column){
struct lexer_Lexer j;
j.tok=tok;j.src=src;j.i=i;j.tokens=tokens;j.filename=filename;j.line=line;j.column=column;return j;
};
struct _global_StructType lexer_LexerType;struct _global_StructType* lexer_Lexer_get_type(struct lexer_Lexer* self, struct _global_Context* c){return &lexer_LexerType;}
struct _global_Field* lexer_LexerType_fields;
struct _global_StaticArray_StaticArray_S_char {
char* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_char _global_StaticArray_StaticArray_S_charInit(char* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_char k;
k.data=data;k.length=length;return k;
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
struct _global_Maybe_plexer_TokenTypecstringp _global_Some_plexer_TokenTypecstringp(struct plexer_TokenTypecstringp l,struct _global_Context* m){
struct _global_Maybe_plexer_TokenTypecstringp n;
n.cases.Some.field0 = l;n.tag = 0;
return n;}
struct _global_EnumType _global_Maybe_plexer_TokenTypecstringpType;struct _global_EnumType* _global_Maybe_plexer_TokenTypecstringp_get_type(struct _global_Maybe_plexer_TokenTypecstringp* self, struct _global_Context* c){return &_global_Maybe_plexer_TokenTypecstringpType;}
struct _global_EnumType* _global_Maybe_plexer_TokenTypecstringp_get_typeByValue(struct _global_Maybe_plexer_TokenTypecstringp self, struct _global_Context* c){return &_global_Maybe_plexer_TokenTypecstringpType;}
struct _global_StaticArray_StaticArray_S_lexer_Token {
struct lexer_Token* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_lexer_Token _global_StaticArray_StaticArray_S_lexer_TokenInit(struct lexer_Token* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_lexer_Token r;
r.data=data;r.length=length;return r;
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
struct _global_Result_rerror_CompilerError___lexer_Token _global_Ok_rerror_CompilerError___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token s,struct _global_Context* t){
struct _global_Result_rerror_CompilerError___lexer_Token v;
v.cases.Ok.field0 = s;v.tag = 0;
return v;}
struct _global_Result_rerror_CompilerError___lexer_Token _global_Error_rerror_CompilerError___lexer_Token(struct error_CompilerError* w,struct _global_Context* x){
struct _global_Result_rerror_CompilerError___lexer_Token y;
y.cases.Error.field0 = w;y.tag = 1;
return y;}
struct _global_EnumType _global_Result_rerror_CompilerError___lexer_TokenType;struct _global_EnumType* _global_Result_rerror_CompilerError___lexer_Token_get_type(struct _global_Result_rerror_CompilerError___lexer_Token* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError___lexer_TokenType;}
struct _global_EnumType* _global_Result_rerror_CompilerError___lexer_Token_get_typeByValue(struct _global_Result_rerror_CompilerError___lexer_Token self, struct _global_Context* c){return &_global_Result_rerror_CompilerError___lexer_TokenType;}
struct _global_StaticArray_7_string {
struct _global_String data[7];
};
struct _global_StaticArray_7_string _global_StaticArray_7_stringFill_array(struct _global_String with){
struct _global_StaticArray_7_string tmp;
for (unsigned int i = 0; i < 7; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_7_string _global_StaticArray_7_stringInit(struct _global_String C,struct _global_String D,struct _global_String F,struct _global_String G,struct _global_String H,struct _global_String J,struct _global_String K){
struct _global_StaticArray_7_string tmp;
tmp.data[0] = C;
tmp.data[1] = D;
tmp.data[2] = F;
tmp.data[3] = G;
tmp.data[4] = H;
tmp.data[5] = J;
tmp.data[6] = K;
return tmp; }
struct _global_ArrayType _global_StaticArray_7_stringType;struct _global_ArrayType* _global_StaticArray_7_string_get_type(struct _global_StaticArray_7_string* self, struct _global_Context* c){return &_global_StaticArray_7_stringType;}
struct _global_ArrayType* _global_StaticArray_7_string_get_typeByValue(struct _global_StaticArray_7_string self, struct _global_Context* c){return &_global_StaticArray_7_stringType;}
struct _global_ArrayType _global_StaticArray_7_stringType;struct _global_Result_rerror_CompilerError_Result_T_Ok {
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
struct _global_Result_rerror_CompilerError_Result_T _global_Ok_rerror_CompilerError_Result_T(void* L,struct _global_Context* M){
struct _global_Result_rerror_CompilerError_Result_T N;
N.cases.Ok.field0 = L;N.tag = 0;
return N;}
struct _global_Result_rerror_CompilerError_Result_T _global_Error_rerror_CompilerError_Result_T(struct error_CompilerError* P,struct _global_Context* Q){
struct _global_Result_rerror_CompilerError_Result_T R;
R.cases.Error.field0 = P;R.tag = 1;
return R;}
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
struct _global_Result_Result_E___lexer_Token _global_Ok_Result_E___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token V,struct _global_Context* W){
struct _global_Result_Result_E___lexer_Token X;
X.cases.Ok.field0 = V;X.tag = 0;
return X;}
struct _global_Result_Result_E___lexer_Token _global_Error_Result_E___lexer_Token(void* Y,struct _global_Context* Z){
struct _global_Result_Result_E___lexer_Token bb;
bb.cases.Error.field0 = Y;bb.tag = 1;
return bb;}
struct _global_EnumType _global_Result_Result_E___lexer_TokenType;struct _global_EnumType* _global_Result_Result_E___lexer_Token_get_type(struct _global_Result_Result_E___lexer_Token* self, struct _global_Context* c){return &_global_Result_Result_E___lexer_TokenType;}
struct _global_EnumType* _global_Result_Result_E___lexer_Token_get_typeByValue(struct _global_Result_Result_E___lexer_Token self, struct _global_Context* c){return &_global_Result_Result_E___lexer_TokenType;}

struct _global_String lexer_TokenType_toString(struct lexer_TokenType* lexer_self, struct _global_Context* b);

struct _global_String lexer_TokenType_toString(struct lexer_TokenType*,struct _global_Context* b);
struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* c);

struct _global_String lexer_Token_toString(struct lexer_Token*,struct _global_Context* c);
unsigned int lexer_Tok_length(struct lexer_Tok* lexer_self, struct _global_Context* d);
struct _global_String lexer_Tok_slice(struct lexer_Tok* lexer_self, struct _global_String lexer_s, struct _global_Context* f);
void lexer_Tok_clear(struct lexer_Tok* lexer_self, struct _global_Context* g);
void lexer_Tok_include(struct lexer_Tok* lexer_self, unsigned int lexer_i, struct _global_Context* h);
struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* j);
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* k);
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* l);
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* m);
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* n);
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* p);
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* q);
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* r);
_Bool lexer_is_digit(char lexer_c, struct _global_Context* s);
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* t);
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* v);
_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* w);
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* x);
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* y);
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* z);
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* B);

struct _global_AliasType hashMap_Hash_Type;
unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* b);

struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ {
struct hashMap_HashBucket_types_CompilerType* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Init(struct hashMap_HashBucket_types_CompilerType* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ g;
g.data=data;g.length=length;return g;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;struct _global_Array_string {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_String* data;
};
static inline struct _global_Array_string _global_Array_stringInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_String* data){
struct _global_Array_string c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_stringType;struct _global_ArrayType* _global_Array_string_get_type(struct _global_Array_string* self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType* _global_Array_string_get_typeByValue(struct _global_Array_string self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType _global_Array_stringType;struct _global_PointerType _global_Maybe_rstringType;struct _global_PointerType* _global_Maybe_rstring_get_type(struct _global_String*** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_PointerType* _global_Maybe_rstring_get_typeByValue(struct _global_String** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_Array_types_CompilerType {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct types_CompilerType* data;
};
static inline struct _global_Array_types_CompilerType _global_Array_types_CompilerTypeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct types_CompilerType* data){
struct _global_Array_types_CompilerType d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_types_CompilerTypeType;struct _global_ArrayType* _global_Array_types_CompilerType_get_type(struct _global_Array_types_CompilerType* self, struct _global_Context* c){return &_global_Array_types_CompilerTypeType;}
struct _global_ArrayType* _global_Array_types_CompilerType_get_typeByValue(struct _global_Array_types_CompilerType self, struct _global_Context* c){return &_global_Array_types_CompilerTypeType;}
struct _global_ArrayType _global_Array_types_CompilerTypeType;struct types_CompilerType_Int {
_Bool field0;
unsigned int field1;

};struct types_CompilerType_Float {
unsigned int field0;

};struct types_CompilerType_Struct {
struct types_StructInfo* field0;

};struct types_CompilerType_Func {
struct types_FuncPtr* field0;

};union types_CompilerType_cases {
struct types_CompilerType_Int Int;
struct types_CompilerType_Float Float;
struct types_CompilerType_Struct Struct;
struct types_CompilerType_Func Func;

};
struct types_CompilerType {
union types_CompilerType_cases cases;
unsigned char tag;
};
struct types_CompilerType types_Void;
struct types_CompilerType types_String;
struct types_CompilerType types_Bool;
struct types_CompilerType types_Int(_Bool m,unsigned int n,struct _global_Context* p){
struct types_CompilerType q;
q.cases.Int.field0 = m;q.cases.Int.field1 = n;q.tag = 3;
return q;}
struct types_CompilerType types_Float(unsigned int r,struct _global_Context* s){
struct types_CompilerType t;
t.cases.Float.field0 = r;t.tag = 4;
return t;}
struct types_CompilerType types_Struct(struct types_StructInfo* v,struct _global_Context* w){
struct types_CompilerType x;
x.cases.Struct.field0 = v;x.tag = 5;
return x;}
struct types_CompilerType types_Func(struct types_FuncPtr* y,struct _global_Context* z){
struct types_CompilerType B;
B.cases.Func.field0 = y;B.tag = 6;
return B;}
struct _global_EnumType types_CompilerTypeType;struct _global_EnumType* types_CompilerType_get_type(struct types_CompilerType* self, struct _global_Context* c){return &types_CompilerTypeType;}
struct _global_EnumType* types_CompilerType_get_typeByValue(struct types_CompilerType self, struct _global_Context* c){return &types_CompilerTypeType;}
struct _global_PointerType _global_Maybe_rtypes_CompilerTypeType;struct _global_PointerType* _global_Maybe_rtypes_CompilerType_get_type(struct types_CompilerType*** self, struct _global_Context* c){return &_global_Maybe_rtypes_CompilerTypeType;}
struct _global_PointerType* _global_Maybe_rtypes_CompilerType_get_typeByValue(struct types_CompilerType** self, struct _global_Context* c){return &_global_Maybe_rtypes_CompilerTypeType;}
struct hashMap_HashBucket_types_CompilerType {
struct _global_Array_string keys;
struct _global_Array_types_CompilerType values;
};
static inline struct hashMap_HashBucket_types_CompilerType hashMap_HashBucket_types_CompilerTypeInit(struct _global_Array_string keys,struct _global_Array_types_CompilerType values){
struct hashMap_HashBucket_types_CompilerType f;
f.keys=keys;f.values=values;return f;
};
struct _global_StructType hashMap_HashBucket_types_CompilerTypeType;struct _global_StructType* hashMap_HashBucket_types_CompilerType_get_type(struct hashMap_HashBucket_types_CompilerType* self, struct _global_Context* c){return &hashMap_HashBucket_types_CompilerTypeType;}
struct _global_Field* hashMap_HashBucket_types_CompilerTypeType_fields;
struct hashMap_HashMap_types_CompilerType {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_types_CompilerType hashMap_HashMap_types_CompilerTypeInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ buckets,unsigned int length){
struct hashMap_HashMap_types_CompilerType h;
h.buckets=buckets;h.length=length;return h;
};
struct _global_StructType hashMap_HashMap_types_CompilerTypeType;struct _global_StructType* hashMap_HashMap_types_CompilerType_get_type(struct hashMap_HashMap_types_CompilerType* self, struct _global_Context* c){return &hashMap_HashMap_types_CompilerTypeType;}
struct _global_Field* hashMap_HashMap_types_CompilerTypeType_fields;
struct types_StructInfo {
struct _global_String name;
struct hashMap_HashMap_types_CompilerType fields;
};
static inline struct types_StructInfo types_StructInfoInit(struct _global_String name,struct hashMap_HashMap_types_CompilerType fields){
struct types_StructInfo j;
j.name=name;j.fields=fields;return j;
};
struct _global_StructType types_StructInfoType;struct _global_StructType* types_StructInfo_get_type(struct types_StructInfo* self, struct _global_Context* c){return &types_StructInfoType;}
struct _global_Field* types_StructInfoType_fields;
struct _global_StaticArray_StaticArray_S_types_CompilerType {
struct types_CompilerType* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_types_CompilerType _global_StaticArray_StaticArray_S_types_CompilerTypeInit(struct types_CompilerType* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_types_CompilerType k;
k.data=data;k.length=length;return k;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_type(struct _global_StaticArray_StaticArray_S_types_CompilerType* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_typeByValue(struct _global_StaticArray_StaticArray_S_types_CompilerType self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct types_FuncPtr {
struct _global_StaticArray_StaticArray_S_types_CompilerType args;
struct types_CompilerType return_type;
_Bool external;
};
static inline struct types_FuncPtr types_FuncPtrInit(struct _global_StaticArray_StaticArray_S_types_CompilerType args,struct types_CompilerType return_type,_Bool external){
struct types_FuncPtr l;
l.args=args;l.return_type=return_type;l.external=external;return l;
};
struct _global_StructType types_FuncPtrType;struct _global_StructType* types_FuncPtr_get_type(struct types_FuncPtr* self, struct _global_Context* c){return &types_FuncPtrType;}
struct _global_Field* types_FuncPtrType_fields;
struct scope_DeclInfo {
struct types_CompilerType _type;
_Bool is_global;
};
static inline struct scope_DeclInfo scope_DeclInfoInit(struct types_CompilerType _type,_Bool is_global){
struct scope_DeclInfo F;
F._type=_type;F.is_global=is_global;return F;
};
struct _global_StructType scope_DeclInfoType;struct _global_StructType* scope_DeclInfo_get_type(struct scope_DeclInfo* self, struct _global_Context* c){return &scope_DeclInfoType;}
struct _global_Field* scope_DeclInfoType_fields;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ {
struct hashMap_HashBucket_scope_DeclInfo* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(struct hashMap_HashBucket_scope_DeclInfo* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ J;
J.data=data;J.length=length;return J;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_Array_scope_DeclInfo {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct scope_DeclInfo* data;
};
static inline struct _global_Array_scope_DeclInfo _global_Array_scope_DeclInfoInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct scope_DeclInfo* data){
struct _global_Array_scope_DeclInfo G;
G.length=length;G.capacity=capacity;G.allocator=allocator;G.data=data;return G;
};
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_ArrayType* _global_Array_scope_DeclInfo_get_type(struct _global_Array_scope_DeclInfo* self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType* _global_Array_scope_DeclInfo_get_typeByValue(struct _global_Array_scope_DeclInfo self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_PointerType _global_Maybe_rscope_DeclInfoType;struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_type(struct scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_typeByValue(struct scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct hashMap_HashBucket_scope_DeclInfo {
struct _global_Array_string keys;
struct _global_Array_scope_DeclInfo values;
};
static inline struct hashMap_HashBucket_scope_DeclInfo hashMap_HashBucket_scope_DeclInfoInit(struct _global_Array_string keys,struct _global_Array_scope_DeclInfo values){
struct hashMap_HashBucket_scope_DeclInfo H;
H.keys=keys;H.values=values;return H;
};
struct _global_StructType hashMap_HashBucket_scope_DeclInfoType;struct _global_StructType* hashMap_HashBucket_scope_DeclInfo_get_type(struct hashMap_HashBucket_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashBucket_scope_DeclInfoType;}
struct _global_Field* hashMap_HashBucket_scope_DeclInfoType_fields;
struct hashMap_HashMap_scope_DeclInfo {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_scope_DeclInfo hashMap_HashMap_scope_DeclInfoInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets,unsigned int length){
struct hashMap_HashMap_scope_DeclInfo K;
K.buckets=buckets;K.length=length;return K;
};
struct _global_StructType hashMap_HashMap_scope_DeclInfoType;struct _global_StructType* hashMap_HashMap_scope_DeclInfo_get_type(struct hashMap_HashMap_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashMap_scope_DeclInfoType;}
struct _global_Field* hashMap_HashMap_scope_DeclInfoType_fields;
struct scope_ScopeBlock {
struct hashMap_HashMap_scope_DeclInfo vars;
};
static inline struct scope_ScopeBlock scope_ScopeBlockInit(struct hashMap_HashMap_scope_DeclInfo vars){
struct scope_ScopeBlock L;
L.vars=vars;return L;
};
struct _global_StructType scope_ScopeBlockType;struct _global_StructType* scope_ScopeBlock_get_type(struct scope_ScopeBlock* self, struct _global_Context* c){return &scope_ScopeBlockType;}
struct _global_Field* scope_ScopeBlockType_fields;
struct _global_Array_scope_ScopeBlock {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct scope_ScopeBlock* data;
};
static inline struct _global_Array_scope_ScopeBlock _global_Array_scope_ScopeBlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct scope_ScopeBlock* data){
struct _global_Array_scope_ScopeBlock M;
M.length=length;M.capacity=capacity;M.allocator=allocator;M.data=data;return M;
};
struct _global_ArrayType _global_Array_scope_ScopeBlockType;struct _global_ArrayType* _global_Array_scope_ScopeBlock_get_type(struct _global_Array_scope_ScopeBlock* self, struct _global_Context* c){return &_global_Array_scope_ScopeBlockType;}
struct _global_ArrayType* _global_Array_scope_ScopeBlock_get_typeByValue(struct _global_Array_scope_ScopeBlock self, struct _global_Context* c){return &_global_Array_scope_ScopeBlockType;}
struct _global_ArrayType _global_Array_scope_ScopeBlockType;struct _global_PointerType _global_Maybe_rscope_ScopeBlockType;struct _global_PointerType* _global_Maybe_rscope_ScopeBlock_get_type(struct scope_ScopeBlock*** self, struct _global_Context* c){return &_global_Maybe_rscope_ScopeBlockType;}
struct _global_PointerType* _global_Maybe_rscope_ScopeBlock_get_typeByValue(struct scope_ScopeBlock** self, struct _global_Context* c){return &_global_Maybe_rscope_ScopeBlockType;}
struct scope_Scope {
struct _global_Array_scope_ScopeBlock blocks;
};
static inline struct scope_Scope scope_ScopeInit(struct _global_Array_scope_ScopeBlock blocks){
struct scope_Scope N;
N.blocks=blocks;return N;
};
struct _global_StructType scope_ScopeType;struct _global_StructType* scope_Scope_get_type(struct scope_Scope* self, struct _global_Context* c){return &scope_ScopeType;}
struct _global_Field* scope_ScopeType_fields;
union ast_OperatorKind_cases {

};
struct ast_OperatorKind {
union ast_OperatorKind_cases cases;
unsigned char tag;
};
struct ast_OperatorKind ast_Add;
struct ast_OperatorKind ast_Mul;
struct ast_OperatorKind ast_Div;
struct ast_OperatorKind ast_LT;
struct ast_OperatorKind ast_Sub;
struct _global_EnumType ast_OperatorKindType;struct _global_EnumType* ast_OperatorKind_get_type(struct ast_OperatorKind* self, struct _global_Context* c){return &ast_OperatorKindType;}
struct _global_EnumType* ast_OperatorKind_get_typeByValue(struct ast_OperatorKind self, struct _global_Context* c){return &ast_OperatorKindType;}
struct ast_ReadInfo {
_Bool is_global;
struct _global_String name;
};
static inline struct ast_ReadInfo ast_ReadInfoInit(_Bool is_global,struct _global_String name){
struct ast_ReadInfo R;
R.is_global=is_global;R.name=name;return R;
};
struct _global_StructType ast_ReadInfoType;struct _global_StructType* ast_ReadInfo_get_type(struct ast_ReadInfo* self, struct _global_Context* c){return &ast_ReadInfoType;}
struct _global_Field* ast_ReadInfoType_fields;
struct ast_FuncInfo {
struct _global_String name;
struct types_FuncPtr* _type;
};
static inline struct ast_FuncInfo ast_FuncInfoInit(struct _global_String name,struct types_FuncPtr* _type){
struct ast_FuncInfo S;
S.name=name;S._type=_type;return S;
};
struct _global_StructType ast_FuncInfoType;struct _global_StructType* ast_FuncInfo_get_type(struct ast_FuncInfo* self, struct _global_Context* c){return &ast_FuncInfoType;}
struct _global_Field* ast_FuncInfoType_fields;
struct ast_Payload_Int {
struct _global_String field0;

};struct ast_Payload_Float {
struct _global_String field0;

};struct ast_Payload_Bool {
_Bool field0;

};struct ast_Payload_Operator {
struct ast_OperatorKind field0;

};struct ast_Payload_Identifier {
struct ast_ReadInfo* field0;

};struct ast_Payload_FuncDef {
struct ast_FuncInfo* field0;

};struct ast_Payload_FuncArg {
struct _global_String field0;
struct types_CompilerType field1;

};struct ast_Payload_String {
struct _global_String field0;

};union ast_Payload_cases {
struct ast_Payload_Int Int;
struct ast_Payload_Float Float;
struct ast_Payload_Bool Bool;
struct ast_Payload_Operator Operator;
struct ast_Payload_Identifier Identifier;
struct ast_Payload_FuncDef FuncDef;
struct ast_Payload_FuncArg FuncArg;
struct ast_Payload_String String;

};
struct ast_Payload {
union ast_Payload_cases cases;
unsigned char tag;
};
struct ast_Payload ast_Root;
struct ast_Payload ast_Int(struct _global_String T,struct _global_Context* V){
struct ast_Payload W;
W.cases.Int.field0 = T;W.tag = 1;
return W;}
struct ast_Payload ast_Float(struct _global_String X,struct _global_Context* Y){
struct ast_Payload Z;
Z.cases.Float.field0 = X;Z.tag = 2;
return Z;}
struct ast_Payload ast_Bool(_Bool bb,struct _global_Context* bc){
struct ast_Payload bd;
bd.cases.Bool.field0 = bb;bd.tag = 3;
return bd;}
struct ast_Payload ast_Operator(struct ast_OperatorKind bf,struct _global_Context* bg){
struct ast_Payload bh;
bh.cases.Operator.field0 = bf;bh.tag = 4;
return bh;}
struct ast_Payload ast_Identifier(struct ast_ReadInfo* bj,struct _global_Context* bk){
struct ast_Payload bl;
bl.cases.Identifier.field0 = bj;bl.tag = 5;
return bl;}
struct ast_Payload ast_FuncCall;
struct ast_Payload ast_CreateAssign;
struct ast_Payload ast_Create;
struct ast_Payload ast_Assign;
struct ast_Payload ast_If;
struct ast_Payload ast_Block;
struct ast_Payload ast_Condition;
struct ast_Payload ast_Else;
struct ast_Payload ast_While;
struct ast_Payload ast_FuncDef(struct ast_FuncInfo* bm,struct _global_Context* bn){
struct ast_Payload bp;
bp.cases.FuncDef.field0 = bm;bp.tag = 15;
return bp;}
struct ast_Payload ast_Tuple;
struct ast_Payload ast_FuncArg(struct _global_String bq,struct types_CompilerType br,struct _global_Context* bs){
struct ast_Payload bt;
bt.cases.FuncArg.field0 = bq;bt.cases.FuncArg.field1 = br;bt.tag = 17;
return bt;}
struct ast_Payload ast_String(struct _global_String bv,struct _global_Context* bw){
struct ast_Payload bx;
bx.cases.String.field0 = bv;bx.tag = 18;
return bx;}
struct _global_EnumType ast_PayloadType;struct _global_EnumType* ast_Payload_get_type(struct ast_Payload* self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_EnumType* ast_Payload_get_typeByValue(struct ast_Payload self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_Array_rast_AST {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct ast_AST** data;
};
static inline struct _global_Array_rast_AST _global_Array_rast_ASTInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct ast_AST** data){
struct _global_Array_rast_AST bB;
bB.length=length;bB.capacity=capacity;bB.allocator=allocator;bB.data=data;return bB;
};
struct _global_ArrayType _global_Array_rast_ASTType;struct _global_ArrayType* _global_Array_rast_AST_get_type(struct _global_Array_rast_AST* self, struct _global_Context* c){return &_global_Array_rast_ASTType;}
struct _global_ArrayType* _global_Array_rast_AST_get_typeByValue(struct _global_Array_rast_AST self, struct _global_Context* c){return &_global_Array_rast_ASTType;}
struct _global_ArrayType _global_Array_rast_ASTType;struct ast_AST {
struct ast_Payload payload;
struct _global_Array_rast_AST nodes;
struct types_CompilerType _type;
struct ast_AST* owner;
struct _global_String _filename;
unsigned int _line;
unsigned int _column;
};
static inline struct ast_AST ast_ASTInit(struct ast_Payload payload,struct _global_Array_rast_AST nodes,struct types_CompilerType _type,struct ast_AST* owner,struct _global_String _filename,unsigned int _line,unsigned int _column){
struct ast_AST bC;
bC.payload=payload;bC.nodes=nodes;bC._type=_type;bC.owner=owner;bC._filename=_filename;bC._line=_line;bC._column=_column;return bC;
};
struct _global_StructType ast_ASTType;struct _global_StructType* ast_AST_get_type(struct ast_AST* self, struct _global_Context* c){return &ast_ASTType;}
struct _global_Field* ast_ASTType_fields;
struct _global_PointerType _global_Maybe_rrast_ASTType;struct _global_PointerType* _global_Maybe_rrast_AST_get_type(struct ast_AST**** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType* _global_Maybe_rrast_AST_get_typeByValue(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType _global_Maybe_rast_ASTType;struct _global_PointerType* _global_Maybe_rast_AST_get_type(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType* _global_Maybe_rast_AST_get_typeByValue(struct ast_AST** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType _global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_type(struct hashMap_HashBucket_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct hashMap_HashBucket_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_scope_DeclInfo* data){
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ bD;
bD.length=length;bD.capacity=capacity;bD.allocator=allocator;bD.data=data;return bD;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;
struct scope_DeclInfo scope_make_DeclInfo(struct types_CompilerType scope__type, struct _global_Context* b);
struct scope_ScopeBlock scope_make_ScopeBlock(struct _global_Context* c);
void scope_ScopeBlock_free(struct scope_ScopeBlock* scope_self, struct _global_Context* d);
struct scope_Scope* scope_make_Scope(struct _global_Context* f);
void scope_Scope_free(struct scope_Scope* scope_self, struct _global_Context* g);
void scope_Scope_push(struct scope_Scope* scope_self, struct _global_Context* h);
void scope_Scope_pop(struct scope_Scope* scope_self, struct _global_Context* j);
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* k);
struct error_CompilerError* scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct ast_AST* scope_node, struct _global_Context* l);

struct error_Thrower {
struct error_Thrower_VTABLE* vtable;
void* data;
};struct error_Thrower_VTABLE {struct _global_Type type;struct _global_String(*method_get_filename)(void*,struct _global_Context*);
unsigned int(*method_get_line)(void*,struct _global_Context*);
unsigned int(*method_get_column)(void*,struct _global_Context*);
};static inline struct error_Thrower error_ThrowerFromStruct(void* data, struct error_Thrower_VTABLE* vtable, struct _global_Type typ, struct _global_String(*d)(void*,struct _global_Context*), unsigned int(*f)(void*,struct _global_Context*), unsigned int(*g)(void*,struct _global_Context*)){ 
struct error_Thrower h;
h.data = data;h.vtable = vtable;h.vtable->method_get_filename = d;
h.vtable->method_get_line = f;
h.vtable->method_get_column = g;
h.vtable->type = typ;
return h; 
}void* error_Thrower_get_pointer_to_data(struct error_Thrower* self, struct _global_Context* context) { return self->data; }static inline struct _global_String error_Thrower_get_filename(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_filename(h->data,c);
};static inline struct _global_String error_Thrower_get_filenameByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_filename(h.data,c);
};static inline unsigned int error_Thrower_get_line(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_line(h->data,c);
};static inline unsigned int error_Thrower_get_lineByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_line(h.data,c);
};static inline unsigned int error_Thrower_get_column(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_column(h->data,c);
};static inline unsigned int error_Thrower_get_columnByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_column(h.data,c);
};struct _global_Type error_Thrower_get_type(struct error_Thrower* h, struct _global_Context* context){ return h->vtable->type; }struct _global_Type error_Thrower_get_typeByValue(struct error_Thrower h, struct _global_Context* context){ return h.vtable->type; }
struct _global_InterfaceType error_Thrower_Type;struct _global_Result_rerror_CompilerError_types_CompilerType_Ok {
struct types_CompilerType field0;

};struct _global_Result_rerror_CompilerError_types_CompilerType_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError_types_CompilerType_cases {
struct _global_Result_rerror_CompilerError_types_CompilerType_Ok Ok;
struct _global_Result_rerror_CompilerError_types_CompilerType_Error Error;

};
struct _global_Result_rerror_CompilerError_types_CompilerType {
union _global_Result_rerror_CompilerError_types_CompilerType_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError_types_CompilerType _global_Ok_rerror_CompilerError_types_CompilerType(struct types_CompilerType m,struct _global_Context* n){
struct _global_Result_rerror_CompilerError_types_CompilerType p;
p.cases.Ok.field0 = m;p.tag = 0;
return p;}
struct _global_Result_rerror_CompilerError_types_CompilerType _global_Error_rerror_CompilerError_types_CompilerType(struct error_CompilerError* q,struct _global_Context* r){
struct _global_Result_rerror_CompilerError_types_CompilerType s;
s.cases.Error.field0 = q;s.tag = 1;
return s;}
struct _global_EnumType _global_Result_rerror_CompilerError_types_CompilerTypeType;struct _global_EnumType* _global_Result_rerror_CompilerError_types_CompilerType_get_type(struct _global_Result_rerror_CompilerError_types_CompilerType* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_types_CompilerTypeType;}
struct _global_EnumType* _global_Result_rerror_CompilerError_types_CompilerType_get_typeByValue(struct _global_Result_rerror_CompilerError_types_CompilerType self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_types_CompilerTypeType;}
struct _global_Array_____operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_operatorParser_OpDesc* data;
};
static inline struct _global_Array_____operatorParser_OpDesc _global_Array_____operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_operatorParser_OpDesc* data){
struct _global_Array_____operatorParser_OpDesc y;
y.length=length;y.capacity=capacity;y.allocator=allocator;y.data=data;return y;
};
struct _global_ArrayType _global_Array_____operatorParser_OpDescType;struct _global_ArrayType* _global_Array_____operatorParser_OpDesc_get_type(struct _global_Array_____operatorParser_OpDesc* self, struct _global_Context* c){return &_global_Array_____operatorParser_OpDescType;}
struct _global_ArrayType* _global_Array_____operatorParser_OpDesc_get_typeByValue(struct _global_Array_____operatorParser_OpDesc self, struct _global_Context* c){return &_global_Array_____operatorParser_OpDescType;}
struct _global_ArrayType _global_Array_____operatorParser_OpDescType;struct _global_Array_operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct operatorParser_OpDesc* data;
};
static inline struct _global_Array_operatorParser_OpDesc _global_Array_operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct operatorParser_OpDesc* data){
struct _global_Array_operatorParser_OpDesc x;
x.length=length;x.capacity=capacity;x.allocator=allocator;x.data=data;return x;
};
struct _global_ArrayType _global_Array_operatorParser_OpDescType;struct _global_ArrayType* _global_Array_operatorParser_OpDesc_get_type(struct _global_Array_operatorParser_OpDesc* self, struct _global_Context* c){return &_global_Array_operatorParser_OpDescType;}
struct _global_ArrayType* _global_Array_operatorParser_OpDesc_get_typeByValue(struct _global_Array_operatorParser_OpDesc self, struct _global_Context* c){return &_global_Array_operatorParser_OpDescType;}
struct _global_ArrayType _global_Array_operatorParser_OpDescType;struct operatorParser_OpDesc {
_Bool unary;
unsigned int precedence;
struct ast_OperatorKind kind;
_Bool left_a;
};
static inline struct operatorParser_OpDesc operatorParser_OpDescInit(_Bool unary,unsigned int precedence,struct ast_OperatorKind kind,_Bool left_a){
struct operatorParser_OpDesc w;
w.unary=unary;w.precedence=precedence;w.kind=kind;w.left_a=left_a;return w;
};
struct _global_StructType operatorParser_OpDescType;struct _global_StructType* operatorParser_OpDesc_get_type(struct operatorParser_OpDesc* self, struct _global_Context* c){return &operatorParser_OpDescType;}
struct _global_Field* operatorParser_OpDescType_fields;
struct _global_PointerType _global_Maybe_roperatorParser_OpDescType;struct _global_PointerType* _global_Maybe_roperatorParser_OpDesc_get_type(struct operatorParser_OpDesc*** self, struct _global_Context* c){return &_global_Maybe_roperatorParser_OpDescType;}
struct _global_PointerType* _global_Maybe_roperatorParser_OpDesc_get_typeByValue(struct operatorParser_OpDesc** self, struct _global_Context* c){return &_global_Maybe_roperatorParser_OpDescType;}
struct _global_PointerType _global_Maybe_r____operatorParser_OpDescType;struct _global_PointerType* _global_Maybe_r____operatorParser_OpDesc_get_type(struct _global_Array_operatorParser_OpDesc*** self, struct _global_Context* c){return &_global_Maybe_r____operatorParser_OpDescType;}
struct _global_PointerType* _global_Maybe_r____operatorParser_OpDesc_get_typeByValue(struct _global_Array_operatorParser_OpDesc** self, struct _global_Context* c){return &_global_Maybe_r____operatorParser_OpDescType;}
struct operatorParser_OpStack {
struct _global_Array_____operatorParser_OpDesc scopes;
};
static inline struct operatorParser_OpStack operatorParser_OpStackInit(struct _global_Array_____operatorParser_OpDesc scopes){
struct operatorParser_OpStack z;
z.scopes=scopes;return z;
};
struct _global_StructType operatorParser_OpStackType;struct _global_StructType* operatorParser_OpStack_get_type(struct operatorParser_OpStack* self, struct _global_Context* c){return &operatorParser_OpStackType;}
struct _global_Field* operatorParser_OpStackType_fields;
struct _global_Array_uint {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
unsigned int* data;
};
static inline struct _global_Array_uint _global_Array_uintInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,unsigned int* data){
struct _global_Array_uint B;
B.length=length;B.capacity=capacity;B.allocator=allocator;B.data=data;return B;
};
struct _global_ArrayType _global_Array_uintType;struct _global_ArrayType* _global_Array_uint_get_type(struct _global_Array_uint* self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType* _global_Array_uint_get_typeByValue(struct _global_Array_uint self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType _global_Array_uintType;struct _global_PointerType _global_Maybe_ruintType;struct _global_PointerType* _global_Maybe_ruint_get_type(unsigned int*** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct _global_PointerType* _global_Maybe_ruint_get_typeByValue(unsigned int** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct parser_Parser {
struct _global_StaticArray_StaticArray_S_lexer_Token tokens;
struct _global_String filename;
struct ast_AST* current_node;
unsigned int iter;
struct operatorParser_OpStack op_stack;
struct _global_Array_uint active_index;
unsigned int num_paren;
unsigned int num_indent;
struct _global_Array_uint paren_stack;
struct _global_Array_uint indent_stack;
};
static inline struct parser_Parser parser_ParserInit(struct _global_StaticArray_StaticArray_S_lexer_Token tokens,struct _global_String filename,struct ast_AST* current_node,unsigned int iter,struct operatorParser_OpStack op_stack,struct _global_Array_uint active_index,unsigned int num_paren,unsigned int num_indent,struct _global_Array_uint paren_stack,struct _global_Array_uint indent_stack){
struct parser_Parser C;
C.tokens=tokens;C.filename=filename;C.current_node=current_node;C.iter=iter;C.op_stack=op_stack;C.active_index=active_index;C.num_paren=num_paren;C.num_indent=num_indent;C.paren_stack=paren_stack;C.indent_stack=indent_stack;return C;
};
struct _global_StructType parser_ParserType;struct _global_StructType* parser_Parser_get_type(struct parser_Parser* self, struct _global_Context* c){return &parser_ParserType;}
struct _global_Field* parser_ParserType_fields;
struct ptypes_CompilerTypectypes_CompilerTypep  { struct types_CompilerType field0;struct types_CompilerType field1; };
struct ptypes_CompilerTypectypes_CompilerTypep ptypes_CompilerTypectypes_CompilerTypepInit(struct types_CompilerType field0,struct types_CompilerType field1) {struct ptypes_CompilerTypectypes_CompilerTypep tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;
struct _global_Result_Result_E_types_CompilerType_Ok {
struct types_CompilerType field0;

};struct _global_Result_Result_E_types_CompilerType_Error {
void* field0;

};union _global_Result_Result_E_types_CompilerType_cases {
struct _global_Result_Result_E_types_CompilerType_Ok Ok;
struct _global_Result_Result_E_types_CompilerType_Error Error;

};
struct _global_Result_Result_E_types_CompilerType {
union _global_Result_Result_E_types_CompilerType_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E_types_CompilerType _global_Ok_Result_E_types_CompilerType(struct types_CompilerType D,struct _global_Context* F){
struct _global_Result_Result_E_types_CompilerType G;
G.cases.Ok.field0 = D;G.tag = 0;
return G;}
struct _global_Result_Result_E_types_CompilerType _global_Error_Result_E_types_CompilerType(void* H,struct _global_Context* J){
struct _global_Result_Result_E_types_CompilerType K;
K.cases.Error.field0 = H;K.tag = 1;
return K;}
struct _global_EnumType _global_Result_Result_E_types_CompilerTypeType;struct _global_EnumType* _global_Result_Result_E_types_CompilerType_get_type(struct _global_Result_Result_E_types_CompilerType* self, struct _global_Context* c){return &_global_Result_Result_E_types_CompilerTypeType;}
struct _global_EnumType* _global_Result_Result_E_types_CompilerType_get_typeByValue(struct _global_Result_Result_E_types_CompilerType self, struct _global_Context* c){return &_global_Result_Result_E_types_CompilerTypeType;}

struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType types_self, struct _global_Context* b);

static inline struct _global_String types_CompilerType_toString(struct types_CompilerType*,struct _global_Context* b);

struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType,struct _global_Context* b);
struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* c);

static inline struct error_CompilerError* types_CompilerType_expect_equals(struct types_CompilerType*,struct types_CompilerType,struct error_Thrower,struct _global_Context* c);

struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType,struct types_CompilerType,struct error_Thrower,struct _global_Context* c);
_Bool types_CompilerType_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* d);

static inline _Bool types_CompilerType_equals(struct types_CompilerType*,struct types_CompilerType,struct _global_Context* d);

_Bool types_CompilerType_equalsByValue(struct types_CompilerType,struct types_CompilerType,struct _global_Context* d);
struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* f);

static inline struct error_CompilerError* types_CompilerType_duck_type(struct types_CompilerType*,struct types_CompilerType,struct error_Thrower,struct _global_Context* f);

struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType,struct types_CompilerType,struct error_Thrower,struct _global_Context* f);
struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType types_self, struct _global_Context* g);

static inline struct types_CompilerType types_CompilerType_to_real_type(struct types_CompilerType*,struct _global_Context* g);

struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType,struct _global_Context* g);
_Bool types_CompilerType_is_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* h);

static inline _Bool types_CompilerType_is_type(struct types_CompilerType*,struct types_CompilerType,struct _global_Context* h);

_Bool types_CompilerType_is_typeByValue(struct types_CompilerType,struct types_CompilerType,struct _global_Context* h);
struct _global_String types_float_to_string(unsigned int types_size, struct _global_Context* j);
struct error_CompilerError* types_float_duck_type(unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* k);
struct types_CompilerType types_make_Float(struct _global_Context* l);
struct _global_String types_int_to_string(_Bool types_unsigned, unsigned int types_size, struct _global_Context* m);
struct error_CompilerError* types_int_duck_type(_Bool types_unsigned, unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* n);
struct types_CompilerType types_make_Int(struct _global_Context* p);
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* q);

struct _global_String types_FuncPtr_toString(struct types_FuncPtr*,struct _global_Context* q);
struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* r);
_Bool types_FuncPtr_op_eq(struct types_FuncPtr* types_self, struct types_FuncPtr* types_other, struct _global_Context* s);
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* t);
struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* v);
struct _global_String types_StructInfo_toString(struct types_StructInfo* types_self, struct _global_Context* w);

struct _global_String types_StructInfo_toString(struct types_StructInfo*,struct _global_Context* w);
_Bool types_StructInfo_equals(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct _global_Context* x);
struct error_CompilerError* types_StructInfo_duck_type(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* y);
_Bool types_StructInfo_op_eq(struct types_StructInfo* types_self, struct types_StructInfo* types_other, struct _global_Context* z);
struct types_StructInfo* types_make_StructInfo(struct _global_String types_name, struct hashMap_HashMap_types_CompilerType types_fields, struct _global_Context* B);
struct _global_Result_rerror_CompilerError_types_CompilerType types_parse_type(struct parser_Parser* types_self, struct _global_Context* C);


struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* b);

struct _global_String ast_Payload_toString(struct ast_Payload*,struct _global_Context* b);
struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* c);
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* d);
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* f);
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* g);
struct ast_AST** ast_AST_op_get(struct ast_AST* ast_self, unsigned int ast_index, struct _global_Context* h);
unsigned int ast_AST_length(struct ast_AST* ast_self, struct _global_Context* j);
struct types_CompilerType ast_op_type(struct ast_AST* ast_node, struct _global_Context* k);

struct puintcrnonep  { unsigned int field0;void* field1; };
struct puintcrnonep puintcrnonepInit(unsigned int field0,void* field1) {struct puintcrnonep tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

void print_type_to_string(struct _global_Type print_kind, void* print_ptr, struct _global_String print_tab, struct stringBuilder_StringBuilder* print_s, struct _global_Context* b);

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


struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* b);
struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* c);
struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* d);

struct _global_Result_rerror_CompilerError_rast_AST_Ok {
struct ast_AST* field0;

};struct _global_Result_rerror_CompilerError_rast_AST_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError_rast_AST_cases {
struct _global_Result_rerror_CompilerError_rast_AST_Ok Ok;
struct _global_Result_rerror_CompilerError_rast_AST_Error Error;

};
struct _global_Result_rerror_CompilerError_rast_AST {
union _global_Result_rerror_CompilerError_rast_AST_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError_rast_AST _global_Ok_rerror_CompilerError_rast_AST(struct ast_AST* c,struct _global_Context* d){
struct _global_Result_rerror_CompilerError_rast_AST f;
f.cases.Ok.field0 = c;f.tag = 0;
return f;}
struct _global_Result_rerror_CompilerError_rast_AST _global_Error_rerror_CompilerError_rast_AST(struct error_CompilerError* g,struct _global_Context* h){
struct _global_Result_rerror_CompilerError_rast_AST j;
j.cases.Error.field0 = g;j.tag = 1;
return j;}
struct _global_EnumType _global_Result_rerror_CompilerError_rast_ASTType;struct _global_EnumType* _global_Result_rerror_CompilerError_rast_AST_get_type(struct _global_Result_rerror_CompilerError_rast_AST* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_rast_ASTType;}
struct _global_EnumType* _global_Result_rerror_CompilerError_rast_AST_get_typeByValue(struct _global_Result_rerror_CompilerError_rast_AST self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_rast_ASTType;}

struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* b);
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* c);
struct error_CompilerError* varParser_parse_assign(struct parser_Parser* varParser_self, struct _global_Context* d);
struct error_CompilerError* varParser_parse_op_assign(struct parser_Parser* varParser_self, struct ast_OperatorKind varParser_op, struct _global_Context* f);
struct error_CompilerError* varParser_parse_add_assign(struct parser_Parser* varParser_self, struct _global_Context* g);
struct error_CompilerError* varParser_parse_sub_assign(struct parser_Parser* varParser_self, struct _global_Context* h);


struct error_CompilerError* tuple_parse_tuple(struct parser_Parser* tuple_self, struct _global_Context* b);


struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* b);


struct error_CompilerError* ifStatement_if_body(struct parser_Parser* ifStatement_self, struct _global_Context* b);
struct error_CompilerError* ifStatement_if_expr(struct parser_Parser* ifStatement_self, struct _global_Context* c);
struct error_CompilerError* ifStatement_else_expr(struct parser_Parser* ifStatement_self, struct _global_Context* d);


struct error_CompilerError* whileStatement_while_expr(struct parser_Parser* whileStatement_self, struct _global_Context* b);


struct error_CompilerError* funcParser_parse_funcDef(struct parser_Parser* funcParser_self, struct _global_Context* b);


struct error_CompilerError* stringParser_parse_string(struct parser_Parser* stringParser_self, struct _global_Context* b);

struct _global_PointerType _global_Maybe_rhashMap_HashBucket_types_CompilerType_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_types_CompilerType__get_type(struct hashMap_HashBucket_types_CompilerType*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_types_CompilerType_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_types_CompilerType__get_typeByValue(struct hashMap_HashBucket_types_CompilerType** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_types_CompilerType_Type;}
struct _global_Array_hashMap_HashBucket_types_CompilerType_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_types_CompilerType* data;
};
static inline struct _global_Array_hashMap_HashBucket_types_CompilerType_ _global_Array_hashMap_HashBucket_types_CompilerType_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_types_CompilerType* data){
struct _global_Array_hashMap_HashBucket_types_CompilerType_ c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_types_CompilerType_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_types_CompilerType__get_type(struct _global_Array_hashMap_HashBucket_types_CompilerType_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_types_CompilerType__get_typeByValue(struct _global_Array_hashMap_HashBucket_types_CompilerType_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_types_CompilerType_Type;struct _global_StaticArray_StaticArray_S_string {
struct _global_String* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_string _global_StaticArray_StaticArray_S_stringInit(struct _global_String* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_string d;
d.data=data;d.length=length;return d;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_stringType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_string_get_type(struct _global_StaticArray_StaticArray_S_string* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_stringType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_string_get_typeByValue(struct _global_StaticArray_StaticArray_S_string self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_stringType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_stringType;
struct error_CompilerError* structParser_parse_struct(struct parser_Parser* structParser_self, struct _global_Context* b);

struct _global_Result_Result_E_rast_AST_Ok {
struct ast_AST* field0;

};struct _global_Result_Result_E_rast_AST_Error {
void* field0;

};union _global_Result_Result_E_rast_AST_cases {
struct _global_Result_Result_E_rast_AST_Ok Ok;
struct _global_Result_Result_E_rast_AST_Error Error;

};
struct _global_Result_Result_E_rast_AST {
union _global_Result_Result_E_rast_AST_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E_rast_AST _global_Ok_Result_E_rast_AST(struct ast_AST* c,struct _global_Context* d){
struct _global_Result_Result_E_rast_AST f;
f.cases.Ok.field0 = c;f.tag = 0;
return f;}
struct _global_Result_Result_E_rast_AST _global_Error_Result_E_rast_AST(void* g,struct _global_Context* h){
struct _global_Result_Result_E_rast_AST j;
j.cases.Error.field0 = g;j.tag = 1;
return j;}
struct _global_EnumType _global_Result_Result_E_rast_ASTType;struct _global_EnumType* _global_Result_Result_E_rast_AST_get_type(struct _global_Result_Result_E_rast_AST* self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}
struct _global_EnumType* _global_Result_Result_E_rast_AST_get_typeByValue(struct _global_Result_Result_E_rast_AST self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}

struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* b);
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* c);
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* d);
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* f);
unsigned int parser_Parser_get_active_index(struct parser_Parser* parser_self, struct _global_Context* g);
void parser_Parser_set_active_index(struct parser_Parser* parser_self, unsigned int parser_val, struct _global_Context* h);
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* j);
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* k);
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* l);
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* m);
struct error_CompilerError* parser_Parser_eval_till_end(struct parser_Parser* parser_self, struct _global_Context* n);
struct error_CompilerError* parser_Parser_comma(struct parser_Parser* parser_self, struct _global_Context* p);
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop_last(struct parser_Parser* parser_self, struct _global_Context* q);
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* r);
struct error_CompilerError* parser_Parser_eval_not_func_call(struct parser_Parser* parser_self, _Bool parser_ignore_func_call, struct _global_Context* s);
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* t);
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* v);
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop(struct parser_Parser* parser_self, struct _global_String parser_mesg, struct _global_Context* w);
unsigned int parser_Parser_push_paren(struct parser_Parser* parser_self, struct _global_Context* x);
struct error_CompilerError* parser_Parser_expect_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* y);
struct error_CompilerError* parser_Parser_expect_next_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* z);
struct error_CompilerError* parser_Parser_expect_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* B);
struct error_CompilerError* parser_Parser_expect_next_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* C);
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, struct _global_Context* D);
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* F);

struct validator_State {
struct scope_Scope* scope;
};
static inline struct validator_State validator_StateInit(struct scope_Scope* scope){
struct validator_State c;
c.scope=scope;return c;
};
struct _global_StructType validator_StateType;struct _global_StructType* validator_State_get_type(struct validator_State* self, struct _global_Context* c){return &validator_StateType;}
struct _global_Field* validator_StateType_fields;
struct _global_StaticArray_1_u8 {
unsigned char data[1];
};
struct _global_StaticArray_1_u8 _global_StaticArray_1_u8Fill_array(unsigned char with){
struct _global_StaticArray_1_u8 tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_u8 _global_StaticArray_1_u8Init(unsigned char d){
struct _global_StaticArray_1_u8 tmp;
tmp.data[0] = d;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_u8Type;struct _global_ArrayType* _global_StaticArray_1_u8_get_type(struct _global_StaticArray_1_u8* self, struct _global_Context* c){return &_global_StaticArray_1_u8Type;}
struct _global_ArrayType* _global_StaticArray_1_u8_get_typeByValue(struct _global_StaticArray_1_u8 self, struct _global_Context* c){return &_global_StaticArray_1_u8Type;}
struct _global_ArrayType _global_StaticArray_1_u8Type;struct _global_StaticArray_StaticArray_S_rast_AST {
struct ast_AST** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rast_AST _global_StaticArray_StaticArray_S_rast_ASTInit(struct ast_AST** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rast_AST f;
f.data=data;f.length=length;return f;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_type(struct _global_StaticArray_StaticArray_S_rast_AST* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_typeByValue(struct _global_StaticArray_StaticArray_S_rast_AST self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;
struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* b);

struct prast_ASTcrast_ASTp  { struct ast_AST* field0;struct ast_AST* field1; };
struct prast_ASTcrast_ASTp prast_ASTcrast_ASTpInit(struct ast_AST* field0,struct ast_AST* field1) {struct prast_ASTcrast_ASTp tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

struct error_CompilerError* varValidation_validate_read(struct validator_State* varValidation_state, struct ast_ReadInfo* varValidation_read_info, struct ast_AST* varValidation_node, struct _global_Context* b);
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* c);

struct _global_Maybe_types_CompilerType_Some {
struct types_CompilerType field0;

};union _global_Maybe_types_CompilerType_cases {
struct _global_Maybe_types_CompilerType_Some Some;

};
struct _global_Maybe_types_CompilerType {
union _global_Maybe_types_CompilerType_cases cases;
unsigned char tag;
};
struct _global_Maybe_types_CompilerType _global_Some_types_CompilerType(struct types_CompilerType c,struct _global_Context* d){
struct _global_Maybe_types_CompilerType f;
f.cases.Some.field0 = c;f.tag = 0;
return f;}
struct _global_EnumType _global_Maybe_types_CompilerTypeType;struct _global_EnumType* _global_Maybe_types_CompilerType_get_type(struct _global_Maybe_types_CompilerType* self, struct _global_Context* c){return &_global_Maybe_types_CompilerTypeType;}
struct _global_EnumType* _global_Maybe_types_CompilerType_get_typeByValue(struct _global_Maybe_types_CompilerType self, struct _global_Context* c){return &_global_Maybe_types_CompilerTypeType;}

struct error_CompilerError* funcValidator_add_func_to_scope(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct ast_FuncInfo* funcValidator_func_info, struct _global_Context* b);
struct error_CompilerError* funcValidator_validate(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct ast_FuncInfo* funcValidator_func_info, struct _global_Context* c);
struct error_CompilerError* funcValidator_validate_call(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct _global_Context* d);


struct error_CompilerError* tupleValidator_validate_tuple(struct validator_State* tupleValidator_state, struct ast_AST* tupleValidator_node, struct _global_Context* b);

struct _global_StaticArray_1_types_CompilerType {
struct types_CompilerType data[1];
};
struct _global_StaticArray_1_types_CompilerType _global_StaticArray_1_types_CompilerTypeFill_array(struct types_CompilerType with){
struct _global_StaticArray_1_types_CompilerType tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_types_CompilerType _global_StaticArray_1_types_CompilerTypeInit(struct types_CompilerType c){
struct _global_StaticArray_1_types_CompilerType tmp;
tmp.data[0] = c;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_types_CompilerTypeType;struct _global_ArrayType* _global_StaticArray_1_types_CompilerType_get_type(struct _global_StaticArray_1_types_CompilerType* self, struct _global_Context* c){return &_global_StaticArray_1_types_CompilerTypeType;}
struct _global_ArrayType* _global_StaticArray_1_types_CompilerType_get_typeByValue(struct _global_StaticArray_1_types_CompilerType self, struct _global_Context* c){return &_global_StaticArray_1_types_CompilerTypeType;}
struct _global_ArrayType _global_StaticArray_1_types_CompilerTypeType;
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* b);
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* c);
struct error_CompilerError* validator_register_log_func(struct validator_State* validator_state, struct _global_String validator_name, struct types_CompilerType validator_typ, struct ast_AST* validator_syntax_tree, struct _global_Context* d);
struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* f);
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* g);
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* h);
struct error_CompilerError* validator_State_create_decl(struct validator_State* validator_self, struct ast_AST* validator_node, struct _global_Context* j);
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* k);


struct _global_Maybe_types_CompilerType ifValidation_block_returns_value(struct ast_AST* ifValidation_node, struct _global_Context* b);
struct error_CompilerError* ifValidation_validate_if(struct validator_State* ifValidation_state, struct ast_AST* ifValidation_node, struct _global_Context* c);
struct error_CompilerError* ifValidation_validate_condition(struct validator_State* ifValidation_state, struct ast_AST* ifValidation_node, struct _global_Context* d);

struct _global_AliasType mir_ID_Type;struct _global_Array_mir_OpCode {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_OpCode* data;
};
static inline struct _global_Array_mir_OpCode _global_Array_mir_OpCodeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_OpCode* data){
struct _global_Array_mir_OpCode bg;
bg.length=length;bg.capacity=capacity;bg.allocator=allocator;bg.data=data;return bg;
};
struct _global_ArrayType _global_Array_mir_OpCodeType;struct _global_ArrayType* _global_Array_mir_OpCode_get_type(struct _global_Array_mir_OpCode* self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType* _global_Array_mir_OpCode_get_typeByValue(struct _global_Array_mir_OpCode self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType _global_Array_mir_OpCodeType;struct mir_ReadInfo {
_Bool is_global;
struct types_CompilerType _type;
unsigned int id;
struct _global_String name;
};
static inline struct mir_ReadInfo mir_ReadInfoInit(_Bool is_global,struct types_CompilerType _type,unsigned int id,struct _global_String name){
struct mir_ReadInfo c;
c.is_global=is_global;c._type=_type;c.id=id;c.name=name;return c;
};
struct _global_StructType mir_ReadInfoType;struct _global_StructType* mir_ReadInfo_get_type(struct mir_ReadInfo* self, struct _global_Context* c){return &mir_ReadInfoType;}
struct _global_Field* mir_ReadInfoType_fields;
struct mir_OpCode_Store_i32 {
int32_t field0;

};struct mir_OpCode_Store_f32 {
float field0;

};struct mir_OpCode_Store_bool {
_Bool field0;

};struct mir_OpCode_Create {
struct mir_ReadInfo* field0;

};struct mir_OpCode_Read {
struct mir_ReadInfo* field0;

};struct mir_OpCode_Assign {
struct mir_ReadInfo* field0;

};struct mir_OpCode_FuncArg {
unsigned int field0;
struct mir_ReadInfo* field1;

};struct mir_OpCode_FuncCall {
struct types_FuncPtr* field0;

};struct mir_OpCode_FuncReturn {
struct types_CompilerType field0;

};struct mir_OpCode_CondJump {
unsigned int field0;
unsigned int field1;

};struct mir_OpCode_Jump {
unsigned int field0;

};struct mir_OpCode_StringRef {
unsigned int field0;

};struct mir_OpCode_StringDecl {
unsigned int field0;
struct _global_String field1;

};union mir_OpCode_cases {
struct mir_OpCode_Store_i32 Store_i32;
struct mir_OpCode_Store_f32 Store_f32;
struct mir_OpCode_Store_bool Store_bool;
struct mir_OpCode_Create Create;
struct mir_OpCode_Read Read;
struct mir_OpCode_Assign Assign;
struct mir_OpCode_FuncArg FuncArg;
struct mir_OpCode_FuncCall FuncCall;
struct mir_OpCode_FuncReturn FuncReturn;
struct mir_OpCode_CondJump CondJump;
struct mir_OpCode_Jump Jump;
struct mir_OpCode_StringRef StringRef;
struct mir_OpCode_StringDecl StringDecl;

};
struct mir_OpCode {
union mir_OpCode_cases cases;
unsigned char tag;
};
struct mir_OpCode mir_Add_i32;
struct mir_OpCode mir_Sub_i32;
struct mir_OpCode mir_Mul_i32;
struct mir_OpCode mir_Div_i32;
struct mir_OpCode mir_LT_i32;
struct mir_OpCode mir_Add_f32;
struct mir_OpCode mir_Sub_f32;
struct mir_OpCode mir_Mul_f32;
struct mir_OpCode mir_Div_f32;
struct mir_OpCode mir_LT_f32;
struct mir_OpCode mir_Store_i32(int32_t d,struct _global_Context* f){
struct mir_OpCode g;
g.cases.Store_i32.field0 = d;g.tag = 10;
return g;}
struct mir_OpCode mir_Store_f32(float h,struct _global_Context* j){
struct mir_OpCode k;
k.cases.Store_f32.field0 = h;k.tag = 11;
return k;}
struct mir_OpCode mir_Store_bool(_Bool l,struct _global_Context* m){
struct mir_OpCode n;
n.cases.Store_bool.field0 = l;n.tag = 12;
return n;}
struct mir_OpCode mir_Create(struct mir_ReadInfo* p,struct _global_Context* q){
struct mir_OpCode r;
r.cases.Create.field0 = p;r.tag = 13;
return r;}
struct mir_OpCode mir_Read(struct mir_ReadInfo* s,struct _global_Context* t){
struct mir_OpCode v;
v.cases.Read.field0 = s;v.tag = 14;
return v;}
struct mir_OpCode mir_Assign(struct mir_ReadInfo* w,struct _global_Context* x){
struct mir_OpCode y;
y.cases.Assign.field0 = w;y.tag = 15;
return y;}
struct mir_OpCode mir_FuncArg(unsigned int z,struct mir_ReadInfo* B,struct _global_Context* C){
struct mir_OpCode D;
D.cases.FuncArg.field0 = z;D.cases.FuncArg.field1 = B;D.tag = 16;
return D;}
struct mir_OpCode mir_FuncCall(struct types_FuncPtr* F,struct _global_Context* G){
struct mir_OpCode H;
H.cases.FuncCall.field0 = F;H.tag = 17;
return H;}
struct mir_OpCode mir_FuncReturn(struct types_CompilerType J,struct _global_Context* K){
struct mir_OpCode L;
L.cases.FuncReturn.field0 = J;L.tag = 18;
return L;}
struct mir_OpCode mir_CondJump(unsigned int M,unsigned int N,struct _global_Context* P){
struct mir_OpCode Q;
Q.cases.CondJump.field0 = M;Q.cases.CondJump.field1 = N;Q.tag = 19;
return Q;}
struct mir_OpCode mir_Jump(unsigned int R,struct _global_Context* S){
struct mir_OpCode T;
T.cases.Jump.field0 = R;T.tag = 20;
return T;}
struct mir_OpCode mir_StringRef(unsigned int V,struct _global_Context* W){
struct mir_OpCode X;
X.cases.StringRef.field0 = V;X.tag = 21;
return X;}
struct mir_OpCode mir_StringDecl(unsigned int Y,struct _global_String Z,struct _global_Context* bb){
struct mir_OpCode bc;
bc.cases.StringDecl.field0 = Y;bc.cases.StringDecl.field1 = Z;bc.tag = 22;
return bc;}
struct _global_EnumType mir_OpCodeType;struct _global_EnumType* mir_OpCode_get_type(struct mir_OpCode* self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_EnumType* mir_OpCode_get_typeByValue(struct mir_OpCode self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_Type_VTABLE rFloatType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_OpCodeType;struct _global_PointerType* _global_Maybe_rmir_OpCode_get_type(struct mir_OpCode*** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct _global_PointerType* _global_Maybe_rmir_OpCode_get_typeByValue(struct mir_OpCode** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct mir_Block {
unsigned int id;
struct _global_Array_mir_OpCode* code;
};
static inline struct mir_Block mir_BlockInit(unsigned int id,struct _global_Array_mir_OpCode* code){
struct mir_Block bh;
bh.id=id;bh.code=code;return bh;
};
struct _global_StructType mir_BlockType;struct _global_StructType* mir_Block_get_type(struct mir_Block* self, struct _global_Context* c){return &mir_BlockType;}
struct _global_Field* mir_BlockType_fields;
struct _global_Type_VTABLE rAliasType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_BlockType;struct _global_PointerType* _global_Maybe_rmir_Block_get_type(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct _global_PointerType* _global_Maybe_rmir_Block_get_typeByValue(struct mir_Block** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct mir_CFG {
unsigned int return_to;
struct mir_Block* block;
};
static inline struct mir_CFG mir_CFGInit(unsigned int return_to,struct mir_Block* block){
struct mir_CFG bj;
bj.return_to=return_to;bj.block=block;return bj;
};
struct _global_StructType mir_CFGType;struct _global_StructType* mir_CFG_get_type(struct mir_CFG* self, struct _global_Context* c){return &mir_CFGType;}
struct _global_Field* mir_CFGType_fields;
struct _global_Array_mir_CFG {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_CFG* data;
};
static inline struct _global_Array_mir_CFG _global_Array_mir_CFGInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_CFG* data){
struct _global_Array_mir_CFG bk;
bk.length=length;bk.capacity=capacity;bk.allocator=allocator;bk.data=data;return bk;
};
struct _global_ArrayType _global_Array_mir_CFGType;struct _global_ArrayType* _global_Array_mir_CFG_get_type(struct _global_Array_mir_CFG* self, struct _global_Context* c){return &_global_Array_mir_CFGType;}
struct _global_ArrayType* _global_Array_mir_CFG_get_typeByValue(struct _global_Array_mir_CFG self, struct _global_Context* c){return &_global_Array_mir_CFGType;}
struct _global_ArrayType _global_Array_mir_CFGType;struct _global_PointerType _global_Maybe_rmir_CFGType;struct _global_PointerType* _global_Maybe_rmir_CFG_get_type(struct mir_CFG*** self, struct _global_Context* c){return &_global_Maybe_rmir_CFGType;}
struct _global_PointerType* _global_Maybe_rmir_CFG_get_typeByValue(struct mir_CFG** self, struct _global_Context* c){return &_global_Maybe_rmir_CFGType;}
struct _global_Array_rmir_Block {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_rmir_Block _global_Array_rmir_BlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_rmir_Block bl;
bl.length=length;bl.capacity=capacity;bl.allocator=allocator;bl.data=data;return bl;
};
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_ArrayType* _global_Array_rmir_Block_get_type(struct _global_Array_rmir_Block* self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType* _global_Array_rmir_Block_get_typeByValue(struct _global_Array_rmir_Block self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_PointerType _global_Maybe_rrmir_BlockType;struct _global_PointerType* _global_Maybe_rrmir_Block_get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_PointerType* _global_Maybe_rrmir_Block_get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ {
struct hashMap_HashBucket_uint* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(struct hashMap_HashBucket_uint* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bn;
bn.data=data;bn.length=length;return bn;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct hashMap_HashBucket_uint {
struct _global_Array_string keys;
struct _global_Array_uint values;
};
static inline struct hashMap_HashBucket_uint hashMap_HashBucket_uintInit(struct _global_Array_string keys,struct _global_Array_uint values){
struct hashMap_HashBucket_uint bm;
bm.keys=keys;bm.values=values;return bm;
};
struct _global_StructType hashMap_HashBucket_uintType;struct _global_StructType* hashMap_HashBucket_uint_get_type(struct hashMap_HashBucket_uint* self, struct _global_Context* c){return &hashMap_HashBucket_uintType;}
struct _global_Field* hashMap_HashBucket_uintType_fields;
struct hashMap_HashMap_uint {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_uint hashMap_HashMap_uintInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets,unsigned int length){
struct hashMap_HashMap_uint bp;
bp.buckets=buckets;bp.length=length;return bp;
};
struct _global_StructType hashMap_HashMap_uintType;struct _global_StructType* hashMap_HashMap_uint_get_type(struct hashMap_HashMap_uint* self, struct _global_Context* c){return &hashMap_HashMap_uintType;}
struct _global_Field* hashMap_HashMap_uintType_fields;
struct mir_FuncScope {
unsigned int var_counter;
struct _global_Array_mir_CFG cfgs;
struct mir_Block* block;
unsigned int block_counter;
struct _global_Array_rmir_Block* all_blocks;
struct hashMap_HashMap_uint vars;
unsigned int num_args;
};
static inline struct mir_FuncScope mir_FuncScopeInit(unsigned int var_counter,struct _global_Array_mir_CFG cfgs,struct mir_Block* block,unsigned int block_counter,struct _global_Array_rmir_Block* all_blocks,struct hashMap_HashMap_uint vars,unsigned int num_args){
struct mir_FuncScope bq;
bq.var_counter=var_counter;bq.cfgs=cfgs;bq.block=block;bq.block_counter=block_counter;bq.all_blocks=all_blocks;bq.vars=vars;bq.num_args=num_args;return bq;
};
struct _global_StructType mir_FuncScopeType;struct _global_StructType* mir_FuncScope_get_type(struct mir_FuncScope* self, struct _global_Context* c){return &mir_FuncScopeType;}
struct _global_Field* mir_FuncScopeType_fields;
struct _global_Array_rmir_FuncScope {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_FuncScope** data;
};
static inline struct _global_Array_rmir_FuncScope _global_Array_rmir_FuncScopeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_FuncScope** data){
struct _global_Array_rmir_FuncScope br;
br.length=length;br.capacity=capacity;br.allocator=allocator;br.data=data;return br;
};
struct _global_ArrayType _global_Array_rmir_FuncScopeType;struct _global_ArrayType* _global_Array_rmir_FuncScope_get_type(struct _global_Array_rmir_FuncScope* self, struct _global_Context* c){return &_global_Array_rmir_FuncScopeType;}
struct _global_ArrayType* _global_Array_rmir_FuncScope_get_typeByValue(struct _global_Array_rmir_FuncScope self, struct _global_Context* c){return &_global_Array_rmir_FuncScopeType;}
struct _global_ArrayType _global_Array_rmir_FuncScopeType;struct _global_PointerType _global_Maybe_rrmir_FuncScopeType;struct _global_PointerType* _global_Maybe_rrmir_FuncScope_get_type(struct mir_FuncScope**** self, struct _global_Context* c){return &_global_Maybe_rrmir_FuncScopeType;}
struct _global_PointerType* _global_Maybe_rrmir_FuncScope_get_typeByValue(struct mir_FuncScope*** self, struct _global_Context* c){return &_global_Maybe_rrmir_FuncScopeType;}
struct _global_Array_mir_Function {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Function* data;
};
static inline struct _global_Array_mir_Function _global_Array_mir_FunctionInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Function* data){
struct _global_Array_mir_Function bv;
bv.length=length;bv.capacity=capacity;bv.allocator=allocator;bv.data=data;return bv;
};
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_ArrayType* _global_Array_mir_Function_get_type(struct _global_Array_mir_Function* self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType* _global_Array_mir_Function_get_typeByValue(struct _global_Array_mir_Function self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_StaticArray_StaticArray_S_rmir_Block {
struct mir_Block** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rmir_Block _global_StaticArray_StaticArray_S_rmir_BlockInit(struct mir_Block** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rmir_Block bs;
bs.data=data;bs.length=length;return bs;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_type(struct _global_StaticArray_StaticArray_S_rmir_Block* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_typeByValue(struct _global_StaticArray_StaticArray_S_rmir_Block self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct mir_Function {
struct _global_String name;
struct types_FuncPtr* _type;
struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks;
unsigned int id;
};
static inline struct mir_Function mir_FunctionInit(struct _global_String name,struct types_FuncPtr* _type,struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks,unsigned int id){
struct mir_Function bt;
bt.name=name;bt._type=_type;bt.all_blocks=all_blocks;bt.id=id;return bt;
};
struct _global_StructType mir_FunctionType;struct _global_StructType* mir_Function_get_type(struct mir_Function* self, struct _global_Context* c){return &mir_FunctionType;}
struct _global_Field* mir_FunctionType_fields;
struct _global_PointerType _global_Maybe_rmir_FunctionType;struct _global_PointerType* _global_Maybe_rmir_Function_get_type(struct mir_Function*** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_PointerType* _global_Maybe_rmir_Function_get_typeByValue(struct mir_Function** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct mir_Converter {
unsigned int global_var_counter;
unsigned int string_literal_counter;
struct _global_Array_rmir_FuncScope scopes;
struct _global_Array_mir_Function* functions;
};
static inline struct mir_Converter mir_ConverterInit(unsigned int global_var_counter,unsigned int string_literal_counter,struct _global_Array_rmir_FuncScope scopes,struct _global_Array_mir_Function* functions){
struct mir_Converter bw;
bw.global_var_counter=global_var_counter;bw.string_literal_counter=string_literal_counter;bw.scopes=scopes;bw.functions=functions;return bw;
};
struct _global_StructType mir_ConverterType;struct _global_StructType* mir_Converter_get_type(struct mir_Converter* self, struct _global_Context* c){return &mir_ConverterType;}
struct _global_Field* mir_ConverterType_fields;
struct _global_StaticArray_StaticArray_S_mir_Function {
struct mir_Function* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_Function _global_StaticArray_StaticArray_S_mir_FunctionInit(struct mir_Function* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_Function bx;
bx.data=data;bx.length=length;return bx;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_type(struct _global_StaticArray_StaticArray_S_mir_Function* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_Function self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct mir_Program {
struct _global_StaticArray_StaticArray_S_mir_Function functions;
};
static inline struct mir_Program mir_ProgramInit(struct _global_StaticArray_StaticArray_S_mir_Function functions){
struct mir_Program by;
by.functions=functions;return by;
};
struct _global_StructType mir_ProgramType;struct _global_StructType* mir_Program_get_type(struct mir_Program* self, struct _global_Context* c){return &mir_ProgramType;}
struct _global_Field* mir_ProgramType_fields;
struct _global_PointerType _global_Maybe_rhashMap_HashBucket_uint_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_uint__get_type(struct hashMap_HashBucket_uint*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_uint_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_uint__get_typeByValue(struct hashMap_HashBucket_uint** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_uint_Type;}
struct _global_Array_hashMap_HashBucket_uint_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_uint* data;
};
static inline struct _global_Array_hashMap_HashBucket_uint_ _global_Array_hashMap_HashBucket_uint_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_uint* data){
struct _global_Array_hashMap_HashBucket_uint_ bz;
bz.length=length;bz.capacity=capacity;bz.allocator=allocator;bz.data=data;return bz;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_type(struct _global_Array_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_typeByValue(struct _global_Array_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;
unsigned int mir_calc_size(struct types_CompilerType mir_self, struct _global_Context* b);
struct _global_String mir_CFG_toString(struct mir_CFG* mir_self, struct _global_Context* c);

struct _global_String mir_CFG_toString(struct mir_CFG*,struct _global_Context* c);
struct mir_FuncScope* mir_Converter_push_scope(struct mir_Converter* mir_self, struct _global_Context* d);
struct mir_FuncScope* mir_Converter_pop_scope(struct mir_Converter* mir_self, struct _global_Context* f);
struct mir_FuncScope* mir_Converter_get_scope(struct mir_Converter* mir_self, struct _global_Context* g);
unsigned int mir_FuncScope_push_block(struct mir_FuncScope* mir_self, struct _global_Context* h);
void mir_FuncScope_append(struct mir_FuncScope* mir_self, struct mir_OpCode mir_code, struct _global_Context* j);
void mir_FuncScope_pop_block(struct mir_FuncScope* mir_self, struct _global_Context* k);
void mir_FuncScope_push_cfg(struct mir_FuncScope* mir_scope, struct mir_CFG mir_cfg, struct _global_Context* l);
void mir_FuncScope_add_block(struct mir_FuncScope* mir_scope, struct mir_Block* mir_block, struct _global_Context* m);
void mir_FuncScope_pop_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* n);
struct mir_CFG* mir_FuncScope_current_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* p);
struct mir_OpCode mir_unsupported(struct _global_String mir_mesg, struct _global_Context* q);
_Bool mir_is_block(struct ast_AST* mir_node, struct _global_Context* r);
struct ast_AST* mir_get_rhs_of_assign(struct ast_AST* mir_node, struct _global_Context* s);
struct ast_AST* mir_get_lhs_of_assign(struct ast_AST* mir_node, struct _global_Context* t);
unsigned int mir_Converter_get_id_of_var(struct mir_Converter* mir_self, struct _global_String mir_name, struct _global_Context* v);
void mir_Converter_convert_nodes(struct mir_Converter* mir_self, struct _global_StaticArray_StaticArray_S_rast_AST mir_nodes, struct _global_Context* w);
void mir_convert_if(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* x);
void mir_convert_while(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* y);
void mir_convert_else(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* z);
void mir_convert_condition(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* B);
void mir_convert_block(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* C);
void mir_convert_func_call(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* D);
void mir_register_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* F);
void mir_convert_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* G);
void mir_convert_func_arg(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_name, struct types_CompilerType mir_typ, struct _global_Context* H);
void mir_convert_operator(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_OperatorKind mir_op_kind, struct _global_Context* J);
unsigned int mir_add_global_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* K);
unsigned int mir_add_local_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* L);
unsigned int mir_add_var(struct mir_Converter* mir_converter, _Bool mir_is_global, struct _global_String mir_name, struct _global_Context* M);
void mir_convert_create(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* N);
void mir_convert_assign(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* P);
void mir_convert_identifier(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_ReadInfo* mir_read_info, struct _global_Context* Q);
void mir_convert_string(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_str, struct _global_Context* R);
void mir_Converter_create_decls(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* S);
void mir_Converter_convert_node(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* T);
struct mir_Program mir_convert(struct ast_AST* mir_node, struct _global_Context* V);



struct _global_Array_Maybe_string_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_string* data;
};
static inline struct _global_Array_Maybe_string_ _global_Array_Maybe_string_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_string* data){
struct _global_Array_Maybe_string_ j;
j.length=length;j.capacity=capacity;j.allocator=allocator;j.data=data;return j;
};
struct _global_ArrayType _global_Array_Maybe_string_Type;struct _global_ArrayType* _global_Array_Maybe_string__get_type(struct _global_Array_Maybe_string_* self, struct _global_Context* c){return &_global_Array_Maybe_string_Type;}
struct _global_ArrayType* _global_Array_Maybe_string__get_typeByValue(struct _global_Array_Maybe_string_ self, struct _global_Context* c){return &_global_Array_Maybe_string_Type;}
struct _global_ArrayType _global_Array_Maybe_string_Type;struct _global_Maybe_string_Some {
struct _global_String field0;

};union _global_Maybe_string_cases {
struct _global_Maybe_string_Some Some;

};
struct _global_Maybe_string {
union _global_Maybe_string_cases cases;
unsigned char tag;
};
struct _global_Maybe_string _global_Some_string(struct _global_String c,struct _global_Context* d){
struct _global_Maybe_string f;
f.cases.Some.field0 = c;f.tag = 0;
return f;}
struct _global_EnumType _global_Maybe_stringType;struct _global_EnumType* _global_Maybe_string_get_type(struct _global_Maybe_string* self, struct _global_Context* c){return &_global_Maybe_stringType;}
struct _global_EnumType* _global_Maybe_string_get_typeByValue(struct _global_Maybe_string self, struct _global_Context* c){return &_global_Maybe_stringType;}
struct _global_PointerType _global_Maybe_rMaybe_string_Type;struct _global_PointerType* _global_Maybe_rMaybe_string__get_type(struct _global_Maybe_string*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_string_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_string__get_typeByValue(struct _global_Maybe_string** self, struct _global_Context* c){return &_global_Maybe_rMaybe_string_Type;}
struct _global_Array_Maybe_rnone_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_Maybe_rnone_ _global_Array_Maybe_rnone_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_Maybe_rnone_ k;
k.length=length;k.capacity=capacity;k.allocator=allocator;k.data=data;return k;
};
struct _global_ArrayType _global_Array_Maybe_rnone_Type;struct _global_ArrayType* _global_Array_Maybe_rnone__get_type(struct _global_Array_Maybe_rnone_* self, struct _global_Context* c){return &_global_Array_Maybe_rnone_Type;}
struct _global_ArrayType* _global_Array_Maybe_rnone__get_typeByValue(struct _global_Array_Maybe_rnone_ self, struct _global_Context* c){return &_global_Array_Maybe_rnone_Type;}
struct _global_ArrayType _global_Array_Maybe_rnone_Type;struct _global_PointerType _global_Maybe_rMaybe_rnone_Type;struct _global_PointerType* _global_Maybe_rMaybe_rnone__get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rnone_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rnone__get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rnone_Type;}
struct _global_Array_____Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_Maybe_rmir_Block_* data;
};
static inline struct _global_Array_____Maybe_rmir_Block_ _global_Array_____Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_Maybe_rmir_Block_* data){
struct _global_Array_____Maybe_rmir_Block_ m;
m.length=length;m.capacity=capacity;m.allocator=allocator;m.data=data;return m;
};
struct _global_ArrayType _global_Array_____Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_____Maybe_rmir_Block__get_type(struct _global_Array_____Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_____Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_____Maybe_rmir_Block__get_typeByValue(struct _global_Array_____Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_____Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_____Maybe_rmir_Block_Type;struct _global_Array_Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_Maybe_rmir_Block_ _global_Array_Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_Maybe_rmir_Block_ l;
l.length=length;l.capacity=capacity;l.allocator=allocator;l.data=data;return l;
};
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_PointerType _global_Maybe_rMaybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType _global_Maybe_r____Maybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_r____Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_*** self, struct _global_Context* c){return &_global_Maybe_r____Maybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_r____Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_** self, struct _global_Context* c){return &_global_Maybe_r____Maybe_rmir_Block_Type;}
struct _global_Array_Maybe_____Maybe_rmir_Block__ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_____Maybe_rmir_Block_* data;
};
static inline struct _global_Array_Maybe_____Maybe_rmir_Block__ _global_Array_Maybe_____Maybe_rmir_Block__Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_____Maybe_rmir_Block_* data){
struct _global_Array_Maybe_____Maybe_rmir_Block__ t;
t.length=length;t.capacity=capacity;t.allocator=allocator;t.data=data;return t;
};
struct _global_ArrayType _global_Array_Maybe_____Maybe_rmir_Block__Type;struct _global_ArrayType* _global_Array_Maybe_____Maybe_rmir_Block___get_type(struct _global_Array_Maybe_____Maybe_rmir_Block__* self, struct _global_Context* c){return &_global_Array_Maybe_____Maybe_rmir_Block__Type;}
struct _global_ArrayType* _global_Array_Maybe_____Maybe_rmir_Block___get_typeByValue(struct _global_Array_Maybe_____Maybe_rmir_Block__ self, struct _global_Context* c){return &_global_Array_Maybe_____Maybe_rmir_Block__Type;}
struct _global_ArrayType _global_Array_Maybe_____Maybe_rmir_Block__Type;struct _global_Maybe_____Maybe_rmir_Block__Some {
struct _global_Array_Maybe_rmir_Block_ field0;

};union _global_Maybe_____Maybe_rmir_Block__cases {
struct _global_Maybe_____Maybe_rmir_Block__Some Some;

};
struct _global_Maybe_____Maybe_rmir_Block_ {
union _global_Maybe_____Maybe_rmir_Block__cases cases;
unsigned char tag;
};
struct _global_Maybe_____Maybe_rmir_Block_ _global_Some_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_ n,struct _global_Context* p){
struct _global_Maybe_____Maybe_rmir_Block_ q;
q.cases.Some.field0 = n;q.tag = 0;
return q;}
struct _global_EnumType _global_Maybe_____Maybe_rmir_Block_Type;struct _global_EnumType* _global_Maybe_____Maybe_rmir_Block__get_type(struct _global_Maybe_____Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Maybe_____Maybe_rmir_Block_Type;}
struct _global_EnumType* _global_Maybe_____Maybe_rmir_Block__get_typeByValue(struct _global_Maybe_____Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Maybe_____Maybe_rmir_Block_Type;}
struct _global_PointerType _global_Maybe_rMaybe_____Maybe_rmir_Block__Type;struct _global_PointerType* _global_Maybe_rMaybe_____Maybe_rmir_Block___get_type(struct _global_Maybe_____Maybe_rmir_Block_*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_____Maybe_rmir_Block__Type;}
struct _global_PointerType* _global_Maybe_rMaybe_____Maybe_rmir_Block___get_typeByValue(struct _global_Maybe_____Maybe_rmir_Block_** self, struct _global_Context* c){return &_global_Maybe_rMaybe_____Maybe_rmir_Block__Type;}
struct interpreter_Interpreter {
struct _global_Array_Maybe_string_ string_literals;
struct _global_Array_Maybe_rnone_ var_ptr;
struct _global_TemporaryStorage stack;
struct _global_TemporaryStorage var_stack;
struct _global_Array_____Maybe_rmir_Block_ blocks;
struct _global_Array_Maybe_____Maybe_rmir_Block__ all_blocks;
};
static inline struct interpreter_Interpreter interpreter_InterpreterInit(struct _global_Array_Maybe_string_ string_literals,struct _global_Array_Maybe_rnone_ var_ptr,struct _global_TemporaryStorage stack,struct _global_TemporaryStorage var_stack,struct _global_Array_____Maybe_rmir_Block_ blocks,struct _global_Array_Maybe_____Maybe_rmir_Block__ all_blocks){
struct interpreter_Interpreter v;
v.string_literals=string_literals;v.var_ptr=var_ptr;v.stack=stack;v.var_stack=var_stack;v.blocks=blocks;v.all_blocks=all_blocks;return v;
};
struct _global_StructType interpreter_InterpreterType;struct _global_StructType* interpreter_Interpreter_get_type(struct interpreter_Interpreter* self, struct _global_Context* c){return &interpreter_InterpreterType;}
struct _global_Field* interpreter_InterpreterType_fields;
struct _global_Array_rnone {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_rnone _global_Array_rnoneInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_rnone w;
w.length=length;w.capacity=capacity;w.allocator=allocator;w.data=data;return w;
};
struct _global_ArrayType _global_Array_rnoneType;struct _global_ArrayType* _global_Array_rnone_get_type(struct _global_Array_rnone* self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType* _global_Array_rnone_get_typeByValue(struct _global_Array_rnone self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType _global_Array_rnoneType;struct _global_PointerType _global_Maybe_rrnoneType;struct _global_PointerType* _global_Maybe_rrnone_get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_PointerType* _global_Maybe_rrnone_get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
typedef void(*printerpreter_Interpreterp___none)(struct interpreter_Interpreter*,struct _global_Context*) ;
struct _global_StaticArray_3_printerpreter_Interpreterp___none {
printerpreter_Interpreterp___none data[3];
};
struct _global_StaticArray_3_printerpreter_Interpreterp___none _global_StaticArray_3_printerpreter_Interpreterp___noneFill_array(printerpreter_Interpreterp___none with){
struct _global_StaticArray_3_printerpreter_Interpreterp___none tmp;
for (unsigned int i = 0; i < 3; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_3_printerpreter_Interpreterp___none _global_StaticArray_3_printerpreter_Interpreterp___noneInit(printerpreter_Interpreterp___none x,printerpreter_Interpreterp___none y,printerpreter_Interpreterp___none z){
struct _global_StaticArray_3_printerpreter_Interpreterp___none tmp;
tmp.data[0] = x;
tmp.data[1] = y;
tmp.data[2] = z;
return tmp; }
struct _global_ArrayType _global_StaticArray_3_printerpreter_Interpreterp___noneType;struct _global_ArrayType* _global_StaticArray_3_printerpreter_Interpreterp___none_get_type(struct _global_StaticArray_3_printerpreter_Interpreterp___none* self, struct _global_Context* c){return &_global_StaticArray_3_printerpreter_Interpreterp___noneType;}
struct _global_ArrayType* _global_StaticArray_3_printerpreter_Interpreterp___none_get_typeByValue(struct _global_StaticArray_3_printerpreter_Interpreterp___none self, struct _global_Context* c){return &_global_StaticArray_3_printerpreter_Interpreterp___noneType;}
struct _global_ArrayType _global_StaticArray_3_printerpreter_Interpreterp___noneType;
void* interpreter_pop_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* b);
void* interpreter_push_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* c);
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* d);
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* f);
void interpreter_log_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* g);
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_TemporaryStorage* interpreter_local_var_stack, struct _global_Array_rnone* interpreter_local_args, struct _global_Context* h);
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* j);
void interpreter_Interpreter_set_functions(struct interpreter_Interpreter* interpreter_self, struct mir_Program* interpreter_ir, struct _global_Context* k);
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* l);

struct _global_StructType llvm_LLVMModuleRefType;struct _global_StructType* llvm_LLVMModuleRef_get_type(struct LLVMModuleRef* self, struct _global_Context* c){return &llvm_LLVMModuleRefType;}
struct _global_Field* llvm_LLVMModuleRefType_fields;
struct _global_StructType llvm_LLVMTypeRefType;struct _global_StructType* llvm_LLVMTypeRef_get_type(struct LLVMTypeRef* self, struct _global_Context* c){return &llvm_LLVMTypeRefType;}
struct _global_Field* llvm_LLVMTypeRefType_fields;
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef {
LLVMTypeRef* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(LLVMTypeRef* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef c;
c.data=data;c.length=length;return c;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;struct _global_StructType llvm_LLVMBasicBlockRefType;struct _global_StructType* llvm_LLVMBasicBlockRef_get_type(struct LLVMBasicBlockRef* self, struct _global_Context* c){return &llvm_LLVMBasicBlockRefType;}
struct _global_Field* llvm_LLVMBasicBlockRefType_fields;
struct _global_StructType llvm_LLVMValueRefType;struct _global_StructType* llvm_LLVMValueRef_get_type(struct LLVMValueRef* self, struct _global_Context* c){return &llvm_LLVMValueRefType;}
struct _global_Field* llvm_LLVMValueRefType_fields;
struct _global_StructType llvm_LLVMBuilderRefType;struct _global_StructType* llvm_LLVMBuilderRef_get_type(struct LLVMBuilderRef* self, struct _global_Context* c){return &llvm_LLVMBuilderRefType;}
struct _global_Field* llvm_LLVMBuilderRefType_fields;
struct _global_StructType llvm_LLVMIntPredicateType;struct _global_StructType* llvm_LLVMIntPredicate_get_type(struct LLVMIntPredicate* self, struct _global_Context* c){return &llvm_LLVMIntPredicateType;}
struct _global_Field* llvm_LLVMIntPredicateType_fields;
struct _global_StructType llvm_LLVMRealPredicateType;struct _global_StructType* llvm_LLVMRealPredicate_get_type(struct LLVMRealPredicate* self, struct _global_Context* c){return &llvm_LLVMRealPredicateType;}
struct _global_Field* llvm_LLVMRealPredicateType_fields;
struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef {
LLVMValueRef* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef _global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(LLVMValueRef* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef d;
d.data=data;d.length=length;return d;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMValueRef_get_type(struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMValueRef_get_typeByValue(struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_StructType llvm_LLVMTargetMachineRefType;struct _global_StructType* llvm_LLVMTargetMachineRef_get_type(struct LLVMTargetMachineRef* self, struct _global_Context* c){return &llvm_LLVMTargetMachineRefType;}
struct _global_Field* llvm_LLVMTargetMachineRefType_fields;
struct _global_StructType llvm_LLVMCodeGenFileTypeType;struct _global_StructType* llvm_LLVMCodeGenFileType_get_type(struct LLVMCodeGenFileType* self, struct _global_Context* c){return &llvm_LLVMCodeGenFileTypeType;}
struct _global_Field* llvm_LLVMCodeGenFileTypeType_fields;
struct _global_StructType llvm_LLVMTargetRefType;struct _global_StructType* llvm_LLVMTargetRef_get_type(struct LLVMTargetRef* self, struct _global_Context* c){return &llvm_LLVMTargetRefType;}
struct _global_Field* llvm_LLVMTargetRefType_fields;
struct _global_StructType llvm_LLVMCodeGenOptLevelType;struct _global_StructType* llvm_LLVMCodeGenOptLevel_get_type(struct LLVMCodeGenOptLevel* self, struct _global_Context* c){return &llvm_LLVMCodeGenOptLevelType;}
struct _global_Field* llvm_LLVMCodeGenOptLevelType_fields;
struct _global_StructType llvm_LLVMRelocModeType;struct _global_StructType* llvm_LLVMRelocMode_get_type(struct LLVMRelocMode* self, struct _global_Context* c){return &llvm_LLVMRelocModeType;}
struct _global_Field* llvm_LLVMRelocModeType_fields;
struct _global_StructType llvm_LLVMCodeModelType;struct _global_StructType* llvm_LLVMCodeModel_get_type(struct LLVMCodeModel* self, struct _global_Context* c){return &llvm_LLVMCodeModelType;}
struct _global_Field* llvm_LLVMCodeModelType_fields;
struct _global_Array_llvm_LLVMValueRef {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
LLVMValueRef* data;
};
static inline struct _global_Array_llvm_LLVMValueRef _global_Array_llvm_LLVMValueRefInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,LLVMValueRef* data){
struct _global_Array_llvm_LLVMValueRef f;
f.length=length;f.capacity=capacity;f.allocator=allocator;f.data=data;return f;
};
struct _global_ArrayType _global_Array_llvm_LLVMValueRefType;struct _global_ArrayType* _global_Array_llvm_LLVMValueRef_get_type(struct _global_Array_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_Array_llvm_LLVMValueRefType;}
struct _global_ArrayType* _global_Array_llvm_LLVMValueRef_get_typeByValue(struct _global_Array_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_Array_llvm_LLVMValueRefType;}
struct _global_ArrayType _global_Array_llvm_LLVMValueRefType;struct _global_PointerType _global_Maybe_rllvm_LLVMValueRefType;struct _global_PointerType* _global_Maybe_rllvm_LLVMValueRef_get_type(LLVMValueRef*** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMValueRefType;}
struct _global_PointerType* _global_Maybe_rllvm_LLVMValueRef_get_typeByValue(LLVMValueRef** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMValueRefType;}
typedef LLVMValueRef(*pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef)(LLVMBuilderRef,LLVMValueRef,LLVMValueRef,struct _global_String,struct _global_Context*) ;
struct _global_Maybe_llvm_LLVMBasicBlockRef_Some {
LLVMBasicBlockRef field0;

};union _global_Maybe_llvm_LLVMBasicBlockRef_cases {
struct _global_Maybe_llvm_LLVMBasicBlockRef_Some Some;

};
struct _global_Maybe_llvm_LLVMBasicBlockRef {
union _global_Maybe_llvm_LLVMBasicBlockRef_cases cases;
unsigned char tag;
};
struct _global_Maybe_llvm_LLVMBasicBlockRef _global_Some_llvm_LLVMBasicBlockRef(LLVMBasicBlockRef g,struct _global_Context* h){
struct _global_Maybe_llvm_LLVMBasicBlockRef j;
j.cases.Some.field0 = g;j.tag = 0;
return j;}
struct _global_EnumType _global_Maybe_llvm_LLVMBasicBlockRefType;struct _global_EnumType* _global_Maybe_llvm_LLVMBasicBlockRef_get_type(struct _global_Maybe_llvm_LLVMBasicBlockRef* self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMBasicBlockRefType;}
struct _global_EnumType* _global_Maybe_llvm_LLVMBasicBlockRef_get_typeByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMBasicBlockRefType;}
struct _global_Maybe_llvm_LLVMValueRef_Some {
LLVMValueRef field0;

};union _global_Maybe_llvm_LLVMValueRef_cases {
struct _global_Maybe_llvm_LLVMValueRef_Some Some;

};
struct _global_Maybe_llvm_LLVMValueRef {
union _global_Maybe_llvm_LLVMValueRef_cases cases;
unsigned char tag;
};
struct _global_Maybe_llvm_LLVMValueRef _global_Some_llvm_LLVMValueRef(LLVMValueRef m,struct _global_Context* n){
struct _global_Maybe_llvm_LLVMValueRef p;
p.cases.Some.field0 = m;p.tag = 0;
return p;}
struct _global_EnumType _global_Maybe_llvm_LLVMValueRefType;struct _global_EnumType* _global_Maybe_llvm_LLVMValueRef_get_type(struct _global_Maybe_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMValueRefType;}
struct _global_EnumType* _global_Maybe_llvm_LLVMValueRef_get_typeByValue(struct _global_Maybe_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMValueRefType;}
struct _global_PointerType _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef__get_type(struct _global_Maybe_llvm_LLVMBasicBlockRef*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef__get_typeByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_llvm_LLVMBasicBlockRef* data;
};
static inline struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_llvm_LLVMBasicBlockRef* data){
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ s;
s.length=length;s.capacity=capacity;s.allocator=allocator;s.data=data;return s;
};
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMBasicBlockRef__get_type(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMBasicBlockRef__get_typeByValue(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;struct _global_PointerType _global_Maybe_rllvm_LLVMTypeRefType;struct _global_PointerType* _global_Maybe_rllvm_LLVMTypeRef_get_type(LLVMTypeRef*** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMTypeRefType;}
struct _global_PointerType* _global_Maybe_rllvm_LLVMTypeRef_get_typeByValue(LLVMTypeRef** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMTypeRefType;}
struct _global_Array_llvm_LLVMTypeRef {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
LLVMTypeRef* data;
};
static inline struct _global_Array_llvm_LLVMTypeRef _global_Array_llvm_LLVMTypeRefInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,LLVMTypeRef* data){
struct _global_Array_llvm_LLVMTypeRef t;
t.length=length;t.capacity=capacity;t.allocator=allocator;t.data=data;return t;
};
struct _global_ArrayType _global_Array_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_Array_llvm_LLVMTypeRef_get_type(struct _global_Array_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_Array_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_Array_llvm_LLVMTypeRef_get_typeByValue(struct _global_Array_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_Array_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_Array_llvm_LLVMTypeRefType;struct _global_PointerType _global_Maybe_rMaybe_llvm_LLVMValueRef_Type;struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMValueRef__get_type(struct _global_Maybe_llvm_LLVMValueRef*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMValueRef_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMValueRef__get_typeByValue(struct _global_Maybe_llvm_LLVMValueRef** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMValueRef_Type;}
struct _global_Array_Maybe_llvm_LLVMValueRef_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_llvm_LLVMValueRef* data;
};
static inline struct _global_Array_Maybe_llvm_LLVMValueRef_ _global_Array_Maybe_llvm_LLVMValueRef_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_llvm_LLVMValueRef* data){
struct _global_Array_Maybe_llvm_LLVMValueRef_ v;
v.length=length;v.capacity=capacity;v.allocator=allocator;v.data=data;return v;
};
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMValueRef_Type;struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMValueRef__get_type(struct _global_Array_Maybe_llvm_LLVMValueRef_* self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMValueRef_Type;}
struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMValueRef__get_typeByValue(struct _global_Array_Maybe_llvm_LLVMValueRef_ self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMValueRef_Type;}
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMValueRef_Type;struct _global_StaticArray_1_llvm_LLVMTypeRef {
LLVMTypeRef data[1];
};
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefFill_array(LLVMTypeRef with){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefInit(LLVMTypeRef w){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
tmp.data[0] = w;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_1_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_1_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* b);
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* c);
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* d);
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* f);
LLVMValueRef llvm_llvmBuildSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* g);
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* h);
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* j);
LLVMValueRef llvm_llvmBuildFAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* k);
LLVMValueRef llvm_llvmBuildFSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* l);
LLVMValueRef llvm_llvmBuildFMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* m);
LLVMValueRef llvm_llvmBuildFDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* n);
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* p);
LLVMValueRef llvm_llvmAddGlobal(LLVMModuleRef llvm_mod, LLVMTypeRef llvm_typ, struct _global_String llvm_s, struct _global_Context* q);
LLVMValueRef llvm_llvmBuildLoad(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_ptr, struct _global_String llvm_name, struct _global_Context* r);
LLVMValueRef llvm_llvmBuildICmp(LLVMBuilderRef llvm_a, LLVMIntPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* s);
LLVMValueRef llvm_llvmBuildFCmp(LLVMBuilderRef llvm_a, LLVMRealPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* t);
LLVMValueRef llvm_llvmBuildAlloca(LLVMBuilderRef llvm_builder, LLVMTypeRef llvm_typ, struct _global_String llvm_e, struct _global_Context* v);
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* w);
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* x);
LLVMTargetMachineRef llvm_llvmCreateTargetMachine(LLVMTargetRef llvm_t, char* llvm_triple, struct _global_String llvm_cpu, struct _global_String llvm_features, LLVMCodeGenOptLevel llvm_opt, LLVMRelocMode llvm_reloc, LLVMCodeModel llvm_m, struct _global_Context* y);
LLVMTypeRef llvm_llvm_type_for(struct types_CompilerType llvm_typ, struct _global_Context* z);
LLVMValueRef llvm_llvm_initial_value_for(struct types_CompilerType llvm_typ, struct _global_Context* B);
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* C);
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* D);
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* F);

struct pintcstringp  { int field0;struct _global_String field1; };
struct pintcstringp pintcstringpInit(int field0,struct _global_String field1) {struct pintcstringp tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

struct pintcstringp process_popen(struct _global_String process_cmd, struct _global_Context* b);

struct linker_Linker {
struct _global_String path_to_exe;
struct _global_String path_to_runtime;
struct _global_StaticArray_StaticArray_S_string object_files;
struct _global_String linker;
};
static inline struct linker_Linker linker_LinkerInit(struct _global_String path_to_exe,struct _global_String path_to_runtime,struct _global_StaticArray_StaticArray_S_string object_files,struct _global_String linker){
struct linker_Linker c;
c.path_to_exe=path_to_exe;c.path_to_runtime=path_to_runtime;c.object_files=object_files;c.linker=linker;return c;
};
struct _global_StructType linker_LinkerType;struct _global_StructType* linker_Linker_get_type(struct linker_Linker* self, struct _global_Context* c){return &linker_LinkerType;}
struct _global_Field* linker_LinkerType_fields;

void linker_Linker_link(struct linker_Linker* linker_self, struct _global_Context* b);
void linker_Linker_run(struct linker_Linker* linker_self, struct _global_Context* c);

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

void compiler_log_memory_usage(struct _global_Context* b);
struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* c);



struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g);

static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator**,struct _global_Allocator*,struct _global_Context* g);

struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator*,struct _global_Allocator*,struct _global_Context* g);
void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g);
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g);
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g);
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g);
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g);
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g);

static inline char* _global_Maybe_unwrap_rchar(char**,struct _global_Context* g);

char* _global_Maybe_unwrap_rcharByValue(char*,struct _global_Context* g);
char _global_Array_pop_char(struct _global_Array_char* _global_self, struct _global_Context* g);
void stringBuilder_StringBuilder_append(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_String stringBuilder_s, struct _global_Context* g){;
;
_global_Array_reserve_char(&((stringBuilder_self)->chars),((stringBuilder_self)->chars).length+(stringBuilder_s).length,g);
struct _global_Range h =_global_RangeInit(0,(stringBuilder_s).length);
for (unsigned int j = h.start; j < h.end; j++) {
unsigned int stringBuilder_i;stringBuilder_i = j;
;_global_Array_append_char(&((stringBuilder_self)->chars),*(_global_String_op_getByValue(stringBuilder_s,(unsigned int)stringBuilder_i,g)),g);
}
;
;}
void stringBuilder_StringBuilder_shorten(struct stringBuilder_StringBuilder* stringBuilder_self, unsigned int stringBuilder_num, struct _global_Context* g){;
;
_global_Array_shorten_char(&((stringBuilder_self)->chars),stringBuilder_num,g);
;}
struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_Context* g){;
_global_Array_append_char(&((stringBuilder_self)->chars),'\0',g);
struct _global_String stringBuilder_s;stringBuilder_s = _global_make_String(((stringBuilder_self)->chars).length-1,_global_Maybe_unwrap_rcharByValue(((stringBuilder_self)->chars).data,g),g);;
_global_Array_pop_char(&((stringBuilder_self)->chars),g);
;return stringBuilder_s;
;}
static inline struct _global_String stringBuilder_StringBuilder_toStringByValue(struct stringBuilder_StringBuilder h,struct _global_Context* g){
return stringBuilder_StringBuilder_toString(&h,g);
}struct stringBuilder_StringBuilder stringBuilder_make_StringBuilder(struct _global_Context* g){;return stringBuilder_StringBuilderInit(_global_Array_charInit(0, 0, NULL, NULL));
;}
struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g){;
;
;struct _global_Allocator* h =_global_self;
if(h != NULL){struct _global_Allocator* _global_x = h;
return _global_x;}else if(h == NULL){return _global_value;};
;}
static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator** j,struct _global_Allocator* k,struct _global_Context* g){
return _global_Maybe_default_rAllocatorByValue(*j,k,g);
}void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(char),g);
;}
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),g);
;return ((char*)(_global_self)->data + (int64_t)_global_index);
;}

static inline char* tmpstringBuilderb(struct _global_Array_char** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* g) {
char* h =(*_global_self)->data;
if(h != NULL){char* _global_data = h;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),g);
char* _global_newData;_global_newData = (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));;
_global_memcpy_char(_global_newData,_global_data,(*_global_self)->length,g);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,g);
return _global_newData;}else if(h == NULL){return (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));}
}
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(g)->allocator,g);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpstringBuilderb(&_global_self,&_global_newSize,&_global_allocator, g);;
;}
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_char(_global_self,1,g);
;}
else{_global_Array_reserve_char(_global_self,(_global_self)->capacity*2,g);
;};
;};
*((((char*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g){;
;
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
_global_panic(_global_StringInit(21,"Shorten out of bounds"),g);
;};
(_global_self)->length = (_global_self)->length-_global_num;;
;}
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g){;
char* _global_x;;
char* h =_global_self;if(h != NULL){_global_x = h;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),g);
;}
;
;return _global_x;
;}
static inline char* _global_Maybe_unwrap_rchar(char** j,struct _global_Context* g){
return _global_Maybe_unwrap_rcharByValue(*j,g);
}char _global_Array_pop_char(struct _global_Array_char* _global_self, struct _global_Context* g){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),g);
;};
char _global_tmp;_global_tmp = *(_global_Array_op_get_char(_global_self,(unsigned int)(_global_self)->length-1,g));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}

void stringBuilderInitTypes() { 
 
_global_Array_charType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_charType.size->tag = 1;
_global_Array_charType.array_type=
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
rCharType_VTABLE_FOR_Type.type
, &_global_CharType_toString
, &_global_CharType_get_size
)
;_global_Maybe_rcharType.p_type =
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_CharType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_CharType_toString
, &_global_CharType_get_size
)
;
_global_Maybe_rcharType.nullable = 1;stringBuilder_StringBuilderType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
stringBuilder_StringBuilderType.fields = _global_StaticArray_StaticArray_S_FieldInit(
stringBuilder_StringBuilderType_fields
,1
);
stringBuilder_StringBuilderType.package = _global_StringInit(13, "stringBuilder");
stringBuilder_StringBuilderType.name = _global_StringInit(13, "StringBuilder");
stringBuilder_StringBuilderType.size = sizeof(struct stringBuilder_StringBuilder);
stringBuilder_StringBuilderType_fields[0].name = _global_StringInit(5, "chars");
stringBuilder_StringBuilderType_fields[0].offset = offsetof(struct stringBuilder_StringBuilder, chars);
stringBuilder_StringBuilderType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_char_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; }
void stringBuilderInit() { 
;
};
struct error_CompilerError* _global_box_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* d);
struct error_CompilerError* error_CompilerError_before(struct error_CompilerError* error_self, struct _global_String error_mesg, struct _global_Context* d){;
;
struct error_CompilerError* error_e;error_e = _global_box_error_CompilerError(*(error_self),d);;
(error_e)->mesg = _global_String_op_addByValue(_global_String_op_addByValue((error_self)->mesg,_global_StringInit(3," : "),d),error_mesg,d);;
;return error_e;
;}
struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* d){;
struct stringBuilder_StringBuilder error_s_buffer;error_s_buffer = stringBuilder_make_StringBuilder(d);;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(25,"Compilation Error\n\nFile '"),((error_self)->filename),d),_global_StringInit(8,"', line "),d),_global_uint_toStringByValue(((error_self)->line),d),d),_global_StringInit(5,"\n    "),d),d);
stringBuilder_StringBuilder_append(&(error_s_buffer),(error_self)->mesg,d);
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(3,"\n\n\t"),d);
struct _global_File error_source_file;;
struct _global_Maybe_File f =_global_open((error_self)->filename,_global_ReadFile,d);if(f.tag==0){error_source_file = f.cases.Some.field0;

;}
else if(1){
return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),stringBuilder_StringBuilder_toStringByValue((error_s_buffer),d),d),_global_StringInit(27,"\nCould not load source file"),d);
;
;}
;
struct _global_File g = error_source_file;
;
struct _global_String error_src;error_src = _global_File_read(&(error_source_file),d);;
unsigned int error_at;error_at = 1;;
struct _global_Range h =_global_RangeInit(0,(error_src).length);
for (unsigned int j = h.start; j < h.end; j++) {
unsigned int error_i;error_i = j;
;if(error_at==(error_self)->line){;
_global_Array_append_char(&((error_s_buffer).chars),*(_global_String_op_getByValue(error_src,(unsigned int)error_i,d)),d);
;};
if(*(_global_String_op_getByValue(error_src,(unsigned int)error_i,d))=='\n'){;
error_at = error_at+1;;
;};
if(error_at>(error_self)->line){;
break;;
;};
}
;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1,"\t"),d);
struct _global_Range k =_global_RangeInit(0,(error_self)->column);
for (unsigned int l = k.start; l < k.end; l++) {
unsigned int error_i;error_i = l;
;stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1," "),d);
}
;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1,"^"),d);
;struct _global_String m =stringBuilder_StringBuilder_toString(&(error_s_buffer),d);
_global_File_freeByValue(g,d);
return m;
 }static inline struct _global_String error_CompilerError_toStringByValue(struct error_CompilerError n,struct _global_Context* d){
return error_CompilerError_toString(&n,d);
}struct error_CompilerError* _global_box_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* d){;
struct error_CompilerError* _global_pointer;_global_pointer = (struct error_CompilerError*)(_global_Allocator_alloc((d)->allocator,(uint64_t)sizeof(struct error_CompilerError),d));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void errorInitTypes() { 
 stringBuilderInitTypes();
error_CompilerErrorType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
error_CompilerErrorType.fields = _global_StaticArray_StaticArray_S_FieldInit(
error_CompilerErrorType_fields
,4
);
error_CompilerErrorType.package = _global_StringInit(5, "error");
error_CompilerErrorType.name = _global_StringInit(13, "CompilerError");
error_CompilerErrorType.size = sizeof(struct error_CompilerError);
error_CompilerErrorType_fields[0].name = _global_StringInit(8, "filename");
error_CompilerErrorType_fields[0].offset = offsetof(struct error_CompilerError, filename);
error_CompilerErrorType_fields[0].field_type = 
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
error_CompilerErrorType_fields[1].name = _global_StringInit(4, "line");
error_CompilerErrorType_fields[1].offset = offsetof(struct error_CompilerError, line);
error_CompilerErrorType_fields[1].field_type = 
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
error_CompilerErrorType_fields[2].name = _global_StringInit(4, "mesg");
error_CompilerErrorType_fields[2].offset = offsetof(struct error_CompilerError, mesg);
error_CompilerErrorType_fields[2].field_type = 
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
error_CompilerErrorType_fields[3].name = _global_StringInit(6, "column");
error_CompilerErrorType_fields[3].offset = offsetof(struct error_CompilerError, column);
error_CompilerErrorType_fields[3].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; }
void errorInit() { 
stringBuilderInit();;
;
};
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
struct _global_EnumType* lexer_enum_type;lexer_enum_type = lexer_TokenType_get_type(NULL,C);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((lexer_enum_type)->cases),(unsigned int)(lexer_self)->tag,C))).name;
;}
static inline struct _global_String lexer_TokenType_toStringByValue(struct lexer_TokenType D,struct _global_Context* C){
return lexer_TokenType_toString(&D,C);
}struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* C){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((lexer_self)->kind),C),C),_global_StringInit(3," : "),C),((lexer_self)->value),C),_global_StringInit(0,""),C);
;}
static inline struct _global_String lexer_Token_toStringByValue(struct lexer_Token D,struct _global_Context* C){
return lexer_Token_toString(&D,C);
}unsigned int lexer_Tok_length(struct lexer_Tok* lexer_self, struct _global_Context* C){;
;return (lexer_self)->end-(lexer_self)->start;
;}
struct _global_String lexer_Tok_slice(struct lexer_Tok* lexer_self, struct _global_String lexer_s, struct _global_Context* C){;
;
;return _global_String_sliceByValue(lexer_s,(lexer_self)->start,(lexer_self)->end,C);
;}
void lexer_Tok_clear(struct lexer_Tok* lexer_self, struct _global_Context* C){;
(lexer_self)->active = 0;;
(lexer_self)->end = (lexer_self)->start;;
;}
void lexer_Tok_include(struct lexer_Tok* lexer_self, unsigned int lexer_i, struct _global_Context* C){;
;
if(!((lexer_self)->active)){;
(lexer_self)->active = 1;;
(lexer_self)->start = lexer_i;;
;};
(lexer_self)->end = lexer_i+1;;
;}
struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->filename;
;}
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->line;
;}
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C));
;}
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
(lexer_self)->i = (lexer_self)->i+1;;
;return ((lexer_self)->i<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C)):('\0'));
;}
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return ((lexer_self)->i+1<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i+1,C)):('\0'));
;}
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* C){;
char* lexer_buffer;lexer_buffer = _global_longterm_alloc_char((uint64_t)(lexer_arr).length+1,C);;
_global_memcpy_char(lexer_buffer,(lexer_arr).data,(lexer_arr).length,C);
*(((lexer_buffer + (int64_t)(lexer_arr).length))) = _global_null_terminated;;
;return _global_make_String((lexer_arr).length,lexer_buffer,C);
;}
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
if(lexer_Tok_length(&((lexer_self)->tok),C)>0){;
struct lexer_TokenType lexer_kind;struct _global_String lexer_value;struct plexer_TokenTypecstringp D;D = lexer_determine_token(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);lexer_kind=D.field0;lexer_value=D.field1;;
if((lexer_kind).tag==(lexer_Invalid).tag){;
return error_make_Error_rlexer_Lexer(lexer_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown token "),(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C)),C),_global_StringInit(0,""),C),C);
;
;};
lexer_Lexer_append_token(lexer_self,lexer_kind,lexer_value,C);
;};
lexer_Tok_clear(&((lexer_self)->tok),C);
;return NULL;
;}
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->column;
;}
_Bool lexer_is_digit(char lexer_c, struct _global_Context* C){;
;return ((int)'0')<=((int)lexer_c)&&((int)lexer_c)<=((int)'9');
;}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerc(struct _global_Maybe_Maybe_T H) {
struct _global_Maybe_plexer_TokenTypecstringp G;G.tag = H.tag;G.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(H.cases);return G;
}
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* C){;
_Bool lexer_dot;lexer_dot = 0;;
struct _global_Range D =_global_RangeInit(0,(lexer_s).length);
for (unsigned int F = D.start; F < D.end; F++) {
unsigned int lexer_i;lexer_i = F;
;if(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C))=='.'){;
if(lexer_dot){;
return tmplexerc(_global_None);
;
;};
lexer_dot = 1;;
;}else if(!(lexer_is_digit(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C)),C))){;
return tmplexerc(_global_None);
;
;};
}
;
;return (lexer_dot ? _global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Float,lexer_s),C):(_global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Integer,lexer_s),C)));
;}
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* C){;
;return 1;
;}
struct _global_StaticArray_7_string lexer_keywords;_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* C){;
;return _global_StaticArray_contains_7_string(&(lexer_keywords),lexer_s,C);
;}
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* C){;
_global_log_string(lexer_s,C);
;struct _global_Maybe_plexer_TokenTypecstringp D =lexer_is_number(lexer_s,C);
if(D.tag==0){struct plexer_TokenTypecstringp lexer_token = D.cases.Some.field0;
return lexer_token;}else if(1){return (lexer_is_keyword(lexer_s,C) ? plexer_TokenTypecstringpInit(lexer_Keyword,lexer_s) : ((lexer_is_identifier(lexer_s,C))) ? plexer_TokenTypecstringpInit(lexer_Identifier,lexer_s):(plexer_TokenTypecstringpInit(lexer_Invalid,lexer_s)));};
;}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* C){;
;
struct _global_Array_lexer_Token lexer_tokens;lexer_tokens = _global_Array_lexer_TokenInit(0, 0, NULL, NULL);;
(lexer_tokens).allocator = (C)->longterm_storage;;
struct lexer_Lexer lexer_lexer;lexer_lexer = lexer_LexerInit(lexer_TokInit(0,0,0),lexer_src,0,lexer_tokens,lexer_filename,1,0);;
;return lexer_Lexer_lex(&(lexer_lexer),C);
;}
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* C){;
;
;
unsigned int lexer_column;lexer_column = (lexer_self)->column-((lexer_value).length/2);;
if(lexer_column>0){;
lexer_column = lexer_column-1;;
;};
struct lexer_Token lexer_tok;lexer_tok = lexer_TokenInit(lexer_kind,lexer_value,(lexer_self)->line,lexer_column);;
_global_Array_append_lexer_Token(&((lexer_self)->tokens),lexer_tok,C);
;}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerd(struct _global_Result_rerror_CompilerError_Result_T H) {
struct _global_Result_rerror_CompilerError___lexer_Token G;G.tag = H.tag;G.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(H.cases);return G;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerf(struct _global_Result_Result_E___lexer_Token bl) {
struct _global_Result_rerror_CompilerError___lexer_Token bk;bk.tag = bl.tag;bk.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bl.cases);return bk;
}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;while((lexer_self)->i<((lexer_self)->src).length){char lexer_t;lexer_t = lexer_Lexer_current(lexer_self,C);;(lexer_self)->column = (lexer_self)->column+1;;char D =lexer_t;if(D=='('){
struct error_CompilerError* F =lexer_Lexer_reset_tok(lexer_self,C);if(F != NULL){struct error_CompilerError* lexer__x = F;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"("),C);
;}
else if(D==')'){
struct error_CompilerError* J =lexer_Lexer_reset_tok(lexer_self,C);if(J != NULL){struct error_CompilerError* lexer__x = J;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,")"),C);
;}
else if(D=='='){
struct error_CompilerError* K =lexer_Lexer_reset_tok(lexer_self,C);if(K != NULL){struct error_CompilerError* lexer__x = K;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"="),C);
;}
else if(D==' '){
struct error_CompilerError* L =lexer_Lexer_reset_tok(lexer_self,C);if(L != NULL){struct error_CompilerError* lexer__x = L;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;}
else if(D==':'){
struct error_CompilerError* M =lexer_Lexer_reset_tok(lexer_self,C);if(M != NULL){struct error_CompilerError* lexer__x = M;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char N =lexer_Lexer_next(lexer_self,C);if(N=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,":="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,":"),C);
;}
;
;}
else if(D=='\n'||D=='\r'){
struct error_CompilerError* P =lexer_Lexer_reset_tok(lexer_self,C);if(P != NULL){struct error_CompilerError* lexer__x = P;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
struct stringBuilder_StringBuilder lexer_s;lexer_s = stringBuilder_make_StringBuilder(C);;
((lexer_s).chars).allocator = (C)->longterm_storage;;
(lexer_self)->line = (lexer_self)->line+1;;
(lexer_self)->column = 0;;
;while(lexer_Lexer_next(lexer_self,C)==' '){lexer_Lexer_advance(lexer_self,C);_global_Array_append_char(&((lexer_s).chars),' ',C);(lexer_self)->column = (lexer_self)->column+1;;};
_global_Array_append_char(&((lexer_s).chars),'\0',C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_make_String(((lexer_s).chars).length-1,_global_Maybe_unwrap_rcharByValue(((lexer_s).chars).data,C),C),C);
;}
else if(D=='+'){
struct error_CompilerError* Q =lexer_Lexer_reset_tok(lexer_self,C);if(Q != NULL){struct error_CompilerError* lexer__x = Q;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char R =lexer_Lexer_next(lexer_self,C);if(R=='+'){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(2,"++"),C);
;}
else if(R=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"+="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"+"),C);
;}
;
;}
else if(D=='-'){
struct error_CompilerError* S =lexer_Lexer_reset_tok(lexer_self,C);if(S != NULL){struct error_CompilerError* lexer__x = S;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char T =lexer_Lexer_next(lexer_self,C);if(T=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"-="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"-"),C);
;}
;
;}
else if(D=='*'){
struct error_CompilerError* V =lexer_Lexer_reset_tok(lexer_self,C);if(V != NULL){struct error_CompilerError* lexer__x = V;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"*"),C);
;}
else if(D=='<'){
struct error_CompilerError* W =lexer_Lexer_reset_tok(lexer_self,C);if(W != NULL){struct error_CompilerError* lexer__x = W;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"<"),C);
;}
else if(D==','){
struct error_CompilerError* X =lexer_Lexer_reset_tok(lexer_self,C);if(X != NULL){struct error_CompilerError* lexer__x = X;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,","),C);
;}
else if(D=='"'){
struct error_CompilerError* Y =lexer_Lexer_reset_tok(lexer_self,C);if(Y != NULL){struct error_CompilerError* lexer__x = Y;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;while((lexer_self)->i<((lexer_self)->src).length&&!(lexer_Lexer_next(lexer_self,C)=='"')){lexer_Lexer_advance(lexer_self,C);lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);};
lexer_Lexer_append_token(lexer_self,lexer_String,lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);
lexer_Tok_clear(&((lexer_self)->tok),C);
lexer_Lexer_advance(lexer_self,C);
;}
else if(D=='/'){
struct error_CompilerError* Z =lexer_Lexer_reset_tok(lexer_self,C);if(Z != NULL){struct error_CompilerError* lexer__x = Z;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char bb =lexer_Lexer_next(lexer_self,C);if(bb=='/'){
struct error_CompilerError* bc =lexer_Lexer_reset_tok(lexer_self,C);if(bc != NULL){struct error_CompilerError* lexer__x = bc;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;while(!(lexer_Lexer_current(lexer_self,C)=='\n')){lexer_Lexer_advance(lexer_self,C);};
;}
else if(bb=='*'){
struct error_CompilerError* bd =lexer_Lexer_reset_tok(lexer_self,C);if(bd != NULL){struct error_CompilerError* lexer__x = bd;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
unsigned int lexer_num;lexer_num = 1;;
;while(lexer_num>0){char bf =lexer_Lexer_advance(lexer_self,C);if(bf=='*'){
char bg =lexer_Lexer_next(lexer_self,C);if(bg=='/'){
lexer_num = lexer_num-1;;
lexer_Lexer_advance(lexer_self,C);
;}
else if(1){
;}
;
;}
else if(bf=='/'){
char bh =lexer_Lexer_next(lexer_self,C);if(bh=='*'){
lexer_num = lexer_num+1;;
lexer_Lexer_advance(lexer_self,C);
;}
else if(1){
;}
;
;}
else if(bf=='\0'){
return tmplexerd(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rlexer_Lexer(lexer_self,_global_StringInit(12,"Expecting */"),C),C));
;
;}
else if(1){
;}
;};
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"/"),C);
;}
;
;}
else if(1){
lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);
;}
;lexer_Lexer_advance(lexer_self,C);};
struct error_CompilerError* bj =lexer_Lexer_reset_tok(lexer_self,C);if(bj != NULL){struct error_CompilerError* lexer__x = bj;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_StringInit(0,""),C);
struct _global_Array_lexer_Token lexer_ts;lexer_ts = (lexer_self)->tokens;;
;return tmplexerf(_global_Ok_Result_E___lexer_Token((_global_StaticArray_StaticArray_S_lexer_TokenInit(lexer_ts.data, lexer_ts.length)),C));
;}
void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* C){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct lexer_Token),C);
;}
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* C){;
struct error_CompilerError* _global_pointer;_global_pointer = (struct error_CompilerError*)(_global_Allocator_alloc((C)->longterm_storage,(uint64_t)sizeof(struct error_CompilerError),C));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct _global_String* _global_StaticArray_op_get_7_string(struct _global_StaticArray_7_string* _global_self, unsigned int _global_index, struct _global_Context* C){;
;
_global_assert(_global_index<7,_global_StringInit(13,"Out of bounds"),C);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct lexer_Token* tmplexerg(struct _global_Array_lexer_Token** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* C) {
struct lexer_Token* D =(*_global_self)->data;
if(D != NULL){struct lexer_Token* _global_data = D;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),C);
struct lexer_Token* _global_newData;_global_newData = (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));;
_global_memcpy_lexer_Token(_global_newData,_global_data,(*_global_self)->length,C);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,C);
return _global_newData;}else if(D == NULL){return (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));}
}
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* C){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(C)->allocator,C);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmplexerg(&_global_self,&_global_newSize,&_global_allocator, C);;
;}
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* C){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),C);
;return ((_global_self)->data + (int64_t)_global_index);
;}
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* C){;
;return (char*)(_global_Allocator_alloc((C)->longterm_storage,_global_num*(uint64_t)sizeof(char),C));
;}
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* C){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(lexer_Lexer_get_filename(error_self,C),lexer_Lexer_get_line(error_self,C),error_mesg,lexer_Lexer_get_column(error_self,C)),C);
;}
_Bool _global_StaticArray_contains_7_string(struct _global_StaticArray_7_string* _global_self, struct _global_String _global_elem, struct _global_Context* C){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<7){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_7_string(_global_self,(unsigned int)_global_i,C))),&(_global_elem),C)){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* C){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_lexer_Token(_global_self,1,C);
;}
else{_global_Array_reserve_lexer_Token(_global_self,(_global_self)->capacity*2,C);
;};
;};
*((((struct lexer_Token*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
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
;
;
lexer_keywords = _global_StaticArray_7_stringInit(_global_StringInit(4,"true"),_global_StringInit(5,"false"),_global_StringInit(2,"if"),_global_StringInit(4,"else"),_global_StringInit(5,"while"),_global_StringInit(3,"def"),_global_StringInit(4,"type"));;
;
};
unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* c){;
;
unsigned int hashMap_h;hashMap_h = 0;;
unsigned int hashMap_o;hashMap_o = 31415;;
unsigned int hashMap_t;hashMap_t = 27183;;
char* hashMap_key;hashMap_key = _global_String_to_c_stringByValue(hashMap_s_key,c);;
struct _global_Range d =_global_RangeInit(0,(hashMap_s_key).length);
for (unsigned int f = d.start; f < d.end; f++) {
unsigned int hashMap_i;hashMap_i = f;
;hashMap_h = (hashMap_o*hashMap_h+(unsigned int)(*(((hashMap_key + (int64_t)hashMap_i)))))%hashMap_table_size;;
hashMap_o = hashMap_o*hashMap_t%(hashMap_table_size-1);;
}
;
;return hashMap_h;
;}

void hashMapInitTypes() { 
 
hashMap_Hash_Type.name = _global_StringInit(4, "Hash");
hashMap_Hash_Type.package = _global_StringInit(7, "hashMap");
hashMap_Hash_Type.real_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; }
void hashMapInit() { 
;
};
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_free_string(struct _global_Array_string* _global_self, struct _global_Context* m);
void _global_Array_free_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct _global_Context* m);
void _global_memcpy_scope_ScopeBlock(struct scope_ScopeBlock* _global_target, struct scope_ScopeBlock* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* m);
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Allocator* hashMap_allocator, struct _global_Context* m);
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* m);
void hashMap_HashBucket_free_scope_DeclInfo(struct hashMap_HashBucket_scope_DeclInfo* hashMap_self, struct _global_Context* m);
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_reserve_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_newSize, struct _global_Context* m);
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* m);
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* m);
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* m);
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_size_scope_DeclInfo(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* m);
void hashMap_HashMap_free_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_Context* m);
void _global_Array_append_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct scope_ScopeBlock _global_value, struct _global_Context* m);
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* m);
struct scope_ScopeBlock* _global_Array_op_get_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_free_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m);
struct scope_ScopeBlock _global_Array_pop_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m);
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m);
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m);
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* m);
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* m);
struct scope_DeclInfo scope_make_DeclInfo(struct types_CompilerType scope__type, struct _global_Context* m){;
;return scope_DeclInfoInit(scope__type,0);
;}
struct scope_ScopeBlock scope_make_ScopeBlock(struct _global_Context* m){struct hashMap_HashMap_scope_DeclInfo scope_vars;scope_vars = hashMap_make_HashMap_size_scope_DeclInfo(powf(2,3),&(_global_malloc_as_allocator),m);;
;return scope_ScopeBlockInit(scope_vars);
;}
void scope_ScopeBlock_free(struct scope_ScopeBlock* scope_self, struct _global_Context* m){;
hashMap_HashMap_free_scope_DeclInfo(&((scope_self)->vars),m);
;}
struct scope_Scope* scope_make_Scope(struct _global_Context* m){struct _global_Array_scope_ScopeBlock scope_blocks;scope_blocks = _global_Array_scope_ScopeBlockInit(0, 0, NULL, NULL);;
_global_Array_append_scope_ScopeBlock(&(scope_blocks),scope_make_ScopeBlock(m),m);
;return _global_box_scope_Scope(scope_ScopeInit(scope_blocks),m);
;}
void scope_Scope_free(struct scope_Scope* scope_self, struct _global_Context* m){;
struct _global_Range n =_global_RangeInit(0,((scope_self)->blocks).length);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int scope_i;scope_i = p;
;scope_ScopeBlock_free(&(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)scope_i,m))),m);
}
;
_global_Array_free_scope_ScopeBlock(&((scope_self)->blocks),m);
;}
void scope_Scope_push(struct scope_Scope* scope_self, struct _global_Context* m){;
_global_Array_append_scope_ScopeBlock(&((scope_self)->blocks),scope_make_ScopeBlock(m),m);
;}
void scope_Scope_pop(struct scope_Scope* scope_self, struct _global_Context* m){;
scope_ScopeBlock_free(&(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1,m))),m);
_global_Array_pop_scope_ScopeBlock(&((scope_self)->blocks),m);
;}
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* m){;
;
struct _global_Range n =_global_RangeInit(0,((scope_self)->blocks).length);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int scope_i;scope_i = p;
;struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &((*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1-scope_i,m))).vars);;
if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,m)){;
return &(*(hashMap_HashMap_op_get_scope_DeclInfo(scope_vars,(struct _global_String)scope_name,m)));
;
;};
}
;
;return NULL;
;}
struct error_CompilerError* scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct ast_AST* scope_node, struct _global_Context* m){;
;
;
;
_global_assert(((scope_self)->blocks).length>0,_global_StringInit(20,"Missing global scope"),m);
struct scope_ScopeBlock* scope_outer_block;scope_outer_block = &(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1,m)));;
(scope_info)->is_global = ((scope_self)->blocks).length==1;;
;if(hashMap_HashMap_contains_scope_DeclInfo(&((scope_outer_block)->vars),scope_name,m)){;
return error_make_Error_rast_AST(scope_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"Var "),(scope_name),m),_global_StringInit(15," already exists"),m),m);}
else{hashMap_HashMap_insert_scope_DeclInfo(&((scope_outer_block)->vars),scope_name,*(scope_info),m);
return NULL;};
;}
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m);
;}
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_String),m);
;}
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_DeclInfo),m);
;}

static inline struct hashMap_HashBucket_scope_DeclInfo* tmpscopeh(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct hashMap_HashBucket_scope_DeclInfo* n =(*_global_self)->data;
if(n != NULL){struct hashMap_HashBucket_scope_DeclInfo* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct hashMap_HashBucket_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m));;
_global_memcpy_hashMap_HashBucket_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m));}
}
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpscopeh(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_Array_free_string(struct _global_Array_string* _global_self, struct _global_Context* m){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
struct _global_String* n =(_global_self)->data;if(n != NULL){struct _global_String* _global_data = n;

_global_free((void*)_global_data,m);
;}
else if(n == NULL){
;}
;
;}
void _global_Array_free_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct _global_Context* m){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
struct scope_DeclInfo* n =(_global_self)->data;if(n != NULL){struct scope_DeclInfo* _global_data = n;

_global_free((void*)_global_data,m);
;}
else if(n == NULL){
;}
;
;}
void _global_memcpy_scope_ScopeBlock(struct scope_ScopeBlock* _global_target, struct scope_ScopeBlock* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_ScopeBlock),m);
;}

static inline struct _global_String* tmpscopej(struct _global_Array_string** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_String* n =(*_global_self)->data;
if(n != NULL){struct _global_String* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_String* _global_newData;_global_newData = (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),m));;
_global_memcpy_string(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),m));}
}
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpscopej(&_global_self,&_global_newSize,&_global_allocator, m);;
;}

static inline struct scope_DeclInfo* tmpscopek(struct _global_Array_scope_DeclInfo** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct scope_DeclInfo* n =(*_global_self)->data;
if(n != NULL){struct scope_DeclInfo* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct scope_DeclInfo* _global_newData;_global_newData = (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),m));;
_global_memcpy_scope_DeclInfo(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),m));}
}
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpscopek(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Allocator* hashMap_allocator, struct _global_Context* m){;
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
struct _global_Array_scope_DeclInfo hashMap_values;hashMap_values = _global_Array_scope_DeclInfoInit(0, 0, NULL, NULL);;
(hashMap_keys).allocator = hashMap_allocator;;
(hashMap_values).allocator = hashMap_allocator;;
;return hashMap_HashBucket_scope_DeclInfoInit(hashMap_keys,hashMap_values);
;}
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,1,m);
;}
else{_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct hashMap_HashBucket_scope_DeclInfo*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void hashMap_HashBucket_free_scope_DeclInfo(struct hashMap_HashBucket_scope_DeclInfo* hashMap_self, struct _global_Context* m){;
_global_Array_free_string(&((hashMap_self)->keys),m);
_global_Array_free_scope_DeclInfo(&((hashMap_self)->values),m);
;}
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct scope_ScopeBlock* tmpscopel(struct _global_Array_scope_ScopeBlock** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct scope_ScopeBlock* n =(*_global_self)->data;
if(n != NULL){struct scope_ScopeBlock* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct scope_ScopeBlock* _global_newData;_global_newData = (struct scope_ScopeBlock*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_ScopeBlock),m));;
_global_memcpy_scope_ScopeBlock(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct scope_ScopeBlock*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_ScopeBlock),m));}
}
void _global_Array_reserve_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpscopel(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_String*)(_global_self)->data + (int64_t)_global_index);
;}
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct scope_DeclInfo*)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_string(_global_self,1,m);
;}
else{_global_Array_reserve_string(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_String*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_scope_DeclInfo(_global_self,1,m);
;}
else{_global_Array_reserve_scope_DeclInfo(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct scope_DeclInfo*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_size_scope_DeclInfo(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* m){;
;
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(0, 0, NULL, NULL);;
(hashMap_buckets).allocator = hashMap_allocator;;
struct _global_Range n =_global_RangeInit(0,hashMap_size);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int hashMap_i;hashMap_i = p;
;_global_Array_append_hashMap_HashBucket_scope_DeclInfo_(&(hashMap_buckets),hashMap_make_HashBucket_scope_DeclInfo(hashMap_allocator,m),m);
}
;
;return hashMap_HashMap_scope_DeclInfoInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(hashMap_buckets.data, hashMap_buckets.length),0);
;}
void hashMap_HashMap_free_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_Context* m){;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ n =(hashMap_self)->buckets;
for (unsigned int p = 0;p < n.length; p++) {
struct hashMap_HashBucket_scope_DeclInfo hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
hashMap_HashBucket_free_scope_DeclInfo(&(hashMap_bucket),m);
}
;
;}
void _global_Array_append_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct scope_ScopeBlock _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_scope_ScopeBlock(_global_self,1,m);
;}
else{_global_Array_reserve_scope_ScopeBlock(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct scope_ScopeBlock*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* m){;
struct scope_Scope* _global_pointer;_global_pointer = (struct scope_Scope*)(_global_Allocator_alloc((m)->allocator,(uint64_t)sizeof(struct scope_Scope),m));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct scope_ScopeBlock* _global_Array_op_get_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct scope_ScopeBlock*)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_free_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
struct scope_ScopeBlock* n =(_global_self)->data;if(n != NULL){struct scope_ScopeBlock* _global_data = n;

_global_free((void*)_global_data,m);
;}
else if(n == NULL){
;}
;
;}
struct scope_ScopeBlock _global_Array_pop_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),m);
;};
struct scope_ScopeBlock _global_tmp;_global_tmp = *(_global_Array_op_get_scope_ScopeBlock(_global_self,(unsigned int)(_global_self)->length-1,m));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
struct _global_Array_string n =(hashMap_bucket)->keys;
for (unsigned int p = 0;p < n.length; p++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,m)){;
return 1;
;
;};
}
;
;return 0;
;}
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
struct _global_Array_string n =(hashMap_bucket)->keys;
for (unsigned int p = 0;p < n.length; p++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,m)){;
return &(*(_global_Array_op_get_scope_DeclInfo(&((hashMap_bucket)->values),(unsigned int)hashMap_i,m)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),m),_global_StringInit(12," in hash map"),m),m);
;return (struct scope_DeclInfo*)0;
;}
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* m){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(ast_AST_get_filename(error_self,m),ast_AST_get_line(error_self,m),error_mesg,ast_AST_get_column(error_self,m)),m);
;}
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* m){;
;
;
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),m);
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)0,m))).keys).allocator,(m)->allocator,m);;
struct hashMap_HashMap_scope_DeclInfo hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_scope_DeclInfo(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,m);;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ n =(hashMap_self)->buckets;
for (unsigned int p = 0;p < n.length; p++) {
struct hashMap_HashBucket_scope_DeclInfo hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
struct _global_Range q =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
for (unsigned int r = q.start; r < q.end; r++) {
unsigned int hashMap_c;hashMap_c = r;
;hashMap_HashMap_insert_scope_DeclInfo(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,m)),*(_global_Array_op_get_scope_DeclInfo(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,m)),m);
}
;
}
;
hashMap_HashMap_free_scope_DeclInfo(hashMap_self,m);
*(hashMap_self) = hashMap_new_hash;;
;};
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,m);
_global_Array_append_scope_DeclInfo(&((hashMap_bucket)->values),hashMap_value,m);
(hashMap_self)->length = (hashMap_self)->length+1;;
;}

void scopeInitTypes() { 
 
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_stringType.size->tag = 1;
_global_Array_stringType.array_type=
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;_global_Maybe_rstringType.p_type =
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
_global_Maybe_rstringType.nullable = 1;_global_Array_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_types_CompilerTypeType.size->tag = 1;
_global_Array_types_CompilerTypeType.array_type=
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;types_Void.tag = 0;
types_String.tag = 1;
types_Bool.tag = 2;
struct _global_Case* C =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 7);
C[0].name = _global_StringInit(4, "Void");
C[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[1].name = _global_StringInit(6, "String");
C[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[2].name = _global_StringInit(4, "Bool");
C[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[3].name = _global_StringInit(3, "Int");
C[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
C[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; C[3].args.data[0].offset = offsetof(struct types_CompilerType_Int, field0);
C[3].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; C[3].args.data[1].offset = offsetof(struct types_CompilerType_Int, field1);
C[4].name = _global_StringInit(5, "Float");
C[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[4].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; C[4].args.data[0].offset = offsetof(struct types_CompilerType_Float, field0);
C[5].name = _global_StringInit(6, "Struct");
C[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[5].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_StructInfo_get_type(NULL,(&_global_context))
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
; C[5].args.data[0].offset = offsetof(struct types_CompilerType_Struct, field0);
C[6].name = _global_StringInit(4, "Func");
C[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[6].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
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
; C[6].args.data[0].offset = offsetof(struct types_CompilerType_Func, field0);
types_CompilerTypeType.tag_field.name = _global_StringInit(3, "tag");

types_CompilerTypeType.tag_field.offset = offsetof(struct types_CompilerType, tag);
types_CompilerTypeType.tag_field.field_type = 
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

types_CompilerTypeType.size = sizeof(struct types_CompilerType);

types_CompilerTypeType.package = _global_StringInit(5, "types");
types_CompilerTypeType.name = _global_StringInit(12, "CompilerType");
types_CompilerTypeType.cases.data = C;
types_CompilerTypeType.cases.length = 7;
_global_Maybe_rtypes_CompilerTypeType.p_type =
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rtypes_CompilerTypeType.nullable = 1;hashMap_HashBucket_types_CompilerTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_types_CompilerTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_types_CompilerTypeType_fields
,2
);
hashMap_HashBucket_types_CompilerTypeType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_types_CompilerTypeType.name = _global_StringInit(29, "HashBucket_types_CompilerType");
hashMap_HashBucket_types_CompilerTypeType.size = sizeof(struct hashMap_HashBucket_types_CompilerType);
hashMap_HashBucket_types_CompilerTypeType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_types_CompilerTypeType_fields[0].offset = offsetof(struct hashMap_HashBucket_types_CompilerType, keys);
hashMap_HashBucket_types_CompilerTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_types_CompilerTypeType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_types_CompilerTypeType_fields[1].offset = offsetof(struct hashMap_HashBucket_types_CompilerType, values);
hashMap_HashBucket_types_CompilerTypeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_types_CompilerType_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_types_CompilerTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_types_CompilerTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_types_CompilerTypeType_fields
,2
);
hashMap_HashMap_types_CompilerTypeType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_types_CompilerTypeType.name = _global_StringInit(26, "HashMap_types_CompilerType");
hashMap_HashMap_types_CompilerTypeType.size = sizeof(struct hashMap_HashMap_types_CompilerType);
hashMap_HashMap_types_CompilerTypeType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_types_CompilerTypeType_fields[0].offset = offsetof(struct hashMap_HashMap_types_CompilerType, buckets);
hashMap_HashMap_types_CompilerTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashMap_types_CompilerTypeType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_types_CompilerTypeType_fields[1].offset = offsetof(struct hashMap_HashMap_types_CompilerType, length);
hashMap_HashMap_types_CompilerTypeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;types_StructInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
types_StructInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_StructInfoType_fields
,2
);
types_StructInfoType.package = _global_StringInit(5, "types");
types_StructInfoType.name = _global_StringInit(10, "StructInfo");
types_StructInfoType.size = sizeof(struct types_StructInfo);
types_StructInfoType_fields[0].name = _global_StringInit(4, "name");
types_StructInfoType_fields[0].offset = offsetof(struct types_StructInfo, name);
types_StructInfoType_fields[0].field_type = 
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
types_StructInfoType_fields[1].name = _global_StringInit(6, "fields");
types_StructInfoType_fields[1].offset = offsetof(struct types_StructInfo, fields);
types_StructInfoType_fields[1].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_types_CompilerTypeType.size->tag = 2;
_global_StaticArray_StaticArray_S_types_CompilerTypeType.array_type=
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;types_FuncPtrType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
types_FuncPtrType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_FuncPtrType_fields
,3
);
types_FuncPtrType.package = _global_StringInit(5, "types");
types_FuncPtrType.name = _global_StringInit(7, "FuncPtr");
types_FuncPtrType.size = sizeof(struct types_FuncPtr);
types_FuncPtrType_fields[0].name = _global_StringInit(4, "args");
types_FuncPtrType_fields[0].offset = offsetof(struct types_FuncPtr, args);
types_FuncPtrType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_types_CompilerType_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
types_FuncPtrType_fields[1].name = _global_StringInit(11, "return_type");
types_FuncPtrType_fields[1].offset = offsetof(struct types_FuncPtr, return_type);
types_FuncPtrType_fields[1].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
types_FuncPtrType_fields[2].name = _global_StringInit(8, "external");
types_FuncPtrType_fields[2].offset = offsetof(struct types_FuncPtr, external);
types_FuncPtrType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_DeclInfoType_fields
,2
);
scope_DeclInfoType.package = _global_StringInit(5, "scope");
scope_DeclInfoType.name = _global_StringInit(8, "DeclInfo");
scope_DeclInfoType.size = sizeof(struct scope_DeclInfo);
scope_DeclInfoType_fields[0].name = _global_StringInit(5, "_type");
scope_DeclInfoType_fields[0].offset = offsetof(struct scope_DeclInfo, _type);
scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
scope_DeclInfoType_fields[1].name = _global_StringInit(9, "is_global");
scope_DeclInfoType_fields[1].offset = offsetof(struct scope_DeclInfo, is_global);
scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_scope_DeclInfoType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_scope_DeclInfoType.size->tag = 1;
_global_Array_scope_DeclInfoType.array_type=
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rscope_DeclInfoType.p_type =
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rscope_DeclInfoType.nullable = 1;hashMap_HashBucket_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_scope_DeclInfoType_fields
,2
);
hashMap_HashBucket_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_scope_DeclInfoType.name = _global_StringInit(25, "HashBucket_scope_DeclInfo");
hashMap_HashBucket_scope_DeclInfoType.size = sizeof(struct hashMap_HashBucket_scope_DeclInfo);
hashMap_HashBucket_scope_DeclInfoType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, keys);
hashMap_HashBucket_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_scope_DeclInfoType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_scope_DeclInfoType_fields[1].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, values);
hashMap_HashBucket_scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_scope_DeclInfoType_fields
,2
);
hashMap_HashMap_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_scope_DeclInfoType.name = _global_StringInit(22, "HashMap_scope_DeclInfo");
hashMap_HashMap_scope_DeclInfoType.size = sizeof(struct hashMap_HashMap_scope_DeclInfo);
hashMap_HashMap_scope_DeclInfoType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashMap_scope_DeclInfo, buckets);
hashMap_HashMap_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashMap_scope_DeclInfoType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_scope_DeclInfoType_fields[1].offset = offsetof(struct hashMap_HashMap_scope_DeclInfo, length);
hashMap_HashMap_scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;scope_ScopeBlockType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeBlockType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeBlockType_fields
,1
);
scope_ScopeBlockType.package = _global_StringInit(5, "scope");
scope_ScopeBlockType.name = _global_StringInit(10, "ScopeBlock");
scope_ScopeBlockType.size = sizeof(struct scope_ScopeBlock);
scope_ScopeBlockType_fields[0].name = _global_StringInit(4, "vars");
scope_ScopeBlockType_fields[0].offset = offsetof(struct scope_ScopeBlock, vars);
scope_ScopeBlockType_fields[0].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_scope_ScopeBlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_scope_ScopeBlockType.size->tag = 1;
_global_Array_scope_ScopeBlockType.array_type=
_global_TypeFromStruct(
scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rscope_ScopeBlockType.p_type =
_global_TypeFromStruct(
scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rscope_ScopeBlockType.nullable = 1;scope_ScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeType_fields
,1
);
scope_ScopeType.package = _global_StringInit(5, "scope");
scope_ScopeType.name = _global_StringInit(5, "Scope");
scope_ScopeType.size = sizeof(struct scope_Scope);
scope_ScopeType_fields[0].name = _global_StringInit(6, "blocks");
scope_ScopeType_fields[0].offset = offsetof(struct scope_Scope, blocks);
scope_ScopeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;ast_Add.tag = 0;
ast_Mul.tag = 1;
ast_Div.tag = 2;
ast_LT.tag = 3;
ast_Sub.tag = 4;
struct _global_Case* P =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 5);
P[0].name = _global_StringInit(3, "Add");
P[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[1].name = _global_StringInit(3, "Mul");
P[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[2].name = _global_StringInit(3, "Div");
P[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[3].name = _global_StringInit(2, "LT");
P[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[4].name = _global_StringInit(3, "Sub");
P[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
ast_OperatorKindType.tag_field.name = _global_StringInit(3, "tag");

ast_OperatorKindType.tag_field.offset = offsetof(struct ast_OperatorKind, tag);
ast_OperatorKindType.tag_field.field_type = 
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

ast_OperatorKindType.size = sizeof(struct ast_OperatorKind);

ast_OperatorKindType.package = _global_StringInit(3, "ast");
ast_OperatorKindType.name = _global_StringInit(12, "OperatorKind");
ast_OperatorKindType.cases.data = P;
ast_OperatorKindType.cases.length = 5;
ast_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
ast_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ReadInfoType_fields
,2
);
ast_ReadInfoType.package = _global_StringInit(3, "ast");
ast_ReadInfoType.name = _global_StringInit(8, "ReadInfo");
ast_ReadInfoType.size = sizeof(struct ast_ReadInfo);
ast_ReadInfoType_fields[0].name = _global_StringInit(9, "is_global");
ast_ReadInfoType_fields[0].offset = offsetof(struct ast_ReadInfo, is_global);
ast_ReadInfoType_fields[0].field_type = 
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
ast_ReadInfoType_fields[1].name = _global_StringInit(4, "name");
ast_ReadInfoType_fields[1].offset = offsetof(struct ast_ReadInfo, name);
ast_ReadInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;ast_FuncInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
ast_FuncInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_FuncInfoType_fields
,2
);
ast_FuncInfoType.package = _global_StringInit(3, "ast");
ast_FuncInfoType.name = _global_StringInit(8, "FuncInfo");
ast_FuncInfoType.size = sizeof(struct ast_FuncInfo);
ast_FuncInfoType_fields[0].name = _global_StringInit(4, "name");
ast_FuncInfoType_fields[0].offset = offsetof(struct ast_FuncInfo, name);
ast_FuncInfoType_fields[0].field_type = 
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
ast_FuncInfoType_fields[1].name = _global_StringInit(5, "_type");
ast_FuncInfoType_fields[1].offset = offsetof(struct ast_FuncInfo, _type);
ast_FuncInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
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
;ast_Root.tag = 0;
ast_FuncCall.tag = 6;
ast_CreateAssign.tag = 7;
ast_Create.tag = 8;
ast_Assign.tag = 9;
ast_If.tag = 10;
ast_Block.tag = 11;
ast_Condition.tag = 12;
ast_Else.tag = 13;
ast_While.tag = 14;
ast_Tuple.tag = 16;
struct _global_Case* by =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 19);
by[0].name = _global_StringInit(4, "Root");
by[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[1].name = _global_StringInit(3, "Int");
by[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[1].args.data[0].offset = offsetof(struct ast_Payload_Int, field0);
by[2].name = _global_StringInit(5, "Float");
by[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[2].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[2].args.data[0].offset = offsetof(struct ast_Payload_Float, field0);
by[3].name = _global_StringInit(4, "Bool");
by[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; by[3].args.data[0].offset = offsetof(struct ast_Payload_Bool, field0);
by[4].name = _global_StringInit(8, "Operator");
by[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[4].args.data[0].arg_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; by[4].args.data[0].offset = offsetof(struct ast_Payload_Operator, field0);
by[5].name = _global_StringInit(10, "Identifier");
by[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[5].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_ReadInfo_get_type(NULL,(&_global_context))
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
; by[5].args.data[0].offset = offsetof(struct ast_Payload_Identifier, field0);
by[6].name = _global_StringInit(8, "FuncCall");
by[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[7].name = _global_StringInit(12, "CreateAssign");
by[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[8].name = _global_StringInit(6, "Create");
by[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[9].name = _global_StringInit(6, "Assign");
by[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[10].name = _global_StringInit(2, "If");
by[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[11].name = _global_StringInit(5, "Block");
by[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[12].name = _global_StringInit(9, "Condition");
by[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[13].name = _global_StringInit(4, "Else");
by[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[14].name = _global_StringInit(5, "While");
by[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[15].name = _global_StringInit(7, "FuncDef");
by[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[15].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_FuncInfo_get_type(NULL,(&_global_context))
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
; by[15].args.data[0].offset = offsetof(struct ast_Payload_FuncDef, field0);
by[16].name = _global_StringInit(5, "Tuple");
by[16].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[17].name = _global_StringInit(7, "FuncArg");
by[17].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
by[17].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[17].args.data[0].offset = offsetof(struct ast_Payload_FuncArg, field0);
by[17].args.data[1].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; by[17].args.data[1].offset = offsetof(struct ast_Payload_FuncArg, field1);
by[18].name = _global_StringInit(6, "String");
by[18].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[18].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[18].args.data[0].offset = offsetof(struct ast_Payload_String, field0);
ast_PayloadType.tag_field.name = _global_StringInit(3, "tag");

ast_PayloadType.tag_field.offset = offsetof(struct ast_Payload, tag);
ast_PayloadType.tag_field.field_type = 
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

ast_PayloadType.size = sizeof(struct ast_Payload);

ast_PayloadType.package = _global_StringInit(3, "ast");
ast_PayloadType.name = _global_StringInit(7, "Payload");
ast_PayloadType.cases.data = by;
ast_PayloadType.cases.length = 19;
_global_Array_rast_ASTType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rast_ASTType.size->tag = 1;
_global_Array_rast_ASTType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
;ast_ASTType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
ast_ASTType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ASTType_fields
,7
);
ast_ASTType.package = _global_StringInit(3, "ast");
ast_ASTType.name = _global_StringInit(3, "AST");
ast_ASTType.size = sizeof(struct ast_AST);
ast_ASTType_fields[0].name = _global_StringInit(7, "payload");
ast_ASTType_fields[0].offset = offsetof(struct ast_AST, payload);
ast_ASTType_fields[0].field_type = 
_global_TypeFromStruct(
ast_Payload_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
ast_ASTType_fields[1].name = _global_StringInit(5, "nodes");
ast_ASTType_fields[1].offset = offsetof(struct ast_AST, nodes);
ast_ASTType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_rast_AST_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
ast_ASTType_fields[2].name = _global_StringInit(5, "_type");
ast_ASTType_fields[2].offset = offsetof(struct ast_AST, _type);
ast_ASTType_fields[2].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
ast_ASTType_fields[3].name = _global_StringInit(5, "owner");
ast_ASTType_fields[3].offset = offsetof(struct ast_AST, owner);
ast_ASTType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Maybe_rast_AST_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
ast_ASTType_fields[4].name = _global_StringInit(9, "_filename");
ast_ASTType_fields[4].offset = offsetof(struct ast_AST, _filename);
ast_ASTType_fields[4].field_type = 
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
ast_ASTType_fields[5].name = _global_StringInit(5, "_line");
ast_ASTType_fields[5].offset = offsetof(struct ast_AST, _line);
ast_ASTType_fields[5].field_type = 
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
ast_ASTType_fields[6].name = _global_StringInit(7, "_column");
ast_ASTType_fields[6].offset = offsetof(struct ast_AST, _column);
ast_ASTType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_rrast_ASTType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
;
_global_Maybe_rrast_ASTType.nullable = 1;_global_Maybe_rast_ASTType.p_type =
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rast_ASTType.nullable = 1;_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.p_type =
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.nullable = 1;_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.size->tag = 1;
_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; }
void scopeInit() { 
;
;
};
struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* D);
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* D);
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* D);
struct types_StructInfo* _global_box_types_StructInfo(struct types_StructInfo _global_value, struct _global_Context* D);
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* D);
struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType types_self, struct _global_Context* D){;
;struct types_CompilerType F =types_self;
if(F.tag==0){return _global_StringInit(4,"none");}else if(F.tag==1){return _global_StringInit(6,"string");}else if(F.tag==2){return _global_StringInit(4,"bool");}else if(F.tag==3){_Bool types_unsigned = F.cases.Int.field0;
unsigned int types_size = F.cases.Int.field1;
return types_int_to_string(types_unsigned,types_size,D);}else if(F.tag==4){unsigned int types_size = F.cases.Float.field0;
return types_float_to_string(types_size,D);}else if(F.tag==5){struct types_StructInfo* types_info = F.cases.Struct.field0;
return types_StructInfo_toString(types_info,D);}else if(F.tag==6){struct types_FuncPtr* types_info = F.cases.Func.field0;
return types_FuncPtr_toString(types_info,D);};
;}
static inline struct _global_String types_CompilerType_toString(struct types_CompilerType* G,struct _global_Context* D){
return types_CompilerType_toStringByValue(*G,D);
}struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;return (types_CompilerType_equalsByValue(types_self,types_other,D) ? NULL:(error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),types_CompilerType_toStringByValue((types_self),D),D),_global_StringInit(6,", not "),D),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(0,""),D),D)));
;}
static inline struct error_CompilerError* types_CompilerType_expect_equals(struct types_CompilerType* F,struct types_CompilerType G,struct error_Thrower H,struct _global_Context* D){
return types_CompilerType_expect_equalsByValue(*F,G,H,D);
}_Bool types_CompilerType_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* D){;
;
types_self = types_CompilerType_to_real_typeByValue(types_self,D);;
types_other = types_CompilerType_to_real_typeByValue(types_other,D);;
if((types_self).tag!=(types_other).tag){;
return 0;
;
;};
;struct ptypes_CompilerTypectypes_CompilerTypep F =ptypes_CompilerTypectypes_CompilerTypepInit(types_self,types_other);
if((F.field0.tag==3&&F.field1.tag==3)){_Bool types_unsigned1 = F.field0.cases.Int.field0;
unsigned int types_size1 = F.field0.cases.Int.field1;
_Bool types_unsigned2 = F.field1.cases.Int.field0;
unsigned int types_size2 = F.field1.cases.Int.field1;
return types_unsigned1==types_unsigned2&&types_size1==types_size2;}else if((F.field0.tag==4&&F.field1.tag==4)){unsigned int types_size = F.field0.cases.Float.field0;
unsigned int types_size1 = F.field1.cases.Float.field0;
return types_size==types_size1;}else if((F.field0.tag==5&&F.field1.tag==5)){struct types_StructInfo* types_info1 = F.field0.cases.Struct.field0;
struct types_StructInfo* types_info2 = F.field1.cases.Struct.field0;
return types_StructInfo_op_eq(types_info1,types_info2,D);}else if((F.field0.tag==6&&F.field1.tag==6)){struct types_FuncPtr* types_info1 = F.field0.cases.Func.field0;
struct types_FuncPtr* types_info2 = F.field1.cases.Func.field0;
return types_FuncPtr_op_eq(types_info1,types_info2,D);}else if(1){return 1;};
;}
static inline _Bool types_CompilerType_equals(struct types_CompilerType* G,struct types_CompilerType H,struct _global_Context* D){
return types_CompilerType_equalsByValue(*G,H,D);
}struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;struct types_CompilerType F =types_self;
if(F.tag==0||F.tag==1||F.tag==2){return types_CompilerType_expect_equalsByValue(types_self,types_other,types_thrower,D);}else if(F.tag==3){_Bool types_unsigned = F.cases.Int.field0;
unsigned int types_size = F.cases.Int.field1;
return types_int_duck_type(types_unsigned,types_size,types_other,types_thrower,D);}else if(F.tag==4){unsigned int types_size = F.cases.Float.field0;
return types_float_duck_type(types_size,types_other,types_thrower,D);}else if(F.tag==5){struct types_StructInfo* types_info = F.cases.Struct.field0;
return types_StructInfo_duck_type(types_info,types_other,types_thrower,D);}else if(F.tag==6){struct types_FuncPtr* types_info = F.cases.Func.field0;
return types_FuncPtr_duck_type(types_info,types_other,types_thrower,D);};
;}
static inline struct error_CompilerError* types_CompilerType_duck_type(struct types_CompilerType* G,struct types_CompilerType H,struct error_Thrower J,struct _global_Context* D){
return types_CompilerType_duck_typeByValue(*G,H,J,D);
}struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType types_self, struct _global_Context* D){;
;struct types_CompilerType F =types_self;
if(1){return types_self;};
;}
static inline struct types_CompilerType types_CompilerType_to_real_type(struct types_CompilerType* G,struct _global_Context* D){
return types_CompilerType_to_real_typeByValue(*G,D);
}_Bool types_CompilerType_is_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* D){;
;
;return (types_CompilerType_to_real_typeByValue(types_self,D)).tag==(types_CompilerType_to_real_typeByValue(types_other,D)).tag;
;}
static inline _Bool types_CompilerType_is_type(struct types_CompilerType* F,struct types_CompilerType G,struct _global_Context* D){
return types_CompilerType_is_typeByValue(*F,G,D);
}struct types_CompilerType types_func_type;struct types_CompilerType types_struct_type;struct _global_String types_float_to_string(unsigned int types_size, struct _global_Context* D){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"f"),_global_uint_toStringByValue((types_size),D),D),_global_StringInit(0,""),D);
;}
struct error_CompilerError* types_float_duck_type(unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;struct types_CompilerType F =types_CompilerType_to_real_typeByValue(types_other,D);
if(F.tag==4){unsigned int types_size2 = F.cases.Float.field0;
return NULL;}else if(F.tag==3){_Bool types_unsigned = F.cases.Int.field0;
unsigned int types_size2 = F.cases.Int.field1;
return NULL;}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),(types_float_to_string(types_size,D)),D),_global_StringInit(5," not "),D),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(0,""),D),D);};
;}
struct types_CompilerType types_make_Float(struct _global_Context* D){;return types_Float(32,D);
;}
struct _global_String types_int_to_string(_Bool types_unsigned, unsigned int types_size, struct _global_Context* D){;
;
struct _global_String types_prefix;types_prefix = (types_unsigned ? _global_StringInit(1,"u"):(_global_StringInit(1,"i")));;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(types_prefix),D),_global_StringInit(0,""),D),_global_uint_toStringByValue((types_size),D),D),_global_StringInit(0,""),D);
;}
struct error_CompilerError* types_int_duck_type(_Bool types_unsigned, unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;
;struct types_CompilerType F =types_CompilerType_to_real_typeByValue(types_other,D);
if(F.tag==3){_Bool types_unsigned2 = F.cases.Int.field0;
unsigned int types_size2 = F.cases.Int.field1;
return (types_unsigned&&!(types_unsigned2) ? error_make_Error_error_Thrower(types_thrower,_global_StringInit(42,"Cannot convert from signed to unsigned int"),D) : (types_size2>types_size) ? error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(36,"Loosing information by casting from "),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(2,", "),D),(types_int_to_string(types_unsigned,types_size,D)),D),_global_StringInit(0,""),D),D):(NULL));}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),(types_int_to_string(types_unsigned,types_size,D)),D),_global_StringInit(6,", not "),D),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(0,""),D),D);};
;}
struct types_CompilerType types_make_Int(struct _global_Context* D){;return types_Int(0,32,D);
;}
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* D){;
struct stringBuilder_StringBuilder types_s;types_s = stringBuilder_make_StringBuilder(D);;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(4,"def("),D);
struct _global_StaticArray_StaticArray_S_types_CompilerType F =(types_self)->args;
for (unsigned int G = 0;G < F.length; G++) {
struct types_CompilerType types_arg;types_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&F, G, D);
;unsigned int types_i;types_i = G;
stringBuilder_StringBuilder_append(&(types_s),types_CompilerType_toStringByValue(types_arg,D),D);
if(types_i<((types_self)->args).length-1){;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,","),D);
;};
}
;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,")"),D);
;return stringBuilder_StringBuilder_toString(&(types_s),D);
;}
static inline struct _global_String types_FuncPtr_toStringByValue(struct types_FuncPtr H,struct _global_Context* D){
return types_FuncPtr_toString(&H,D);
}struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;return NULL;
;}
_Bool types_FuncPtr_op_eq(struct types_FuncPtr* types_self, struct types_FuncPtr* types_other, struct _global_Context* D){;
;
;return 1;
;}
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* D){;
;return 8;
;}
struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* D){;return _global_box_types_FuncPtr(types_FuncPtrInit(_global_StaticArray_StaticArray_S_types_CompilerTypeInit(NULL, 0),types_Void,0),D);
;}
struct _global_String types_StructInfo_toString(struct types_StructInfo* types_self, struct _global_Context* D){;
;return (types_self)->name;
;}
static inline struct _global_String types_StructInfo_toStringByValue(struct types_StructInfo F,struct _global_Context* D){
return types_StructInfo_toString(&F,D);
}_Bool types_StructInfo_equals(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct _global_Context* D){;
;
;struct types_CompilerType F =types_CompilerType_to_real_typeByValue(types_other,D);
if(F.tag==5){struct types_StructInfo* types_o = F.cases.Struct.field0;
return _global_String_op_eqByValue((types_o)->name,(types_self)->name,D);}else if(1){return 0;};
;}
struct error_CompilerError* types_StructInfo_duck_type(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
;
;
;return (types_StructInfo_equals(types_self,types_other,D) ? NULL:(error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),types_StructInfo_toString((types_self),D),D),_global_StringInit(5," not "),D),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(0,""),D),D)));
;}
_Bool types_StructInfo_op_eq(struct types_StructInfo* types_self, struct types_StructInfo* types_other, struct _global_Context* D){;
;
;return _global_String_op_eqByValue((types_self)->name,(types_other)->name,D);
;}
struct types_StructInfo* types_make_StructInfo(struct _global_String types_name, struct hashMap_HashMap_types_CompilerType types_fields, struct _global_Context* D){;
;
;return _global_box_types_StructInfo(types_StructInfoInit(types_name,types_fields),D);
;}
static inline struct _global_Result_Result_E_types_CompilerType tmptypesp(struct _global_Result_rerror_CompilerError_Result_T K) {
struct _global_Result_Result_E_types_CompilerType J;J.tag = K.tag;J.cases = *(union _global_Result_Result_E_types_CompilerType_cases*) &(K.cases);return J;
}
static inline struct _global_Result_rerror_CompilerError_types_CompilerType tmptypesm(struct _global_Result_Result_E_types_CompilerType G) {
struct _global_Result_rerror_CompilerError_types_CompilerType F;F.tag = G.tag;F.cases = *(union _global_Result_rerror_CompilerError_types_CompilerType_cases*) &(G.cases);return F;
}

static inline struct _global_Result_Result_E_types_CompilerType tmptypesn(struct parser_Parser** types_self, struct _global_Context* D) {
struct _global_String H =(parser_Parser_current(*types_self,D)).value;
if(_global_String_op_eqByValue(H,_global_StringInit(3,"int"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Int(0,32,D),D);}else if(_global_String_op_eqByValue(H,_global_StringInit(5,"float"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Float(32,D),D);}else if(_global_String_op_eqByValue(H,_global_StringInit(4,"none"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Void,D);}else if(1){return tmptypesp(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(*types_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((parser_Parser_current(*types_self,D)).value),D),_global_StringInit(0,""),D),D),D));}
}
struct _global_Result_rerror_CompilerError_types_CompilerType types_parse_type(struct parser_Parser* types_self, struct _global_Context* D){;
;return tmptypesm(tmptypesn(&types_self, D));
;}
struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* D){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(error_Thrower_get_filename(&(error_self),D),error_Thrower_get_line(&(error_self),D),error_mesg,error_Thrower_get_column(&(error_self),D)),D);
;}
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* D){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),D);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* D){;
struct types_FuncPtr* _global_pointer;_global_pointer = (struct types_FuncPtr*)(_global_Allocator_alloc((D)->allocator,(uint64_t)sizeof(struct types_FuncPtr),D));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct types_StructInfo* _global_box_types_StructInfo(struct types_StructInfo _global_value, struct _global_Context* D){;
struct types_StructInfo* _global_pointer;_global_pointer = (struct types_StructInfo*)(_global_Allocator_alloc((D)->allocator,(uint64_t)sizeof(struct types_StructInfo),D));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* D){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(parser_Parser_get_filename(error_self,D),parser_Parser_get_line(error_self,D),error_mesg,parser_Parser_get_column(error_self,D)),D);
;}

void typesInitTypes() { 
 hashMapInitTypes();scopeInitTypes();
error_Thrower_Type.name = _global_StringInit(7, "Thrower")
;error_Thrower_Type.package = _global_StringInit(5, "error");struct _global_Case* t =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
t[0].name = _global_StringInit(2, "Ok");
t[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[0].args.data[0].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; t[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_types_CompilerType_Ok, field0);
t[1].name = _global_StringInit(5, "Error");
t[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[1].args.data[0].arg_type = 
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
; t[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_types_CompilerType_Error, field0);
_global_Result_rerror_CompilerError_types_CompilerTypeType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_types_CompilerTypeType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_types_CompilerType, tag);
_global_Result_rerror_CompilerError_types_CompilerTypeType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError_types_CompilerTypeType.size = sizeof(struct _global_Result_rerror_CompilerError_types_CompilerType);

_global_Result_rerror_CompilerError_types_CompilerTypeType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_types_CompilerTypeType.name = _global_StringInit(46, "Result_rerror_CompilerError_types_CompilerType");
_global_Result_rerror_CompilerError_types_CompilerTypeType.cases.data = t;
_global_Result_rerror_CompilerError_types_CompilerTypeType.cases.length = 2;
_global_Array_____operatorParser_OpDescType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_____operatorParser_OpDescType.size->tag = 1;
_global_Array_____operatorParser_OpDescType.array_type=
_global_TypeFromStruct(
_global_Array_operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_operatorParser_OpDescType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_operatorParser_OpDescType.size->tag = 1;
_global_Array_operatorParser_OpDescType.array_type=
_global_TypeFromStruct(
operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;operatorParser_OpDescType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
operatorParser_OpDescType.fields = _global_StaticArray_StaticArray_S_FieldInit(
operatorParser_OpDescType_fields
,4
);
operatorParser_OpDescType.package = _global_StringInit(14, "operatorParser");
operatorParser_OpDescType.name = _global_StringInit(6, "OpDesc");
operatorParser_OpDescType.size = sizeof(struct operatorParser_OpDesc);
operatorParser_OpDescType_fields[0].name = _global_StringInit(5, "unary");
operatorParser_OpDescType_fields[0].offset = offsetof(struct operatorParser_OpDesc, unary);
operatorParser_OpDescType_fields[0].field_type = 
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
operatorParser_OpDescType_fields[1].name = _global_StringInit(10, "precedence");
operatorParser_OpDescType_fields[1].offset = offsetof(struct operatorParser_OpDesc, precedence);
operatorParser_OpDescType_fields[1].field_type = 
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
operatorParser_OpDescType_fields[2].name = _global_StringInit(4, "kind");
operatorParser_OpDescType_fields[2].offset = offsetof(struct operatorParser_OpDesc, kind);
operatorParser_OpDescType_fields[2].field_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
operatorParser_OpDescType_fields[3].name = _global_StringInit(6, "left_a");
operatorParser_OpDescType_fields[3].offset = offsetof(struct operatorParser_OpDesc, left_a);
operatorParser_OpDescType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_Maybe_roperatorParser_OpDescType.p_type =
_global_TypeFromStruct(
operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_roperatorParser_OpDescType.nullable = 1;_global_Maybe_r____operatorParser_OpDescType.p_type =
_global_TypeFromStruct(
_global_Array_operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_Maybe_r____operatorParser_OpDescType.nullable = 1;operatorParser_OpStackType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
operatorParser_OpStackType.fields = _global_StaticArray_StaticArray_S_FieldInit(
operatorParser_OpStackType_fields
,1
);
operatorParser_OpStackType.package = _global_StringInit(14, "operatorParser");
operatorParser_OpStackType.name = _global_StringInit(7, "OpStack");
operatorParser_OpStackType.size = sizeof(struct operatorParser_OpStack);
operatorParser_OpStackType_fields[0].name = _global_StringInit(6, "scopes");
operatorParser_OpStackType_fields[0].offset = offsetof(struct operatorParser_OpStack, scopes);
operatorParser_OpStackType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_____operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_uintType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_uintType.size->tag = 1;
_global_Array_uintType.array_type=
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_ruintType.p_type =
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
_global_Maybe_ruintType.nullable = 1;parser_ParserType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 10);
parser_ParserType.fields = _global_StaticArray_StaticArray_S_FieldInit(
parser_ParserType_fields
,10
);
parser_ParserType.package = _global_StringInit(6, "parser");
parser_ParserType.name = _global_StringInit(6, "Parser");
parser_ParserType.size = sizeof(struct parser_Parser);
parser_ParserType_fields[0].name = _global_StringInit(6, "tokens");
parser_ParserType_fields[0].offset = offsetof(struct parser_Parser, tokens);
parser_ParserType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
parser_ParserType_fields[1].name = _global_StringInit(8, "filename");
parser_ParserType_fields[1].offset = offsetof(struct parser_Parser, filename);
parser_ParserType_fields[1].field_type = 
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
parser_ParserType_fields[2].name = _global_StringInit(12, "current_node");
parser_ParserType_fields[2].offset = offsetof(struct parser_Parser, current_node);
parser_ParserType_fields[2].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
;
parser_ParserType_fields[3].name = _global_StringInit(4, "iter");
parser_ParserType_fields[3].offset = offsetof(struct parser_Parser, iter);
parser_ParserType_fields[3].field_type = 
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
parser_ParserType_fields[4].name = _global_StringInit(8, "op_stack");
parser_ParserType_fields[4].offset = offsetof(struct parser_Parser, op_stack);
parser_ParserType_fields[4].field_type = 
_global_TypeFromStruct(
operatorParser_OpStack_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
parser_ParserType_fields[5].name = _global_StringInit(12, "active_index");
parser_ParserType_fields[5].offset = offsetof(struct parser_Parser, active_index);
parser_ParserType_fields[5].field_type = 
_global_TypeFromStruct(
_global_Array_uint_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
parser_ParserType_fields[6].name = _global_StringInit(9, "num_paren");
parser_ParserType_fields[6].offset = offsetof(struct parser_Parser, num_paren);
parser_ParserType_fields[6].field_type = 
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
parser_ParserType_fields[7].name = _global_StringInit(10, "num_indent");
parser_ParserType_fields[7].offset = offsetof(struct parser_Parser, num_indent);
parser_ParserType_fields[7].field_type = 
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
parser_ParserType_fields[8].name = _global_StringInit(11, "paren_stack");
parser_ParserType_fields[8].offset = offsetof(struct parser_Parser, paren_stack);
parser_ParserType_fields[8].field_type = 
_global_TypeFromStruct(
_global_Array_uint_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
parser_ParserType_fields[9].name = _global_StringInit(12, "indent_stack");
parser_ParserType_fields[9].offset = offsetof(struct parser_Parser, indent_stack);
parser_ParserType_fields[9].field_type = 
_global_TypeFromStruct(
_global_Array_uint_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;struct _global_Case* L =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
L[0].name = _global_StringInit(2, "Ok");
L[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
L[0].args.data[0].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; L[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_types_CompilerType_Ok, field0);
L[1].name = _global_StringInit(5, "Error");
L[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
L[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; L[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_types_CompilerType_Error, field0);
_global_Result_Result_E_types_CompilerTypeType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E_types_CompilerTypeType.tag_field.offset = offsetof(struct _global_Result_Result_E_types_CompilerType, tag);
_global_Result_Result_E_types_CompilerTypeType.tag_field.field_type = 
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

_global_Result_Result_E_types_CompilerTypeType.size = sizeof(struct _global_Result_Result_E_types_CompilerType);

_global_Result_Result_E_types_CompilerTypeType.package = _global_StringInit(7, "_global");
_global_Result_Result_E_types_CompilerTypeType.name = _global_StringInit(34, "Result_Result_E_types_CompilerType");
_global_Result_Result_E_types_CompilerTypeType.cases.data = L;
_global_Result_Result_E_types_CompilerTypeType.cases.length = 2;
 }
void typesInit() { 
;
hashMapInit();;
scopeInit();;
types_func_type = types_Func((struct types_FuncPtr*)0,(&_global_context));;
types_struct_type = types_Struct((struct types_StructInfo*)0,(&_global_context));;
;
;
};
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l);
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l);
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l);
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l);
struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* l){;
struct _global_EnumType* ast_payload_type;ast_payload_type = ast_Payload_get_type(NULL,l);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((ast_payload_type)->cases),(unsigned int)(ast_self)->tag,l))).name;
;}
static inline struct _global_String ast_Payload_toStringByValue(struct ast_Payload m,struct _global_Context* l){
return ast_Payload_toString(&m,l);
}struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_filename;
;}
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_line;
;}
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_column;
;}
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* l){;
;
(ast_node)->owner = ast_self;;
_global_Array_append_rast_AST(&((ast_self)->nodes),ast_node,l);
;}
struct ast_AST** ast_AST_op_get(struct ast_AST* ast_self, unsigned int ast_index, struct _global_Context* l){;
;
;return &(*(_global_Array_op_get_rast_AST(&((ast_self)->nodes),(unsigned int)ast_index,l)));
;}
unsigned int ast_AST_length(struct ast_AST* ast_self, struct _global_Context* l){;
;return ((ast_self)->nodes).length;
;}
struct types_CompilerType ast_op_type(struct ast_AST* ast_node, struct _global_Context* l){;
_global_assert(((ast_node)->payload).tag==((ast_Operator(ast_Add,l))).tag,_global_StringInit(33,"Passing incorrect node to op_type"),l);
;return (*(_global_Array_op_get_rast_AST(&((ast_node)->nodes),(unsigned int)0,l)))->_type;
;}
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct ast_AST*),l);
;}

static inline struct ast_AST** tmpastq(struct _global_Array_rast_AST** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* l) {
struct ast_AST** m =(*_global_self)->data;
if(m != NULL){struct ast_AST** _global_data = m;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),l);
struct ast_AST** _global_newData;_global_newData = (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));;
_global_memcpy_rast_AST(_global_newData,_global_data,(*_global_self)->length,l);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,l);
return _global_newData;}else if(m == NULL){return (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));}
}
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(l)->allocator,l);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpastq(&_global_self,&_global_newSize,&_global_allocator, l);;
;}
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rast_AST(_global_self,1,l);
;}
else{_global_Array_reserve_rast_AST(_global_self,(_global_self)->capacity*2,l);
;};
;};
*((((struct ast_AST**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),l);
;return ((struct ast_AST**)(_global_self)->data + (int64_t)_global_index);
;}

void astInitTypes() { 
 typesInitTypes();
 }
void astInit() { 
typesInit();;
;
;
};
struct _global_Field* _global_StaticArray_op_get_StaticArray_S_Field(struct _global_StaticArray_StaticArray_S_Field* _global_self, unsigned int _global_index, struct _global_Context* c);
struct _global_CaseArg* _global_StaticArray_op_get_StaticArray_S_CaseArg(struct _global_StaticArray_StaticArray_S_CaseArg* _global_self, unsigned int _global_index, struct _global_Context* c);

static inline struct puintcrnonep tmpprintr(struct _global_Type* print_kind,void** print_ptr,struct _global_String* print_tab,struct stringBuilder_StringBuilder** print_s,struct _global_ArrayType** print_array_type,struct _global_Type* print_elem_type,uint64_t* print_elem_size,unsigned int* print_length,void** print_data, struct _global_Context* c) {
struct _global_ArraySize j =*((*print_array_type)->size);
if(j.tag==2){struct _global_StaticArray_StaticArray_S_none* print_arr;print_arr = (struct _global_StaticArray_StaticArray_S_none*)*print_ptr;;
return puintcrnonepInit((print_arr)->length,(print_arr)->data);}else if(j.tag==1){struct _global_Array_none* print_arr;print_arr = (struct _global_Array_none*)*print_ptr;;
return puintcrnonepInit((print_arr)->length,(void*)(print_arr)->data);}else if(j.tag==0){unsigned int print_length = j.cases.Static.field0;
return puintcrnonepInit(print_length,*print_ptr);}
}
void print_type_to_string(struct _global_Type print_kind, void* print_ptr, struct _global_String print_tab, struct stringBuilder_StringBuilder* print_s, struct _global_Context* c){;
;
;
;
struct _global_Type d =print_kind;if(d.vtable->type.data == _global_StructType_get_type(NULL,c)){struct _global_StructType* print_struct_type = (struct _global_StructType*)d.data;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((print_struct_type)->package),c),_global_StringInit(1,"."),c),((print_struct_type)->name),c),_global_StringInit(0,""),c),c);
stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"{\n"),c);
struct _global_StaticArray_StaticArray_S_Field f =(print_struct_type)->fields;
for (unsigned int g = 0;g < f.length; g++) {
struct _global_Field print_field;print_field = *_global_StaticArray_op_get_StaticArray_S_Field(&f, g, c);
;unsigned int print_i;print_i = g;
if(_global_String_op_eqByValue((print_struct_type)->name,_global_StringInit(3,"AST"),c)&&_global_String_op_eqByValue((print_field).name,_global_StringInit(5,"owner"),c)){;
 continue;;
;};
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(1,"\t"),c),((print_field).name),c),_global_StringInit(3," : "),c),c);
print_type_to_string((print_field).field_type,(_global_offsetPtr(print_ptr,(int64_t)(print_field).offset,c)),_global_String_op_addByValue(print_tab,_global_StringInit(1,"\t"),c),print_s,c);
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"\n"),c);
}
;
stringBuilder_StringBuilder_append(print_s,print_tab,c);
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"}"),c);
;}
else if(d.vtable->type.data == _global_IntType_get_type(NULL,c)){struct IntType* print_int_type = (struct IntType*)d.data;
if((print_int_type)->sign){;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_int_toString(((int*)print_ptr),c),c),_global_StringInit(0,""),c),c);
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_uint_toString(((unsigned int*)print_ptr),c),c),_global_StringInit(0,""),c),c);
;};
;}
else if(d.vtable->type.data == _global_FloatType_get_type(NULL,c)){struct FloatType* print_float_type = (struct FloatType*)d.data;
if((print_float_type)->size==4){;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_Float_toString(((float*)print_ptr),c),c),_global_StringInit(0,""),c),c);
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_Float_toString(((double*)print_ptr),c),c),_global_StringInit(0,""),c),c);
;};
;}
else if(d.vtable->type.data == _global_StringType_get_type(NULL,c)){struct StringType* print_string_type = (struct StringType*)d.data;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"'"),_global_String_toString(((struct _global_String*)print_ptr),c),c),_global_StringInit(1,"'"),c),c);
;}
else if(d.vtable->type.data == _global_AliasType_get_type(NULL,c)){struct _global_AliasType* print_alias_type = (struct _global_AliasType*)d.data;
print_type_to_string((print_alias_type)->real_type,print_ptr,print_tab,print_s,c);
;}
else if(d.vtable->type.data == _global_ArrayType_get_type(NULL,c)){struct _global_ArrayType* print_array_type = (struct _global_ArrayType*)d.data;
struct _global_Type print_elem_type;print_elem_type = (print_array_type)->array_type;;
uint64_t print_elem_size;print_elem_size = _global_Type_get_size(&(print_elem_type),c);;
unsigned int print_length;void* print_data;struct puintcrnonep h;h = tmpprintr(&print_kind,&print_ptr,&print_tab,&print_s,&print_array_type,&print_elem_type,&print_elem_size,&print_length,&print_data, c);print_length=h.field0;print_data=h.field1;;
if(print_length==0){;
stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"[]"),c);
;}
else{stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"[\n"),c);
struct _global_Range k =_global_RangeInit(0,print_length);
for (unsigned int l = k.start; l < k.end; l++) {
unsigned int print_i;print_i = l;
;stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(1,"\t"),c),c);
print_type_to_string(print_elem_type,(_global_offsetPtr(print_data,(int64_t)(uint64_t)print_i*print_elem_size,c)),_global_String_op_addByValue(print_tab,_global_StringInit(1,"\t"),c),print_s,c);
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"\n"),c);
}
;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(1,"]"),c),c);
;};
;}
else if(d.vtable->type.data == _global_PointerType_get_type(NULL,c)){struct _global_PointerType* print_p_type = (struct _global_PointerType*)d.data;
print_ptr = *(((void**)print_ptr));;
print_type_to_string((print_p_type)->p_type,print_ptr,print_tab,print_s,c);
;}
else if(d.vtable->type.data == _global_BoolType_get_type(NULL,c)){struct BoolType* print_bool_type = (struct BoolType*)d.data;
stringBuilder_StringBuilder_append(print_s,_global_Bool_toString(((_Bool*)print_ptr),c),c);
;}
else if(d.vtable->type.data == _global_EnumType_get_type(NULL,c)){struct _global_EnumType* print_enum_type = (struct _global_EnumType*)d.data;
unsigned char print_tag;print_tag = _global_EnumType_get_tag(print_enum_type,print_ptr,c);;
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((print_enum_type)->cases),(unsigned int)print_tag,c))).name),c),_global_StringInit(1,"("),c),c);
struct _global_StaticArray_StaticArray_S_CaseArg m =(*(_global_StaticArray_op_get_StaticArray_S_Case(&((print_enum_type)->cases),(unsigned int)print_tag,c))).args;
for (unsigned int n = 0;n < m.length; n++) {
struct _global_CaseArg print_arg;print_arg = *_global_StaticArray_op_get_StaticArray_S_CaseArg(&m, n, c);
;unsigned int print_i;print_i = n;
print_type_to_string((print_arg).arg_type,(_global_offsetPtr(print_ptr,(int64_t)(print_arg).offset,c)),print_tab,print_s,c);
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,","),c);
}
;
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,")"),c);
;}
else if(d.vtable->type.data == _global_InterfaceType_get_type(NULL,c)){struct _global_InterfaceType* print_interface_type = (struct _global_InterfaceType*)d.data;
if(_global_String_op_eqByValue((print_interface_type)->name,_global_StringInit(12,"CompilerType"),c)){;
struct types_CompilerType* print_ptr_to_interface;print_ptr_to_interface = (struct types_CompilerType*)print_ptr;;
stringBuilder_StringBuilder_append(print_s,types_CompilerType_toString(print_ptr_to_interface,c),c);
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),_global_InterfaceType_toString((print_interface_type),c),c),_global_StringInit(0,""),c),c);
;};
;}
else if(1){
stringBuilder_StringBuilder_append(print_s,_global_StringInit(11,"Unsupported"),c);
;}
;
;}
struct _global_Field* _global_StaticArray_op_get_StaticArray_S_Field(struct _global_StaticArray_StaticArray_S_Field* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_CaseArg* _global_StaticArray_op_get_StaticArray_S_CaseArg(struct _global_StaticArray_StaticArray_S_CaseArg* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void printInitTypes() { 
 
 }
void printInit() { 
;
;
};
void _global_memcpy_operatorParser_OpDesc(struct operatorParser_OpDesc* _global_target, struct operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
void _global_memcpy_____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_target, struct _global_Array_operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
struct _global_String* _global_StaticArray_op_get_11_string(struct _global_StaticArray_11_string* _global_self, unsigned int _global_index, struct _global_Context* k);
unsigned char* _global_StaticArray_op_get_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned int _global_index, struct _global_Context* k);
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k);
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
_Bool _global_StaticArray_contains_11_string(struct _global_StaticArray_11_string* _global_self, struct _global_String _global_elem, struct _global_Context* k);
_Bool _global_StaticArray_contains_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned char _global_elem, struct _global_Context* k);
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* k);
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k);
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k);
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k);
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k);
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k);
void _global_Array_append_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct operatorParser_OpDesc _global_value, struct _global_Context* k);
void _global_Array_append_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Array_operatorParser_OpDesc _global_value, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k);
_Bool operatorParser_is_unary(struct parser_Parser* operatorParser_self, struct _global_Context* k){;
struct lexer_Token operatorParser_token;operatorParser_token = parser_Parser_behind(operatorParser_self,k);;
struct _global_StaticArray_11_string operatorParser_unary_symbols;operatorParser_unary_symbols = _global_StaticArray_11_stringInit(_global_StringInit(1,"("),_global_StringInit(1,")"),_global_StringInit(2,":="),_global_StringInit(1,":"),_global_StringInit(1,"\n"),_global_StringInit(1,","),_global_StringInit(2,"+="),_global_StringInit(2,"-="),_global_StringInit(2,"*="),_global_StringInit(2,"/="),_global_StringInit(2,"%="));;
struct _global_StaticArray_4_u8 operatorParser_unary_kinds;operatorParser_unary_kinds = _global_StaticArray_4_u8Init((lexer_Operator).tag,(lexer_Indent).tag,(lexer_Invalid).tag,(lexer_Keyword).tag);;
;struct lexer_TokenType l =(operatorParser_token).kind;
if(l.tag==5){return _global_StaticArray_contains_11_string(&(operatorParser_unary_symbols),(operatorParser_token).value,k);}else if(1){return _global_StaticArray_contains_4_u8(&(operatorParser_unary_kinds),((operatorParser_token).kind).tag,k);};
;}
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
unsigned int operatorParser_takes;operatorParser_takes = ((operatorParser_self)->unary ? 1:(2));;
unsigned int operatorParser_active_index;operatorParser_active_index = *(_global_Array_op_get_uint(&((operatorParser_p)->active_index),(unsigned int)((operatorParser_p)->active_index).length-1,k));;
;if(((((operatorParser_p)->current_node)->nodes).length-operatorParser_active_index)<operatorParser_takes){;
return error_make_Error_rparser_Parser(operatorParser_p,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(31,"Not enough values for operator "),(print_obj_toString_ast_OperatorKind((operatorParser_self)->kind,k)),k),_global_StringInit(0,""),k),k);}
else{struct ast_AST* operatorParser_op;operatorParser_op = ast_make_AST_rparser_Parser(operatorParser_p,ast_Operator((operatorParser_self)->kind,k),k);;
if((operatorParser_self)->unary){;
ast_AST_add(operatorParser_op,_global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k),k);
;}
else{struct ast_AST* operatorParser_b;operatorParser_b = _global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k);;
struct ast_AST* operatorParser_a;operatorParser_a = _global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k);;
ast_AST_add(operatorParser_op,operatorParser_a,k);
ast_AST_add(operatorParser_op,operatorParser_b,k);
;};
ast_AST_add((operatorParser_p)->current_node,operatorParser_op,k);
return NULL;};
;}
struct operatorParser_OpStack operatorParser_make_OpStack(struct _global_Context* k){;return operatorParser_OpStackInit(_global_Array_____operatorParser_OpDescInit(0, 0, NULL, NULL));
;}
struct error_CompilerError* operatorParser_OpStack_push_op(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct operatorParser_OpDesc operatorParser_desc, struct _global_Context* k){;
;
;
struct _global_Array_operatorParser_OpDesc* operatorParser_ops;operatorParser_ops = &(*(_global_Array_op_get_____operatorParser_OpDesc(&((operatorParser_self)->scopes),(unsigned int)((operatorParser_self)->scopes).length-1,k)));;
;while((operatorParser_ops)->length>0){struct operatorParser_OpDesc operatorParser_current;operatorParser_current = *(_global_Array_op_get_operatorParser_OpDesc((struct _global_Array_operatorParser_OpDesc*)operatorParser_ops,(unsigned int)(operatorParser_ops)->length-1,k));;_Bool operatorParser_same;operatorParser_same = (operatorParser_current).precedence==(operatorParser_desc).precedence&&(operatorParser_current).left_a;;_Bool operatorParser_greater;operatorParser_greater = (operatorParser_current).precedence>(operatorParser_desc).precedence;;if(operatorParser_greater||operatorParser_same){;
struct error_CompilerError* l =operatorParser_OpDesc_add_to(&(operatorParser_current),operatorParser_p,k);if(l != NULL){struct error_CompilerError* operatorParser__x = l;

return operatorParser__x;
;
;}
else if(1){
;}
;
_global_Array_pop_operatorParser_OpDesc(operatorParser_ops,k);
;}
else{break;;
;};};
_global_Array_append_operatorParser_OpDesc(operatorParser_ops,operatorParser_desc,k);
;return NULL;
;}
struct error_CompilerError* operatorParser_parse_operator(struct parser_Parser* operatorParser_self, struct _global_String operatorParser_kind, struct _global_Context* k){;
;
;struct _global_String l =operatorParser_kind;
if(_global_String_op_eqByValue(l,_global_StringInit(1,"+"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Add,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"-"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Sub,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"*"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Mul,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"<"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,5,ast_LT,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"/"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Div,1),k);}else if(1){return error_make_Error_rparser_Parser(operatorParser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unknown operator "),(operatorParser_kind),k),_global_StringInit(0,""),k),k);};
;}
void operatorParser_OpStack_push(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
_global_Array_append_____operatorParser_OpDesc(&((operatorParser_self)->scopes),_global_Array_operatorParser_OpDescInit(0, 0, NULL, NULL),k);
;}
struct error_CompilerError* operatorParser_OpStack_pop(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
struct _global_Array_operatorParser_OpDesc operatorParser_op_left;operatorParser_op_left = _global_Array_pop_____operatorParser_OpDesc(&((operatorParser_self)->scopes),k);;
struct _global_Range l =_global_RangeInit(0,(operatorParser_op_left).length);
for (unsigned int m = l.start; m < l.end; m++) {
unsigned int operatorParser_i;operatorParser_i = m;
;struct error_CompilerError* n =operatorParser_OpDesc_add_to(&(*(_global_Array_op_get_operatorParser_OpDesc(&(operatorParser_op_left),(unsigned int)(operatorParser_op_left).length-operatorParser_i-1,k))),operatorParser_p,k);if(n != NULL){struct error_CompilerError* operatorParser__x = n;

return operatorParser__x;
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
void _global_memcpy_operatorParser_OpDesc(struct operatorParser_OpDesc* _global_target, struct operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct operatorParser_OpDesc),k);
;}
void _global_memcpy_____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_target, struct _global_Array_operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Array_operatorParser_OpDesc),k);
;}
struct _global_String* _global_StaticArray_op_get_11_string(struct _global_StaticArray_11_string* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<11,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
unsigned char* _global_StaticArray_op_get_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<4,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((k)->longterm_storage,(uint64_t)sizeof(struct ast_AST),k));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

static inline struct operatorParser_OpDesc* tmpoperatorParsers(struct _global_Array_operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
struct operatorParser_OpDesc* l =(*_global_self)->data;
if(l != NULL){struct operatorParser_OpDesc* _global_data = l;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),k);
struct operatorParser_OpDesc* _global_newData;_global_newData = (struct operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct operatorParser_OpDesc),k));;
_global_memcpy_operatorParser_OpDesc(_global_newData,_global_data,(*_global_self)->length,k);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,k);
return _global_newData;}else if(l == NULL){return (struct operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct operatorParser_OpDesc),k));}
}
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(k)->allocator,k);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpoperatorParsers(&_global_self,&_global_newSize,&_global_allocator, k);;
;}

static inline struct _global_Array_operatorParser_OpDesc* tmpoperatorParsert(struct _global_Array_____operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
struct _global_Array_operatorParser_OpDesc* l =(*_global_self)->data;
if(l != NULL){struct _global_Array_operatorParser_OpDesc* _global_data = l;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),k);
struct _global_Array_operatorParser_OpDesc* _global_newData;_global_newData = (struct _global_Array_operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_operatorParser_OpDesc),k));;
_global_memcpy_____operatorParser_OpDesc(_global_newData,_global_data,(*_global_self)->length,k);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,k);
return _global_newData;}else if(l == NULL){return (struct _global_Array_operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_operatorParser_OpDesc),k));}
}
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(k)->allocator,k);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpoperatorParsert(&_global_self,&_global_newSize,&_global_allocator, k);;
;}
_Bool _global_StaticArray_contains_11_string(struct _global_StaticArray_11_string* _global_self, struct _global_String _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<11){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_11_string(_global_self,(unsigned int)_global_i,k))),&(_global_elem),k)){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
_Bool _global_StaticArray_contains_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned char _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<4){if(*(&(*(_global_StaticArray_op_get_4_u8(_global_self,(unsigned int)_global_i,k))))==*(&(_global_elem))){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((unsigned int*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(k);;
print_type_to_string(_global_TypeFromStruct(ast_OperatorKind_get_type(NULL,k),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),k);
;return stringBuilder_StringBuilder_toString(&(print_s),k);
;}
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator = (k)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_Void,NULL,parser_Parser_get_filename(ast_t,k),parser_Parser_get_line(ast_t,k),parser_Parser_get_column(ast_t,k)),k);
;}
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct ast_AST* _global_tmp;_global_tmp = *(_global_Array_op_get_rast_AST(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((struct _global_Array_operatorParser_OpDesc*)(_global_self)->data + (int64_t)_global_index);
;}
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((struct operatorParser_OpDesc*)(_global_self)->data + (int64_t)_global_index);
;}
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct operatorParser_OpDesc _global_value, struct _global_Context* k){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_operatorParser_OpDesc(_global_self,1,k);
;}
else{_global_Array_reserve_operatorParser_OpDesc(_global_self,(_global_self)->capacity*2,k);
;};
;};
*((((struct operatorParser_OpDesc*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Array_operatorParser_OpDesc _global_value, struct _global_Context* k){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_____operatorParser_OpDesc(_global_self,1,k);
;}
else{_global_Array_reserve_____operatorParser_OpDesc(_global_self,(_global_self)->capacity*2,k);
;};
;};
*((((struct _global_Array_operatorParser_OpDesc*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct _global_Array_operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_____operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}

void operatorParserInitTypes() { 
 printInitTypes();
_global_StaticArray_11_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_11_stringType.size->tag = 0;
_global_StaticArray_11_stringType.size->cases.Static.field0 = 11;
_global_StaticArray_11_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;_global_StaticArray_4_u8Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_4_u8Type.size->tag = 0;
_global_StaticArray_4_u8Type.size->cases.Static.field0 = 4;
_global_StaticArray_4_u8Type.array_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; }
void operatorParserInit() { 
;
;
printInit();;
;
};
struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_int_literal;basicTypes_int_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Int(basicTypes_token,f),f);;
(basicTypes_int_literal)->_type = types_make_Int(f);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_int_literal,f);
;return NULL;
;}
struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_float_literal;basicTypes_float_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Float(basicTypes_token,f),f);;
(basicTypes_float_literal)->_type = types_make_Float(f);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_float_literal,f);
;return NULL;
;}

static inline _Bool tmpbasicTypesv(struct parser_Parser** basicTypes_self,struct _global_String* basicTypes_token,_Bool* basicTypes_as_bool, struct _global_Context* f) {
struct _global_String g =*basicTypes_token;
if(_global_String_op_eqByValue(g,_global_StringInit(4,"true"),NULL)){return 1;}else if(1){return 0;}
}
struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
_Bool basicTypes_as_bool;basicTypes_as_bool = tmpbasicTypesv(&basicTypes_self,&basicTypes_token,&basicTypes_as_bool, f);;
struct ast_AST* basicTypes_bool_literal;basicTypes_bool_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Bool(basicTypes_as_bool,f),f);;
(basicTypes_bool_literal)->_type = types_Bool;;
ast_AST_add((basicTypes_self)->current_node,basicTypes_bool_literal,f);
;return NULL;
;}

void basicTypesInitTypes() { 
 
 }
void basicTypesInit() { 
;
;
;
};
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* j);
struct ast_AST* ast_make_AST_rast_AST(struct ast_AST* ast_t, struct ast_Payload ast_payload, struct _global_Context* j);
struct ast_AST* _global_box_ast_AST(struct ast_AST _global_value, struct _global_Context* j);
struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* j){;
;
struct ast_AST* varParser_id;varParser_id = ast_make_AST_rparser_Parser(varParser_self,ast_Identifier(_global_box_ast_ReadInfo(ast_ReadInfoInit(1,varParser_name),j),j),j);;
ast_AST_add((varParser_self)->current_node,varParser_id,j);
;return NULL;
;}
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
struct ast_AST* varParser_v;struct error_CompilerError* varParser_err;;
struct _global_Result_rerror_CompilerError_rast_AST k =parser_Parser_pop_last(varParser_self,j);if(k.tag==0){varParser_v = k.cases.Ok.field0;

;}
else if(k.tag==1){varParser_err = k.cases.Error.field0;

return varParser_err;
;
;}
;
struct ast_AST* varParser_node;varParser_node = ast_make_AST_rparser_Parser(varParser_self,ast_CreateAssign,j);;
struct ast_AST* varParser_create;varParser_create = ast_make_AST_rparser_Parser(varParser_self,ast_Create,j);;
ast_AST_add(varParser_create,varParser_v,j);
ast_AST_add(varParser_node,varParser_create,j);
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,j);;
parser_Parser_push_current_node(varParser_self,varParser_node,j);
parser_Parser_push_current_node(varParser_self,varParser_assign,j);
struct error_CompilerError* l =parser_Parser_eval_till_end(varParser_self,j);if(l != NULL){struct error_CompilerError* varParser__x = l;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* m =parser_Parser_pop_current_node(varParser_self,j);if(m != NULL){struct error_CompilerError* varParser__x = m;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* n =parser_Parser_pop_current_node(varParser_self,j);if(n != NULL){struct error_CompilerError* varParser__x = n;

return varParser__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* varParser_parse_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
if((((varParser_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(varParser_self,_global_StringInit(17,"Unexpected assign"),j);
;
;};
struct ast_AST* varParser_v;varParser_v = _global_Array_pop_rast_AST(&(((varParser_self)->current_node)->nodes),j);;
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,j);;
ast_AST_add(varParser_assign,varParser_v,j);
parser_Parser_push_current_node(varParser_self,varParser_assign,j);
parser_Parser_set_active_index(varParser_self,1,j);
struct error_CompilerError* k =parser_Parser_eval_till_end(varParser_self,j);if(k != NULL){struct error_CompilerError* varParser__x = k;

return varParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* l =parser_Parser_pop_current_node(varParser_self,j);if(l != NULL){struct error_CompilerError* varParser__x = l;

return varParser__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* varParser_parse_op_assign(struct parser_Parser* varParser_self, struct ast_OperatorKind varParser_op, struct _global_Context* j){;
;
struct error_CompilerError* k =varParser_parse_assign(varParser_self,j);if(k != NULL){struct error_CompilerError* varParser__x = k;

return varParser__x;
;
;}
else if(1){
;}
;
struct ast_AST* varParser_assign;varParser_assign = *(ast_AST_op_get((varParser_self)->current_node,(unsigned int)ast_AST_length((varParser_self)->current_node,j)-1,j));;
struct ast_AST* varParser_add;varParser_add = ast_make_AST_rast_AST(varParser_assign,ast_Operator(varParser_op,j),j);;
struct ast_AST* varParser_value;varParser_value = *(ast_AST_op_get(varParser_assign,(unsigned int)1,j));;
ast_AST_add(varParser_add,_global_box_ast_AST(*(*(ast_AST_op_get(varParser_assign,(unsigned int)0,j))),j),j);
ast_AST_add(varParser_add,varParser_value,j);
(varParser_add)->owner = varParser_assign;;
*(ast_AST_op_get(varParser_assign,(unsigned int)1,j)) = varParser_add;;
;return NULL;
;}
struct error_CompilerError* varParser_parse_add_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
;return varParser_parse_op_assign(varParser_self,ast_Add,j);
;}
struct error_CompilerError* varParser_parse_sub_assign(struct parser_Parser* varParser_self, struct _global_Context* j){;
;return varParser_parse_op_assign(varParser_self,ast_Sub,j);
;}
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* j){;
struct ast_ReadInfo* _global_pointer;_global_pointer = (struct ast_ReadInfo*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct ast_ReadInfo),j));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct ast_AST* ast_make_AST_rast_AST(struct ast_AST* ast_t, struct ast_Payload ast_payload, struct _global_Context* j){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator = (j)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_Void,NULL,ast_AST_get_filename(ast_t,j),ast_AST_get_line(ast_t,j),ast_AST_get_column(ast_t,j)),j);
;}
struct ast_AST* _global_box_ast_AST(struct ast_AST _global_value, struct _global_Context* j){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct ast_AST),j));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void varParserInitTypes() { 
 
struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(2, "Ok");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
; k[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
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
; k[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Error, field0);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_rast_ASTType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST, tag);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError_rast_ASTType.size = sizeof(struct _global_Result_rerror_CompilerError_rast_AST);

_global_Result_rerror_CompilerError_rast_ASTType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_rast_ASTType.name = _global_StringInit(36, "Result_rerror_CompilerError_rast_AST");
_global_Result_rerror_CompilerError_rast_ASTType.cases.data = k;
_global_Result_rerror_CompilerError_rast_ASTType.cases.length = 2;
 }
void varParserInit() { 
;
};
struct error_CompilerError* tuple_parse_tuple(struct parser_Parser* tuple_self, struct _global_Context* c){;
(tuple_self)->num_paren = (tuple_self)->num_paren+1;;
struct error_CompilerError* d =parser_Parser_eval_till_end(tuple_self,c);if(d != NULL){struct error_CompilerError* tuple__x = d;

return tuple__x;
;
;}
else if(1){
;}
;
;return NULL;
;}

void tupleInitTypes() { 
 
 }
void tupleInit() { 
;
};
struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* c){;
struct ast_AST* funcCall_func_call;funcCall_func_call = ast_make_AST_rparser_Parser(funcCall_self,ast_FuncCall,c);;
struct ast_AST* funcCall_calling;struct error_CompilerError* funcCall_e;;
struct _global_Result_rerror_CompilerError_rast_AST d =parser_Parser_pop(funcCall_self,_global_StringInit(24,"Unexpected function call"),c);if(d.tag==0){funcCall_calling = d.cases.Ok.field0;

;}
else if(d.tag==1){funcCall_e = d.cases.Error.field0;

return funcCall_e;
;
;}
;
ast_AST_add(funcCall_func_call,funcCall_calling,c);
parser_Parser_push_current_node(funcCall_self,funcCall_func_call,c);
unsigned int funcCall_num_paren;funcCall_num_paren = parser_Parser_push_paren(funcCall_self,c);;
;while((funcCall_self)->num_paren>funcCall_num_paren){struct _global_String f =(parser_Parser_next(funcCall_self,c)).value;if(_global_String_op_eqByValue(f,_global_StringInit(1,","),NULL)){
struct error_CompilerError* g =parser_Parser_comma(funcCall_self,c);if(g != NULL){struct error_CompilerError* funcCall__x = g;

return funcCall__x;
;
;}
else if(1){
;}
;
;}
else if(1){
struct error_CompilerError* h =parser_Parser_eval(funcCall_self,c);if(h != NULL){struct error_CompilerError* funcCall__x = h;

return funcCall__x;
;
;}
else if(1){
;}
;
;}
;};
struct error_CompilerError* j =parser_Parser_pop_current_node(funcCall_self,c);if(j != NULL){struct error_CompilerError* funcCall__x = j;

return funcCall__x;
;
;}
else if(1){
;}
;
;return NULL;
;}

void funcCallInitTypes() { 
 
 }
void funcCallInit() { 
;
};
struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST* _global_self, struct _global_Context* f);

static inline struct ast_AST* _global_Maybe_unwrap_rast_AST(struct ast_AST**,struct _global_Context* f);

struct ast_AST* _global_Maybe_unwrap_rast_ASTByValue(struct ast_AST*,struct _global_Context* f);
struct error_CompilerError* ifStatement_if_body(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
struct ast_AST* ifStatement_cond;ifStatement_cond = ast_make_AST_rparser_Parser(ifStatement_self,ast_Condition,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_cond,f);
_Bool ifStatement_in_block;ifStatement_in_block = 0;;
;while(!(parser_Parser_is_end(ifStatement_self,f))){struct lexer_Token ifStatement_token;ifStatement_token = parser_Parser_next(ifStatement_self,f);;if(_global_String_op_eqByValue((ifStatement_token).value,_global_StringInit(1,":"),f)&&!(ifStatement_in_block)){;
struct error_CompilerError* g =parser_Parser_pop_current_node(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

return ifStatement__x;
;
;}
else if(1){
;}
;
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
ifStatement_in_block = 1;;
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
;}
else{struct error_CompilerError* h =parser_Parser_eval(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

return ifStatement__x;
;
;}
else if(1){
;}
;
;};};
if(!(ifStatement_in_block)){;
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(11,"Expecting :"),f);
;
;};
struct error_CompilerError* j =parser_Parser_pop_current_node(ifStatement_self,f);if(j != NULL){struct error_CompilerError* ifStatement__x = j;

return ifStatement__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* ifStatement_if_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
struct ast_AST* ifStatement_toplevel;ifStatement_toplevel = ast_make_AST_rparser_Parser(ifStatement_self,ast_If,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_toplevel,f);
struct error_CompilerError* g =ifStatement_if_body(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

return ifStatement__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* h =parser_Parser_pop_current_node(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

return ifStatement__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* ifStatement_else_expr(struct parser_Parser* ifStatement_self, struct _global_Context* f){;
parser_Parser_expect_next_token(ifStatement_self,_global_StringInit(1,":"),_global_StringInit(11,"Expecting :"),f);
_Bool ifStatement_is_if_condition;ifStatement_is_if_condition = 0;;
if((((ifStatement_self)->current_node)->nodes).length>0){;
struct ast_AST* ifStatement_node;ifStatement_node = *(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
if(((ifStatement_node)->payload).tag==(ast_If).tag){;
_global_assert(((ifStatement_node)->nodes).length>=2,_global_StringInit(17,"If block is empty"),f);
struct ast_AST* ifStatement_if_condition;ifStatement_if_condition = *(_global_Array_op_get_rast_AST(&((ifStatement_node)->nodes),(unsigned int)((ifStatement_node)->nodes).length-2,f));;
ifStatement_is_if_condition = ((ifStatement_if_condition)->payload).tag==(ast_Condition).tag;;
;};
;};
if(!(ifStatement_is_if_condition)){;
return error_make_Error_rparser_Parser(ifStatement_self,_global_StringInit(15,"Unexpected else"),f);
;
;};
(ifStatement_self)->current_node = *(_global_Array_op_get_rast_AST(&(((ifStatement_self)->current_node)->nodes),(unsigned int)(((ifStatement_self)->current_node)->nodes).length-1,f));;
ast_AST_add((ifStatement_self)->current_node,ast_make_AST_rparser_Parser(ifStatement_self,ast_Else,f),f);
struct ast_AST* ifStatement_block;ifStatement_block = ast_make_AST_rparser_Parser(ifStatement_self,ast_Block,f);;
parser_Parser_push_current_node(ifStatement_self,ifStatement_block,f);
;while(!(parser_Parser_is_end(ifStatement_self,f))){parser_Parser_next(ifStatement_self,f);struct error_CompilerError* g =parser_Parser_eval(ifStatement_self,f);if(g != NULL){struct error_CompilerError* ifStatement__x = g;

return ifStatement__x;
;
;}
else if(1){
;}
;};
struct error_CompilerError* h =parser_Parser_pop_current_node(ifStatement_self,f);if(h != NULL){struct error_CompilerError* ifStatement__x = h;

return ifStatement__x;
;
;}
else if(1){
;}
;
(ifStatement_self)->current_node = _global_Maybe_unwrap_rast_ASTByValue(((ifStatement_self)->current_node)->owner,f);;
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
struct error_CompilerError* whileStatement_while_expr(struct parser_Parser* whileStatement_self, struct _global_Context* c){;
struct ast_AST* whileStatement_toplevel;whileStatement_toplevel = ast_make_AST_rparser_Parser(whileStatement_self,ast_While,c);;
parser_Parser_push_current_node(whileStatement_self,whileStatement_toplevel,c);
struct ast_AST* whileStatement_cond;whileStatement_cond = ast_make_AST_rparser_Parser(whileStatement_self,ast_Condition,c);;
parser_Parser_push_current_node(whileStatement_self,whileStatement_cond,c);
_Bool whileStatement_in_condition;whileStatement_in_condition = 1;;
;while(!(parser_Parser_is_end(whileStatement_self,c))){struct lexer_Token whileStatement_tok;whileStatement_tok = parser_Parser_next(whileStatement_self,c);;struct _global_String d =(whileStatement_tok).value;if(_global_String_op_eqByValue(d,_global_StringInit(1,":"),NULL)){
whileStatement_in_condition = 0;;
struct error_CompilerError* f =parser_Parser_pop_current_node(whileStatement_self,c);if(f != NULL){struct error_CompilerError* whileStatement__x = f;

return whileStatement__x;
;
;}
else if(1){
;}
;
struct ast_AST* whileStatement_block;whileStatement_block = ast_make_AST_rparser_Parser(whileStatement_self,ast_Block,c);;
parser_Parser_push_current_node(whileStatement_self,whileStatement_block,c);
;}
else if(1){
struct error_CompilerError* g =parser_Parser_eval(whileStatement_self,c);if(g != NULL){struct error_CompilerError* whileStatement__x = g;

return whileStatement__x;
;
;}
else if(1){
;}
;
;}
;};
struct error_CompilerError* h =parser_Parser_pop_current_node(whileStatement_self,c);if(h != NULL){struct error_CompilerError* whileStatement__x = h;

return whileStatement__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* j =parser_Parser_pop_current_node(whileStatement_self,c);if(j != NULL){struct error_CompilerError* whileStatement__x = j;

return whileStatement__x;
;
;}
else if(1){
;}
;
;return (whileStatement_in_condition ? error_make_Error_rparser_Parser(whileStatement_self,_global_StringInit(12,"Expecting do"),c):(NULL));
;}

void whileStatementInitTypes() { 
 
 }
void whileStatementInit() { 
;
};
void _global_memcpy_types_CompilerType(struct types_CompilerType* _global_target, struct types_CompilerType* _global_destination, unsigned int _global_length, struct _global_Context* c);
void _global_Array_reserve_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, unsigned int _global_newSize, struct _global_Context* c);
struct ast_FuncInfo* _global_box_ast_FuncInfo(struct ast_FuncInfo _global_value, struct _global_Context* c);
void _global_Array_append_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, struct types_CompilerType _global_value, struct _global_Context* c);
struct error_CompilerError* funcParser_parse_funcDef(struct parser_Parser* funcParser_self, struct _global_Context* c){;
struct error_CompilerError* d =parser_Parser_expect_next_tag(funcParser_self,lexer_Identifier,_global_StringInit(20,"Expecting identifier"),c);if(d != NULL){struct error_CompilerError* funcParser__x = d;

return funcParser__x;
;
;}
else if(1){
;}
;
struct _global_String funcParser_name;funcParser_name = (parser_Parser_current(funcParser_self,c)).value;;
struct types_FuncPtr* funcParser_func_type;funcParser_func_type = types_make_FuncPtr(c);;
struct ast_FuncInfo* funcParser_func_info;funcParser_func_info = _global_box_ast_FuncInfo(ast_FuncInfoInit(funcParser_name,funcParser_func_type),c);;
struct ast_AST* funcParser_func_def;funcParser_func_def = ast_make_AST_rparser_Parser(funcParser_self,ast_FuncDef(funcParser_func_info,c),c);;
parser_Parser_push_current_node(funcParser_self,funcParser_func_def,c);
struct ast_AST* funcParser_args;funcParser_args = ast_make_AST_rparser_Parser(funcParser_self,ast_Tuple,c);;
parser_Parser_push_current_node(funcParser_self,funcParser_args,c);
struct _global_Array_types_CompilerType funcParser_func_args;funcParser_func_args = _global_Array_types_CompilerTypeInit(0, 0, NULL, NULL);;
struct error_CompilerError* f =parser_Parser_expect_next_token(funcParser_self,_global_StringInit(1,"("),_global_StringInit(11,"Expecting ("),c);if(f != NULL){struct error_CompilerError* funcParser__x = f;

return funcParser__x;
;
;}
else if(1){
;}
;
;while(_global_String_op_neByValue((parser_Parser_next(funcParser_self,c)).value,_global_StringInit(1,")"),c)){struct error_CompilerError* g =parser_Parser_expect_tag(funcParser_self,lexer_Identifier,_global_StringInit(20,"Expecting identifier"),c);if(g != NULL){struct error_CompilerError* funcParser__x = g;

return funcParser__x;
;
;}
else if(1){
;}
;struct _global_String funcParser_arg_name;funcParser_arg_name = (parser_Parser_current(funcParser_self,c)).value;;parser_Parser_next(funcParser_self,c);struct types_CompilerType funcParser_arg_type;struct error_CompilerError* funcParser_e;;struct _global_Result_rerror_CompilerError_types_CompilerType h =types_parse_type(funcParser_self,c);if(h.tag==0){funcParser_arg_type = h.cases.Ok.field0;

;}
else if(h.tag==1){funcParser_e = h.cases.Error.field0;

return funcParser_e;
;
;}
;_global_Array_append_types_CompilerType(&(funcParser_func_args),funcParser_arg_type,c);ast_AST_add((funcParser_self)->current_node,ast_make_AST_rparser_Parser(funcParser_self,ast_FuncArg(funcParser_arg_name,funcParser_arg_type,c),c),c);if(_global_String_op_eqByValue((parser_Parser_peek(funcParser_self,c)).value,_global_StringInit(1,","),c)){;
parser_Parser_next(funcParser_self,c);
;};};
struct error_CompilerError* j =parser_Parser_pop_current_node(funcParser_self,c);if(j != NULL){struct error_CompilerError* funcParser__x = j;

return funcParser__x;
;
;}
else if(1){
;}
;
struct types_CompilerType funcParser_ret;funcParser_ret = types_Void;;
if(_global_String_op_neByValue((parser_Parser_next(funcParser_self,c)).value,_global_StringInit(1,":"),c)){;
struct _global_Result_rerror_CompilerError_types_CompilerType k =types_parse_type(funcParser_self,c);if(k.tag==0){struct types_CompilerType funcParser_x = k.cases.Ok.field0;

funcParser_ret = funcParser_x;;
;}
else if(k.tag==1){struct error_CompilerError* funcParser_e = k.cases.Error.field0;

return funcParser_e;
;
;}
;
;};
struct error_CompilerError* l =parser_Parser_expect_next_token(funcParser_self,_global_StringInit(1,":"),_global_StringInit(44,"Expecting : to terminate function definition"),c);if(l != NULL){struct error_CompilerError* funcParser__x = l;

return funcParser__x;
;
;}
else if(1){
;}
;
(funcParser_func_type)->return_type = funcParser_ret;;
(funcParser_func_type)->args = _global_StaticArray_StaticArray_S_types_CompilerTypeInit(funcParser_func_args.data, funcParser_func_args.length);;
struct ast_AST* funcParser_block;funcParser_block = ast_make_AST_rparser_Parser(funcParser_self,ast_Block,c);;
parser_Parser_push_current_node(funcParser_self,funcParser_block,c);
;while(!(parser_Parser_is_end(funcParser_self,c))){parser_Parser_next(funcParser_self,c);struct error_CompilerError* m =parser_Parser_eval(funcParser_self,c);if(m != NULL){struct error_CompilerError* funcParser__x = m;

return funcParser__x;
;
;}
else if(1){
;}
;};
struct error_CompilerError* n =parser_Parser_pop_current_node(funcParser_self,c);if(n != NULL){struct error_CompilerError* funcParser__x = n;

return funcParser__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* p =parser_Parser_pop_current_node(funcParser_self,c);if(p != NULL){struct error_CompilerError* funcParser__x = p;

return funcParser__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
void _global_memcpy_types_CompilerType(struct types_CompilerType* _global_target, struct types_CompilerType* _global_destination, unsigned int _global_length, struct _global_Context* c){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct types_CompilerType),c);
;}

static inline struct types_CompilerType* tmpfuncParserw(struct _global_Array_types_CompilerType** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* c) {
struct types_CompilerType* d =(*_global_self)->data;
if(d != NULL){struct types_CompilerType* _global_data = d;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),c);
struct types_CompilerType* _global_newData;_global_newData = (struct types_CompilerType*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct types_CompilerType),c));;
_global_memcpy_types_CompilerType(_global_newData,_global_data,(*_global_self)->length,c);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,c);
return _global_newData;}else if(d == NULL){return (struct types_CompilerType*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct types_CompilerType),c));}
}
void _global_Array_reserve_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, unsigned int _global_newSize, struct _global_Context* c){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(c)->allocator,c);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpfuncParserw(&_global_self,&_global_newSize,&_global_allocator, c);;
;}
struct ast_FuncInfo* _global_box_ast_FuncInfo(struct ast_FuncInfo _global_value, struct _global_Context* c){;
struct ast_FuncInfo* _global_pointer;_global_pointer = (struct ast_FuncInfo*)(_global_Allocator_alloc((c)->allocator,(uint64_t)sizeof(struct ast_FuncInfo),c));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_Array_append_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, struct types_CompilerType _global_value, struct _global_Context* c){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_types_CompilerType(_global_self,1,c);
;}
else{_global_Array_reserve_types_CompilerType(_global_self,(_global_self)->capacity*2,c);
;};
;};
*((((struct types_CompilerType*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

void funcParserInitTypes() { 
 
 }
void funcParserInit() { 
;
};
struct error_CompilerError* stringParser_parse_string(struct parser_Parser* stringParser_self, struct _global_Context* c){;
struct ast_AST* stringParser_s_ast;stringParser_s_ast = ast_make_AST_rparser_Parser(stringParser_self,ast_String((parser_Parser_current(stringParser_self,c)).value,c),c);;
(stringParser_s_ast)->_type = types_String;;
ast_AST_add((stringParser_self)->current_node,stringParser_s_ast,c);
;return NULL;
;}

void stringParserInitTypes() { 
 
 }
void stringParserInit() { 
;
};
void _global_memcpy_hashMap_HashBucket_types_CompilerType_(struct hashMap_HashBucket_types_CompilerType* _global_target, struct hashMap_HashBucket_types_CompilerType* _global_destination, unsigned int _global_length, struct _global_Context* c);
void _global_Array_reserve_hashMap_HashBucket_types_CompilerType_(struct _global_Array_hashMap_HashBucket_types_CompilerType_* _global_self, unsigned int _global_newSize, struct _global_Context* c);
void _global_Array_free_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, struct _global_Context* c);
struct hashMap_HashBucket_types_CompilerType hashMap_make_HashBucket_types_CompilerType(struct _global_Allocator* hashMap_allocator, struct _global_Context* c);
void _global_Array_append_hashMap_HashBucket_types_CompilerType_(struct _global_Array_hashMap_HashBucket_types_CompilerType_* _global_self, struct hashMap_HashBucket_types_CompilerType _global_value, struct _global_Context* c);
void hashMap_HashBucket_free_types_CompilerType(struct hashMap_HashBucket_types_CompilerType* hashMap_self, struct _global_Context* c);
struct hashMap_HashMap_types_CompilerType hashMap_make_HashMap_size_types_CompilerType(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* c);
struct hashMap_HashBucket_types_CompilerType* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_* _global_self, unsigned int _global_index, struct _global_Context* c);
struct types_CompilerType* _global_Array_op_get_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* c);
void hashMap_HashMap_free_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_Context* c);
struct hashMap_HashMap_types_CompilerType hashMap_make_HashMap_types_CompilerType(struct _global_Context* c);
_Bool hashMap_HashMap_contains_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct _global_Context* c);
void hashMap_HashMap_insert_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct types_CompilerType hashMap_value, struct _global_Context* c);
struct _global_StaticArray_StaticArray_S_string hashMap_HashMap_keys_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_Context* c);
struct types_CompilerType* hashMap_HashMap_op_get_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct _global_Context* c);
struct _global_String* _global_StaticArray_op_get_StaticArray_S_string(struct _global_StaticArray_StaticArray_S_string* _global_self, unsigned int _global_index, struct _global_Context* c);
struct error_CompilerError* structParser_parse_struct(struct parser_Parser* structParser_self, struct _global_Context* c){;
parser_Parser_expect_next_tag(structParser_self,lexer_Identifier,_global_StringInit(28,"Name has to be an identifier"),c);
struct _global_String structParser_name;structParser_name = (parser_Parser_current(structParser_self,c)).value;;
parser_Parser_expect_next_token(structParser_self,_global_StringInit(1,":"),_global_StringInit(11,"Expecting :"),c);
struct hashMap_HashMap_types_CompilerType structParser_hash_map;structParser_hash_map = hashMap_make_HashMap_types_CompilerType(c);;
;while(!(parser_Parser_is_end(structParser_self,c))){struct lexer_TokenType d =(parser_Parser_next(structParser_self,c)).kind;if(d.tag==5){
if(_global_String_op_eqByValue((parser_Parser_current(structParser_self,c)).value,_global_StringInit(1,"\n"),c)){;
struct error_CompilerError* f =parser_Parser_eval(structParser_self,c);if(f != NULL){struct error_CompilerError* structParser__x = f;

return structParser__x;
;
;}
else if(1){
;}
;
;}
else{return error_make_Error_rparser_Parser(structParser_self,_global_StringInit(16,"Unexpected token"),c);
;
;};
;}
else if(d.tag==6){
struct error_CompilerError* g =parser_Parser_eval(structParser_self,c);if(g != NULL){struct error_CompilerError* structParser__x = g;

return structParser__x;
;
;}
else if(1){
;}
;
;}
else if(d.tag==2){
struct _global_String structParser_field_name;structParser_field_name = (parser_Parser_current(structParser_self,c)).value;;
parser_Parser_next(structParser_self,c);
struct types_CompilerType structParser_typ;struct error_CompilerError* structParser_e;;
struct _global_Result_rerror_CompilerError_types_CompilerType h =types_parse_type(structParser_self,c);if(h.tag==0){structParser_typ = h.cases.Ok.field0;

;}
else if(h.tag==1){structParser_e = h.cases.Error.field0;

return structParser_e;
;
;}
;
if(hashMap_HashMap_contains_types_CompilerType(&(structParser_hash_map),structParser_field_name,c)){;
return error_make_Error_rparser_Parser(structParser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(structParser_field_name),c),_global_StringInit(24," already field in struct"),c),c);
;
;};
hashMap_HashMap_insert_types_CompilerType(&(structParser_hash_map),structParser_field_name,structParser_typ,c);
;}
else if(1){
return error_make_Error_rparser_Parser(structParser_self,_global_StringInit(16,"Unexpected token"),c);
;
;}
;};
struct _global_StaticArray_StaticArray_S_string j =hashMap_HashMap_keys_types_CompilerType(&(structParser_hash_map),c);
for (unsigned int k = 0;k < j.length; k++) {
struct _global_String structParser_key;structParser_key = *_global_StaticArray_op_get_StaticArray_S_string(&j, k, c);
;unsigned int structParser_i;structParser_i = k;
_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(structParser_key),c),_global_StringInit(3," : "),c),types_CompilerType_toStringByValue((*(hashMap_HashMap_op_get_types_CompilerType(&(structParser_hash_map),(struct _global_String)structParser_key,c))),c),c),_global_StringInit(0,""),c),c);
}
;
;return NULL;
;}
void _global_memcpy_hashMap_HashBucket_types_CompilerType_(struct hashMap_HashBucket_types_CompilerType* _global_target, struct hashMap_HashBucket_types_CompilerType* _global_destination, unsigned int _global_length, struct _global_Context* c){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_types_CompilerType),c);
;}

static inline struct hashMap_HashBucket_types_CompilerType* tmpstructParserx(struct _global_Array_hashMap_HashBucket_types_CompilerType_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* c) {
struct hashMap_HashBucket_types_CompilerType* d =(*_global_self)->data;
if(d != NULL){struct hashMap_HashBucket_types_CompilerType* _global_data = d;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),c);
struct hashMap_HashBucket_types_CompilerType* _global_newData;_global_newData = (struct hashMap_HashBucket_types_CompilerType*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_types_CompilerType),c));;
_global_memcpy_hashMap_HashBucket_types_CompilerType_(_global_newData,_global_data,(*_global_self)->length,c);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,c);
return _global_newData;}else if(d == NULL){return (struct hashMap_HashBucket_types_CompilerType*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_types_CompilerType),c));}
}
void _global_Array_reserve_hashMap_HashBucket_types_CompilerType_(struct _global_Array_hashMap_HashBucket_types_CompilerType_* _global_self, unsigned int _global_newSize, struct _global_Context* c){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(c)->allocator,c);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpstructParserx(&_global_self,&_global_newSize,&_global_allocator, c);;
;}
void _global_Array_free_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, struct _global_Context* c){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(c)->allocator,c);;
struct types_CompilerType* d =(_global_self)->data;if(d != NULL){struct types_CompilerType* _global_data = d;

_global_free((void*)_global_data,c);
;}
else if(d == NULL){
;}
;
;}
struct hashMap_HashBucket_types_CompilerType hashMap_make_HashBucket_types_CompilerType(struct _global_Allocator* hashMap_allocator, struct _global_Context* c){;
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
struct _global_Array_types_CompilerType hashMap_values;hashMap_values = _global_Array_types_CompilerTypeInit(0, 0, NULL, NULL);;
(hashMap_keys).allocator = hashMap_allocator;;
(hashMap_values).allocator = hashMap_allocator;;
;return hashMap_HashBucket_types_CompilerTypeInit(hashMap_keys,hashMap_values);
;}
void _global_Array_append_hashMap_HashBucket_types_CompilerType_(struct _global_Array_hashMap_HashBucket_types_CompilerType_* _global_self, struct hashMap_HashBucket_types_CompilerType _global_value, struct _global_Context* c){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_types_CompilerType_(_global_self,1,c);
;}
else{_global_Array_reserve_hashMap_HashBucket_types_CompilerType_(_global_self,(_global_self)->capacity*2,c);
;};
;};
*((((struct hashMap_HashBucket_types_CompilerType*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void hashMap_HashBucket_free_types_CompilerType(struct hashMap_HashBucket_types_CompilerType* hashMap_self, struct _global_Context* c){;
_global_Array_free_string(&((hashMap_self)->keys),c);
_global_Array_free_types_CompilerType(&((hashMap_self)->values),c);
;}
struct hashMap_HashMap_types_CompilerType hashMap_make_HashMap_size_types_CompilerType(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* c){;
;
struct _global_Array_hashMap_HashBucket_types_CompilerType_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_types_CompilerType_Init(0, 0, NULL, NULL);;
(hashMap_buckets).allocator = hashMap_allocator;;
struct _global_Range d =_global_RangeInit(0,hashMap_size);
for (unsigned int f = d.start; f < d.end; f++) {
unsigned int hashMap_i;hashMap_i = f;
;_global_Array_append_hashMap_HashBucket_types_CompilerType_(&(hashMap_buckets),hashMap_make_HashBucket_types_CompilerType(hashMap_allocator,c),c);
}
;
;return hashMap_HashMap_types_CompilerTypeInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Init(hashMap_buckets.data, hashMap_buckets.length),0);
;}
struct hashMap_HashBucket_types_CompilerType* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct types_CompilerType* _global_Array_op_get_types_CompilerType(struct _global_Array_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
;return ((struct types_CompilerType*)(_global_self)->data + (int64_t)_global_index);
;}
void hashMap_HashMap_free_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_Context* c){;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ d =(hashMap_self)->buckets;
for (unsigned int f = 0;f < d.length; f++) {
struct hashMap_HashBucket_types_CompilerType hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&d, f, c);
;unsigned int hashMap_i;hashMap_i = f;
hashMap_HashBucket_free_types_CompilerType(&(hashMap_bucket),c);
}
;
;}
struct hashMap_HashMap_types_CompilerType hashMap_make_HashMap_types_CompilerType(struct _global_Context* c){;return hashMap_make_HashMap_size_types_CompilerType(powf(2,3),(c)->allocator,c);
;}
_Bool hashMap_HashMap_contains_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct _global_Context* c){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,c);;
struct hashMap_HashBucket_types_CompilerType* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,c)));;
struct _global_Array_string d =(hashMap_bucket)->keys;
for (unsigned int f = 0;f < d.length; f++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&d, f, c);
;unsigned int hashMap_i;hashMap_i = f;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,c)){;
return 1;
;
;};
}
;
;return 0;
;}
void hashMap_HashMap_insert_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct types_CompilerType hashMap_value, struct _global_Context* c){;
;
;
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),c);
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&((hashMap_self)->buckets),(unsigned int)0,c))).keys).allocator,(c)->allocator,c);;
struct hashMap_HashMap_types_CompilerType hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_types_CompilerType(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,c);;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ d =(hashMap_self)->buckets;
for (unsigned int f = 0;f < d.length; f++) {
struct hashMap_HashBucket_types_CompilerType hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&d, f, c);
;unsigned int hashMap_i;hashMap_i = f;
struct _global_Range g =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
for (unsigned int h = g.start; h < g.end; h++) {
unsigned int hashMap_c;hashMap_c = h;
;hashMap_HashMap_insert_types_CompilerType(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,c)),*(_global_Array_op_get_types_CompilerType(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,c)),c);
}
;
}
;
hashMap_HashMap_free_types_CompilerType(hashMap_self,c);
*(hashMap_self) = hashMap_new_hash;;
;};
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,c);;
struct hashMap_HashBucket_types_CompilerType* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,c)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,c);
_global_Array_append_types_CompilerType(&((hashMap_bucket)->values),hashMap_value,c);
(hashMap_self)->length = (hashMap_self)->length+1;;
;}
struct _global_StaticArray_StaticArray_S_string hashMap_HashMap_keys_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_Context* c){;
struct _global_Array_string hashMap_arr;hashMap_arr = _global_Array_stringInit(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ d =(hashMap_self)->buckets;
for (unsigned int f = 0;f < d.length; f++) {
struct hashMap_HashBucket_types_CompilerType hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&d, f, c);
;unsigned int hashMap_i;hashMap_i = f;
struct _global_Array_string g =(hashMap_bucket).keys;
for (unsigned int h = 0;h < g.length; h++) {
struct _global_String hashMap_key;hashMap_key = *_global_Array_op_get_string(&g, h, c);
;_global_Array_append_string(&(hashMap_arr),hashMap_key,c);
}
;
}
;
;return _global_StaticArray_StaticArray_S_stringInit(hashMap_arr.data, hashMap_arr.length);
;}
struct types_CompilerType* hashMap_HashMap_op_get_types_CompilerType(struct hashMap_HashMap_types_CompilerType* hashMap_self, struct _global_String hashMap_key, struct _global_Context* c){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,c);;
struct hashMap_HashBucket_types_CompilerType* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_types_CompilerType_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,c)));;
struct _global_Array_string d =(hashMap_bucket)->keys;
for (unsigned int f = 0;f < d.length; f++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&d, f, c);
;unsigned int hashMap_i;hashMap_i = f;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,c)){;
return &(*(_global_Array_op_get_types_CompilerType(&((hashMap_bucket)->values),(unsigned int)hashMap_i,c)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),c),_global_StringInit(12," in hash map"),c),c);
;return (struct types_CompilerType*)0;
;}
struct _global_String* _global_StaticArray_op_get_StaticArray_S_string(struct _global_StaticArray_StaticArray_S_string* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void structParserInitTypes() { 
 
_global_Maybe_rhashMap_HashBucket_types_CompilerType_Type.p_type =
_global_TypeFromStruct(
hashMap_HashBucket_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashBucket_types_CompilerType_Type.nullable = 1;_global_Array_hashMap_HashBucket_types_CompilerType_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashBucket_types_CompilerType_Type.size->tag = 1;
_global_Array_hashMap_HashBucket_types_CompilerType_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_stringType.size->tag = 2;
_global_StaticArray_StaticArray_S_stringType.array_type=
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; }
void structParserInit() { 
;
};
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G);
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G);
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G);
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G);
struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* G){;
;
struct parser_Parser parser_p;parser_p = parser_ParserInit(parser_tokens,parser_filename,(struct ast_AST*)0,0,operatorParser_make_OpStack(G),_global_Array_uintInit(0, 0, NULL, NULL),0,0,_global_Array_uintInit(0, 0, NULL, NULL),_global_Array_uintInit(0, 0, NULL, NULL));;
(parser_p).current_node = ast_make_AST_rparser_Parser(&(parser_p),ast_Root,G);;
;return parser_Parser_parse(&(parser_p),G);
;}
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_self)->filename;
;}
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_Parser_current(parser_self,G)).line;
;}
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_Parser_current(parser_self,G)).column;
;}
unsigned int parser_Parser_get_active_index(struct parser_Parser* parser_self, struct _global_Context* G){;
;return *(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G));
;}
void parser_Parser_set_active_index(struct parser_Parser* parser_self, unsigned int parser_val, struct _global_Context* G){;
;
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = parser_val;;
;}
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* G){;
;if((parser_self)->iter+1<((parser_self)->tokens).length){;
return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter+1,G));}
else{struct lexer_Token parser_be;parser_be = parser_Parser_behind(parser_self,G);;
return lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),(parser_be).line,(parser_be).column);};
;}
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* G){;
;return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter,G));
;}
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* G){;
;return ((parser_self)->iter<1 ? lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),0,0):(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter-1,G))));
;}
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* G){;
struct lexer_Token parser_t;parser_t = parser_Parser_peek(parser_self,G);;
(parser_self)->iter = (parser_self)->iter+1;;
;return parser_t;
;}
struct error_CompilerError* parser_Parser_eval_till_end(struct parser_Parser* parser_self, struct _global_Context* G){;
unsigned int parser_indent;parser_indent = (parser_self)->num_indent;;
unsigned int parser_paren;parser_paren = (parser_self)->num_paren;;
;while(!(parser_Parser_is_end(parser_self,G))){parser_Parser_next(parser_self,G);struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return parser__x;
;
;}
else if(1){
;}
;};
;return NULL;
;}
struct error_CompilerError* parser_Parser_comma(struct parser_Parser* parser_self, struct _global_Context* G){;
struct error_CompilerError* H =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return parser__x;
;
;}
else if(1){
;}
;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = ast_AST_length((parser_self)->current_node,G);;
;return NULL;
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparsery(struct _global_Result_rerror_CompilerError_Result_T J) {
struct _global_Result_rerror_CompilerError_rast_AST H;H.tag = J.tag;H.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(J.cases);return H;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserz(struct _global_Result_Result_E_rast_AST L) {
struct _global_Result_rerror_CompilerError_rast_AST K;K.tag = L.tag;K.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(L.cases);return K;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop_last(struct parser_Parser* parser_self, struct _global_Context* G){;
if((((parser_self)->current_node)->nodes).length==0){;
return tmpparsery(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,_global_StringInit(10,"Unexpected"),G),G));
;
;};
;return tmpparserz(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
;}
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* G){;
;return parser_Parser_eval_not_func_call(parser_self,0,G);
;}

static inline struct error_CompilerError* tmpparserF(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
if((*parser_self)->num_paren>0){;
(*parser_self)->num_paren = (*parser_self)->num_paren-1;;
return NULL;}
else{return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected )"),G);}
}

static inline struct error_CompilerError* tmpparserC(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String J =(*parser_token).value;
if(_global_String_op_eqByValue(J,_global_StringInit(4,"true"),NULL)||_global_String_op_eqByValue(J,_global_StringInit(5,"false"),NULL)){return basicTypes_parse_bool_literal(*parser_self,(*parser_token).value,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(2,"if"),NULL)){return ifStatement_if_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"else"),NULL)){return ifStatement_else_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(5,"while"),NULL)){return whileStatement_while_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(3,"def"),NULL)){return funcParser_parse_funcDef(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"type"),NULL)){return structParser_parse_struct(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserD(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String K =(*parser_token).value;
if(_global_String_op_eqByValue(K,_global_StringInit(1,"("),NULL)){return (operatorParser_is_unary(*parser_self,G) ? tuple_parse_tuple(*parser_self,G):(funcCall_parse_funcCall(*parser_self,G)));}else if(_global_String_op_eqByValue(K,_global_StringInit(2,":="),NULL)){return varParser_parse_create_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"="),NULL)){return varParser_parse_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"+="),NULL)){return varParser_parse_add_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"-="),NULL)){return varParser_parse_sub_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,","),NULL)){return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected ,"),G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"\n"),NULL)){return NULL;}else if(_global_String_op_eqByValue(K,_global_StringInit(1,")"),NULL)){return tmpparserF(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserB(struct parser_Parser** parser_self,_Bool* parser_ignore_func_call,struct lexer_Token* parser_token,struct error_CompilerError** parser_value, struct _global_Context* G) {
struct lexer_TokenType H =(*parser_token).kind;
if(H.tag==3){return operatorParser_parse_operator(*parser_self,(*parser_token).value,G);}else if(H.tag==0){return basicTypes_parse_int_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==1){return basicTypes_parse_float_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==2){return varParser_parse_identifier(*parser_self,(*parser_token).value,G);}else if(H.tag==6){if(_global_String_op_eqByValue((parser_Parser_peek(*parser_self,G)).value,_global_StringInit(1,"\n"),G)){;
parser_Parser_next(*parser_self,G);
;}
else{(*parser_self)->num_indent = ((*parser_token).value).length;;
;};
return NULL;}else if(H.tag==7){return tmpparserC(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==5){return tmpparserD(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==8){return stringParser_parse_string(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((*parser_token).kind),G),G),_global_StringInit(19," token, not handled"),G),G);}
}
struct error_CompilerError* parser_Parser_eval_not_func_call(struct parser_Parser* parser_self, _Bool parser_ignore_func_call, struct _global_Context* G){;
;
struct lexer_Token parser_token;parser_token = parser_Parser_current(parser_self,G);;
_global_Array_append_uint(&((parser_self)->paren_stack),(parser_self)->num_paren,G);
_global_Array_append_uint(&((parser_self)->indent_stack),(parser_self)->num_indent,G);
struct error_CompilerError* parser_value;parser_value = tmpparserB(&parser_self,&parser_ignore_func_call,&parser_token,&parser_value, G);;
_global_Array_pop_uint(&((parser_self)->paren_stack),G);
_global_Array_pop_uint(&((parser_self)->indent_stack),G);
;return parser_value;
;}
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* G){;
;
ast_AST_add((parser_self)->current_node,parser_node,G);
(parser_self)->current_node = parser_node;;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
_global_Array_append_uint(&((parser_self)->active_index),0,G);
;}
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* G){;
struct ast_AST* parser_owner;;
struct ast_AST* H =((parser_self)->current_node)->owner;if(H != NULL){parser_owner = H;

;}
else if(1){
_global_panic(_global_StringInit(52,"Tried to pop current node which didn't have an owner"),G);
;}
;
struct error_CompilerError* J =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(J != NULL){struct error_CompilerError* parser__x = J;

return parser__x;
;
;}
else if(1){
;}
;
_global_Array_pop_uint(&((parser_self)->active_index),G);
(parser_self)->current_node = parser_owner;;
;return NULL;
;}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop(struct parser_Parser* parser_self, struct _global_String parser_mesg, struct _global_Context* G){;
;
if((((parser_self)->current_node)->nodes).length==0){;
return tmpparsery(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(5,"pop: "),(parser_mesg),G),_global_StringInit(0,""),G),G),G));
;
;};
;return tmpparserz(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
;}
unsigned int parser_Parser_push_paren(struct parser_Parser* parser_self, struct _global_Context* G){;
(parser_self)->num_paren = (parser_self)->num_paren+1;;
;return (parser_self)->num_paren-1;
;}
struct error_CompilerError* parser_Parser_expect_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
;return (((parser_Parser_current(parser_self,G)).kind).tag!=(parser_typ).tag ? error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"Expect tag: "),(parser_mesg),G),_global_StringInit(0,""),G),G):(NULL));
;}
struct error_CompilerError* parser_Parser_expect_next_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
parser_Parser_next(parser_self,G);
;return parser_Parser_expect_tag(parser_self,parser_typ,parser_mesg,G);
;}
struct error_CompilerError* parser_Parser_expect_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
;return (_global_String_op_neByValue((parser_Parser_current(parser_self,G)).value,parser_tok,G) ? error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Expect token: "),(parser_mesg),G),_global_StringInit(0,""),G),G):(NULL));
;}
struct error_CompilerError* parser_Parser_expect_next_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
parser_Parser_next(parser_self,G);
;return parser_Parser_expect_token(parser_self,parser_tok,parser_mesg,G);
;}
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, struct _global_Context* G){;
unsigned int parser_num_indent;parser_num_indent = *(_global_Array_op_get_uint(&((parser_self)->indent_stack),(unsigned int)((parser_self)->indent_stack).length-1,G));;
unsigned int parser_num_paren;parser_num_paren = *(_global_Array_op_get_uint(&((parser_self)->paren_stack),(unsigned int)((parser_self)->paren_stack).length-1,G));;
if(parser_num_paren>(parser_self)->num_paren){;
return 1;
;
;};
;struct lexer_TokenType H =(parser_Parser_current(parser_self,G)).kind;
if(H.tag==6){return (parser_self)->num_indent<=parser_num_indent;}else if(1){return 0;};
;}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* G){;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
;while((parser_self)->iter<((parser_self)->tokens).length){struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return tmpparsery(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
;
;}
else if(1){
;}
;parser_Parser_next(parser_self,G);};
(parser_self)->iter = ((parser_self)->tokens).length-1;;
struct error_CompilerError* J =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(J != NULL){struct error_CompilerError* parser__x = J;

return tmpparsery(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
;
;}
else if(1){
;}
;
;return tmpparserz(_global_Ok_Result_E_rast_AST((parser_self)->current_node,G));
;}
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(unsigned int),G);
;}

static inline unsigned int* tmpparserG(struct _global_Array_uint** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* G) {
unsigned int* H =(*_global_self)->data;
if(H != NULL){unsigned int* _global_data = H;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),G);
unsigned int* _global_newData;_global_newData = (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));;
_global_memcpy_uint(_global_newData,_global_data,(*_global_self)->length,G);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,G);
return _global_newData;}else if(H == NULL){return (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));}
}
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(G)->allocator,G);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpparserG(&_global_self,&_global_newSize,&_global_allocator, G);;
;}
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),G);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_uint(_global_self,1,G);
;}
else{_global_Array_reserve_uint(_global_self,(_global_self)->capacity*2,G);
;};
;};
*((((unsigned int*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),G);
;};
unsigned int _global_tmp;_global_tmp = *(_global_Array_op_get_uint(_global_self,(unsigned int)(_global_self)->length-1,G));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}

void parserInitTypes() { 
 astInitTypes();operatorParserInitTypes();basicTypesInitTypes();varParserInitTypes();tupleInitTypes();funcCallInitTypes();ifStatementInitTypes();whileStatementInitTypes();funcParserInitTypes();stringParserInitTypes();structParserInitTypes();
struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(2, "Ok");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
; k[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; k[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Error, field0);
_global_Result_Result_E_rast_ASTType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E_rast_ASTType.tag_field.offset = offsetof(struct _global_Result_Result_E_rast_AST, tag);
_global_Result_Result_E_rast_ASTType.tag_field.field_type = 
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

_global_Result_Result_E_rast_ASTType.size = sizeof(struct _global_Result_Result_E_rast_AST);

_global_Result_Result_E_rast_ASTType.package = _global_StringInit(7, "_global");
_global_Result_Result_E_rast_ASTType.name = _global_StringInit(24, "Result_Result_E_rast_AST");
_global_Result_Result_E_rast_ASTType.cases.data = k;
_global_Result_Result_E_rast_ASTType.cases.length = 2;
 }
void parserInit() { 
astInit();;
;
operatorParserInit();;
;
basicTypesInit();;
;
varParserInit();;
;
tupleInit();;
;
funcCallInit();;
;
ifStatementInit();;
;
whileStatementInit();;
;
funcParserInit();;
;
stringParserInit();;
;
structParserInit();;
;
;
};
unsigned char* _global_StaticArray_op_get_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned int _global_index, struct _global_Context* c);
_Bool _global_StaticArray_contains_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned char _global_elem, struct _global_Context* c);
struct error_Thrower_VTABLE rast_AST_VTABLE_FOR_error_Thrower;struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* c){;
;
;
struct error_CompilerError* d =validator_State_validate_nodes(operatorValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((operatorValidation_node)->nodes.data, (operatorValidation_node)->nodes.length),c);if(d != NULL){struct error_CompilerError* operatorValidation__x = d;

return operatorValidation__x;
;
;}
else if(1){
;}
;
struct types_CompilerType operatorValidation_op_t;operatorValidation_op_t = (*(_global_Array_op_get_rast_AST(&((operatorValidation_node)->nodes),(unsigned int)0,c)))->_type;;
struct _global_Range f =_global_RangeInit(1,((operatorValidation_node)->nodes).length);
for (unsigned int g = f.start; g < f.end; g++) {
unsigned int operatorValidation_i;operatorValidation_i = g;
;struct types_CompilerType operatorValidation__type;operatorValidation__type = (*(_global_Array_op_get_rast_AST(&((operatorValidation_node)->nodes),(unsigned int)operatorValidation_i,c)))->_type;;
struct error_CompilerError* h =types_CompilerType_duck_typeByValue(operatorValidation_op_t,operatorValidation__type,error_ThrowerFromStruct(operatorValidation_node,&rast_AST_VTABLE_FOR_error_Thrower,_global_TypeFromStruct(ast_AST_get_type(NULL,c),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),c);if(h != NULL){struct error_CompilerError* operatorValidation__x = h;

return operatorValidation__x;
;
;}
else if(1){
;}
;
}
;
struct _global_StaticArray_1_u8 operatorValidation_comparison;operatorValidation_comparison = _global_StaticArray_1_u8Init((ast_LT).tag);;
(operatorValidation_node)->_type = (_global_StaticArray_contains_1_u8(&(operatorValidation_comparison),(operatorValidation_kind).tag,c) ? types_Bool:(operatorValidation_op_t));;
;return NULL;
;}
unsigned char* _global_StaticArray_op_get_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<1,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}
_Bool _global_StaticArray_contains_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned char _global_elem, struct _global_Context* c){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<1){if(*(&(*(_global_StaticArray_op_get_1_u8(_global_self,(unsigned int)_global_i,c))))==*(&(_global_elem))){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}

void operatorValidationInitTypes() { 
 
validator_StateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
validator_StateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
validator_StateType_fields
,1
);
validator_StateType.package = _global_StringInit(9, "validator");
validator_StateType.name = _global_StringInit(5, "State");
validator_StateType.size = sizeof(struct validator_State);
validator_StateType_fields[0].name = _global_StringInit(5, "scope");
validator_StateType_fields[0].offset = offsetof(struct validator_State, scope);
validator_StateType_fields[0].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
scope_Scope_get_type(NULL,(&_global_context))
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
;_global_StaticArray_1_u8Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_u8Type.size->tag = 0;
_global_StaticArray_1_u8Type.size->cases.Static.field0 = 1;
_global_StaticArray_1_u8Type.array_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StaticArray_StaticArray_S_rast_ASTType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_rast_ASTType.size->tag = 2;
_global_StaticArray_StaticArray_S_rast_ASTType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
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
; }
void operatorValidationInit() { 
;
;
};
struct error_CompilerError* varValidation_validate_read(struct validator_State* varValidation_state, struct ast_ReadInfo* varValidation_read_info, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
;
struct scope_DeclInfo* varValidation_desc_info;;
struct scope_DeclInfo* f =scope_Scope_get_var((varValidation_state)->scope,(varValidation_read_info)->name,d);if(f != NULL){varValidation_desc_info = f;

;}
else if(1){
return error_make_Error_rast_AST(varValidation_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(19,"No variable called "),((varValidation_read_info)->name),d),_global_StringInit(0,""),d),d);
;
;}
;
(varValidation_node)->_type = (varValidation_desc_info)->_type;;
(varValidation_read_info)->is_global = (varValidation_desc_info)->is_global;;
;return NULL;
;}
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
struct ast_AST* varValidation_create;struct ast_AST* varValidation_assign;struct prast_ASTcrast_ASTp f;f = prast_ASTcrast_ASTpInit(*(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)0,d)),*(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)1,d)));varValidation_create=f.field0;varValidation_assign=f.field1;;
struct error_CompilerError* g =validator_State_validate_nodes(varValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((varValidation_assign)->nodes.data, (varValidation_assign)->nodes.length),d);if(g != NULL){struct error_CompilerError* varValidation__x = g;

return varValidation__x;
;
;}
else if(1){
;}
;
struct types_CompilerType varValidation_typ;varValidation_typ = (*(_global_Array_op_get_rast_AST(&((varValidation_assign)->nodes),(unsigned int)0,d)))->_type;;
struct ast_AST* varValidation_v;varValidation_v = *(_global_Array_op_get_rast_AST(&((varValidation_create)->nodes),(unsigned int)0,d));;
(varValidation_v)->_type = varValidation_typ;;
struct ast_ReadInfo* varValidation_read_info;;
struct ast_Payload h =(varValidation_v)->payload;if(h.tag==5){varValidation_read_info = h.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(37,"Expecting identifier in create assign"),d);
;}
;
struct scope_DeclInfo varValidation_decl_info;varValidation_decl_info = scope_make_DeclInfo(varValidation_typ,d);;
struct error_CompilerError* j =scope_Scope_create_decl((varValidation_state)->scope,(varValidation_read_info)->name,&(varValidation_decl_info),varValidation_create,d);if(j != NULL){struct error_CompilerError* varValidation__x = j;

return varValidation__x;
;
;}
else if(1){
;}
;
(varValidation_read_info)->is_global = (varValidation_decl_info).is_global;;
;return NULL;
;}

void varValidationInitTypes() { 
 
 }
void varValidationInit() { 
;
};
struct types_CompilerType _global_Maybe_default_types_CompilerTypeByValue(struct _global_Maybe_types_CompilerType _global_self, struct types_CompilerType _global_value, struct _global_Context* f);

static inline struct types_CompilerType _global_Maybe_default_types_CompilerType(struct _global_Maybe_types_CompilerType*,struct types_CompilerType,struct _global_Context* f);

struct types_CompilerType _global_Maybe_default_types_CompilerTypeByValue(struct _global_Maybe_types_CompilerType,struct types_CompilerType,struct _global_Context* f);
struct error_CompilerError* funcValidator_add_func_to_scope(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct ast_FuncInfo* funcValidator_func_info, struct _global_Context* f){;
;
;
struct types_FuncPtr* funcValidator_func_type;funcValidator_func_type = (funcValidator_func_info)->_type;;
struct scope_DeclInfo funcValidator_decl_info;funcValidator_decl_info = scope_DeclInfoInit(types_Func(funcValidator_func_type,f),1);;
struct error_CompilerError* g =scope_Scope_create_decl((funcValidator_state)->scope,(funcValidator_func_info)->name,&(funcValidator_decl_info),funcValidator_node,f);if(g != NULL){struct error_CompilerError* funcValidator__x = g;

return funcValidator__x;
;
;}
else if(1){
;}
;
;return NULL;
;}
struct error_CompilerError* funcValidator_validate(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct ast_FuncInfo* funcValidator_func_info, struct _global_Context* f){;
;
;
scope_Scope_push((funcValidator_state)->scope,f);
struct scope_Scope* g = (funcValidator_state)->scope;
;
struct types_FuncPtr* funcValidator_func_type;funcValidator_func_type = (funcValidator_func_info)->_type;;
struct ast_AST* funcValidator_args;funcValidator_args = *(ast_AST_op_get(funcValidator_node,(unsigned int)0,f));;
struct _global_Array_rast_AST h =(funcValidator_args)->nodes;
for (unsigned int j = 0;j < h.length; j++) {
struct ast_AST* funcValidator_arg;funcValidator_arg = *_global_Array_op_get_rast_AST(&h, j, f);
;unsigned int funcValidator_i;funcValidator_i = j;
struct _global_String funcValidator_name;struct types_CompilerType funcValidator__type;;
struct ast_Payload k =(funcValidator_arg)->payload;if(k.tag==17){funcValidator_name = k.cases.FuncArg.field0;
funcValidator__type = k.cases.FuncArg.field1;

;}
else if(1){
_global_panic(_global_StringInit(41,"Expecting args in func not something else"),f);
;}
;
struct scope_DeclInfo funcValidator_var_decl_info;funcValidator_var_decl_info = scope_DeclInfoInit(funcValidator__type,1);;
struct error_CompilerError* l =scope_Scope_create_decl((funcValidator_state)->scope,funcValidator_name,&(funcValidator_var_decl_info),funcValidator_arg,f);if(l != NULL){struct error_CompilerError* funcValidator__x = l;

scope_Scope_pop(g,f);
return funcValidator__x;
;
;}
else if(1){
;}
;
}
;
struct error_CompilerError* m =validator_State_validate(funcValidator_state,*(ast_AST_op_get(funcValidator_node,(unsigned int)1,f)),f);if(m != NULL){struct error_CompilerError* funcValidator__x = m;

scope_Scope_pop(g,f);
return funcValidator__x;
;
;}
else if(1){
;}
;
struct ast_AST* funcValidator_block;funcValidator_block = *(ast_AST_op_get(funcValidator_node,(unsigned int)1,f));;
struct types_CompilerType funcValidator_should_be;funcValidator_should_be = (funcValidator_func_type)->return_type;;
struct types_CompilerType funcValidator_real_ret;funcValidator_real_ret = _global_Maybe_default_types_CompilerTypeByValue((ifValidation_block_returns_value(funcValidator_block,f)),types_Void,f);;
struct error_CompilerError* n =types_CompilerType_duck_typeByValue(funcValidator_should_be,funcValidator_real_ret,error_ThrowerFromStruct(funcValidator_block,&rast_AST_VTABLE_FOR_error_Thrower,rast_AST_VTABLE_FOR_error_Thrower.type, &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),f);if(n != NULL){struct error_CompilerError* funcValidator_e = n;

scope_Scope_pop(g,f);
return error_CompilerError_before(funcValidator_e,_global_StringInit(22,"Function return type: "),f);
;
;}
else if(1){
;}
;
;struct error_CompilerError* p =NULL;
scope_Scope_pop(g,f);
return p;
 }struct error_CompilerError* funcValidator_validate_call(struct validator_State* funcValidator_state, struct ast_AST* funcValidator_node, struct _global_Context* f){;
;
struct error_CompilerError* g =validator_State_validate_nodes(funcValidator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((funcValidator_node)->nodes.data, (funcValidator_node)->nodes.length),f);if(g != NULL){struct error_CompilerError* funcValidator__x = g;

return funcValidator__x;
;
;}
else if(1){
;}
;
struct ast_AST* funcValidator_func;funcValidator_func = *(ast_AST_op_get(funcValidator_node,(unsigned int)0,f));;
struct types_FuncPtr* funcValidator_func_type;;
struct types_CompilerType h =types_CompilerType_to_real_typeByValue((funcValidator_func)->_type,f);if(h.tag==6){funcValidator_func_type = h.cases.Func.field0;

;}
else if(1){
return error_make_Error_rast_AST(funcValidator_func,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"Cannot call "),types_CompilerType_toStringByValue(((funcValidator_func)->_type),f),f),_global_StringInit(0,""),f),f);
;
;}
;
unsigned int funcValidator_num_args;funcValidator_num_args = ast_AST_length(funcValidator_node,f)-1;;
if(((funcValidator_func_type)->args).length<funcValidator_num_args){;
return error_make_Error_rast_AST(funcValidator_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(15,"Function takes "),_global_uint_toStringByValue((funcValidator_num_args-((funcValidator_func_type)->args).length),f),f),_global_StringInit(15," less arguments"),f),f);
;
;}else if(((funcValidator_func_type)->args).length>funcValidator_num_args){;
return error_make_Error_rast_AST(funcValidator_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Function expects "),_global_uint_toStringByValue((((funcValidator_func_type)->args).length-funcValidator_num_args),f),f),_global_StringInit(15," more arguments"),f),f);
;
;};
struct _global_Range j =_global_RangeInit(1,ast_AST_length(funcValidator_node,f));
for (unsigned int k = j.start; k < j.end; k++) {
unsigned int funcValidator_i;funcValidator_i = k;
;struct types_CompilerType funcValidator_should_be;funcValidator_should_be = *(_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&((funcValidator_func_type)->args),(unsigned int)funcValidator_i-1,f));;
struct types_CompilerType funcValidator_actually;funcValidator_actually = (*(ast_AST_op_get(funcValidator_node,(unsigned int)funcValidator_i,f)))->_type;;
struct error_CompilerError* l =types_CompilerType_duck_typeByValue(funcValidator_should_be,funcValidator_actually,error_ThrowerFromStruct(*(ast_AST_op_get(funcValidator_node,(unsigned int)funcValidator_i,f)),&rast_AST_VTABLE_FOR_error_Thrower,rast_AST_VTABLE_FOR_error_Thrower.type, &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),f);if(l != NULL){struct error_CompilerError* funcValidator__x = l;

return funcValidator__x;
;
;}
else if(1){
;}
;
}
;
(funcValidator_node)->_type = (funcValidator_func_type)->return_type;;
;return NULL;
;}
struct types_CompilerType _global_Maybe_default_types_CompilerTypeByValue(struct _global_Maybe_types_CompilerType _global_self, struct types_CompilerType _global_value, struct _global_Context* f){;
;
;struct _global_Maybe_types_CompilerType g =_global_self;
if(g.tag==0){struct types_CompilerType _global_x = g.cases.Some.field0;
return _global_x;}else if(g.tag==1){return _global_value;};
;}
static inline struct types_CompilerType _global_Maybe_default_types_CompilerType(struct _global_Maybe_types_CompilerType* h,struct types_CompilerType j,struct _global_Context* f){
return _global_Maybe_default_types_CompilerTypeByValue(*h,j,f);
}
void funcValidatorInitTypes() { 
 
struct _global_Case* g =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
g[0].name = _global_StringInit(4, "Some");
g[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
g[0].args.data[0].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; g[0].args.data[0].offset = offsetof(struct _global_Maybe_types_CompilerType_Some, field0);
g[1].name = _global_StringInit(4, "None");
g[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_types_CompilerTypeType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_types_CompilerTypeType.tag_field.offset = offsetof(struct _global_Maybe_types_CompilerType, tag);
_global_Maybe_types_CompilerTypeType.tag_field.field_type = 
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

_global_Maybe_types_CompilerTypeType.size = sizeof(struct _global_Maybe_types_CompilerType);

_global_Maybe_types_CompilerTypeType.package = _global_StringInit(7, "_global");
_global_Maybe_types_CompilerTypeType.name = _global_StringInit(24, "Maybe_types_CompilerType");
_global_Maybe_types_CompilerTypeType.cases.data = g;
_global_Maybe_types_CompilerTypeType.cases.length = 2;
 }
void funcValidatorInit() { 
;
;
};
struct error_CompilerError* tupleValidator_validate_tuple(struct validator_State* tupleValidator_state, struct ast_AST* tupleValidator_node, struct _global_Context* c){;
;
validator_State_validate_nodes(tupleValidator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((tupleValidator_node)->nodes.data, (tupleValidator_node)->nodes.length),c);
(tupleValidator_node)->_type = (*(_global_Array_op_get_rast_AST(&((tupleValidator_node)->nodes),(unsigned int)0,c)))->_type;;
;return NULL;
;}

void tupleValidatorInitTypes() { 
 
 }
void tupleValidatorInit() { 
;
};
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l);
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* l);
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
;
;struct ast_Payload m =(validator_syntax_tree)->payload;
if(m.tag==4){struct ast_OperatorKind validator_kind = m.cases.Operator.field0;
return operatorValidation_validate(validator_state,validator_kind,validator_syntax_tree,l);}else if(m.tag==5){struct ast_ReadInfo* validator_read_info = m.cases.Identifier.field0;
return varValidation_validate_read(validator_state,validator_read_info,validator_syntax_tree,l);}else if(m.tag==7){return varValidation_validate_create_assign(validator_state,validator_syntax_tree,l);}else if(m.tag==10){return ifValidation_validate_if(validator_state,validator_syntax_tree,l);}else if(m.tag==12){return ifValidation_validate_condition(validator_state,validator_syntax_tree,l);}else if(m.tag==15){struct ast_FuncInfo* validator_info = m.cases.FuncDef.field0;
return funcValidator_validate(validator_state,validator_syntax_tree,validator_info,l);}else if(m.tag==6){return funcValidator_validate_call(validator_state,validator_syntax_tree,l);}else if(m.tag==16){return tupleValidator_validate_tuple(validator_state,validator_syntax_tree,l);}else if(1){return validator_State_validate_nodes(validator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((validator_syntax_tree)->nodes.data, (validator_syntax_tree)->nodes.length),l);};
;}
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* l){;
;
struct _global_StaticArray_StaticArray_S_rast_AST m =validator_nodes;
for (unsigned int n = 0;n < m.length; n++) {
struct ast_AST* validator_node;validator_node = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&m, n, l);
;unsigned int validator_i;validator_i = n;
struct error_CompilerError* p =validator_State_validate(validator_self,validator_node,l);if(p != NULL){struct error_CompilerError* validator__x = p;

return validator__x;
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
struct _global_StaticArray_StaticArray_S_types_CompilerType tmpvalidatorH(struct _global_StaticArray_1_types_CompilerType* m) {
return _global_StaticArray_StaticArray_S_types_CompilerTypeInit(m->data, 1);};
struct error_CompilerError* validator_register_log_func(struct validator_State* validator_state, struct _global_String validator_name, struct types_CompilerType validator_typ, struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
;
;
;
struct types_FuncPtr* validator_log_func_type;validator_log_func_type = types_make_FuncPtr(l);;
(validator_log_func_type)->args = tmpvalidatorH(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(validator_typ),l));;
(validator_log_func_type)->external = 1;;
struct scope_DeclInfo validator_decl_info;validator_decl_info = scope_make_DeclInfo(types_Func(validator_log_func_type,l),l);;
;return scope_Scope_create_decl((validator_state)->scope,validator_name,&(validator_decl_info),validator_syntax_tree,l);
;}
struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
struct validator_State validator_state;validator_state = validator_StateInit(scope_make_Scope(l));;
struct error_CompilerError* m =validator_register_log_func(&(validator_state),_global_StringInit(9,"log_float"),types_make_Float(l),validator_syntax_tree,l);if(m != NULL){struct error_CompilerError* validator__x = m;

return validator__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* n =validator_register_log_func(&(validator_state),_global_StringInit(7,"log_int"),types_make_Int(l),validator_syntax_tree,l);if(n != NULL){struct error_CompilerError* validator__x = n;

return validator__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* p =validator_register_log_func(&(validator_state),_global_StringInit(3,"log"),types_String,validator_syntax_tree,l);if(p != NULL){struct error_CompilerError* validator__x = p;

return validator__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* q =validator_State_create_decl(&(validator_state),validator_syntax_tree,l);if(q != NULL){struct error_CompilerError* validator__x = q;

return validator__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* r =validator_State_validate(&(validator_state),validator_syntax_tree,l);if(r != NULL){struct error_CompilerError* validator__x = r;

return validator__x;
;
;}
else if(1){
;}
;
struct error_CompilerError* s =validator_check_useless(validator_syntax_tree,l);if(s != NULL){struct error_CompilerError* validator__x = s;

return validator__x;
;
;}
else if(1){
;}
;
;return validator_check_other(validator_syntax_tree,l);
;}
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* l){;
;
;return error_make_Error_rast_AST(validator_i,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(8,"Useless "),(validator_mesg),l),_global_StringInit(0,""),l),l);
;}
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* l){;
;struct ast_Payload m =(validator_i)->payload;
if(m.tag==5&&1){return validator_useless(validator_i,_global_StringInit(4,"read"),l);}else if(m.tag==1){return validator_useless(validator_i,_global_StringInit(11,"int literal"),l);}else if(m.tag==2){return validator_useless(validator_i,_global_StringInit(13,"float literal"),l);}else if(m.tag==3){return validator_useless(validator_i,_global_StringInit(12,"bool literal"),l);}else if(m.tag==4){struct ast_OperatorKind validator_kind = m.cases.Operator.field0;
return validator_useless(validator_i,_global_StringInit(8,"operator"),l);}else if(m.tag==0){struct _global_Array_rast_AST n =(validator_i)->nodes;
for (unsigned int p = 0;p < n.length; p++) {
struct ast_AST* validator_node;validator_node = *_global_Array_op_get_rast_AST(&n, p, l);
;struct error_CompilerError* q =validator_check_useless(validator_node,l);if(q != NULL){struct error_CompilerError* validator__x = q;

return validator__x;
;
;}
else if(1){
;}
;
}
;
return NULL;}else if(1){return NULL;};
;}
struct error_CompilerError* validator_State_create_decl(struct validator_State* validator_self, struct ast_AST* validator_node, struct _global_Context* l){;
;
struct _global_Array_rast_AST m =(validator_node)->nodes;
for (unsigned int n = 0;n < m.length; n++) {
struct ast_AST* validator_n;validator_n = *_global_Array_op_get_rast_AST(&m, n, l);
;unsigned int validator_i;validator_i = n;
struct ast_Payload p =(validator_n)->payload;if(p.tag==15){struct ast_FuncInfo* validator_info = p.cases.FuncDef.field0;

struct error_CompilerError* q =funcValidator_add_func_to_scope(validator_self,validator_node,validator_info,l);if(q != NULL){struct error_CompilerError* validator__x = q;

return validator__x;
;
;}
else if(1){
;}
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* l){;
;return NULL;
;}
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),l);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* l){;
struct _global_StaticArray_1_types_CompilerType* _global_pointer;_global_pointer = (struct _global_StaticArray_1_types_CompilerType*)(_global_Allocator_alloc((l)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_types_CompilerType),l));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void validatorInitTypes() { 
 operatorValidationInitTypes();varValidationInitTypes();funcValidatorInitTypes();tupleValidatorInitTypes();
_global_StaticArray_1_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_types_CompilerTypeType.size->tag = 0;
_global_StaticArray_1_types_CompilerTypeType.size->cases.Static.field0 = 1;
_global_StaticArray_1_types_CompilerTypeType.array_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; }
void validatorInit() { 
;
operatorValidationInit();;
varValidationInit();;
funcValidatorInit();;
tupleValidatorInit();;
;
};
static inline struct _global_Maybe_types_CompilerType tmpifValidationJ(struct _global_Maybe_Maybe_T h) {
struct _global_Maybe_types_CompilerType g;g.tag = h.tag;g.cases = *(union _global_Maybe_types_CompilerType_cases*) &(h.cases);return g;
}
struct _global_Maybe_types_CompilerType ifValidation_block_returns_value(struct ast_AST* ifValidation_node, struct _global_Context* f){;
_global_assert(((ifValidation_node)->payload).tag==(ast_Block).tag,_global_StringInit(15,"Expecting block"),f);
;return (ast_AST_length(ifValidation_node,f)>0&&!(types_CompilerType_is_typeByValue(types_Void,(*(ast_AST_op_get(ifValidation_node,(unsigned int)ast_AST_length(ifValidation_node,f)-1,f)))->_type,f)) ? _global_Some_types_CompilerType((*(_global_Array_op_get_rast_AST(&((ifValidation_node)->nodes),(unsigned int)ast_AST_length(ifValidation_node,f)-1,f)))->_type,f):(tmpifValidationJ(_global_None)));
;}
struct error_CompilerError* ifValidation_validate_if(struct validator_State* ifValidation_state, struct ast_AST* ifValidation_node, struct _global_Context* f){;
;
struct error_CompilerError* g =validator_State_validate_nodes(ifValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((ifValidation_node)->nodes.data, (ifValidation_node)->nodes.length),f);if(g != NULL){struct error_CompilerError* ifValidation__x = g;

return ifValidation__x;
;
;}
else if(1){
;}
;
unsigned int ifValidation_i;ifValidation_i = 1;;
;while(ifValidation_i<ast_AST_length(ifValidation_node,f)){struct _global_Maybe_types_CompilerType h =ifValidation_block_returns_value(*(ast_AST_op_get(ifValidation_node,(unsigned int)ifValidation_i,f)),f);if(h.tag==0){struct types_CompilerType ifValidation_ret = h.cases.Some.field0;

(ifValidation_node)->_type = ifValidation_ret;;
;}
else if(1){
;}
;ifValidation_i = ifValidation_i+2;;};
;return NULL;
;}
struct error_CompilerError* ifValidation_validate_condition(struct validator_State* ifValidation_state, struct ast_AST* ifValidation_node, struct _global_Context* f){;
;
struct error_CompilerError* g =validator_State_validate_nodes(ifValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((ifValidation_node)->nodes.data, (ifValidation_node)->nodes.length),f);if(g != NULL){struct error_CompilerError* ifValidation__x = g;

return ifValidation__x;
;
;}
else if(1){
;}
;
struct ast_AST* ifValidation_condition;ifValidation_condition = *(_global_Array_op_get_rast_AST(&((ifValidation_node)->nodes),(unsigned int)0,f));;
;return (!(types_CompilerType_is_typeByValue(types_Bool,(ifValidation_condition)->_type,f)) ? error_make_Error_rast_AST(ifValidation_condition,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(34,"Expecting boolean expression, not "),types_CompilerType_toStringByValue(((ifValidation_condition)->_type),f),f),_global_StringInit(0,""),f),f):(NULL));
;}

void ifValidationInitTypes() { 
 validatorInitTypes();
 }
void ifValidationInit() { 
;
validatorInit();;
;
};
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_free_uint(struct _global_Array_uint* _global_self, struct _global_Context* W);
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Allocator* hashMap_allocator, struct _global_Context* W);
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* W);
void _global_memcpy_rmir_FuncScope(struct mir_FuncScope** _global_target, struct mir_FuncScope** _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_CFG(struct mir_CFG* _global_target, struct mir_CFG* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* W);
void hashMap_HashBucket_free_uint(struct hashMap_HashBucket_uint* hashMap_self, struct _global_Context* W);
struct hashMap_HashMap_uint hashMap_make_HashMap_size_uint(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* W);
void _global_Array_reserve_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* W);
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void hashMap_HashMap_free_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_Context* W);
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* W);
struct _global_Array_rmir_Block* _global_box_____rmir_Block(struct _global_Array_rmir_Block _global_value, struct _global_Context* W);
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* W);
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* W);
struct mir_FuncScope* _global_box_mir_FuncScope(struct mir_FuncScope _global_value, struct _global_Context* W);
void _global_Array_append_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct mir_FuncScope* _global_value, struct _global_Context* W);
struct mir_FuncScope* _global_Array_pop_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct _global_Context* W);
struct mir_FuncScope** _global_Array_op_get_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* W);
void _global_Array_append_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct mir_CFG _global_value, struct _global_Context* W);
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* W);
struct mir_CFG _global_Array_pop_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct _global_Context* W);
struct mir_CFG* _global_Array_op_get_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_index, struct _global_Context* W);
_Bool hashMap_HashMap_contains_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* W);
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* W);
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* W);
void _global_log_types_CompilerType(struct types_CompilerType _global_s, struct _global_Context* W);
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* W);
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* W);
struct _global_Array_mir_Function* _global_box_____mir_Function(struct _global_Array_mir_Function _global_value, struct _global_Context* W);
unsigned int mir_calc_size(struct types_CompilerType mir_self, struct _global_Context* W){;
;struct types_CompilerType X =mir_self;
if(X.tag==0){return sizeof(void);}else if(X.tag==2){return sizeof(_Bool);}else if(X.tag==1){return sizeof(struct _global_String);}else if(X.tag==4){unsigned int mir_size = X.cases.Float.field0;
return mir_size/4;}else if(X.tag==3){_Bool mir_unsigned = X.cases.Int.field0;
unsigned int mir_size = X.cases.Int.field1;
return mir_size/4;}else if(X.tag==5){struct types_StructInfo* mir_info = X.cases.Struct.field0;
_global_panic(_global_StringInit(16,"Not handled yet!"),W);
return 0;}else if(X.tag==6){struct types_FuncPtr* mir_info = X.cases.Func.field0;
return sizeof(pp___none);};
;}

#define mir_atoi(W,X) atoi(W)

#define mir_atof(Y,Z) atof(Y)
struct _global_String mir_CFG_toString(struct mir_CFG* mir_self, struct _global_Context* bb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"CFG "),_global_uint_toStringByValue(((mir_self)->return_to),bb),bb),_global_StringInit(0,""),bb);
;}
static inline struct _global_String mir_CFG_toStringByValue(struct mir_CFG bc,struct _global_Context* bb){
return mir_CFG_toString(&bc,bb);
}struct mir_FuncScope* mir_Converter_push_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
struct _global_Array_mir_OpCode* mir_op_codes;mir_op_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = _global_box_____rmir_Block(_global_Array_rmir_BlockInit(0, 0, NULL, NULL),bb);;
struct _global_Array_mir_CFG mir_cfgs;mir_cfgs = _global_Array_mir_CFGInit(0, 0, NULL, NULL);;
struct mir_Block* mir_block;mir_block = _global_box_mir_Block(mir_BlockInit(0,mir_op_codes),bb);;
struct mir_FuncScope* mir_scope;mir_scope = _global_box_mir_FuncScope(mir_FuncScopeInit(0,mir_cfgs,mir_block,0,mir_all_blocks,hashMap_make_HashMap_uint(bb),0),bb);;
_global_Array_append_rmir_FuncScope(&((mir_self)->scopes),mir_scope,bb);
mir_FuncScope_push_cfg(mir_scope,mir_CFGInit(0,mir_block),bb);
;return mir_scope;
;}
struct mir_FuncScope* mir_Converter_pop_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
;return _global_Array_pop_rmir_FuncScope(&((mir_self)->scopes),bb);
;}
struct mir_FuncScope* mir_Converter_get_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
;return *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)((mir_self)->scopes).length-1,bb));
;}
unsigned int mir_FuncScope_push_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
(mir_self)->block_counter = (mir_self)->block_counter+1;;
;return (mir_self)->block_counter;
;}
void mir_FuncScope_append(struct mir_FuncScope* mir_self, struct mir_OpCode mir_code, struct _global_Context* bb){;
;
_global_Array_append_mir_OpCode(((mir_self)->block)->code,mir_code,bb);
;}
void mir_FuncScope_pop_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
(mir_self)->block_counter = (mir_self)->block_counter-1;;
;}
void mir_FuncScope_push_cfg(struct mir_FuncScope* mir_scope, struct mir_CFG mir_cfg, struct _global_Context* bb){;
;
_global_Array_append_mir_CFG(&((mir_scope)->cfgs),mir_cfg,bb);
struct mir_Block* mir_block;;
struct mir_Block* bc =(mir_cfg).block;if(bc != NULL){mir_block = bc;

;}
else if(1){
return ;
;
;}
;
(mir_scope)->block = mir_block;;
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
;}
void mir_FuncScope_add_block(struct mir_FuncScope* mir_scope, struct mir_Block* mir_block, struct _global_Context* bb){;
;
(mir_scope)->block = mir_block;;
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
;}
void mir_FuncScope_pop_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
_global_Array_pop_mir_CFG(&((mir_scope)->cfgs),bb);
;}
struct mir_CFG* mir_FuncScope_current_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
;return &(*(_global_Array_op_get_mir_CFG(&((mir_scope)->cfgs),(unsigned int)((mir_scope)->cfgs).length-1,bb)));
;}
struct mir_OpCode mir_unsupported(struct _global_String mir_mesg, struct _global_Context* bb){;
_global_panic(mir_mesg,bb);
;return mir_Add_i32;
;}
_Bool mir_is_block(struct ast_AST* mir_node, struct _global_Context* bb){;
;return ((mir_node)->payload).tag==(ast_Block).tag;
;}
struct ast_AST* mir_get_rhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
;return (((mir_node)->nodes).length==1 ? *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)):(*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb))));
;}
struct ast_AST* mir_get_lhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
;if(((mir_node)->nodes).length==1){;
struct ast_AST* mir_owner;;
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

;}
else if(1){
_global_panic(_global_StringInit(20,"Assign missing owner"),bb);
;}
;
struct ast_AST* mir_create;mir_create = *(_global_Array_op_get_rast_AST(&((mir_owner)->nodes),(unsigned int)0,bb));;
return *(_global_Array_op_get_rast_AST(&((mir_create)->nodes),(unsigned int)0,bb));}
else{return *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));};
;}
unsigned int mir_Converter_get_id_of_var(struct mir_Converter* mir_self, struct _global_String mir_name, struct _global_Context* bb){;
;
int mir_i;mir_i = (int)((mir_self)->scopes).length-1;;
;while(mir_i>=(int)0){struct mir_FuncScope* mir_scope;mir_scope = *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)(unsigned int)mir_i,bb));;if(hashMap_HashMap_contains_uint(&((mir_scope)->vars),mir_name,bb)){;
return *(hashMap_HashMap_op_get_uint(&((mir_scope)->vars),(struct _global_String)mir_name,bb));
;
;};mir_i = mir_i-(int)1;;};
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(40,"Could not find variable convert to mir: "),(mir_name),bb),_global_StringInit(0,""),bb),bb);
;return 0;
;}
void mir_Converter_convert_nodes(struct mir_Converter* mir_self, struct _global_StaticArray_StaticArray_S_rast_AST mir_nodes, struct _global_Context* bb){;
;
struct _global_StaticArray_StaticArray_S_rast_AST bc =mir_nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_self,mir_n,bb);
}
;
;}
void mir_convert_if(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_FuncScope_push_block(mir_self,bb);;
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_id),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,mir_add_global_var(mir_converter,mir_name,bb),mir_name),bb),bb),bb);
;};
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_id,NULL),bb);
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_pop_cfg(mir_self,bb);
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb),bb);
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_to),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
;};
;}
void mir_convert_while(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_check;mir_check = mir_FuncScope_push_block(mir_self,bb);;
mir_FuncScope_append(mir_self,mir_Jump(mir_check,bb),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_check,_global_box_mir_Block(mir_BlockInit(mir_check,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb)),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_FuncScope_push_block(mir_self,bb),NULL),bb);
struct _global_Array_rast_AST bc =(mir_node)->nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_converter,mir_n,bb);
}
;
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_pop_cfg(mir_self,bb);
struct mir_CFG* mir_check_cfg;mir_check_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
mir_FuncScope_append(mir_self,mir_Jump((mir_check_cfg)->return_to,bb),bb);
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb),bb);
;}
void mir_convert_else(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
unsigned int mir_end_if;mir_end_if = (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb))).return_to;;
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_end_if,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
;}
void mir_convert_condition(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_to;mir_to = mir_FuncScope_push_block(mir_self,bb);;
struct ast_AST* mir_owner;;
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

;}
else if(1){
_global_panic(_global_StringInit(22,"Condition has no owner"),bb);
;}
;
unsigned int mir_return_to;mir_return_to = (((mir_owner)->nodes).length==2 ? (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-1,bb))).return_to:(mir_FuncScope_push_block(mir_self,bb)));;
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_append(mir_self,mir_CondJump(mir_to,mir_return_to,bb),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_return_to,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
;}
void mir_convert_block(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
if(((_global_Maybe_unwrap_rast_ASTByValue((mir_node)->owner,bb))->payload).tag==(ast_If).tag){;
struct mir_CFG mir_cfg;mir_cfg = *(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb));;
struct _global_Maybe_types_CompilerType bc =ifValidation_block_returns_value(mir_node,bb);if(bc.tag==0){struct types_CompilerType mir_ret_typ = bc.cases.Some.field0;

struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue(((mir_cfg).return_to),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,mir_ret_typ,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
;}
else if(1){
;}
;
mir_FuncScope_append(mir_self,mir_Jump((mir_cfg).return_to,bb),bb);
;};
;}
void mir_convert_func_call(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct types_CompilerType mir_func_ptr;mir_func_ptr = (*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)))->_type;;
struct types_CompilerType bc =mir_func_ptr;if(bc.tag==6){struct types_FuncPtr* mir_func = bc.cases.Func.field0;

mir_FuncScope_append(mir_self,mir_FuncCall(mir_func,bb),bb);
;}
else if(1){
_global_log_types_CompilerType(mir_func_ptr,bb);
_global_panic(_global_StringInit(46,"Expecting func pointer as argument to function"),bb);
;}
;
;}
void mir_register_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
mir_add_global_var(mir_converter,(mir_info)->name,bb);
;}
void mir_convert_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_Converter_get_id_of_var(mir_converter,(mir_info)->name,bb);;
mir_self = mir_Converter_push_scope(mir_converter,bb);;
struct ast_AST* mir_args;mir_args = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
(mir_self)->num_args = ast_AST_length(mir_args,bb);;
struct _global_Range bc =_global_RangeInit(0,ast_AST_length(mir_args,bb));
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int mir_i;mir_i = bd;
;mir_Converter_convert_node(mir_converter,*(ast_AST_op_get(mir_args,(unsigned int)ast_AST_length(mir_args,bb)-mir_i-1,bb)),bb);
}
;
struct ast_AST* mir_body;mir_body = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb));;
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_body)->nodes.data, (mir_body)->nodes.length),bb);
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = (mir_Converter_pop_scope(mir_converter,bb))->all_blocks;;
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_all_blocks,(unsigned int)(mir_all_blocks)->length-1,bb)))->code,mir_FuncReturn(((mir_info)->_type)->return_type,bb),bb);
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_all_blocks);;
struct mir_Function mir_func;mir_func = mir_FunctionInit((mir_info)->name,(mir_info)->_type,_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_id);;
_global_Array_append_mir_Function((mir_converter)->functions,mir_func,bb);
;}
void mir_convert_func_arg(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_name, struct types_CompilerType mir_typ, struct _global_Context* bb){;
;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_add_local_var(mir_converter,mir_name,bb);;
struct mir_ReadInfo* mir_info;mir_info = _global_box_mir_ReadInfo(mir_ReadInfoInit(0,mir_typ,mir_id,mir_name),bb);;
(mir_self)->num_args = (mir_self)->num_args-1;;
mir_FuncScope_append(mir_self,mir_FuncArg((mir_self)->num_args,mir_info,bb),bb);
mir_FuncScope_append(mir_self,mir_Assign(mir_info,bb),bb);
;}

static inline struct mir_OpCode tmpmirK(struct mir_Converter** mir_converter,struct ast_AST** mir_node,struct ast_OperatorKind* mir_op_kind,struct mir_FuncScope** mir_self,struct types_CompilerType* mir_node_type,_Bool* mir_is_int,_Bool* mir_is_float, struct _global_Context* bb) {
struct ast_OperatorKind bc =*mir_op_kind;
if(bc.tag==0){return (*mir_is_int ? mir_Add_i32 : (*mir_is_float) ? mir_Add_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==1){return (*mir_is_int ? mir_Mul_i32 : (*mir_is_float) ? mir_Mul_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==2){return (*mir_is_int ? mir_Div_i32 : (*mir_is_float) ? mir_Div_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==3){return (*mir_is_int ? mir_LT_i32 : (*mir_is_float) ? mir_LT_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==4){return (*mir_is_int ? mir_Sub_i32 : (*mir_is_float) ? mir_Sub_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}
}
void mir_convert_operator(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_OperatorKind mir_op_kind, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct types_CompilerType mir_node_type;mir_node_type = ast_op_type(mir_node,bb);;
_Bool mir_is_int;mir_is_int = types_CompilerType_is_typeByValue(mir_node_type,types_Int(0,0,bb),bb);;
_Bool mir_is_float;mir_is_float = types_CompilerType_is_typeByValue(mir_node_type,types_Float(0,bb),bb);;
mir_FuncScope_append(mir_self,tmpmirK(&mir_converter,&mir_node,&mir_op_kind,&mir_self,&mir_node_type,&mir_is_int,&mir_is_float, bb),bb);
;}
unsigned int mir_add_global_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
(mir_converter)->global_var_counter = (mir_converter)->global_var_counter+1;;
unsigned int mir_id;mir_id = (mir_converter)->global_var_counter-1;;
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
;return mir_id;
;}
unsigned int mir_add_local_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
(mir_self)->var_counter = (mir_self)->var_counter+1;;
unsigned int mir_id;mir_id = (mir_self)->var_counter-1;;
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
;return mir_id;
;}
unsigned int mir_add_var(struct mir_Converter* mir_converter, _Bool mir_is_global, struct _global_String mir_name, struct _global_Context* bb){;
;
;
;return (mir_is_global ? mir_add_global_var(mir_converter,mir_name,bb):(mir_add_local_var(mir_converter,mir_name,bb)));
;}
void mir_convert_create(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct ast_AST* mir_ident;mir_ident = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
struct ast_ReadInfo* mir_read_info;;
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
;}
;
unsigned int mir_id;mir_id = mir_add_var(mir_converter,(mir_read_info)->is_global,(mir_read_info)->name,bb);;
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,mir_id,(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_assign(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct ast_AST* mir_ident;mir_ident = mir_get_lhs_of_assign(mir_node,bb);;
struct ast_ReadInfo* mir_read_info;;
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
;}
;
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)(mir_read_info)->name,bb)),(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_identifier(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_ReadInfo* mir_read_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_node)->_type,mir_Converter_get_id_of_var(mir_converter,(mir_read_info)->name,bb),(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_string(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_str, struct _global_Context* bb){;
;
;
unsigned int mir_string_id;mir_string_id = (mir_converter)->string_literal_counter;;
(mir_converter)->string_literal_counter = (mir_converter)->string_literal_counter+1;;
mir_FuncScope_append(*(_global_Array_op_get_rmir_FuncScope(&((mir_converter)->scopes),(unsigned int)0,bb)),mir_StringDecl(mir_string_id,mir_str,bb),bb);
mir_FuncScope_append(mir_Converter_get_scope(mir_converter,bb),mir_StringRef(mir_string_id,bb),bb);
;}
void mir_Converter_create_decls(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct _global_Array_rast_AST bc =(mir_node)->nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
struct ast_Payload bf =(mir_n)->payload;if(bf.tag==15){struct ast_FuncInfo* mir_info = bf.cases.FuncDef.field0;

mir_register_func_def(mir_converter,mir_node,mir_info,bb);
;}
else if(1){
;}
;
}
;
;}
void mir_Converter_convert_node(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_previous_num_vars;mir_previous_num_vars = (mir_self)->var_counter;;
struct ast_Payload bc =(mir_node)->payload;if(bc.tag==8){
;}
else if(bc.tag==10){
mir_convert_if(mir_converter,mir_node,bb);
;}
else if(bc.tag==14){
mir_convert_while(mir_converter,mir_node,bb);
return ;
;
;}
else if(bc.tag==9){
mir_Converter_convert_node(mir_converter,mir_get_rhs_of_assign(mir_node,bb),bb);
;}
else if(bc.tag==15){struct ast_FuncInfo* mir_info = bc.cases.FuncDef.field0;

mir_convert_func_def(mir_converter,mir_node,mir_info,bb);
return ;
;
;}
else if(1){
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
;}
;
if(mir_is_block(mir_node,bb)){;
(mir_self)->var_counter = mir_previous_num_vars;;
;};
struct ast_Payload bd =(mir_node)->payload;if(bd.tag==5){struct ast_ReadInfo* mir_read_info = bd.cases.Identifier.field0;

mir_convert_identifier(mir_converter,mir_node,mir_read_info,bb);
;}
else if(bd.tag==15){struct ast_FuncInfo* mir_info = bd.cases.FuncDef.field0;

;}
else if(bd.tag==16){
;}
else if(bd.tag==7){
;}
else if(bd.tag==11){
mir_convert_block(mir_converter,mir_node,bb);
;}
else if(bd.tag==10){
;}
else if(bd.tag==14){
;}
else if(bd.tag==12){
mir_convert_condition(mir_converter,mir_node,bb);
;}
else if(bd.tag==13){
mir_convert_else(mir_converter,mir_node,bb);
;}
else if(bd.tag==9){
mir_convert_assign(mir_converter,mir_node,bb);
;}
else if(bd.tag==18){struct _global_String mir_str = bd.cases.String.field0;

mir_convert_string(mir_converter,mir_node,mir_str,bb);
;}
else if(bd.tag==8){
mir_convert_create(mir_converter,mir_node,bb);
;}
else if(bd.tag==17){struct _global_String mir_name = bd.cases.FuncArg.field0;
struct types_CompilerType mir_typ = bd.cases.FuncArg.field1;

mir_convert_func_arg(mir_converter,mir_node,mir_name,mir_typ,bb);
;}
else if(bd.tag==6){
mir_convert_func_call(mir_converter,mir_node,bb);
;}
else if(bd.tag==4){struct ast_OperatorKind mir_op_kind = bd.cases.Operator.field0;

mir_convert_operator(mir_converter,mir_node,mir_op_kind,bb);
;}
else if(bd.tag==3){_Bool mir_is_true = bd.cases.Bool.field0;

mir_FuncScope_append(mir_self,mir_Store_bool(mir_is_true,bb),bb);
;}
else if(bd.tag==1){struct _global_String mir_s = bd.cases.Int.field0;

mir_FuncScope_append(mir_self,mir_Store_i32((int32_t)mir_atoi(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
;}
else if(bd.tag==2){struct _global_String mir_s = bd.cases.Float.field0;

mir_FuncScope_append(mir_self,mir_Store_f32((float)mir_atof(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
;}
else if(bd.tag==0){
;}
;
;}
struct mir_Program mir_convert(struct ast_AST* mir_node, struct _global_Context* bb){;
struct _global_Array_mir_Function* mir_functions;mir_functions = _global_box_____mir_Function(_global_Array_mir_FunctionInit(0, 0, NULL, NULL),bb);;
struct mir_Converter mir_converter;mir_converter = mir_ConverterInit(0,0,_global_Array_rmir_FuncScopeInit(0, 0, NULL, NULL),mir_functions);;
struct mir_FuncScope* mir_global_scope;mir_global_scope = mir_Converter_push_scope(&(mir_converter),bb);;
mir_add_global_var(&(mir_converter),_global_StringInit(7,"log_int"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(9,"log_float"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(3,"log"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(4,"main"),bb);
mir_Converter_create_decls(&(mir_converter),mir_node,bb);
mir_Converter_convert_node(&(mir_converter),mir_node,bb);
struct _global_Array_rmir_Block* mir_main_all_blocks;mir_main_all_blocks = (*(_global_Array_op_get_rmir_FuncScope(&((mir_converter).scopes),(unsigned int)0,bb)))->all_blocks;;
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_main_all_blocks,(unsigned int)(mir_main_all_blocks)->length-1,bb)))->code,mir_FuncReturn(types_Void,bb),bb);
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_main_all_blocks);;
struct mir_Function mir_main;mir_main = mir_FunctionInit(_global_StringInit(4,"main"),types_make_FuncPtr(bb),_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_Converter_get_id_of_var(&(mir_converter),_global_StringInit(4,"main"),bb));;
_global_Array_append_mir_Function(mir_functions,mir_main,bb);
struct _global_Array_mir_Function mir_deref_functions;mir_deref_functions = *(mir_functions);;
;return mir_ProgramInit(_global_StaticArray_StaticArray_S_mir_FunctionInit(mir_deref_functions.data, mir_deref_functions.length));
;}
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_uint),bb);
;}

static inline struct hashMap_HashBucket_uint* tmpmirL(struct _global_Array_hashMap_HashBucket_uint_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct hashMap_HashBucket_uint* bc =(*_global_self)->data;
if(bc != NULL){struct hashMap_HashBucket_uint* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct hashMap_HashBucket_uint* _global_newData;_global_newData = (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));;
_global_memcpy_hashMap_HashBucket_uint_(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));}
}
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirL(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
void _global_Array_free_uint(struct _global_Array_uint* _global_self, struct _global_Context* bb){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
unsigned int* bc =(_global_self)->data;if(bc != NULL){unsigned int* _global_data = bc;

_global_free((void*)_global_data,bb);
;}
else if(bc == NULL){
;}
;
;}
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
struct _global_Array_uint hashMap_values;hashMap_values = _global_Array_uintInit(0, 0, NULL, NULL);;
(hashMap_keys).allocator = hashMap_allocator;;
(hashMap_values).allocator = hashMap_allocator;;
;return hashMap_HashBucket_uintInit(hashMap_keys,hashMap_values);
;}
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,1,bb);
;}
else{_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct hashMap_HashBucket_uint*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_memcpy_rmir_FuncScope(struct mir_FuncScope** _global_target, struct mir_FuncScope** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_FuncScope*),bb);
;}
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_OpCode),bb);
;}
void _global_memcpy_mir_CFG(struct mir_CFG* _global_target, struct mir_CFG* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_CFG),bb);
;}
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),bb);
;}
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Function),bb);
;}
void hashMap_HashBucket_free_uint(struct hashMap_HashBucket_uint* hashMap_self, struct _global_Context* bb){;
_global_Array_free_string(&((hashMap_self)->keys),bb);
_global_Array_free_uint(&((hashMap_self)->values),bb);
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_size_uint(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
;
struct _global_Array_hashMap_HashBucket_uint_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_uint_Init(0, 0, NULL, NULL);;
(hashMap_buckets).allocator = hashMap_allocator;;
struct _global_Range bc =_global_RangeInit(0,hashMap_size);
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int hashMap_i;hashMap_i = bd;
;_global_Array_append_hashMap_HashBucket_uint_(&(hashMap_buckets),hashMap_make_HashBucket_uint(hashMap_allocator,bb),bb);
}
;
;return hashMap_HashMap_uintInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(hashMap_buckets.data, hashMap_buckets.length),0);
;}

static inline struct mir_FuncScope** tmpmirM(struct _global_Array_rmir_FuncScope** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_FuncScope** bc =(*_global_self)->data;
if(bc != NULL){struct mir_FuncScope** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_FuncScope** _global_newData;_global_newData = (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));;
_global_memcpy_rmir_FuncScope(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));}
}
void _global_Array_reserve_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirM(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_OpCode* tmpmirN(struct _global_Array_mir_OpCode** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_OpCode* bc =(*_global_self)->data;
if(bc != NULL){struct mir_OpCode* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_OpCode* _global_newData;_global_newData = (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));;
_global_memcpy_mir_OpCode(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));}
}
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirN(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_CFG* tmpmirP(struct _global_Array_mir_CFG** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_CFG* bc =(*_global_self)->data;
if(bc != NULL){struct mir_CFG* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_CFG* _global_newData;_global_newData = (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));;
_global_memcpy_mir_CFG(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));}
}
void _global_Array_reserve_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirP(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_Block** tmpmirQ(struct _global_Array_rmir_Block** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Block** bc =(*_global_self)->data;
if(bc != NULL){struct mir_Block** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));;
_global_memcpy_rmir_Block(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));}
}
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirQ(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct mir_Function* tmpmirR(struct _global_Array_mir_Function** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Function* bc =(*_global_self)->data;
if(bc != NULL){struct mir_Function* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_Function* _global_newData;_global_newData = (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));;
_global_memcpy_mir_Function(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));}
}
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirR(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
void hashMap_HashMap_free_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_Context* bb){;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
hashMap_HashBucket_free_uint(&(hashMap_bucket),bb);
}
;
;}
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* bb){;
struct _global_Array_mir_OpCode* _global_pointer;_global_pointer = (struct _global_Array_mir_OpCode*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_OpCode),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct _global_Array_rmir_Block* _global_box_____rmir_Block(struct _global_Array_rmir_Block _global_value, struct _global_Context* bb){;
struct _global_Array_rmir_Block* _global_pointer;_global_pointer = (struct _global_Array_rmir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_rmir_Block),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* bb){;
struct mir_Block* _global_pointer;_global_pointer = (struct mir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_Block),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* bb){;return hashMap_make_HashMap_size_uint(powf(2,3),(bb)->allocator,bb);
;}
struct mir_FuncScope* _global_box_mir_FuncScope(struct mir_FuncScope _global_value, struct _global_Context* bb){;
struct mir_FuncScope* _global_pointer;_global_pointer = (struct mir_FuncScope*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_FuncScope),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_Array_append_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct mir_FuncScope* _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_FuncScope(_global_self,1,bb);
;}
else{_global_Array_reserve_rmir_FuncScope(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_FuncScope**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct mir_FuncScope* _global_Array_pop_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct _global_Context* bb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
;};
struct mir_FuncScope* _global_tmp;_global_tmp = *(_global_Array_op_get_rmir_FuncScope(_global_self,(unsigned int)(_global_self)->length-1,bb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_FuncScope** _global_Array_op_get_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_FuncScope**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_OpCode(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_OpCode(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_OpCode*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct mir_CFG _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_CFG(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_CFG(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_CFG*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_Block(_global_self,1,bb);
;}
else{_global_Array_reserve_rmir_Block(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_Block**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct mir_CFG _global_Array_pop_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct _global_Context* bb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
;};
struct mir_CFG _global_tmp;_global_tmp = *(_global_Array_op_get_mir_CFG(_global_self,(unsigned int)(_global_self)->length-1,bb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_CFG* _global_Array_op_get_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_CFG*)(_global_self)->data + (int64_t)_global_index);
;}
_Bool hashMap_HashMap_contains_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
struct _global_Array_string bc =(hashMap_bucket)->keys;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
return 1;
;
;};
}
;
;return 0;
;}
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
struct _global_Array_string bc =(hashMap_bucket)->keys;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
return &(*(_global_Array_op_get_uint(&((hashMap_bucket)->values),(unsigned int)hashMap_i,bb)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),bb),_global_StringInit(12," in hash map"),bb),bb);
;return (unsigned int*)0;
;}
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* bb){;
struct mir_ReadInfo* _global_pointer;_global_pointer = (struct mir_ReadInfo*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_ReadInfo),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_log_types_CompilerType(struct types_CompilerType _global_s, struct _global_Context* bb){;
_global_c_log(types_CompilerType_toString(&(_global_s),bb),bb);
;}
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_Block**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_Function(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_Function(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_Function*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* bb){;
;
;
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),bb);
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)0,bb))).keys).allocator,(bb)->allocator,bb);;
struct hashMap_HashMap_uint hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_uint(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,bb);;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
struct _global_Range bf =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
for (unsigned int bg = bf.start; bg < bf.end; bg++) {
unsigned int hashMap_c;hashMap_c = bg;
;hashMap_HashMap_insert_uint(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,bb)),*(_global_Array_op_get_uint(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,bb)),bb);
}
;
}
;
hashMap_HashMap_free_uint(hashMap_self,bb);
*(hashMap_self) = hashMap_new_hash;;
;};
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,bb);
_global_Array_append_uint(&((hashMap_bucket)->values),hashMap_value,bb);
(hashMap_self)->length = (hashMap_self)->length+1;;
;}
struct _global_Array_mir_Function* _global_box_____mir_Function(struct _global_Array_mir_Function _global_value, struct _global_Context* bb){;
struct _global_Array_mir_Function* _global_pointer;_global_pointer = (struct _global_Array_mir_Function*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_Function),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void mirInitTypes() { 
 ifValidationInitTypes();
mir_ID_Type.name = _global_StringInit(2, "ID");
mir_ID_Type.package = _global_StringInit(3, "mir");
mir_ID_Type.real_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_mir_OpCodeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_OpCodeType.size->tag = 1;
_global_Array_mir_OpCodeType.array_type=
_global_TypeFromStruct(
mir_OpCode_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;mir_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ReadInfoType_fields
,4
);
mir_ReadInfoType.package = _global_StringInit(3, "mir");
mir_ReadInfoType.name = _global_StringInit(8, "ReadInfo");
mir_ReadInfoType.size = sizeof(struct mir_ReadInfo);
mir_ReadInfoType_fields[0].name = _global_StringInit(9, "is_global");
mir_ReadInfoType_fields[0].offset = offsetof(struct mir_ReadInfo, is_global);
mir_ReadInfoType_fields[0].field_type = 
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
mir_ReadInfoType_fields[1].name = _global_StringInit(5, "_type");
mir_ReadInfoType_fields[1].offset = offsetof(struct mir_ReadInfo, _type);
mir_ReadInfoType_fields[1].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
mir_ReadInfoType_fields[2].name = _global_StringInit(2, "id");
mir_ReadInfoType_fields[2].offset = offsetof(struct mir_ReadInfo, id);
mir_ReadInfoType_fields[2].field_type = 
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
mir_ReadInfoType_fields[3].name = _global_StringInit(4, "name");
mir_ReadInfoType_fields[3].offset = offsetof(struct mir_ReadInfo, name);
mir_ReadInfoType_fields[3].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;mir_Add_i32.tag = 0;
mir_Sub_i32.tag = 1;
mir_Mul_i32.tag = 2;
mir_Div_i32.tag = 3;
mir_LT_i32.tag = 4;
mir_Add_f32.tag = 5;
mir_Sub_f32.tag = 6;
mir_Mul_f32.tag = 7;
mir_Div_f32.tag = 8;
mir_LT_f32.tag = 9;
struct _global_Case* bd =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 23);
bd[0].name = _global_StringInit(7, "Add_i32");
bd[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[1].name = _global_StringInit(7, "Sub_i32");
bd[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[2].name = _global_StringInit(7, "Mul_i32");
bd[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[3].name = _global_StringInit(7, "Div_i32");
bd[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[4].name = _global_StringInit(6, "LT_i32");
bd[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[5].name = _global_StringInit(7, "Add_f32");
bd[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[6].name = _global_StringInit(7, "Sub_f32");
bd[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[7].name = _global_StringInit(7, "Mul_f32");
bd[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[8].name = _global_StringInit(7, "Div_f32");
bd[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[9].name = _global_StringInit(6, "LT_f32");
bd[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[10].name = _global_StringInit(9, "Store_i32");
bd[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[10].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_i32_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[10].args.data[0].offset = offsetof(struct mir_OpCode_Store_i32, field0);
bd[11].name = _global_StringInit(9, "Store_f32");
bd[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[11].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Float_get_type(NULL,(&_global_context))
,
&rFloatType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_FloatType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_FloatType_toString
, &_global_FloatType_get_size
)
; bd[11].args.data[0].offset = offsetof(struct mir_OpCode_Store_f32, field0);
bd[12].name = _global_StringInit(10, "Store_bool");
bd[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[12].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; bd[12].args.data[0].offset = offsetof(struct mir_OpCode_Store_bool, field0);
bd[13].name = _global_StringInit(6, "Create");
bd[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[13].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
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
; bd[13].args.data[0].offset = offsetof(struct mir_OpCode_Create, field0);
bd[14].name = _global_StringInit(4, "Read");
bd[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[14].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
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
; bd[14].args.data[0].offset = offsetof(struct mir_OpCode_Read, field0);
bd[15].name = _global_StringInit(6, "Assign");
bd[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[15].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
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
; bd[15].args.data[0].offset = offsetof(struct mir_OpCode_Assign, field0);
bd[16].name = _global_StringInit(7, "FuncArg");
bd[16].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[16].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[16].args.data[0].offset = offsetof(struct mir_OpCode_FuncArg, field0);
bd[16].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
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
; bd[16].args.data[1].offset = offsetof(struct mir_OpCode_FuncArg, field1);
bd[17].name = _global_StringInit(8, "FuncCall");
bd[17].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[17].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
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
; bd[17].args.data[0].offset = offsetof(struct mir_OpCode_FuncCall, field0);
bd[18].name = _global_StringInit(10, "FuncReturn");
bd[18].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[18].args.data[0].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; bd[18].args.data[0].offset = offsetof(struct mir_OpCode_FuncReturn, field0);
bd[19].name = _global_StringInit(8, "CondJump");
bd[19].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[19].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[19].args.data[0].offset = offsetof(struct mir_OpCode_CondJump, field0);
bd[19].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[19].args.data[1].offset = offsetof(struct mir_OpCode_CondJump, field1);
bd[20].name = _global_StringInit(4, "Jump");
bd[20].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[20].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[20].args.data[0].offset = offsetof(struct mir_OpCode_Jump, field0);
bd[21].name = _global_StringInit(9, "StringRef");
bd[21].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[21].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[21].args.data[0].offset = offsetof(struct mir_OpCode_StringRef, field0);
bd[22].name = _global_StringInit(10, "StringDecl");
bd[22].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[22].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[22].args.data[0].offset = offsetof(struct mir_OpCode_StringDecl, field0);
bd[22].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; bd[22].args.data[1].offset = offsetof(struct mir_OpCode_StringDecl, field1);
mir_OpCodeType.tag_field.name = _global_StringInit(3, "tag");

mir_OpCodeType.tag_field.offset = offsetof(struct mir_OpCode, tag);
mir_OpCodeType.tag_field.field_type = 
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

mir_OpCodeType.size = sizeof(struct mir_OpCode);

mir_OpCodeType.package = _global_StringInit(3, "mir");
mir_OpCodeType.name = _global_StringInit(6, "OpCode");
mir_OpCodeType.cases.data = bd;
mir_OpCodeType.cases.length = 23;
_global_Maybe_rmir_OpCodeType.p_type =
_global_TypeFromStruct(
mir_OpCode_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rmir_OpCodeType.nullable = 1;mir_BlockType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
mir_BlockType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_BlockType_fields
,2
);
mir_BlockType.package = _global_StringInit(3, "mir");
mir_BlockType.name = _global_StringInit(5, "Block");
mir_BlockType.size = sizeof(struct mir_Block);
mir_BlockType_fields[0].name = _global_StringInit(2, "id");
mir_BlockType_fields[0].offset = offsetof(struct mir_Block, id);
mir_BlockType_fields[0].field_type = 
_global_TypeFromStruct(
&mir_ID_Type
,
&rAliasType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_AliasType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
;
mir_BlockType_fields[1].name = _global_StringInit(4, "code");
mir_BlockType_fields[1].offset = offsetof(struct mir_Block, code);
mir_BlockType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_mir_OpCode_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rmir_BlockType.p_type =
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_BlockType.nullable = 1;mir_CFGType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
mir_CFGType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_CFGType_fields
,2
);
mir_CFGType.package = _global_StringInit(3, "mir");
mir_CFGType.name = _global_StringInit(3, "CFG");
mir_CFGType.size = sizeof(struct mir_CFG);
mir_CFGType_fields[0].name = _global_StringInit(9, "return_to");
mir_CFGType_fields[0].offset = offsetof(struct mir_CFG, return_to);
mir_CFGType_fields[0].field_type = 
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
mir_CFGType_fields[1].name = _global_StringInit(5, "block");
mir_CFGType_fields[1].offset = offsetof(struct mir_CFG, block);
mir_CFGType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Array_mir_CFGType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_CFGType.size->tag = 1;
_global_Array_mir_CFGType.array_type=
_global_TypeFromStruct(
mir_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rmir_CFGType.p_type =
_global_TypeFromStruct(
mir_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_CFGType.nullable = 1;_global_Array_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rmir_BlockType.size->tag = 1;
_global_Array_rmir_BlockType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
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
;_global_Maybe_rrmir_BlockType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
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
;
_global_Maybe_rrmir_BlockType.nullable = 1;_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;hashMap_HashBucket_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_uintType_fields
,2
);
hashMap_HashBucket_uintType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_uintType.name = _global_StringInit(15, "HashBucket_uint");
hashMap_HashBucket_uintType.size = sizeof(struct hashMap_HashBucket_uint);
hashMap_HashBucket_uintType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_uintType_fields[0].offset = offsetof(struct hashMap_HashBucket_uint, keys);
hashMap_HashBucket_uintType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_uintType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_uintType_fields[1].offset = offsetof(struct hashMap_HashBucket_uint, values);
hashMap_HashBucket_uintType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_uint_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_uintType_fields
,2
);
hashMap_HashMap_uintType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_uintType.name = _global_StringInit(12, "HashMap_uint");
hashMap_HashMap_uintType.size = sizeof(struct hashMap_HashMap_uint);
hashMap_HashMap_uintType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_uintType_fields[0].offset = offsetof(struct hashMap_HashMap_uint, buckets);
hashMap_HashMap_uintType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashMap_uintType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_uintType_fields[1].offset = offsetof(struct hashMap_HashMap_uint, length);
hashMap_HashMap_uintType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;mir_FuncScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
mir_FuncScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FuncScopeType_fields
,7
);
mir_FuncScopeType.package = _global_StringInit(3, "mir");
mir_FuncScopeType.name = _global_StringInit(9, "FuncScope");
mir_FuncScopeType.size = sizeof(struct mir_FuncScope);
mir_FuncScopeType_fields[0].name = _global_StringInit(11, "var_counter");
mir_FuncScopeType_fields[0].offset = offsetof(struct mir_FuncScope, var_counter);
mir_FuncScopeType_fields[0].field_type = 
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
mir_FuncScopeType_fields[1].name = _global_StringInit(4, "cfgs");
mir_FuncScopeType_fields[1].offset = offsetof(struct mir_FuncScope, cfgs);
mir_FuncScopeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_mir_CFG_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_FuncScopeType_fields[2].name = _global_StringInit(5, "block");
mir_FuncScopeType_fields[2].offset = offsetof(struct mir_FuncScope, block);
mir_FuncScopeType_fields[2].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
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
;
mir_FuncScopeType_fields[3].name = _global_StringInit(13, "block_counter");
mir_FuncScopeType_fields[3].offset = offsetof(struct mir_FuncScope, block_counter);
mir_FuncScopeType_fields[3].field_type = 
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
mir_FuncScopeType_fields[4].name = _global_StringInit(10, "all_blocks");
mir_FuncScopeType_fields[4].offset = offsetof(struct mir_FuncScope, all_blocks);
mir_FuncScopeType_fields[4].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_rmir_Block_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
mir_FuncScopeType_fields[5].name = _global_StringInit(4, "vars");
mir_FuncScopeType_fields[5].offset = offsetof(struct mir_FuncScope, vars);
mir_FuncScopeType_fields[5].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
mir_FuncScopeType_fields[6].name = _global_StringInit(8, "num_args");
mir_FuncScopeType_fields[6].offset = offsetof(struct mir_FuncScope, num_args);
mir_FuncScopeType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_rmir_FuncScopeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rmir_FuncScopeType.size->tag = 1;
_global_Array_rmir_FuncScopeType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_FuncScope_get_type(NULL,(&_global_context))
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
;_global_Maybe_rrmir_FuncScopeType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_FuncScope_get_type(NULL,(&_global_context))
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
;
_global_Maybe_rrmir_FuncScopeType.nullable = 1;_global_Array_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_FunctionType.size->tag = 1;
_global_Array_mir_FunctionType.array_type=
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_rmir_BlockType.size->tag = 2;
_global_StaticArray_StaticArray_S_rmir_BlockType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
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
;mir_FunctionType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_FunctionType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FunctionType_fields
,4
);
mir_FunctionType.package = _global_StringInit(3, "mir");
mir_FunctionType.name = _global_StringInit(8, "Function");
mir_FunctionType.size = sizeof(struct mir_Function);
mir_FunctionType_fields[0].name = _global_StringInit(4, "name");
mir_FunctionType_fields[0].offset = offsetof(struct mir_Function, name);
mir_FunctionType_fields[0].field_type = 
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
mir_FunctionType_fields[1].name = _global_StringInit(5, "_type");
mir_FunctionType_fields[1].offset = offsetof(struct mir_Function, _type);
mir_FunctionType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
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
;
mir_FunctionType_fields[2].name = _global_StringInit(10, "all_blocks");
mir_FunctionType_fields[2].offset = offsetof(struct mir_Function, all_blocks);
mir_FunctionType_fields[2].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_rmir_Block_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_FunctionType_fields[3].name = _global_StringInit(2, "id");
mir_FunctionType_fields[3].offset = offsetof(struct mir_Function, id);
mir_FunctionType_fields[3].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_rmir_FunctionType.p_type =
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_FunctionType.nullable = 1;mir_ConverterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_ConverterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ConverterType_fields
,4
);
mir_ConverterType.package = _global_StringInit(3, "mir");
mir_ConverterType.name = _global_StringInit(9, "Converter");
mir_ConverterType.size = sizeof(struct mir_Converter);
mir_ConverterType_fields[0].name = _global_StringInit(18, "global_var_counter");
mir_ConverterType_fields[0].offset = offsetof(struct mir_Converter, global_var_counter);
mir_ConverterType_fields[0].field_type = 
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
mir_ConverterType_fields[1].name = _global_StringInit(22, "string_literal_counter");
mir_ConverterType_fields[1].offset = offsetof(struct mir_Converter, string_literal_counter);
mir_ConverterType_fields[1].field_type = 
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
mir_ConverterType_fields[2].name = _global_StringInit(6, "scopes");
mir_ConverterType_fields[2].offset = offsetof(struct mir_Converter, scopes);
mir_ConverterType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Array_rmir_FuncScope_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_ConverterType_fields[3].name = _global_StringInit(9, "functions");
mir_ConverterType_fields[3].offset = offsetof(struct mir_Converter, functions);
mir_ConverterType_fields[3].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_mir_Function_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_StaticArray_S_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_mir_FunctionType.size->tag = 2;
_global_StaticArray_StaticArray_S_mir_FunctionType.array_type=
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;mir_ProgramType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
mir_ProgramType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ProgramType_fields
,1
);
mir_ProgramType.package = _global_StringInit(3, "mir");
mir_ProgramType.name = _global_StringInit(7, "Program");
mir_ProgramType.size = sizeof(struct mir_Program);
mir_ProgramType_fields[0].name = _global_StringInit(9, "functions");
mir_ProgramType_fields[0].offset = offsetof(struct mir_Program, functions);
mir_ProgramType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_mir_Function_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Maybe_rhashMap_HashBucket_uint_Type.p_type =
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashBucket_uint_Type.nullable = 1;_global_Array_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashBucket_uint_Type.size->tag = 1;
_global_Array_hashMap_HashBucket_uint_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; }
void mirInit() { 
;
ifValidationInit();;
;
;
;
;
};

void insertByIDInitTypes() { 
 
 }
void insertByIDInit() { 
;
};
void _global_memcpy_Maybe_string_(struct _global_Maybe_string* _global_target, struct _global_Maybe_string* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_Maybe_____Maybe_rmir_Block__(struct _global_Maybe_____Maybe_rmir_Block_* _global_target, struct _global_Maybe_____Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_memcpy_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_target, struct _global_Array_Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_reserve_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_memcpy_Maybe_rnone_(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_log_float(float _global_s, struct _global_Context* m);
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void _global_log_int(int _global_s, struct _global_Context* m);
struct _global_String interpreter_pop_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_append_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, struct _global_Maybe_string _global_value, struct _global_Context* m);
void _global_Array_reserve_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* m);
void _global_Array_append_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, struct _global_Maybe_____Maybe_rmir_Block_ _global_value, struct _global_Context* m);
void _global_Array_reserve_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void interpreter_log_impl_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void interpreter_log_impl_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void interpreter_log_impl_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* m);
void insertByID_insert_at_index_rnone(struct _global_Array_Maybe_rnone_* insertByID_arr, unsigned int insertByID_id, void* insertByID_data, struct _global_Context* m);
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_* _global_Array_op_get_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m);
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m);
void insertByID_insert_at_index_string(struct _global_Array_Maybe_string_* insertByID_arr, unsigned int insertByID_id, struct _global_String insertByID_data, struct _global_Context* m);
struct _global_Maybe_string* _global_Array_op_get_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string _global_self, struct _global_Context* m);

static inline struct _global_String _global_Maybe_unwrap_string(struct _global_Maybe_string*,struct _global_Context* m);

struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string,struct _global_Context* m);
void interpreter_push_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_String interpreter_value, struct _global_Context* m);
void** _global_Array_op_get_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_index, struct _global_Context* m);
void* _global_Maybe_expect_rnoneByValue(void* _global_self, struct _global_String _global_mesg, struct _global_Context* m);

static inline void* _global_Maybe_expect_rnone(void**,struct _global_String,struct _global_Context* m);

void* _global_Maybe_expect_rnoneByValue(void*,struct _global_String,struct _global_Context* m);
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* m);
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* m);
struct mir_Function* interpreter_pop_stack_rmir_Function(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
int interpreter_pop_under_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
int interpreter_pop_2_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* m);
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* m);
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* m);
float interpreter_pop_under_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
float interpreter_pop_2_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_Maybe_____Maybe_rmir_Block_* _global_Array_op_get_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_ _global_self, struct _global_Context* m);

static inline struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_(struct _global_Maybe_____Maybe_rmir_Block_*,struct _global_Context* m);

struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_,struct _global_Context* m);
void _global_Array_append_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Array_Maybe_rmir_Block_ _global_value, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_ _global_Array_pop_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Context* m);
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* m);
void insertByID_insert_at_index_rmir_Block(struct _global_Array_Maybe_rmir_Block_* insertByID_arr, unsigned int insertByID_id, struct mir_Block* insertByID_data, struct _global_Context* m);
void insertByID_insert_at_index_____Maybe_rmir_Block_(struct _global_Array_Maybe_____Maybe_rmir_Block__* insertByID_arr, unsigned int insertByID_id, struct _global_Array_Maybe_rmir_Block_ insertByID_data, struct _global_Context* m);
printerpreter_Interpreterp___none* _global_StaticArray_op_get_3_printerpreter_Interpreterp___none(struct _global_StaticArray_3_printerpreter_Interpreterp___none* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_append_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, void* _global_value, struct _global_Context* m);
void* interpreter_pop_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* m){;
;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-interpreter_size;;
;return _global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m);
;}
void* interpreter_push_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* m){;
;
;return _global_TemporaryStorage_alloc(&((interpreter_self)->stack),interpreter_size,m);
;}
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_float(interpreter_state,m);
;}
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_int(interpreter_state,m);
;}
void interpreter_log_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_string(interpreter_state,m);
;}
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_TemporaryStorage* interpreter_local_var_stack, struct _global_Array_rnone* interpreter_local_args, struct _global_Context* m){;
;
;
;
struct _global_Array_mir_OpCode n =*((interpreter_block)->code);
for (unsigned int p = 0;p < n.length; p++) {
struct mir_OpCode interpreter_inst;interpreter_inst = *_global_Array_op_get_mir_OpCode(&n, p, m);
;unsigned int interpreter_i;interpreter_i = p;
struct mir_OpCode q =interpreter_inst;if(q.tag==16){unsigned int interpreter_id = q.cases.FuncArg.field0;
struct mir_ReadInfo* interpreter_read_info = q.cases.FuncArg.field1;

unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(interpreter_local_var_stack,(uint64_t)interpreter_size,m);;
_global_Array_append_rnone(interpreter_local_args,interpreter_ptr_to_var,m);
;}
else if(q.tag==13){struct mir_ReadInfo* interpreter_read_info = q.cases.Create.field0;

unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(interpreter_local_var_stack,(uint64_t)interpreter_size,m);;
if((interpreter_read_info)->is_global){;
insertByID_insert_at_index_rnone(&((interpreter_self)->var_ptr),(interpreter_read_info)->id,interpreter_ptr_to_var,m);
;}
else{_global_Array_append_rnone(interpreter_local_args,interpreter_ptr_to_var,m);
_global_assert(((interpreter_local_args)->length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),m);
;};
;}
else if(q.tag==19){unsigned int interpreter_a = q.cases.CondJump.field0;
unsigned int interpreter_b = q.cases.CondJump.field1;

_Bool interpreter_cond;interpreter_cond = interpreter_pop_stack_bool(interpreter_self,m);;
return *(_global_Array_op_get_Maybe_rmir_Block_(&(*(_global_Array_op_get_____Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)((interpreter_self)->blocks).length-1,m))),(unsigned int)(interpreter_cond ? interpreter_a:(interpreter_b)),m));
;
;}
else if(q.tag==20){unsigned int interpreter_a = q.cases.Jump.field0;

return *(_global_Array_op_get_Maybe_rmir_Block_(&(*(_global_Array_op_get_____Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)((interpreter_self)->blocks).length-1,m))),(unsigned int)interpreter_a,m));
;
;}
else if(q.tag==22){unsigned int interpreter_id = q.cases.StringDecl.field0;
struct _global_String interpreter_str = q.cases.StringDecl.field1;

insertByID_insert_at_index_string(&((interpreter_self)->string_literals),interpreter_id,interpreter_str,m);
;}
else if(q.tag==21){unsigned int interpreter_id = q.cases.StringRef.field0;

interpreter_push_stack_string(interpreter_self,_global_Maybe_unwrap_stringByValue(*(_global_Array_op_get_Maybe_string_(&((interpreter_self)->string_literals),(unsigned int)interpreter_id,m)),m),m);
;}
else if(q.tag==15){struct mir_ReadInfo* interpreter_read_info = q.cases.Assign.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? _global_Maybe_expect_rnoneByValue(*(_global_Array_op_get_Maybe_rnone_(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,m)),_global_StringInit(32,"Could not assign global variable"),m):(*(_global_Array_op_get_rnone((struct _global_Array_rnone*)interpreter_local_args,(unsigned int)(interpreter_read_info)->id,m))));;
unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_set_to;interpreter_set_to = interpreter_pop_dynamic(interpreter_self,(uint64_t)interpreter_size,m);;
_global_memcpy_none(interpreter_ptr_to_var,interpreter_set_to,interpreter_size,m);
if(interpreter_i>0){;
struct mir_OpCode r =*(_global_Array_op_get_mir_OpCode((struct _global_Array_mir_OpCode*)(interpreter_block)->code,(unsigned int)interpreter_i-1,m));if(r.tag==16){unsigned int interpreter_id = r.cases.FuncArg.field0;
struct mir_ReadInfo* interpreter_name = r.cases.FuncArg.field1;

if(interpreter_id==0){;
interpreter_pop_stack_rmir_Function(interpreter_self,m);
;};
;}
else if(1){
;}
;
;};
;}
else if(q.tag==14){struct mir_ReadInfo* interpreter_read_info = q.cases.Read.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? _global_Maybe_expect_rnoneByValue(*(_global_Array_op_get_Maybe_rnone_(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,m)),_global_StringInit(30,"Could not read global variable"),m):(*(_global_Array_op_get_rnone((struct _global_Array_rnone*)interpreter_local_args,(unsigned int)(interpreter_read_info)->id,m))));;
unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr;interpreter_ptr = interpreter_push_dynamic(interpreter_self,(uint64_t)interpreter_size,m);;
_global_memcpy_none(interpreter_ptr,interpreter_ptr_to_var,interpreter_size,m);
;}
else if(q.tag==4){
interpreter_push_stack_bool(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))<(interpreter_pop_2_stack_int(interpreter_self,m)),m);
;}
else if(q.tag==0){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,m))+interpreter_pop_stack_int(interpreter_self,m),m);
;}
else if(q.tag==1){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))-interpreter_pop_2_stack_int(interpreter_self,m),m);
;}
else if(q.tag==2){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,m))*interpreter_pop_stack_int(interpreter_self,m),m);
;}
else if(q.tag==3){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))/interpreter_pop_2_stack_int(interpreter_self,m),m);
;}
else if(q.tag==17){struct types_FuncPtr* interpreter_func_ptr_type = q.cases.FuncCall.field0;

unsigned int interpreter_size_of_args;interpreter_size_of_args = sizeof(pp___none);;
struct _global_StaticArray_StaticArray_S_types_CompilerType s =(interpreter_func_ptr_type)->args;
for (unsigned int t = 0;t < s.length; t++) {
struct types_CompilerType interpreter_arg;interpreter_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&s, t, m);
;interpreter_size_of_args = interpreter_size_of_args+mir_calc_size(interpreter_arg,m);;
}
;
if((interpreter_func_ptr_type)->external){;
printerpreter_Interpreterp___none interpreter_func_ptr;interpreter_func_ptr = *((printerpreter_Interpreterp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,m)));;
interpreter_func_ptr(interpreter_self,m);
;}
else{struct mir_Function* interpreter_func_ptr;interpreter_func_ptr = *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,m)));;
interpreter_Interpreter_exec_function(interpreter_self,interpreter_func_ptr,m);
;};
;}
else if(q.tag==18){struct types_CompilerType interpreter_typ = q.cases.FuncReturn.field0;

return NULL;
;
;}
else if(q.tag==5){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,m))+interpreter_pop_stack_float(interpreter_self,m),m);
;}
else if(q.tag==6){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))-interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==7){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,m))*interpreter_pop_stack_float(interpreter_self,m),m);
;}
else if(q.tag==8){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))/interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==9){
interpreter_push_stack_bool(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))<interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==10){int32_t interpreter_num = q.cases.Store_i32.field0;

interpreter_push_stack_int(interpreter_self,(int)interpreter_num,m);
;}
else if(q.tag==11){float interpreter_num = q.cases.Store_f32.field0;

interpreter_push_stack_float(interpreter_self,interpreter_num,m);
;}
else if(q.tag==12){_Bool interpreter_b = q.cases.Store_bool.field0;

interpreter_push_stack_bool(interpreter_self,interpreter_b,m);
;}
;
}
;
;return NULL;
;}
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* m){;
;
struct _global_TemporaryStorage* n = &((interpreter_self)->var_stack);
uint64_t p = _global_TemporaryStorage_get_occupied(&((interpreter_self)->var_stack),m);
;
struct _global_Array_rnone interpreter_local_args;interpreter_local_args = _global_Array_rnoneInit(0, 0, NULL, NULL);;
struct mir_Block* interpreter_block;interpreter_block = *(_global_StaticArray_op_get_StaticArray_S_rmir_Block(&((interpreter_func)->all_blocks),(unsigned int)0,m));;
_global_Array_append_____Maybe_rmir_Block_(&((interpreter_self)->blocks),_global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(*(_global_Array_op_get_Maybe_____Maybe_rmir_Block__(&((interpreter_self)->all_blocks),(unsigned int)(interpreter_func)->id,m)),m),m);
;while(1){struct mir_Block* q =interpreter_Interpreter_exec_block(interpreter_self,interpreter_block,&((interpreter_self)->var_stack),&(interpreter_local_args),m);if(q != NULL){struct mir_Block* interpreter_next_block = q;

interpreter_block = interpreter_next_block;;
;}
else if(1){
break;;
;}
;};
_global_Array_pop_____Maybe_rmir_Block_(&((interpreter_self)->blocks),m);
_global_TemporaryStorage_reset_to(n,p,m);
;}
void interpreter_Interpreter_set_functions(struct interpreter_Interpreter* interpreter_self, struct mir_Program* interpreter_ir, struct _global_Context* m){;
;
struct _global_Range n =_global_RangeInit(0,((interpreter_ir)->functions).length);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int interpreter_i;interpreter_i = p;
;struct mir_Function* interpreter_func;interpreter_func = &(*(_global_StaticArray_op_get_StaticArray_S_mir_Function(&((interpreter_ir)->functions),(unsigned int)interpreter_i,m)));;
struct mir_Function** interpreter_func_ptr;interpreter_func_ptr = (struct mir_Function**)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(struct mir_Function*),m));;
*(interpreter_func_ptr) = interpreter_func;;
insertByID_insert_at_index_rnone(&((interpreter_self)->var_ptr),(interpreter_func)->id,(void*)interpreter_func_ptr,m);
struct _global_Array_Maybe_rmir_Block_ interpreter_blocks;interpreter_blocks = _global_Array_Maybe_rmir_Block_Init(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_rmir_Block q =(interpreter_func)->all_blocks;
for (unsigned int r = 0;r < q.length; r++) {
struct mir_Block* interpreter_block;interpreter_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&q, r, m);
;insertByID_insert_at_index_rmir_Block(&(interpreter_blocks),(interpreter_block)->id,interpreter_block,m);
}
;
insertByID_insert_at_index_____Maybe_rmir_Block_(&((interpreter_self)->all_blocks),(interpreter_func)->id,interpreter_blocks,m);
}
;
;}
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* m){;
struct _global_Array_Maybe_____Maybe_rmir_Block__ interpreter_all_blocks;interpreter_all_blocks = _global_Array_Maybe_____Maybe_rmir_Block__Init(0, 0, NULL, NULL);;
struct interpreter_Interpreter interpreter_i;interpreter_i = interpreter_InterpreterInit(_global_Array_Maybe_string_Init(0, 0, NULL, NULL),_global_Array_Maybe_rnone_Init(0, 0, NULL, NULL),_global_new_TemporaryStorage((uint64_t)10000,m),_global_new_TemporaryStorage((uint64_t)100000,m),_global_Array_____Maybe_rmir_Block_Init(0, 0, NULL, NULL),interpreter_all_blocks);;
struct _global_StaticArray_3_printerpreter_Interpreterp___none interpreter_ptr_to_func;interpreter_ptr_to_func = _global_StaticArray_3_printerpreter_Interpreterp___noneInit(interpreter_log_int,interpreter_log_float,interpreter_log_string);;
struct _global_Range n =_global_RangeInit(0,3);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int interpreter_c;interpreter_c = p;
;_global_Array_append_Maybe_rnone_(&((interpreter_i).var_ptr),(void*)(&(*(_global_StaticArray_op_get_3_printerpreter_Interpreterp___none(&(interpreter_ptr_to_func),(unsigned int)interpreter_c,m)))),m);
}
;
struct _global_TemporaryStorage* q = &((interpreter_i).stack);
;
struct _global_TemporaryStorage* r = &((interpreter_i).var_stack);
;
interpreter_Interpreter_set_functions(&(interpreter_i),&(interpreter_ir),m);
interpreter_Interpreter_exec_function(&(interpreter_i),*(((struct mir_Function**)*(_global_Array_op_get_Maybe_rnone_(&((interpreter_i).var_ptr),(unsigned int)3,m)))),m);
_global_TemporaryStorage_free_allocator(q,m);
_global_TemporaryStorage_free_allocator(r,m);
;}
void _global_memcpy_Maybe_string_(struct _global_Maybe_string* _global_target, struct _global_Maybe_string* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_string),m);
;}
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),m);
;}
void _global_memcpy_Maybe_____Maybe_rmir_Block__(struct _global_Maybe_____Maybe_rmir_Block_* _global_target, struct _global_Maybe_____Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m);
;}
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),m);
;}

static inline struct _global_Maybe_string* tmpinterpreterS(struct _global_Array_Maybe_string_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Maybe_string* n =(*_global_self)->data;
if(n != NULL){struct _global_Maybe_string* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Maybe_string* _global_newData;_global_newData = (struct _global_Maybe_string*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_string),m));;
_global_memcpy_Maybe_string_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Maybe_string*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_string),m));}
}
void _global_Array_reserve_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterS(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_memcpy_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_target, struct _global_Array_Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Array_Maybe_rmir_Block_),m);
;}

static inline struct mir_Block** tmpinterpreterT(struct _global_Array_Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct mir_Block** n =(*_global_self)->data;
if(n != NULL){struct mir_Block** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),m));;
_global_memcpy_Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),m));}
}
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterT(&_global_self,&_global_newSize,&_global_allocator, m);;
;}

static inline struct _global_Maybe_____Maybe_rmir_Block_* tmpinterpreterV(struct _global_Array_Maybe_____Maybe_rmir_Block__** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Maybe_____Maybe_rmir_Block_* n =(*_global_self)->data;
if(n != NULL){struct _global_Maybe_____Maybe_rmir_Block_* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Maybe_____Maybe_rmir_Block_* _global_newData;_global_newData = (struct _global_Maybe_____Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m));;
_global_memcpy_Maybe_____Maybe_rmir_Block__(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Maybe_____Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m));}
}
void _global_Array_reserve_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterV(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_memcpy_Maybe_rnone_(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),m);
;}
void _global_log_float(float _global_s, struct _global_Context* m){;
_global_c_log(_global_Float_toString(&(_global_s),m),m);
;}
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(pp___none),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(pp___none);;
;return *((pp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void _global_log_int(int _global_s, struct _global_Context* m){;
_global_c_log(_global_int_toString(&(_global_s),m),m);
;}
struct _global_String interpreter_pop_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(struct _global_String),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(struct _global_String);;
;return *((struct _global_String*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}

static inline void** tmpinterpreterW(struct _global_Array_rnone** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
void** n =(*_global_self)->data;
if(n != NULL){void** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));;
_global_memcpy_rnone(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));}
}
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterW(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_Array_append_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, struct _global_Maybe_string _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_string_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_string_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Maybe_string*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

static inline struct _global_Array_Maybe_rmir_Block_* tmpinterpreterX(struct _global_Array_____Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Array_Maybe_rmir_Block_* n =(*_global_self)->data;
if(n != NULL){struct _global_Array_Maybe_rmir_Block_* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Array_Maybe_rmir_Block_* _global_newData;_global_newData = (struct _global_Array_Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_Maybe_rmir_Block_),m));;
_global_memcpy_____Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Array_Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_Maybe_rmir_Block_),m));}
}
void _global_Array_reserve_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterX(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rmir_Block_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct mir_Block**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, struct _global_Maybe_____Maybe_rmir_Block_ _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_____Maybe_rmir_Block__(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_____Maybe_rmir_Block__(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Maybe_____Maybe_rmir_Block_*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

static inline void** tmpinterpreterY(struct _global_Array_Maybe_rnone_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
void** n =(*_global_self)->data;
if(n != NULL){void** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));;
_global_memcpy_Maybe_rnone_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));}
}
void _global_Array_reserve_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterY(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void interpreter_log_impl_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_float(interpreter_pop_stack_float(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void interpreter_log_impl_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_int(interpreter_pop_stack_int(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void interpreter_log_impl_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_string(interpreter_pop_stack_string(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rnone(_global_self,1,m);
;}
else{_global_Array_reserve_rnone(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((void**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void insertByID_insert_at_index_rnone(struct _global_Array_Maybe_rnone_* insertByID_arr, unsigned int insertByID_id, void* insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_rnone_(insertByID_arr,NULL,m);
}
;
;};
*(_global_Array_op_get_Maybe_rnone_((struct _global_Array_Maybe_rnone_*)insertByID_arr,(unsigned int)insertByID_id,m)) = insertByID_data;;
;}
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(_Bool),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(_Bool);;
;return *((_Bool*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
struct _global_Array_Maybe_rmir_Block_* _global_Array_op_get_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Array_Maybe_rmir_Block_*)(_global_self)->data + (int64_t)_global_index);
;}
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct mir_Block**)(_global_self)->data + (int64_t)_global_index);
;}
static inline struct _global_Maybe_string tmpinterpreterZ(struct _global_Maybe_Maybe_T r) {
struct _global_Maybe_string q;q.tag = r.tag;q.cases = *(union _global_Maybe_string_cases*) &(r.cases);return q;
}
void insertByID_insert_at_index_string(struct _global_Array_Maybe_string_* insertByID_arr, unsigned int insertByID_id, struct _global_String insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_string_(insertByID_arr,tmpinterpreterZ(_global_None),m);
}
;
;};
*(_global_Array_op_get_Maybe_string_((struct _global_Array_Maybe_string_*)insertByID_arr,(unsigned int)insertByID_id,m)) = _global_Some_string(insertByID_data,m);;
;}
struct _global_Maybe_string* _global_Array_op_get_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Maybe_string*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string _global_self, struct _global_Context* m){;
struct _global_String _global_x;;
struct _global_Maybe_string n =_global_self;if(n.tag==0){_global_x = n.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),m);
;}
;
;return _global_x;
;}
static inline struct _global_String _global_Maybe_unwrap_string(struct _global_Maybe_string* p,struct _global_Context* m){
return _global_Maybe_unwrap_stringByValue(*p,m);
}void interpreter_push_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_String interpreter_value, struct _global_Context* m){;
;
struct _global_String* interpreter_ptr;interpreter_ptr = (struct _global_String*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(struct _global_String),m));;
*(interpreter_ptr) = interpreter_value;;
;}
void** _global_Array_op_get_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((void**)(_global_self)->data + (int64_t)_global_index);
;}
void* _global_Maybe_expect_rnoneByValue(void* _global_self, struct _global_String _global_mesg, struct _global_Context* m){;
;
void* _global_x;;
void* n =_global_self;if(n != NULL){_global_x = n;

;}
else if(1){
_global_panic(_global_mesg,m);
;}
;
;return _global_x;
;}
static inline void* _global_Maybe_expect_rnone(void** p,struct _global_String q,struct _global_Context* m){
return _global_Maybe_expect_rnoneByValue(*p,q,m);
}void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((void**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy(_global_target,_global_destination,(uint64_t)_global_length*sizeof(void),m);
;}
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct mir_OpCode*)(_global_self)->data + (int64_t)_global_index);
;}
struct mir_Function* interpreter_pop_stack_rmir_Function(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(struct mir_Function*),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(struct mir_Function*);;
;return *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
int interpreter_pop_under_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(int),m)));
;}
int interpreter_pop_2_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)2*sizeof(int),_global_StringInit(18,"Popped empty stack"),m);
int* interpreter_ptr;interpreter_ptr = (int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)sizeof(int),m));;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(int);;
;return *(interpreter_ptr);
;}
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* m){;
;
_Bool* interpreter_ptr;interpreter_ptr = (_Bool*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(_Bool),m));;
*(interpreter_ptr) = interpreter_value;;
;}
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(int),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(int);;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* m){;
;
int* interpreter_ptr;interpreter_ptr = (int*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int),m));;
*(interpreter_ptr) = interpreter_value;;
;}
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(float),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(float);;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* m){;
;
float* interpreter_ptr;interpreter_ptr = (float*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(float),m));;
*(interpreter_ptr) = interpreter_value;;
;}
float interpreter_pop_under_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(float),m)));
;}
float interpreter_pop_2_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)2*sizeof(float),_global_StringInit(18,"Popped empty stack"),m);
float* interpreter_ptr;interpreter_ptr = (float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)sizeof(float),m));;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(float);;
;return *(interpreter_ptr);
;}
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_Maybe_____Maybe_rmir_Block_* _global_Array_op_get_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Maybe_____Maybe_rmir_Block_*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_ _global_self, struct _global_Context* m){;
struct _global_Array_Maybe_rmir_Block_ _global_x;;
struct _global_Maybe_____Maybe_rmir_Block_ n =_global_self;if(n.tag==0){_global_x = n.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),m);
;}
;
;return _global_x;
;}
static inline struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_(struct _global_Maybe_____Maybe_rmir_Block_* p,struct _global_Context* m){
return _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(*p,m);
}void _global_Array_append_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Array_Maybe_rmir_Block_ _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_____Maybe_rmir_Block_(_global_self,1,m);
;}
else{_global_Array_reserve_____Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Array_Maybe_rmir_Block_*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_Array_Maybe_rmir_Block_ _global_Array_pop_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Context* m){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),m);
;};
struct _global_Array_Maybe_rmir_Block_ _global_tmp;_global_tmp = *(_global_Array_op_get_____Maybe_rmir_Block_(_global_self,(unsigned int)(_global_self)->length-1,m));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void insertByID_insert_at_index_rmir_Block(struct _global_Array_Maybe_rmir_Block_* insertByID_arr, unsigned int insertByID_id, struct mir_Block* insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_rmir_Block_(insertByID_arr,NULL,m);
}
;
;};
*(_global_Array_op_get_Maybe_rmir_Block_((struct _global_Array_Maybe_rmir_Block_*)insertByID_arr,(unsigned int)insertByID_id,m)) = insertByID_data;;
;}
static inline struct _global_Maybe_____Maybe_rmir_Block_ tmpinterpreterbb(struct _global_Maybe_Maybe_T r) {
struct _global_Maybe_____Maybe_rmir_Block_ q;q.tag = r.tag;q.cases = *(union _global_Maybe_____Maybe_rmir_Block__cases*) &(r.cases);return q;
}
void insertByID_insert_at_index_____Maybe_rmir_Block_(struct _global_Array_Maybe_____Maybe_rmir_Block__* insertByID_arr, unsigned int insertByID_id, struct _global_Array_Maybe_rmir_Block_ insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_____Maybe_rmir_Block__(insertByID_arr,tmpinterpreterbb(_global_None),m);
}
;
;};
*(_global_Array_op_get_Maybe_____Maybe_rmir_Block__((struct _global_Array_Maybe_____Maybe_rmir_Block__*)insertByID_arr,(unsigned int)insertByID_id,m)) = _global_Some_____Maybe_rmir_Block_(insertByID_data,m);;
;}
printerpreter_Interpreterp___none* _global_StaticArray_op_get_3_printerpreter_Interpreterp___none(struct _global_StaticArray_3_printerpreter_Interpreterp___none* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<3,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, void* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rnone_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_rnone_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((void**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

void interpreterInitTypes() { 
 insertByIDInitTypes();
_global_Array_Maybe_string_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_string_Type.size->tag = 1;
_global_Array_Maybe_string_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_string_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;struct _global_Case* g =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
g[0].name = _global_StringInit(4, "Some");
g[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
g[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; g[0].args.data[0].offset = offsetof(struct _global_Maybe_string_Some, field0);
g[1].name = _global_StringInit(4, "None");
g[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_stringType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_stringType.tag_field.offset = offsetof(struct _global_Maybe_string, tag);
_global_Maybe_stringType.tag_field.field_type = 
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

_global_Maybe_stringType.size = sizeof(struct _global_Maybe_string);

_global_Maybe_stringType.package = _global_StringInit(7, "_global");
_global_Maybe_stringType.name = _global_StringInit(12, "Maybe_string");
_global_Maybe_stringType.cases.data = g;
_global_Maybe_stringType.cases.length = 2;
_global_Maybe_rMaybe_string_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_string_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_string_Type.nullable = 1;_global_Array_Maybe_rnone_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_rnone_Type.size->tag = 1;
_global_Array_Maybe_rnone_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_rnone_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rMaybe_rnone_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_rnone_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rMaybe_rnone_Type.nullable = 1;_global_Array_____Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_____Maybe_rmir_Block_Type.size->tag = 1;
_global_Array_____Maybe_rmir_Block_Type.array_type=
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_rmir_Block_Type.size->tag = 1;
_global_Array_Maybe_rmir_Block_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rMaybe_rmir_Block_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rMaybe_rmir_Block_Type.nullable = 1;_global_Maybe_r____Maybe_rmir_Block_Type.p_type =
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_Maybe_r____Maybe_rmir_Block_Type.nullable = 1;_global_Array_Maybe_____Maybe_rmir_Block__Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_____Maybe_rmir_Block__Type.size->tag = 1;
_global_Array_Maybe_____Maybe_rmir_Block__Type.array_type=
_global_TypeFromStruct(
_global_Maybe_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;struct _global_Case* r =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
r[0].name = _global_StringInit(4, "Some");
r[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
r[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; r[0].args.data[0].offset = offsetof(struct _global_Maybe_____Maybe_rmir_Block__Some, field0);
r[1].name = _global_StringInit(4, "None");
r[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_____Maybe_rmir_Block_Type.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_____Maybe_rmir_Block_Type.tag_field.offset = offsetof(struct _global_Maybe_____Maybe_rmir_Block_, tag);
_global_Maybe_____Maybe_rmir_Block_Type.tag_field.field_type = 
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

_global_Maybe_____Maybe_rmir_Block_Type.size = sizeof(struct _global_Maybe_____Maybe_rmir_Block_);

_global_Maybe_____Maybe_rmir_Block_Type.package = _global_StringInit(7, "_global");
_global_Maybe_____Maybe_rmir_Block_Type.name = _global_StringInit(27, "Maybe_____Maybe_rmir_Block_");
_global_Maybe_____Maybe_rmir_Block_Type.cases.data = r;
_global_Maybe_____Maybe_rmir_Block_Type.cases.length = 2;
_global_Maybe_rMaybe_____Maybe_rmir_Block__Type.p_type =
_global_TypeFromStruct(
_global_Maybe_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_____Maybe_rmir_Block__Type.nullable = 1;interpreter_InterpreterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 6);
interpreter_InterpreterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
interpreter_InterpreterType_fields
,6
);
interpreter_InterpreterType.package = _global_StringInit(11, "interpreter");
interpreter_InterpreterType.name = _global_StringInit(11, "Interpreter");
interpreter_InterpreterType.size = sizeof(struct interpreter_Interpreter);
interpreter_InterpreterType_fields[0].name = _global_StringInit(15, "string_literals");
interpreter_InterpreterType_fields[0].offset = offsetof(struct interpreter_Interpreter, string_literals);
interpreter_InterpreterType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_string__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[1].name = _global_StringInit(7, "var_ptr");
interpreter_InterpreterType_fields[1].offset = offsetof(struct interpreter_Interpreter, var_ptr);
interpreter_InterpreterType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rnone__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[2].name = _global_StringInit(5, "stack");
interpreter_InterpreterType_fields[2].offset = offsetof(struct interpreter_Interpreter, stack);
interpreter_InterpreterType_fields[2].field_type = 
_global_TypeFromStruct(
_global_TemporaryStorage_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
interpreter_InterpreterType_fields[3].name = _global_StringInit(9, "var_stack");
interpreter_InterpreterType_fields[3].offset = offsetof(struct interpreter_Interpreter, var_stack);
interpreter_InterpreterType_fields[3].field_type = 
_global_TypeFromStruct(
_global_TemporaryStorage_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
interpreter_InterpreterType_fields[4].name = _global_StringInit(6, "blocks");
interpreter_InterpreterType_fields[4].offset = offsetof(struct interpreter_Interpreter, blocks);
interpreter_InterpreterType_fields[4].field_type = 
_global_TypeFromStruct(
_global_Array_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[5].name = _global_StringInit(10, "all_blocks");
interpreter_InterpreterType_fields[5].offset = offsetof(struct interpreter_Interpreter, all_blocks);
interpreter_InterpreterType_fields[5].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_____Maybe_rmir_Block___get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_rnoneType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rnoneType.size->tag = 1;
_global_Array_rnoneType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rrnoneType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rrnoneType.nullable = 1;_global_StaticArray_3_printerpreter_Interpreterp___noneType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_3_printerpreter_Interpreterp___noneType.size->tag = 0;
_global_StaticArray_3_printerpreter_Interpreterp___noneType.size->cases.Static.field0 = 3;
_global_StaticArray_3_printerpreter_Interpreterp___noneType.array_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; }
void interpreterInit() { 
insertByIDInit();;
;
;
};
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_llvm_LLVMTypeRef(LLVMTypeRef* _global_target, LLVMTypeRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_Maybe_llvm_LLVMValueRef_(struct _global_Maybe_llvm_LLVMValueRef* _global_target, struct _global_Maybe_llvm_LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* G);
void _global_Array_append_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, LLVMTypeRef _global_value, struct _global_Context* G);
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* G);
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* G);
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* G);
void _global_Array_append_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, struct _global_Maybe_llvm_LLVMValueRef _global_value, struct _global_Context* G);
void insertByID_insert_at_index_llvm_LLVMValueRef(struct _global_Array_Maybe_llvm_LLVMValueRef_* insertByID_arr, unsigned int insertByID_id, LLVMValueRef insertByID_data, struct _global_Context* G);
void insertByID_insert_at_index_llvm_LLVMBasicBlockRef(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* insertByID_arr, unsigned int insertByID_id, LLVMBasicBlockRef insertByID_data, struct _global_Context* G);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* G);
LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_String _global_mesg, struct _global_Context* G);

static inline LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef*,struct _global_String,struct _global_Context* G);

LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef,struct _global_String,struct _global_Context* G);
struct _global_Maybe_llvm_LLVMValueRef* _global_Array_op_get_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_index, struct _global_Context* G);
LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef _global_self, struct _global_Context* G);

static inline LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRef(struct _global_Maybe_llvm_LLVMValueRef*,struct _global_Context* G);

LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef,struct _global_Context* G);
LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* G);
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* G);
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* G);

#define llvm__llvmModuleCreateWithName(G,H) LLVMModuleCreateWithName(G)
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* J){;
;return llvm__llvmModuleCreateWithName(_global_String_to_c_stringByValue(llvm_name,J),J);
;}

#define llvm_llvmInt1Type(J) LLVMInt1Type()

#define llvm_llvmInt8Type(K) LLVMInt8Type()

#define llvm_llvmInt32Type(L) LLVMInt32Type()

#define llvm_llvmFloatType(M) LLVMFloatType()

#define llvm_llvmVoidType(N) LLVMVoidType()

#define llvm__llvmFunctionType(P,Q,R,S,T) LLVMFunctionType(P,Q,R,S)
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* V){;
;
;return llvm__llvmFunctionType(llvm_return_type,(llvm_args).data,(llvm_args).length,0,V);
;}

#define llvm__llvmAppendBasicBlock(V,W,X) LLVMAppendBasicBlock(V,W)
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* Y){;
;
;return llvm__llvmAppendBasicBlock(llvm_sum,_global_String_to_c_stringByValue(llvm_name,Y),Y);
;}

#define llvm_llvmCreateBuilder(Y) LLVMCreateBuilder()

#define llvm_llvmPositionBuilderAtEnd(Z,bb,bc) LLVMPositionBuilderAtEnd(Z,bb)

#define llvm__llvmBuildAdd(bd,bf,bg,bh,bj) LLVMBuildAdd(bd,bf,bg,bh)
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bk){;
;
;
;
;return llvm__llvmBuildAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bk),bk);
;}

#define llvm__llvmBuildSub(bk,bl,bm,bn,bp) LLVMBuildSub(bk,bl,bm,bn)
LLVMValueRef llvm_llvmBuildSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bq){;
;
;
;
;return llvm__llvmBuildSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bq),bq);
;}

#define llvm__llvmBuildMul(bq,br,bs,bt,bv) LLVMBuildMul(bq,br,bs,bt)
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bw){;
;
;
;
;return llvm__llvmBuildMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bw),bw);
;}

#define llvm__llvmBuildDiv(bw,bx,by,bz,bB) LLVMBuildSDiv(bw,bx,by,bz)
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bC){;
;
;
;
;return llvm__llvmBuildDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bC),bC);
;}

#define llvm__llvmBuildFAdd(bC,bD,bF,bG,bH) LLVMBuildFAdd(bC,bD,bF,bG)
LLVMValueRef llvm_llvmBuildFAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bJ){;
;
;
;
;return llvm__llvmBuildFAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bJ),bJ);
;}

#define llvm_llvmGetParam(bJ,bK,bL) LLVMGetParam(bJ,bK)

#define llvm__llvmBuildFSub(bM,bN,bP,bQ,bR) LLVMBuildFSub(bM,bN,bP,bQ)
LLVMValueRef llvm_llvmBuildFSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bS){;
;
;
;
;return llvm__llvmBuildFSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bS),bS);
;}

#define llvm__llvmBuildFMul(bS,bT,bV,bW,bX) LLVMBuildFMul(bS,bT,bV,bW)
LLVMValueRef llvm_llvmBuildFMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bY){;
;
;
;
;return llvm__llvmBuildFMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bY),bY);
;}

#define llvm__llvmBuildFDiv(bY,bZ,cb,db,fb) LLVMBuildFDiv(bY,bZ,cb,db)
LLVMValueRef llvm_llvmBuildFDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* gb){;
;
;
;
;return llvm__llvmBuildFDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,gb),gb);
;}

#define llvm_llvmConstInt(gb,hb,jb,kb) LLVMConstInt(gb,hb,jb)

#define llvm_llvmConstReal(lb,mb,nb) LLVMConstReal(lb,mb)

#define llvm_llvmBuildRetVoid(pb,qb) LLVMBuildRetVoid(pb)

#define llvm_llvmBuildRet(rb,sb,tb) LLVMBuildRet(rb,sb)

#define llvm_llvmBuildBr(vb,wb,xb) LLVMBuildBr(vb,wb)

#define llvm_llvmBuildCondBr(yb,zb,Bb,Cb,Db) LLVMBuildCondBr(yb,zb,Bb,Cb)

#define llvm__llvmAddFunction(Fb,Gb,Hb,Jb) LLVMAddFunction(Fb,Gb,Hb)
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* Kb){;
;
;
;return llvm__llvmAddFunction(llvm_mod,_global_String_to_c_stringByValue(llvm_name,Kb),llvm_ret,Kb);
;}

#define llvm_llvmVerifyModule(Kb,Lb,Mb,Nb) LLVMVerifyModule(Kb,Lb,Mb)

#define llvm_llvmDisposeMessage(Pb,Qb) LLVMDisposeMessage(Pb)

#define llvm_llvmAbortProcessAction LLVMAbortProcessAction

#define llvm__llvmAddGlobal(Rb,Sb,Tb,Vb) LLVMAddGlobal(Rb,Sb,Tb)
LLVMValueRef llvm_llvmAddGlobal(LLVMModuleRef llvm_mod, LLVMTypeRef llvm_typ, struct _global_String llvm_s, struct _global_Context* Wb){;
;
;
;return llvm__llvmAddGlobal(llvm_mod,llvm_typ,_global_String_to_c_stringByValue(llvm_s,Wb),Wb);
;}

#define llvm_llvmBuildStore(Wb,Xb,Yb,Zb) LLVMBuildStore(Wb,Xb,Yb)

#define llvm__llvmBuildLoad(bbb,bbc,bbd,bbf) LLVMBuildLoad(bbb,bbc,bbd)
LLVMValueRef llvm_llvmBuildLoad(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_ptr, struct _global_String llvm_name, struct _global_Context* bbg){;
;
;
;return llvm__llvmBuildLoad(llvm_builder,llvm_ptr,_global_String_to_c_stringByValue(llvm_name,bbg),bbg);
;}

#define llvm_llvmSetInitializer(bbg,bbh,bbj) LLVMSetInitializer(bbg,bbh)

#define llvm__llvmBuildICmp(bbk,bbl,bbm,bbn,bbp,bbq) LLVMBuildICmp(bbk,bbl,bbm,bbn,bbp)
LLVMValueRef llvm_llvmBuildICmp(LLVMBuilderRef llvm_a, LLVMIntPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bbr){;
;
;
;
;
;return llvm__llvmBuildICmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bbr),bbr);
;}

#define llvm__llvmBuildFCmp(bbr,bbs,bbt,bbv,bbw,bbx) LLVMBuildFCmp(bbr,bbs,bbt,bbv,bbw)
LLVMValueRef llvm_llvmBuildFCmp(LLVMBuilderRef llvm_a, LLVMRealPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bby){;
;
;
;
;
;return llvm__llvmBuildFCmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bby),bby);
;}

#define llvm_llvmIntSLT LLVMIntSLT

#define llvm_llvmRealOLT LLVMRealOLT

#define llvm__llvmBuildAlloca(bby,bbz,bbB,bbC) LLVMBuildAlloca(bby,bbz,bbB)
LLVMValueRef llvm_llvmBuildAlloca(LLVMBuilderRef llvm_builder, LLVMTypeRef llvm_typ, struct _global_String llvm_e, struct _global_Context* bbD){;
;
;
;return llvm__llvmBuildAlloca(llvm_builder,llvm_typ,_global_String_to_c_stringByValue(llvm_e,bbD),bbD);
;}

#define llvm__llvmBuildCall(bbD,bbF,bbG,bbH,bbJ,bbK) LLVMBuildCall(bbD,bbF,bbG,bbH,bbJ)
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* bbL){;
;
;
;
;return llvm__llvmBuildCall(llvm_builder,llvm_f,(llvm_args).data,(llvm_args).length,_global_String_to_c_stringByValue(llvm_name,bbL),bbL);
;}

#define llvm_llvmGetDefaultTargetTriple(bbL) LLVMGetDefaultTargetTriple()

#define llvm_llvmGetTargetFromTriple(bbM,bbN,bbP,bbQ) LLVMGetTargetFromTriple(bbM,bbN,bbP)

#define llvm__llvmTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW,bbX) LLVMTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW)
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* bbY){;
;
;
;
;
;return llvm__llvmTargetMachineEmitToFile(llvm_t,llvm_m,_global_String_to_c_stringByValue(llvm_file,bbY),llvm_typ,llvm_err,bbY);
;}

#define llvm__llvmCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb,bjb) LLVMCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb)
LLVMTargetMachineRef llvm_llvmCreateTargetMachine(LLVMTargetRef llvm_t, char* llvm_triple, struct _global_String llvm_cpu, struct _global_String llvm_features, LLVMCodeGenOptLevel llvm_opt, LLVMRelocMode llvm_reloc, LLVMCodeModel llvm_m, struct _global_Context* bkb){;
;
;
;
;
;
;
;return llvm__llvmCreateTargetMachine(llvm_t,llvm_triple,_global_String_to_c_stringByValue(llvm_cpu,bkb),_global_String_to_c_stringByValue(llvm_features,bkb),llvm_opt,llvm_reloc,llvm_m,bkb);
;}

#define llvm_llvmObjectFile LLVMObjectFile

#define llvm_llvmInitializeNativeTarget(bkb) LLVMInitializeNativeTarget()

#define llvm_llvmInitializeNativeAsmParser(blb) LLVMInitializeNativeAsmParser()

#define llvm_llvmInitializeNativeAsmPrinter(bmb) LLVMInitializeNativeAsmPrinter()

#define llvm_llvmCodeGenLevelNone LLVMCodeGenLevelNone

#define llvm_llvmRelocDefault LLVMRelocDefault

#define llvm_llvmRelocStatic LLVMRelocStatic

#define llvm_llvmCodeModelDefault LLVMCodeModelDefault
LLVMTypeRef llvm_llvm_type_for(struct types_CompilerType llvm_typ, struct _global_Context* bnb){;
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmInt32Type(bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmFloatType(bnb);}else if(bpb.tag==2){return llvm_llvmInt1Type(bnb);}else if(bpb.tag==6){struct types_FuncPtr* llvm_x = bpb.cases.Func.field0;
struct _global_Array_llvm_LLVMTypeRef llvm_args;llvm_args = _global_Array_llvm_LLVMTypeRefInit(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_types_CompilerType bqb =(llvm_x)->args;
for (unsigned int brb = 0;brb < bqb.length; brb++) {
struct types_CompilerType llvm_arg;llvm_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&bqb, brb, bnb);
;unsigned int llvm_i;llvm_i = brb;
_global_Array_append_llvm_LLVMTypeRef(&(llvm_args),llvm_llvm_type_for(llvm_arg,bnb),bnb);
}
;
return llvm_llvmFunctionType((llvm_llvm_type_for((llvm_x)->return_type,bnb)),_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(llvm_args.data, llvm_args.length),bnb);}else if(bpb.tag==0){return llvm_llvmVoidType(bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
return (LLVMTypeRef)0;};
;}
LLVMValueRef llvm_llvm_initial_value_for(struct types_CompilerType llvm_typ, struct _global_Context* bnb){;
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==2){return llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)0,0,bnb);}else if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)0,1,bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)0,bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
return (LLVMValueRef)0;};
;}
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* bnb){;
struct _global_String llvm_s;llvm_s = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"tmp."),_global_uint_toString((llvm_t),bnb),bnb),_global_StringInit(0,""),bnb);;
*(llvm_t) = *(llvm_t)+1;;
;return llvm_s;
;}
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* bnb){;
;
;
;
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
_global_Array_append_llvm_LLVMValueRef(llvm_stack,llvm_func(*(llvm_builder),llvm_a,llvm_b,llvm_next_tmp(llvm_tmp,bnb),bnb),bnb);
;}
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef tmpllvmbc(struct _global_StaticArray_1_llvm_LLVMTypeRef* brb) {
return _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(brb->data, 1);};
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* bnb){;
struct _global_Allocator* bpb = (bnb)->allocator;
uint64_t bqb = _global_Allocator_get_occupied((bnb)->allocator,bnb);
;
llvm_llvmInitializeNativeTarget(bnb);
llvm_llvmInitializeNativeAsmParser(bnb);
llvm_llvmInitializeNativeAsmPrinter(bnb);
LLVMModuleRef llvm_mod;llvm_mod = llvm_llvmModuleCreateWithName(_global_StringInit(9,"my_module"),bnb);;
LLVMBuilderRef llvm_builder;llvm_builder = llvm_llvmCreateBuilder(bnb);;
struct _global_Array_llvm_LLVMValueRef llvm_stack;llvm_stack = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_global_vars;llvm_global_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
LLVMTypeRef llvm_log_int_type;llvm_log_int_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmInt32Type(bnb)),bnb)),bnb);;
LLVMValueRef llvm_log_int_func;llvm_log_int_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(9,"c_log_int"),llvm_log_int_type,bnb);;
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_int_func,bnb),bnb);
LLVMTypeRef llvm_log_float_type;llvm_log_float_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmFloatType(bnb)),bnb)),bnb);;
LLVMValueRef llvm_log_float_func;llvm_log_float_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(11,"c_log_float"),llvm_log_float_type,bnb);;
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_float_func,bnb),bnb);
struct _global_StaticArray_StaticArray_S_mir_Function bsb =(llvm_program)->functions;
for (unsigned int btb = 0;btb < bsb.length; btb++) {
struct mir_Function llvm_mir_func;llvm_mir_func = *_global_StaticArray_op_get_StaticArray_S_mir_Function(&bsb, btb, bnb);
;unsigned int llvm_i;llvm_i = btb;
LLVMTypeRef llvm_ret_type;llvm_ret_type = llvm_llvm_type_for(types_Func((llvm_mir_func)._type,bnb),bnb);;
LLVMValueRef llvm_llvm_func;llvm_llvm_func = llvm_llvmAddFunction(llvm_mod,(llvm_mir_func).name,llvm_ret_type,bnb);;
unsigned int llvm_tmp;llvm_tmp = 0;;
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ llvm_blocks;llvm_blocks = _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(0, 0, NULL, NULL);;
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_local_vars;llvm_local_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_mir_func).id,llvm_llvm_func,bnb);
struct _global_StaticArray_StaticArray_S_rmir_Block bvb =(llvm_mir_func).all_blocks;
for (unsigned int bwb = 0;bwb < bvb.length; bwb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bvb, bwb, bnb);
;struct _global_String llvm_name;llvm_name = (llvm_i==0 ? _global_StringInit(5,"entry"):(_global_uint_toStringByValue((llvm_mir_block)->id,bnb)));;
LLVMBasicBlockRef llvm_block;llvm_block = llvm_llvmAppendBasicBlock(llvm_llvm_func,llvm_name,bnb);;
insertByID_insert_at_index_llvm_LLVMBasicBlockRef(&(llvm_blocks),(llvm_mir_block)->id,llvm_block,bnb);
}
;
struct _global_StaticArray_StaticArray_S_rmir_Block bxb =(llvm_mir_func).all_blocks;
for (unsigned int byb = 0;byb < bxb.length; byb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bxb, byb, bnb);
;LLVMBasicBlockRef llvm_block;llvm_block = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)(llvm_mir_block)->id,bnb)),_global_StringInit(24,"Could not get llvm block"),bnb);;
llvm_llvmPositionBuilderAtEnd(llvm_builder,llvm_block,bnb);
struct _global_Array_mir_OpCode bzb =*((llvm_mir_block)->code);
for (unsigned int bBb = 0;bBb < bzb.length; bBb++) {
struct mir_OpCode llvm_inst;llvm_inst = *_global_Array_op_get_mir_OpCode(&bzb, bBb, bnb);
;struct mir_OpCode bCb =llvm_inst;if(bCb.tag==0){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,bnb);
;}
else if(bCb.tag==5){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFAdd,bnb);
;}
else if(bCb.tag==1){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildSub,bnb);
;}
else if(bCb.tag==6){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFSub,bnb);
;}
else if(bCb.tag==2){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,bnb);
;}
else if(bCb.tag==7){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFMul,bnb);
;}
else if(bCb.tag==3){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFDiv,bnb);
;}
else if(bCb.tag==8){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,bnb);
;}
else if(bCb.tag==4){
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildICmp(llvm_builder,llvm_llvmIntSLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;}
else if(bCb.tag==9){
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildFCmp(llvm_builder,llvm_llvmRealOLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;}
else if(bCb.tag==12){_Bool llvm_b = bCb.cases.Store_bool.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)llvm_b,0,bnb),bnb);
;}
else if(bCb.tag==10){int32_t llvm_integer = bCb.cases.Store_i32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)llvm_integer,1,bnb),bnb);
;}
else if(bCb.tag==11){float llvm_f = bCb.cases.Store_f32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)llvm_f,bnb),bnb);
;}
else if(bCb.tag==18){struct types_CompilerType llvm_typ = bCb.cases.FuncReturn.field0;

if(types_CompilerType_is_typeByValue(llvm_typ,types_Void,bnb)){;
llvm_llvmBuildRetVoid(llvm_builder,bnb);
;}
else{llvm_llvmBuildRet(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),bnb);
;};
;}
else if(bCb.tag==20){unsigned int llvm_a = bCb.cases.Jump.field0;

llvm_llvmBuildBr(llvm_builder,_global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb),bnb);
;}
else if(bCb.tag==19){unsigned int llvm_a = bCb.cases.CondJump.field0;
unsigned int llvm_b = bCb.cases.CondJump.field1;

LLVMValueRef llvm_cond;llvm_cond = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMBasicBlockRef llvm_block_a;llvm_block_a = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
LLVMBasicBlockRef llvm_block_b;llvm_block_b = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_b,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
llvm_llvmBuildCondBr(llvm_builder,llvm_cond,llvm_block_a,llvm_block_b,bnb);
;}
else if(bCb.tag==14){struct mir_ReadInfo* llvm_info = bCb.cases.Read.field0;

if((llvm_info)->is_global){;
LLVMValueRef llvm_v;llvm_v = _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb);;
if(types_CompilerType_is_typeByValue((llvm_info)->_type,types_func_type,bnb)){;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_v,bnb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,llvm_v,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else if(bCb.tag==13){struct mir_ReadInfo* llvm_info = bCb.cases.Create.field0;

_global_assert((llvm_info)->is_global,_global_StringInit(30,"Can't handle local create yet!"),bnb);
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmAddGlobal(llvm_mod,(llvm_llvm_type_for((llvm_info)->_type,bnb)),(llvm_info)->name,bnb);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_info)->id,llvm_llvm_var,bnb);
llvm_llvmSetInitializer(llvm_llvm_var,llvm_llvm_initial_value_for((llvm_info)->_type,bnb),bnb);
;}
else if(bCb.tag==16){unsigned int llvm_id = bCb.cases.FuncArg.field0;
struct mir_ReadInfo* llvm_info = bCb.cases.FuncArg.field1;

LLVMValueRef llvm_arg;llvm_arg = llvm_llvmGetParam(llvm_llvm_func,llvm_id,bnb);;
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmBuildAlloca(llvm_builder,(llvm_llvm_type_for((llvm_info)->_type,bnb)),llvm_next_tmp(&(llvm_tmp),bnb),bnb);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_local_vars),(llvm_info)->id,llvm_llvm_var,bnb);
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_arg,bnb);
;}
else if(bCb.tag==15){struct mir_ReadInfo* llvm_info = bCb.cases.Assign.field0;

LLVMValueRef llvm_v;llvm_v = ((llvm_info)->is_global ? _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb):(_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb)));;
llvm_llvmBuildStore(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),llvm_v,bnb);
;}
else if(bCb.tag==17){struct types_FuncPtr* llvm_fptr_type = bCb.cases.FuncCall.field0;

unsigned int llvm_arg_count;llvm_arg_count = ((llvm_fptr_type)->args).length;;
LLVMValueRef llvm_func;llvm_func = *(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count-1,bnb));;
struct _global_Array_llvm_LLVMValueRef llvm_args;llvm_args = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Range bDb =_global_RangeInit(0,llvm_arg_count);
for (unsigned int bFb = bDb.start; bFb < bDb.end; bFb++) {
unsigned int llvm_c;llvm_c = bFb;
;_global_Array_append_llvm_LLVMValueRef(&(llvm_args),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count+llvm_c,bnb)),bnb);
}
;
_global_Array_shorten_llvm_LLVMValueRef(&(llvm_stack),llvm_arg_count+1,bnb);
if(types_CompilerType_is_typeByValue((llvm_fptr_type)->return_type,types_Void,bnb)){;
llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),_global_StringInit(0,""),bnb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else if(1){
_global_panic(print_obj_toString_mir_OpCode(llvm_inst,bnb),bnb);
;}
;
}
;
}
;
}
;
char* llvm_error;llvm_error = NULL;;
if(llvm_llvmVerifyModule(llvm_mod,llvm_llvmAbortProcessAction,&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"LLVM ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
llvm_llvmDisposeMessage(llvm_error,bnb);
char* llvm_target_triple;llvm_target_triple = llvm_llvmGetDefaultTargetTriple(bnb);;
LLVMTargetRef llvm_target;;
if(llvm_llvmGetTargetFromTriple(llvm_target_triple,&(llvm_target),&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(35,"LLVM GET TARGET FROM TRIPLE ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
struct _global_String llvm_cpu;llvm_cpu = _global_StringInit(7,"generic");;
struct _global_String llvm_features;llvm_features = _global_StringInit(0,"");;
LLVMTargetMachineRef llvm_target_machine;llvm_target_machine = llvm_llvmCreateTargetMachine(llvm_target,llvm_target_triple,llvm_cpu,llvm_features,llvm_llvmCodeGenLevelNone,llvm_llvmRelocDefault,llvm_llvmCodeModelDefault,bnb);;
if(llvm_llvmTargetMachineEmitToFile(llvm_target_machine,llvm_mod,_global_StringInit(11,"test/main.o"),llvm_llvmObjectFile,&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(11,"LLVM EMIT: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
_global_Allocator_reset_to(bpb,bqb,bnb);
;}
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb);
;}
void _global_memcpy_llvm_LLVMTypeRef(LLVMTypeRef* _global_target, LLVMTypeRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMTypeRef),bnb);
;}
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMValueRef),bnb);
;}
void _global_memcpy_Maybe_llvm_LLVMValueRef_(struct _global_Maybe_llvm_LLVMValueRef* _global_target, struct _global_Maybe_llvm_LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb);
;}

static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* tmpllvmbd(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));;
_global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbd(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline LLVMTypeRef* tmpllvmbf(struct _global_Array_llvm_LLVMTypeRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMTypeRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMTypeRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
LLVMTypeRef* _global_newData;_global_newData = (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));;
_global_memcpy_llvm_LLVMTypeRef(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbf(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline LLVMValueRef* tmpllvmbg(struct _global_Array_llvm_LLVMValueRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
LLVMValueRef* _global_newData;_global_newData = (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));;
_global_memcpy_llvm_LLVMValueRef(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbg(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline struct _global_Maybe_llvm_LLVMValueRef* tmpllvmbh(struct _global_Array_Maybe_llvm_LLVMValueRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
struct _global_Maybe_llvm_LLVMValueRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));;
_global_memcpy_Maybe_llvm_LLVMValueRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbh(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,1,bnb);
;}
else{_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, LLVMTypeRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMTypeRef(_global_self,1,bnb);
;}
else{_global_Array_reserve_llvm_LLVMTypeRef(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((LLVMTypeRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* bnb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bnb);
;};
LLVMValueRef _global_tmp;_global_tmp = *(_global_Array_op_get_llvm_LLVMValueRef(_global_self,(unsigned int)(_global_self)->length-1,bnb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMValueRef(_global_self,1,bnb);
;}
else{_global_Array_reserve_llvm_LLVMValueRef(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* bnb){;
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_pointer;_global_pointer = (struct _global_StaticArray_1_llvm_LLVMTypeRef*)(_global_Allocator_alloc((bnb)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_llvm_LLVMTypeRef),bnb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_Array_append_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, struct _global_Maybe_llvm_LLVMValueRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,1,bnb);
;}
else{_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
static inline struct _global_Maybe_llvm_LLVMValueRef tmpllvmbj(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMValueRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMValueRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMValueRef(struct _global_Array_Maybe_llvm_LLVMValueRef_* insertByID_arr, unsigned int insertByID_id, LLVMValueRef insertByID_data, struct _global_Context* bnb){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMValueRef_(insertByID_arr,tmpllvmbj(_global_None),bnb);
}
;
;};
*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_((struct _global_Array_Maybe_llvm_LLVMValueRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMValueRef(insertByID_data,bnb);;
;}
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef tmpllvmbk(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMBasicBlockRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMBasicBlockRef(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* insertByID_arr, unsigned int insertByID_id, LLVMBasicBlockRef insertByID_data, struct _global_Context* bnb){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(insertByID_arr,tmpllvmbk(_global_None),bnb);
}
;
;};
*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_((struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMBasicBlockRef(insertByID_data,bnb);;
;}
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)_global_index);
;}
LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_String _global_mesg, struct _global_Context* bnb){;
;
LLVMBasicBlockRef _global_x;;
struct _global_Maybe_llvm_LLVMBasicBlockRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

;}
else if(1){
_global_panic(_global_mesg,bnb);
;}
;
;return _global_x;
;}
static inline LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef* bqb,struct _global_String brb,struct _global_Context* bnb){
return _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*bqb,brb,bnb);
}struct _global_Maybe_llvm_LLVMValueRef* _global_Array_op_get_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
;}
LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef _global_self, struct _global_Context* bnb){;
LLVMValueRef _global_x;;
struct _global_Maybe_llvm_LLVMValueRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),bnb);
;}
;
;return _global_x;
;}
static inline LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRef(struct _global_Maybe_llvm_LLVMValueRef* bqb,struct _global_Context* bnb){
return _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*bqb,bnb);
}LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* bnb){;
;
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
_global_panic(_global_StringInit(21,"Shorten out of bounds"),bnb);
;};
(_global_self)->length = (_global_self)->length-_global_num;;
;}
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* bnb){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(bnb);;
print_type_to_string(_global_TypeFromStruct(mir_OpCode_get_type(NULL,bnb),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),bnb);
;return stringBuilder_StringBuilder_toString(&(print_s),bnb);
;}

void llvmInitTypes() { 
 
llvm_LLVMModuleRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMModuleRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMModuleRefType_fields
,0
);
llvm_LLVMModuleRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMModuleRefType.name = _global_StringInit(13, "LLVMModuleRef");llvm_LLVMTypeRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTypeRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTypeRefType_fields
,0
);
llvm_LLVMTypeRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTypeRefType.name = _global_StringInit(11, "LLVMTypeRef");_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType.size->tag = 2;
_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType.array_type=
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;llvm_LLVMBasicBlockRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMBasicBlockRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMBasicBlockRefType_fields
,0
);
llvm_LLVMBasicBlockRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMBasicBlockRefType.name = _global_StringInit(17, "LLVMBasicBlockRef");llvm_LLVMValueRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMValueRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMValueRefType_fields
,0
);
llvm_LLVMValueRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMValueRefType.name = _global_StringInit(12, "LLVMValueRef");llvm_LLVMBuilderRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMBuilderRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMBuilderRefType_fields
,0
);
llvm_LLVMBuilderRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMBuilderRefType.name = _global_StringInit(14, "LLVMBuilderRef");llvm_LLVMIntPredicateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMIntPredicateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMIntPredicateType_fields
,0
);
llvm_LLVMIntPredicateType.package = _global_StringInit(4, "llvm");
llvm_LLVMIntPredicateType.name = _global_StringInit(16, "LLVMIntPredicate");llvm_LLVMRealPredicateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMRealPredicateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMRealPredicateType_fields
,0
);
llvm_LLVMRealPredicateType.package = _global_StringInit(4, "llvm");
llvm_LLVMRealPredicateType.name = _global_StringInit(17, "LLVMRealPredicate");_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType.size->tag = 2;
_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType.array_type=
_global_TypeFromStruct(
llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;llvm_LLVMTargetMachineRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetMachineRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetMachineRefType_fields
,0
);
llvm_LLVMTargetMachineRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetMachineRefType.name = _global_StringInit(20, "LLVMTargetMachineRef");llvm_LLVMCodeGenFileTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeGenFileTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeGenFileTypeType_fields
,0
);
llvm_LLVMCodeGenFileTypeType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeGenFileTypeType.name = _global_StringInit(19, "LLVMCodeGenFileType");llvm_LLVMTargetRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetRefType_fields
,0
);
llvm_LLVMTargetRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetRefType.name = _global_StringInit(13, "LLVMTargetRef");llvm_LLVMCodeGenOptLevelType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeGenOptLevelType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeGenOptLevelType_fields
,0
);
llvm_LLVMCodeGenOptLevelType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeGenOptLevelType.name = _global_StringInit(19, "LLVMCodeGenOptLevel");llvm_LLVMRelocModeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMRelocModeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMRelocModeType_fields
,0
);
llvm_LLVMRelocModeType.package = _global_StringInit(4, "llvm");
llvm_LLVMRelocModeType.name = _global_StringInit(13, "LLVMRelocMode");llvm_LLVMCodeModelType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeModelType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeModelType_fields
,0
);
llvm_LLVMCodeModelType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeModelType.name = _global_StringInit(13, "LLVMCodeModel");_global_Array_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_llvm_LLVMValueRefType.size->tag = 1;
_global_Array_llvm_LLVMValueRefType.array_type=
_global_TypeFromStruct(
llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rllvm_LLVMValueRefType.p_type =
_global_TypeFromStruct(
llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rllvm_LLVMValueRefType.nullable = 1;struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(4, "Some");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; k[0].args.data[0].offset = offsetof(struct _global_Maybe_llvm_LLVMBasicBlockRef_Some, field0);
k[1].name = _global_StringInit(4, "None");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.offset = offsetof(struct _global_Maybe_llvm_LLVMBasicBlockRef, tag);
_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.field_type = 
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

_global_Maybe_llvm_LLVMBasicBlockRefType.size = sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef);

_global_Maybe_llvm_LLVMBasicBlockRefType.package = _global_StringInit(7, "_global");
_global_Maybe_llvm_LLVMBasicBlockRefType.name = _global_StringInit(28, "Maybe_llvm_LLVMBasicBlockRef");
_global_Maybe_llvm_LLVMBasicBlockRefType.cases.data = k;
_global_Maybe_llvm_LLVMBasicBlockRefType.cases.length = 2;
struct _global_Case* q =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
q[0].name = _global_StringInit(4, "Some");
q[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
q[0].args.data[0].arg_type = 
_global_TypeFromStruct(
llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; q[0].args.data[0].offset = offsetof(struct _global_Maybe_llvm_LLVMValueRef_Some, field0);
q[1].name = _global_StringInit(4, "None");
q[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_llvm_LLVMValueRefType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_llvm_LLVMValueRefType.tag_field.offset = offsetof(struct _global_Maybe_llvm_LLVMValueRef, tag);
_global_Maybe_llvm_LLVMValueRefType.tag_field.field_type = 
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

_global_Maybe_llvm_LLVMValueRefType.size = sizeof(struct _global_Maybe_llvm_LLVMValueRef);

_global_Maybe_llvm_LLVMValueRefType.package = _global_StringInit(7, "_global");
_global_Maybe_llvm_LLVMValueRefType.name = _global_StringInit(23, "Maybe_llvm_LLVMValueRef");
_global_Maybe_llvm_LLVMValueRefType.cases.data = q;
_global_Maybe_llvm_LLVMValueRefType.cases.length = 2;
_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type.nullable = 1;_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.size->tag = 1;
_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;_global_Maybe_rllvm_LLVMTypeRefType.p_type =
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rllvm_LLVMTypeRefType.nullable = 1;_global_Array_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_llvm_LLVMTypeRefType.size->tag = 1;
_global_Array_llvm_LLVMTypeRefType.array_type=
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rMaybe_llvm_LLVMValueRef_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_llvm_LLVMValueRef_Type.nullable = 1;_global_Array_Maybe_llvm_LLVMValueRef_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_llvm_LLVMValueRef_Type.size->tag = 1;
_global_Array_Maybe_llvm_LLVMValueRef_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;_global_StaticArray_1_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_llvm_LLVMTypeRefType.size->tag = 0;
_global_StaticArray_1_llvm_LLVMTypeRefType.size->cases.Static.field0 = 1;
_global_StaticArray_1_llvm_LLVMTypeRefType.array_type = 
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; }
void llvmInit() { 
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
};

#define process__popen(c,d,f) popen(c,d)

#define process__pclose(g,h) pclose(g)

#define process__fgetc(j,k) fgetc(j)

#define process__eof EOF
struct pintcstringp process_popen(struct _global_String process_cmd, struct _global_Context* l){;
struct FILE* process_p;;
struct FILE* m =process__popen(_global_String_to_c_stringByValue(process_cmd,l),_global_String_to_c_stringByValue(_global_StringInit(1,"r"),l),l);if(m != NULL){process_p = m;

;}
else if(1){
return pintcstringpInit((int)1,_global_StringInit(22,"Unable to open process"));
;
;}
;
struct stringBuilder_StringBuilder process_s;process_s = stringBuilder_make_StringBuilder(l);;
;while(1){char process_ch;process_ch = process__fgetc(process_p,l);;if(process_ch==process__eof){;
break;;
;};_global_Array_append_char(&((process_s).chars),process_ch,l);};
int process_status;process_status = process__pclose(process_p,l);;
;return pintcstringpInit(process_status,stringBuilder_StringBuilder_toString(&(process_s),l));
;}

void processInitTypes() { 
 
 }
void processInit() { 
;
;
;
;
;
;
};
void linker_Linker_link(struct linker_Linker* linker_self, struct _global_Context* d){;
struct stringBuilder_StringBuilder linker_s;linker_s = stringBuilder_make_StringBuilder(d);;
stringBuilder_StringBuilder_append(&(linker_s),(linker_self)->linker,d);
stringBuilder_StringBuilder_append(&(linker_s),_global_StringInit(1," "),d);
stringBuilder_StringBuilder_append(&(linker_s),(linker_self)->path_to_runtime,d);
stringBuilder_StringBuilder_append(&(linker_s),_global_StringInit(1," "),d);
struct _global_StaticArray_StaticArray_S_string f =(linker_self)->object_files;
for (unsigned int g = 0;g < f.length; g++) {
struct _global_String linker_obj;linker_obj = *_global_StaticArray_op_get_StaticArray_S_string(&f, g, d);
;unsigned int linker_i;linker_i = g;
stringBuilder_StringBuilder_append(&(linker_s),linker_obj,d);
stringBuilder_StringBuilder_append(&(linker_s),_global_StringInit(1," "),d);
}
;
stringBuilder_StringBuilder_append(&(linker_s),_global_StringInit(3,"-o "),d);
stringBuilder_StringBuilder_append(&(linker_s),(linker_self)->path_to_exe,d);
int linker_status;struct _global_String linker_output;struct pintcstringp h;h = process_popen(stringBuilder_StringBuilder_toString(&(linker_s),d),d);linker_status=h.field0;linker_output=h.field1;;
_global_log_string(linker_output,d);
if(linker_status!=(int)0){;
_global_panic(_global_StringInit(14,"Failed to link"),d);
;};
;}
void linker_Linker_run(struct linker_Linker* linker_self, struct _global_Context* d){;
int linker_status;struct _global_String linker_output;struct pintcstringp f;f = process_popen(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(2,"./"),((linker_self)->path_to_exe),d),_global_StringInit(0,""),d),d);linker_status=f.field0;linker_output=f.field1;;
_global_log_string(linker_output,d);
;}

void linkerInitTypes() { 
 processInitTypes();
linker_LinkerType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
linker_LinkerType.fields = _global_StaticArray_StaticArray_S_FieldInit(
linker_LinkerType_fields
,4
);
linker_LinkerType.package = _global_StringInit(6, "linker");
linker_LinkerType.name = _global_StringInit(6, "Linker");
linker_LinkerType.size = sizeof(struct linker_Linker);
linker_LinkerType_fields[0].name = _global_StringInit(11, "path_to_exe");
linker_LinkerType_fields[0].offset = offsetof(struct linker_Linker, path_to_exe);
linker_LinkerType_fields[0].field_type = 
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
linker_LinkerType_fields[1].name = _global_StringInit(15, "path_to_runtime");
linker_LinkerType_fields[1].offset = offsetof(struct linker_Linker, path_to_runtime);
linker_LinkerType_fields[1].field_type = 
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
linker_LinkerType_fields[2].name = _global_StringInit(12, "object_files");
linker_LinkerType_fields[2].offset = offsetof(struct linker_Linker, object_files);
linker_LinkerType_fields[2].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
linker_LinkerType_fields[3].name = _global_StringInit(6, "linker");
linker_LinkerType_fields[3].offset = offsetof(struct linker_Linker, linker);
linker_LinkerType_fields[3].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; }
void linkerInit() { 
processInit();;
;
;
};
struct _global_String _global_toString_lexer_Token(struct lexer_Token _global_s, struct _global_Context* d);
struct _global_String _global_StaticArray_join_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, struct _global_String _global_delimiter, struct _global_Context* d);
struct _global_String _global_StaticArray_toString_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, struct _global_Context* d);
struct _global_String print_obj_toString_mir_Program(struct mir_Program print_t, struct _global_Context* d);
void _global_log___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token _global_s, struct _global_Context* d);
void print_print_obj_mir_Program(struct mir_Program print_t, struct _global_Context* d);
void compiler_log_memory_usage(struct _global_Context* d){_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(6,"USED: "),_global_u64_toStringByValue((_global_Allocator_get_occupied((d)->allocator,d)+_global_Allocator_get_occupied((d)->longterm_storage,d)),d),d),_global_StringInit(0,""),d),d);
;}
struct _global_StaticArray_StaticArray_S_string tmpcompilerbl(struct _global_StaticArray_1_string* l) {
return _global_StaticArray_StaticArray_S_stringInit(l->data, 1);};
static inline struct _global_Result_string_Result_T tmpcompilerbm(struct _global_Result_Result_E_Result_T p) {
struct _global_Result_string_Result_T n;n.tag = p.tag;n.cases = *(union _global_Result_string_Result_T_cases*) &(p.cases);return n;
}
struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* d){;
struct _global_File compiler_f;;
struct _global_Maybe_File f =_global_open(compiler_filename,_global_ReadFile,d);if(f.tag==0){compiler_f = f.cases.Some.field0;

;}
else if(1){
return _global_Error_string_Result_T(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(20,"could Not open file "),(compiler_filename),d),_global_StringInit(0,""),d),d);
;
;}
;
struct _global_File g = compiler_f;
;
struct _global_String compiler_src;compiler_src = _global_StringInit(0,"");;
struct _global_Context compiler_new_context;compiler_new_context = *(d);;
(compiler_new_context).allocator = &(_global_malloc_as_allocator);;
compiler_src = _global_File_read(&(compiler_f),&compiler_new_context);;
;
_global_log_string(_global_StringInit(25,"=== read source files ==="),d);
compiler_log_memory_usage(d);
struct _global_StaticArray_StaticArray_S_lexer_Token compiler_tokens;struct error_CompilerError* compiler_lex_e;;
struct _global_Result_rerror_CompilerError___lexer_Token h =lexer_lex(compiler_src,compiler_filename,d);if(h.tag==0){compiler_tokens = h.cases.Ok.field0;

;}
else if(h.tag==1){compiler_lex_e = h.cases.Error.field0;

_global_File_freeByValue(g,d);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_lex_e,d),d);
;
;}
;
_global_Allocator_dealloc((compiler_new_context).allocator,(void*)(_global_String_to_c_stringByValue(compiler_src,d)),d);
_global_log_string(_global_StringInit(16,"=== tokenize ==="),d);
_global_log___lexer_Token(compiler_tokens,d);
struct ast_AST* compiler_syntax_tree;struct error_CompilerError* compiler_ast_e;;
struct _global_Result_rerror_CompilerError_rast_AST j =parser_parse(compiler_tokens,compiler_filename,d);if(j.tag==0){compiler_syntax_tree = j.cases.Ok.field0;

;}
else if(j.tag==1){compiler_ast_e = j.cases.Error.field0;

_global_File_freeByValue(g,d);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_ast_e,d),d);
;
;}
;
_global_log_string(_global_StringInit(13,"=== parsed =="),d);
compiler_log_memory_usage(d);
struct error_CompilerError* k =validator_validate(compiler_syntax_tree,d);if(k != NULL){struct error_CompilerError* compiler_validation_error = k;

_global_File_freeByValue(g,d);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_validation_error,d),d);
;
;}
else if(1){
;}
;
_global_log_string(_global_StringInit(17,"=== validated ==="),d);
compiler_log_memory_usage(d);
struct mir_Program compiler_ir;compiler_ir = mir_convert(compiler_syntax_tree,d);;
_global_log_string(_global_StringInit(21,"=== generated ir ===="),d);
compiler_log_memory_usage(d);
print_print_obj_mir_Program(compiler_ir,d);
interpreter_exec(compiler_ir,d);
_global_log_string(_global_StringInit(16,"=== llvm ir ===="),d);
compiler_log_memory_usage(d);
llvm_convert_to_LLVMModule(&(compiler_ir),d);
_global_log_string(_global_StringInit(15,"=== linking ==="),d);
struct _global_StaticArray_1_string compiler_object_files;compiler_object_files = _global_StaticArray_1_stringInit(_global_StringInit(11,"test/main.o"));;
struct linker_Linker compiler_l;compiler_l = linker_LinkerInit(_global_StringInit(13,"test/prog.exe"),_global_StringInit(14,"test/runtime.o"),tmpcompilerbl(&(compiler_object_files)),_global_StringInit(5,"clang"));;
linker_Linker_link(&(compiler_l),d);
_global_log_string(_global_StringInit(26,"=== running executable ==="),d);
linker_Linker_run(&(compiler_l),d);
;struct _global_Result_string_Result_T m =tmpcompilerbm(_global_Ok_Result_E_Result_T(NULL,d));
_global_File_freeByValue(g,d);
return m;
 }struct _global_String _global_toString_lexer_Token(struct lexer_Token _global_s, struct _global_Context* d){;
;return lexer_Token_toString(&(_global_s),d);
;}
struct _global_String _global_StaticArray_join_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, struct _global_String _global_delimiter, struct _global_Context* d){;
;
;unsigned int f =(_global_self)->length;
if(f==0){return _global_StringInit(0,"");}else if(f==1){return _global_toString_lexer_Token(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(_global_self,(unsigned int)0,d)),d);}else if(1){struct _global_String _global_s;_global_s = _global_StringInit(0,"");;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<(_global_self)->length-1){_global_s = _global_String_op_addByValue(_global_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_Token_toStringByValue((*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(_global_self,(unsigned int)_global_i,d))),d),d),_global_StringInit(0,""),d),(_global_delimiter),d),_global_StringInit(0,""),d),d);;_global_i = _global_i+1;;};
return _global_String_op_addByValue(_global_s,_global_toString_lexer_Token(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(_global_self,(unsigned int)(_global_self)->length-1,d)),d),d);};
;}
struct _global_String _global_StaticArray_toString_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, struct _global_Context* d){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(2,"[ "),(_global_StaticArray_join_StaticArray_S_lexer_Token(_global_self,_global_StringInit(2,", "),d)),d),_global_StringInit(2," ]"),d);
;}
struct _global_String print_obj_toString_mir_Program(struct mir_Program print_t, struct _global_Context* d){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(d);;
print_type_to_string(_global_TypeFromStruct(mir_Program_get_type(NULL,d),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),d);
;return stringBuilder_StringBuilder_toString(&(print_s),d);
;}
void _global_log___lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token _global_s, struct _global_Context* d){;
_global_c_log(_global_StaticArray_toString_StaticArray_S_lexer_Token(&(_global_s),d),d);
;}
void print_print_obj_mir_Program(struct mir_Program print_t, struct _global_Context* d){;
struct _global_Allocator* f = (d)->allocator;
uint64_t g = _global_Allocator_get_occupied((d)->allocator,d);
;
_global_log_string(print_obj_toString_mir_Program(print_t,d),d);
_global_Allocator_reset_to(f,g,d);
;}

void compilerInitTypes() { 
 lexerInitTypes();parserInitTypes();mirInitTypes();interpreterInitTypes();llvmInitTypes();linkerInitTypes();
struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(2, "Ok");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; k[0].args.data[0].offset = offsetof(struct _global_Result_string_Result_T_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; k[1].args.data[0].offset = offsetof(struct _global_Result_string_Result_T_Error, field0);
_global_Result_string_Result_TType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_string_Result_TType.tag_field.offset = offsetof(struct _global_Result_string_Result_T, tag);
_global_Result_string_Result_TType.tag_field.field_type = 
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

_global_Result_string_Result_TType.size = sizeof(struct _global_Result_string_Result_T);

_global_Result_string_Result_TType.package = _global_StringInit(7, "_global");
_global_Result_string_Result_TType.name = _global_StringInit(22, "Result_string_Result_T");
_global_Result_string_Result_TType.cases.data = k;
_global_Result_string_Result_TType.cases.length = 2;
_global_StaticArray_1_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_stringType.size->tag = 0;
_global_StaticArray_1_stringType.size->cases.Static.field0 = 1;
_global_StaticArray_1_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;struct _global_Case* v =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
v[0].name = _global_StringInit(2, "Ok");
v[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
v[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; v[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_Result_T_Ok, field0);
v[1].name = _global_StringInit(5, "Error");
v[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
v[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; v[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_Result_T_Error, field0);
_global_Result_Result_E_Result_TType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E_Result_TType.tag_field.offset = offsetof(struct _global_Result_Result_E_Result_T, tag);
_global_Result_Result_E_Result_TType.tag_field.field_type = 
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

_global_Result_Result_E_Result_TType.size = sizeof(struct _global_Result_Result_E_Result_T);

_global_Result_Result_E_Result_TType.package = _global_StringInit(7, "_global");
_global_Result_Result_E_Result_TType.name = _global_StringInit(24, "Result_Result_E_Result_T");
_global_Result_Result_E_Result_TType.cases.data = v;
_global_Result_Result_E_Result_TType.cases.length = 2;
 }
void compilerInit() { 
lexerInit();;
parserInit();;
;
mirInit();;
;
interpreterInit();;
llvmInit();;
linkerInit();;
;
};

void mainInitTypes() { 
 compilerInitTypes();
 }
void mainInit() { 
compilerInit();;
struct _global_Result_string_Result_T b =compiler_compile_file(_global_StringInit(13,"test/main.top"),(&_global_context));if(b.tag==1){struct _global_String main_e = b.cases.Error.field0;

_global_panic(main_e,(&_global_context));
;}
else if(1){
;}
;
;
};
int main() { 
_globalInitTypes(); _globalInit(); _global_init_c_runtime(); 
 _global_Type_Type.name = _global_StringInit(4, "Type")
;_global_Type_Type.package = _global_StringInit(7, "_global");_global_StaticArray_StaticArray_S_FieldType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_FieldType.size->tag = 2;
_global_StaticArray_StaticArray_S_FieldType.array_type=
_global_TypeFromStruct(
_global_Field_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StructTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 5);
_global_StructTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_StructTypeType_fields
,5
);
_global_StructTypeType.package = _global_StringInit(7, "_global");
_global_StructTypeType.name = _global_StringInit(10, "StructType");
_global_StructTypeType.size = sizeof(struct _global_StructType);
_global_StructTypeType_fields[0].name = _global_StringInit(4, "name");
_global_StructTypeType_fields[0].offset = offsetof(struct _global_StructType, name);
_global_StructTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_StringType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_StructType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
_global_StructTypeType_fields[1].name = _global_StringInit(7, "package");
_global_StructTypeType_fields[1].offset = offsetof(struct _global_StructType, package);
_global_StructTypeType_fields[1].field_type = 
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
_global_StructTypeType_fields[2].name = _global_StringInit(9, "real_type");
_global_StructTypeType_fields[2].offset = offsetof(struct _global_StructType, real_type);
_global_StructTypeType_fields[2].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_InterfaceType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
_global_StructTypeType_fields[3].name = _global_StringInit(6, "fields");
_global_StructTypeType_fields[3].offset = offsetof(struct _global_StructType, fields);
_global_StructTypeType_fields[3].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Field_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_ArrayType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_StructTypeType_fields[4].name = _global_StringInit(4, "size");
_global_StructTypeType_fields[4].offset = offsetof(struct _global_StructType, size);
_global_StructTypeType_fields[4].field_type = 
_global_TypeFromStruct(
_global_u64_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StringTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_StringTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_StringTypeType_fields
,0
);
_global_StringTypeType.package = _global_StringInit(7, "_global");
_global_StringTypeType.name = _global_StringInit(10, "StringType");_global_InterfaceTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
_global_InterfaceTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_InterfaceTypeType_fields
,4
);
_global_InterfaceTypeType.package = _global_StringInit(7, "_global");
_global_InterfaceTypeType.name = _global_StringInit(13, "InterfaceType");
_global_InterfaceTypeType.size = sizeof(struct _global_InterfaceType);
_global_InterfaceTypeType_fields[0].name = _global_StringInit(4, "name");
_global_InterfaceTypeType_fields[0].offset = offsetof(struct _global_InterfaceType, name);
_global_InterfaceTypeType_fields[0].field_type = 
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
_global_InterfaceTypeType_fields[1].name = _global_StringInit(7, "package");
_global_InterfaceTypeType_fields[1].offset = offsetof(struct _global_InterfaceType, package);
_global_InterfaceTypeType_fields[1].field_type = 
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
_global_InterfaceTypeType_fields[2].name = _global_StringInit(6, "fields");
_global_InterfaceTypeType_fields[2].offset = offsetof(struct _global_InterfaceType, fields);
_global_InterfaceTypeType_fields[2].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Field_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_InterfaceTypeType_fields[3].name = _global_StringInit(7, "methods");
_global_InterfaceTypeType_fields[3].offset = offsetof(struct _global_InterfaceType, methods);
_global_InterfaceTypeType_fields[3].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Method_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_StaticArray_S_CaseType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_CaseType.size->tag = 2;
_global_StaticArray_StaticArray_S_CaseType.array_type=
_global_TypeFromStruct(
_global_Case_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_CaseArgType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_CaseArgType.size->tag = 2;
_global_StaticArray_StaticArray_S_CaseArgType.array_type=
_global_TypeFromStruct(
_global_CaseArg_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_IntTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_IntTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_IntTypeType_fields
,0
);
_global_IntTypeType.package = _global_StringInit(7, "_global");
_global_IntTypeType.name = _global_StringInit(7, "IntType");_global_CaseArgType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_CaseArgType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_CaseArgType_fields
,2
);
_global_CaseArgType.package = _global_StringInit(7, "_global");
_global_CaseArgType.name = _global_StringInit(7, "CaseArg");
_global_CaseArgType.size = sizeof(struct _global_CaseArg);
_global_CaseArgType_fields[0].name = _global_StringInit(8, "arg_type");
_global_CaseArgType_fields[0].offset = offsetof(struct _global_CaseArg, arg_type);
_global_CaseArgType_fields[0].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
_global_CaseArgType_fields[1].name = _global_StringInit(6, "offset");
_global_CaseArgType_fields[1].offset = offsetof(struct _global_CaseArg, offset);
_global_CaseArgType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_IntType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_ArrayTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_ArrayTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_ArrayTypeType_fields
,2
);
_global_ArrayTypeType.package = _global_StringInit(7, "_global");
_global_ArrayTypeType.name = _global_StringInit(9, "ArrayType");
_global_ArrayTypeType.size = sizeof(struct _global_ArrayType);
_global_ArrayTypeType_fields[0].name = _global_StringInit(4, "size");
_global_ArrayTypeType_fields[0].offset = offsetof(struct _global_ArrayType, size);
_global_ArrayTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_ArraySize_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_EnumType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_ArrayTypeType_fields[1].name = _global_StringInit(10, "array_type");
_global_ArrayTypeType_fields[1].offset = offsetof(struct _global_ArrayType, array_type);
_global_ArrayTypeType_fields[1].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;_global_CaseType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_CaseType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_CaseType_fields
,2
);
_global_CaseType.package = _global_StringInit(7, "_global");
_global_CaseType.name = _global_StringInit(4, "Case");
_global_CaseType.size = sizeof(struct _global_Case);
_global_CaseType_fields[0].name = _global_StringInit(4, "name");
_global_CaseType_fields[0].offset = offsetof(struct _global_Case, name);
_global_CaseType_fields[0].field_type = 
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
_global_CaseType_fields[1].name = _global_StringInit(4, "args");
_global_CaseType_fields[1].offset = offsetof(struct _global_Case, args);
_global_CaseType_fields[1].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_CaseArg_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_NoneTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_NoneTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_NoneTypeType_fields
,0
);
_global_NoneTypeType.package = _global_StringInit(7, "_global");
_global_NoneTypeType.name = _global_StringInit(8, "NoneType");_global_PointerTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_PointerTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_PointerTypeType_fields
,2
);
_global_PointerTypeType.package = _global_StringInit(7, "_global");
_global_PointerTypeType.name = _global_StringInit(11, "PointerType");
_global_PointerTypeType.size = sizeof(struct _global_PointerType);
_global_PointerTypeType_fields[0].name = _global_StringInit(6, "p_type");
_global_PointerTypeType_fields[0].offset = offsetof(struct _global_PointerType, p_type);
_global_PointerTypeType_fields[0].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
_global_PointerTypeType_fields[1].name = _global_StringInit(8, "nullable");
_global_PointerTypeType_fields[1].offset = offsetof(struct _global_PointerType, nullable);
_global_PointerTypeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_BoolType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_MethodType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
_global_MethodType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_MethodType_fields
,2
);
_global_MethodType.package = _global_StringInit(7, "_global");
_global_MethodType.name = _global_StringInit(6, "Method");
_global_MethodType.size = sizeof(struct _global_Method);
_global_MethodType_fields[0].name = _global_StringInit(4, "name");
_global_MethodType_fields[0].offset = offsetof(struct _global_Method, name);
_global_MethodType_fields[0].field_type = 
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
_global_MethodType_fields[1].name = _global_StringInit(17, "pointer_to_method");
_global_MethodType_fields[1].offset = offsetof(struct _global_Method, pointer_to_method);
_global_MethodType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_NoneType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_PointerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_FieldType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
_global_FieldType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_FieldType_fields
,3
);
_global_FieldType.package = _global_StringInit(7, "_global");
_global_FieldType.name = _global_StringInit(5, "Field");
_global_FieldType.size = sizeof(struct _global_Field);
_global_FieldType_fields[0].name = _global_StringInit(4, "name");
_global_FieldType_fields[0].offset = offsetof(struct _global_Field, name);
_global_FieldType_fields[0].field_type = 
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
_global_FieldType_fields[1].name = _global_StringInit(6, "offset");
_global_FieldType_fields[1].offset = offsetof(struct _global_Field, offset);
_global_FieldType_fields[1].field_type = 
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
_global_FieldType_fields[2].name = _global_StringInit(10, "field_type");
_global_FieldType_fields[2].offset = offsetof(struct _global_Field, field_type);
_global_FieldType_fields[2].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;_global_EnumTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 6);
_global_EnumTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_EnumTypeType_fields
,6
);
_global_EnumTypeType.package = _global_StringInit(7, "_global");
_global_EnumTypeType.name = _global_StringInit(8, "EnumType");
_global_EnumTypeType.size = sizeof(struct _global_EnumType);
_global_EnumTypeType_fields[0].name = _global_StringInit(4, "name");
_global_EnumTypeType_fields[0].offset = offsetof(struct _global_EnumType, name);
_global_EnumTypeType_fields[0].field_type = 
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
_global_EnumTypeType_fields[1].name = _global_StringInit(7, "package");
_global_EnumTypeType_fields[1].offset = offsetof(struct _global_EnumType, package);
_global_EnumTypeType_fields[1].field_type = 
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
_global_EnumTypeType_fields[2].name = _global_StringInit(5, "cases");
_global_EnumTypeType_fields[2].offset = offsetof(struct _global_EnumType, cases);
_global_EnumTypeType_fields[2].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Case_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_EnumTypeType_fields[3].name = _global_StringInit(7, "methods");
_global_EnumTypeType_fields[3].offset = offsetof(struct _global_EnumType, methods);
_global_EnumTypeType_fields[3].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_Method_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_EnumTypeType_fields[4].name = _global_StringInit(9, "tag_field");
_global_EnumTypeType_fields[4].offset = offsetof(struct _global_EnumType, tag_field);
_global_EnumTypeType_fields[4].field_type = 
_global_TypeFromStruct(
_global_Field_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_EnumTypeType_fields[5].name = _global_StringInit(4, "size");
_global_EnumTypeType_fields[5].offset = offsetof(struct _global_EnumType, size);
_global_EnumTypeType_fields[5].field_type = 
_global_TypeFromStruct(
_global_u64_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Dynamic.tag = 1;
_global_Both.tag = 2;
struct _global_Case* x =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 3);
x[0].name = _global_StringInit(6, "Static");
x[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
x[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; x[0].args.data[0].offset = offsetof(struct _global_ArraySize_Static, field0);
x[1].name = _global_StringInit(7, "Dynamic");
x[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
x[2].name = _global_StringInit(4, "Both");
x[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_ArraySizeType.tag_field.name = _global_StringInit(3, "tag");

_global_ArraySizeType.tag_field.offset = offsetof(struct _global_ArraySize, tag);
_global_ArraySizeType.tag_field.field_type = 
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

_global_ArraySizeType.size = sizeof(struct _global_ArraySize);

_global_ArraySizeType.package = _global_StringInit(7, "_global");
_global_ArraySizeType.name = _global_StringInit(9, "ArraySize");
_global_ArraySizeType.cases.data = x;
_global_ArraySizeType.cases.length = 3;
_global_BoolTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
_global_BoolTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_BoolTypeType_fields
,0
);
_global_BoolTypeType.package = _global_StringInit(7, "_global");
_global_BoolTypeType.name = _global_StringInit(8, "BoolType");_global_AliasTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
_global_AliasTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
_global_AliasTypeType_fields
,3
);
_global_AliasTypeType.package = _global_StringInit(7, "_global");
_global_AliasTypeType.name = _global_StringInit(9, "AliasType");
_global_AliasTypeType.size = sizeof(struct _global_AliasType);
_global_AliasTypeType_fields[0].name = _global_StringInit(4, "name");
_global_AliasTypeType_fields[0].offset = offsetof(struct _global_AliasType, name);
_global_AliasTypeType_fields[0].field_type = 
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
_global_AliasTypeType_fields[1].name = _global_StringInit(7, "package");
_global_AliasTypeType_fields[1].offset = offsetof(struct _global_AliasType, package);
_global_AliasTypeType_fields[1].field_type = 
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
_global_AliasTypeType_fields[2].name = _global_StringInit(9, "real_type");
_global_AliasTypeType_fields[2].offset = offsetof(struct _global_AliasType, real_type);
_global_AliasTypeType_fields[2].field_type = 
_global_TypeFromStruct(
&_global_Type_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;_global_SizeT_Type.name = _global_StringInit(5, "SizeT");
_global_SizeT_Type.package = _global_StringInit(7, "_global");
_global_SizeT_Type.real_type = 
_global_TypeFromStruct(
_global_u64_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Allocator_Type.name = _global_StringInit(9, "Allocator")
;_global_Allocator_Type.package = _global_StringInit(7, "_global");; 
 mainInitTypes(); mainInit(); return 0;  };