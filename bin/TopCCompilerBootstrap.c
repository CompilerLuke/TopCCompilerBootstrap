#include <llvm-c/Core.h>
#include <llvm-c/ExecutionEngine.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>
#include <llvm-c/Analysis.h>
#include <llvm-c/BitWriter.h>

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

struct _global_String _global_StringInit(unsigned int length, char* data) {
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

static inline void* _global_offsetPtr(void* ptr, int offset, __Context) {
    return ((char*)ptr) + offset;
};

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
struct _global_TemporaryStorage _global_temporary_storage;struct _global_TemporaryStorage _global_longterm_storage_allocator;struct _global_Malloc _global_malloc;struct _global_Allocator _global_temporary_storage_as_allocator;struct _global_Allocator_VTABLE rTemporaryStorage_VTABLE_FOR_Allocator;struct _global_Allocator _global_malloc_as_allocator;struct _global_Allocator_VTABLE rMalloc_VTABLE_FOR_Allocator;struct _global_Allocator _global_longterm_storage_as_allocator;struct _global_TemporaryStorage _global_new_TemporaryStorage(uint64_t _global_maxSize, struct _global_Context* bx){;
;return _global_TemporaryStorageInit((uint64_t)0,(uint64_t)0,_global_c_alloc(_global_maxSize,bx),_global_maxSize);
;}
uint64_t _global_TemporaryStorage_get_occupied(struct _global_TemporaryStorage* _global_self, struct _global_Context* bx){;
;return (_global_self)->occupied;
;}
void* _global_TemporaryStorage_alloc(struct _global_TemporaryStorage* _global_self, uint64_t _global_size, struct _global_Context* bx){;
;
uint64_t _global_occupied;_global_occupied = (_global_self)->occupied;;
(_global_self)->occupied=(_global_self)->occupied+_global_size;;
if((_global_self)->occupied>(_global_self)->highest){;
(_global_self)->highest=(_global_self)->occupied;;
;};
if((_global_self)->occupied>=(_global_self)->maxSize){;
(bx)->allocator=&(_global_malloc_as_allocator);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(48,"ERROR: used more tempory memory than available: "),_global_u64_toStringByValue(((_global_self)->maxSize),bx),bx),_global_StringInit(0,""),bx),bx);
;};
;return _global_offsetPtr((_global_self)->data,(int64_t)_global_occupied,bx);
;}
void _global_TemporaryStorage_dealloc(struct _global_TemporaryStorage* _global_self, void* _global_p, struct _global_Context* bx){;
;
;}
void _global_TemporaryStorage_reset_to(struct _global_TemporaryStorage* _global_self, uint64_t _global_occupied, struct _global_Context* bx){;
;
(_global_self)->occupied=_global_occupied;;
if((_global_self)->occupied>=(_global_self)->maxSize){;
(bx)->allocator=&(_global_malloc_as_allocator);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(48,"ERROR: used more tempory memory than available: "),_global_u64_toStringByValue(((_global_self)->occupied),bx),bx),_global_StringInit(0,""),bx),bx);
;};
;}
void* _global_Malloc_alloc(struct _global_Malloc* _global_self, uint64_t _global_size, struct _global_Context* bx){;
;
;return _global_c_alloc(_global_size,bx);
;}
void _global_Malloc_dealloc(struct _global_Malloc* _global_self, void* _global_pointer, struct _global_Context* bx){;
;
_global_c_free(_global_pointer,bx);
;}
unsigned int _global_Malloc_get_occupied(struct _global_Malloc* _global_self, struct _global_Context* bx){;
;return 0;
;}
void _global_Malloc_free_allocator(struct _global_Malloc* _global_self, struct _global_Context* bx){;
;}
void _global_Malloc_reset_to(struct _global_Malloc* _global_self, uint64_t _global_to, struct _global_Context* bx){;
;
;}
void _global_free(void* _global_p, struct _global_Context* bx){;
_global_Allocator_dealloc((bx)->allocator,_global_p,bx);
;}
void _global_free_longterm(void* _global_p, struct _global_Context* bx){;
_global_Allocator_dealloc((bx)->longterm_storage,_global_p,bx);
;}
void _global_TemporaryStorage_free_allocator(struct _global_TemporaryStorage* _global_self, struct _global_Context* bx){;
_global_c_free((_global_self)->data,bx);
;}

#define _global_char_buffer_toString(bx,by) _runtime_char_buffer_toString(bx)

#define _global_null_terminated '\0'

#define _global_make_String(bz,bB,bC) _global_StringInit(bz,bB)
struct _global_Array_Array_T _global_empty_array(struct _global_Context* bD){;return _global_Array_Array_TInit(0,0,NULL,NULL);
;}
void _global_Range_iteratorByValue(struct _global_Range _global_self, struct _global_Context* bD){;
_global_RangeIteratorInit(_global_self,0);
;}
static inline void _global_Range_iterator(struct _global_Range* bF,struct _global_Context* bD){
_global_Range_iteratorByValue(*bF,bD);
}static inline struct _global_Maybe_uint tmp_globalb(struct _global_Maybe_Maybe_T bG) {
struct _global_Maybe_uint bF;bF.tag = bG.tag;bF.cases = *(union _global_Maybe_uint_cases*) &(bG.cases);return bF;
}
struct _global_Maybe_uint _global_RangeIterator_next(struct _global_RangeIterator* _global_self, struct _global_Context* bD){;
struct _global_Range* _global_range;_global_range = &(((_global_self)->range));;
;if((_global_self)->it<(_global_range)->end){;
unsigned int _global_tmp;_global_tmp = (_global_self)->it;;
(_global_self)->it=(_global_self)->it+1;;
return _global_Some_uint(_global_tmp,bD);}
else{return tmp_globalb(_global_None);};
;}
struct _global_String _global_FileAcess_toStringByValue(struct _global_FileAcess _global_self, struct _global_Context* bD){;
;struct _global_FileAcess bF =_global_self;
if(bF.tag==0){return _global_StringInit(1,"r");}else if(bF.tag==1){return _global_StringInit(1,"w");}else if(bF.tag==2){return _global_StringInit(2,"rb");}else if(bF.tag==3){return _global_StringInit(2,"wb");};
;}
static inline struct _global_String _global_FileAcess_toString(struct _global_FileAcess* bG,struct _global_Context* bD){
return _global_FileAcess_toStringByValue(*bG,bD);
}
#define _global_c_open_file(bD,bF,bG) _runtime_c_open_file(bD,bF)

#define _global_c_close_file(bH,bJ) _runtime_c_close_file(bH)

#define _global_c_read_file(bK,bL,bM,bN) _runtime_read_file(bK,bL,bM)

#define _global_c_write_file(bP,bQ,bR,bS) _runtime_write_file(bP,bQ,bR)
struct _global_String _global_File_read(struct _global_File* _global_self, struct _global_Context* bT){;
struct _global_FileAcess bV =(_global_self)->acess;if(bV.tag==0){
;}
else if(bV.tag==2){
;}
else if(1){
_global_panic(_global_StringInit(40,"Trying to read from file not set to read"),bT);
;}
;
;return _global_c_read_file((_global_self)->c_file,(_global_self)->filename,bT,bT);
;}
void _global_File_write(struct _global_File* _global_self, struct _global_String _global_s, struct _global_Context* bT){;
;
struct _global_FileAcess bV =(_global_self)->acess;if(bV.tag==1){
;}
else if(bV.tag==3){
;}
else if(1){
_global_panic(_global_StringInit(40,"Trying to write to file not set to write"),bT);
;}
;
_global_c_write_file((_global_self)->c_file,_global_s,bT,bT);
;}
void _global_File_freeByValue(struct _global_File _global_self, struct _global_Context* bT){;
_global_c_close_file((_global_self).c_file,bT);
;}
static inline void _global_File_free(struct _global_File* bV,struct _global_Context* bT){
_global_File_freeByValue(*bV,bT);
}static inline struct _global_Maybe_File tmp_globalc(struct _global_Maybe_Maybe_T bX) {
struct _global_Maybe_File bW;bW.tag = bX.tag;bW.cases = *(union _global_Maybe_File_cases*) &(bX.cases);return bW;
}
struct _global_Maybe_File _global_open(struct _global_String _global_filename, struct _global_FileAcess _global_acess, struct _global_Context* bT){;
;
;struct FILE* bV =_global_c_open_file(_global_filename,_global_FileAcess_toStringByValue(_global_acess,bT),bT);
if(bV != NULL){struct FILE* _global_file = bV;
return _global_Some_File(_global_FileInit(_global_file,_global_acess,_global_filename),bT);}else if(bV == NULL){return tmp_globalc(_global_None);};
;}

#define _global_set_bit_to(bT,bV,bW,bX) _global_c_set_bit_to(bT,bV,bW)

#define _global_is_bit_set(bY,bZ,cb) _global_c_is_bit_set(bY,bZ)

#define _global_bit_and(db,fb,gb) _global_c_bit_and(db,fb)

#define _global_null_char '\0'
uint64_t _global_IntType_get_size(struct IntType* _global_self, struct _global_Context* hb){;
;return (uint64_t)(_global_self)->size;
;}
struct _global_String _global_IntType_toString(struct IntType* _global_self, struct _global_Context* hb){;
;return ((_global_self)->sign ? _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"i"),_global_uint_toStringByValue(((_global_self)->size*8),hb),hb),_global_StringInit(0,""),hb):(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"u"),_global_uint_toStringByValue(((_global_self)->size*8),hb),hb),_global_StringInit(0,""),hb)));
;}
static inline struct _global_String _global_IntType_toStringByValue(struct IntType jb,struct _global_Context* hb){
return _global_IntType_toString(&jb,hb);
}uint64_t _global_FloatType_get_size(struct FloatType* _global_self, struct _global_Context* hb){;
;return (uint64_t)(_global_self)->size;
;}
struct _global_String _global_FloatType_toString(struct FloatType* _global_self, struct _global_Context* hb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"f"),_global_uint_toStringByValue(((_global_self)->size*8),hb),hb),_global_StringInit(0,""),hb);
;}
static inline struct _global_String _global_FloatType_toStringByValue(struct FloatType jb,struct _global_Context* hb){
return _global_FloatType_toString(&jb,hb);
}struct _global_String _global_BoolType_toString(struct BoolType* _global_self, struct _global_Context* hb){;
;return _global_StringInit(4,"bool");
;}
static inline struct _global_String _global_BoolType_toStringByValue(struct BoolType jb,struct _global_Context* hb){
return _global_BoolType_toString(&jb,hb);
}uint64_t _global_BoolType_get_size(struct BoolType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(_Bool);
;}
struct _global_String _global_StringType_toString(struct StringType* _global_self, struct _global_Context* hb){;
;return _global_StringInit(6,"string");
;}
static inline struct _global_String _global_StringType_toStringByValue(struct StringType jb,struct _global_Context* hb){
return _global_StringType_toString(&jb,hb);
}uint64_t _global_StringType_get_size(struct StringType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(struct _global_String);
;}
struct _global_String _global_AliasType_toString(struct _global_AliasType* _global_self, struct _global_Context* hb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),hb),_global_StringInit(1,"."),hb),((_global_self)->name),hb),_global_StringInit(0,""),hb);
;}
static inline struct _global_String _global_AliasType_toStringByValue(struct _global_AliasType jb,struct _global_Context* hb){
return _global_AliasType_toString(&jb,hb);
}uint64_t _global_AliasType_get_size(struct _global_AliasType* _global_self, struct _global_Context* hb){;
;return _global_Type_get_size(&((_global_self)->real_type),hb);
;}
struct _global_String _global_PointerType_toString(struct _global_PointerType* _global_self, struct _global_Context* hb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"&"),_global_Type_toStringByValue(((_global_self)->p_type),hb),hb),_global_StringInit(0,""),hb);
;}
static inline struct _global_String _global_PointerType_toStringByValue(struct _global_PointerType jb,struct _global_Context* hb){
return _global_PointerType_toString(&jb,hb);
}uint64_t _global_PointerType_get_size(struct _global_PointerType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(void*);
;}
uint64_t _global_StructType_get_size(struct _global_StructType* _global_self, struct _global_Context* hb){;
;return (_global_self)->size;
;}
struct _global_String _global_StructType_toString(struct _global_StructType* _global_self, struct _global_Context* hb){;
;return (_global_String_op_eqByValue((_global_self)->package,_global_StringInit(7,"_global"),hb) ? (_global_self)->name:(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),hb),_global_StringInit(1,"."),hb),((_global_self)->name),hb),_global_StringInit(0,""),hb)));
;}
static inline struct _global_String _global_StructType_toStringByValue(struct _global_StructType jb,struct _global_Context* hb){
return _global_StructType_toString(&jb,hb);
}unsigned char _global_EnumType_get_tag(struct _global_EnumType* _global_self, void* _global_ptr, struct _global_Context* hb){;
;
;return *((unsigned char*)(_global_offsetPtr(_global_ptr,(int64_t)((_global_self)->tag_field).offset,hb)));
;}
struct _global_String _global_EnumType_toString(struct _global_EnumType* _global_self, struct _global_Context* hb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),hb),_global_StringInit(1,"."),hb),((_global_self)->name),hb),_global_StringInit(0,""),hb);
;}
static inline struct _global_String _global_EnumType_toStringByValue(struct _global_EnumType jb,struct _global_Context* hb){
return _global_EnumType_toString(&jb,hb);
}uint64_t _global_EnumType_get_size(struct _global_EnumType* _global_self, struct _global_Context* hb){;
;return (_global_self)->size;
;}
uint64_t _global_FuncType_get_size(struct _global_FuncType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(pp___none);
;}
struct _global_String _global_InterfaceType_toString(struct _global_InterfaceType* _global_self, struct _global_Context* hb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((_global_self)->package),hb),_global_StringInit(1,"."),hb),((_global_self)->name),hb),_global_StringInit(0,""),hb);
;}
static inline struct _global_String _global_InterfaceType_toStringByValue(struct _global_InterfaceType jb,struct _global_Context* hb){
return _global_InterfaceType_toString(&jb,hb);
}uint64_t _global_InterfaceType_get_size(struct _global_InterfaceType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(struct bb);
;}
uint64_t _global_ArrayType_get_size(struct _global_ArrayType* _global_self, struct _global_Context* hb){;
;struct _global_ArraySize jb =*((_global_self)->size);
if(jb.tag==0){unsigned int _global_length = jb.cases.Static.field0;
return (uint64_t)_global_length*_global_Type_get_size(&((_global_self)->array_type),hb);}else if(jb.tag==1){return (uint64_t)sizeof(struct _global_Array_none);}else if(jb.tag==2){return (uint64_t)sizeof(struct _global_StaticArray_StaticArray_S_none);};
;}
struct _global_String _global_ArrayType_toString(struct _global_ArrayType* _global_self, struct _global_Context* hb){;
;struct _global_ArraySize jb =*((_global_self)->size);
if(jb.tag==0){unsigned int _global_length = jb.cases.Static.field0;
return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"["),_global_uint_toStringByValue((_global_length),hb),hb),_global_StringInit(1,"]"),hb),_global_Type_toStringByValue(((_global_self)->array_type),hb),hb),_global_StringInit(0,""),hb);}else if(jb.tag==1){return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"[..]"),_global_Type_toStringByValue(((_global_self)->array_type),hb),hb),_global_StringInit(0,""),hb);}else if(jb.tag==2){return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(2,"[]"),_global_Type_toStringByValue(((_global_self)->array_type),hb),hb),_global_StringInit(0,""),hb);};
;}
static inline struct _global_String _global_ArrayType_toStringByValue(struct _global_ArrayType kb,struct _global_Context* hb){
return _global_ArrayType_toString(&kb,hb);
}uint64_t _global_CharType_get_size(struct _global_CharType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(char);
;}
struct _global_String _global_NoneType_toString(struct NoneType* _global_self, struct _global_Context* hb){;
;return _global_StringInit(4,"none");
;}
static inline struct _global_String _global_NoneType_toStringByValue(struct NoneType jb,struct _global_Context* hb){
return _global_NoneType_toString(&jb,hb);
}uint64_t _global_NoneType_get_size(struct NoneType* _global_self, struct _global_Context* hb){;
;return (uint64_t)sizeof(char);
;}
void _global_log_string(struct _global_String _global_s, struct _global_Context* hb){;
_global_c_log(_global_String_toString(&(_global_s),hb),hb);
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
_global_temporary_storage = _global_new_TemporaryStorage((uint64_t)10000000,(&_global_context));;
_global_longterm_storage_allocator = _global_new_TemporaryStorage((uint64_t)100000000,(&_global_context));;
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

struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* b);

struct _global_String error_CompilerError_toString(struct error_CompilerError*,struct _global_Context* b);

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

union ast_OperatorKind_cases {

};
struct ast_OperatorKind {
union ast_OperatorKind_cases cases;
unsigned char tag;
};
struct ast_OperatorKind ast_Add;
struct ast_OperatorKind ast_Mul;
struct ast_OperatorKind ast_Div;
struct _global_EnumType ast_OperatorKindType;struct _global_EnumType* ast_OperatorKind_get_type(struct ast_OperatorKind* self, struct _global_Context* c){return &ast_OperatorKindType;}
struct _global_EnumType* ast_OperatorKind_get_typeByValue(struct ast_OperatorKind self, struct _global_Context* c){return &ast_OperatorKindType;}
struct ast_ReadInfo {
_Bool is_global;
struct _global_String name;
};
static inline struct ast_ReadInfo ast_ReadInfoInit(_Bool is_global,struct _global_String name){
struct ast_ReadInfo f;
f.is_global=is_global;f.name=name;return f;
};
struct _global_StructType ast_ReadInfoType;struct _global_StructType* ast_ReadInfo_get_type(struct ast_ReadInfo* self, struct _global_Context* c){return &ast_ReadInfoType;}
struct _global_Field* ast_ReadInfoType_fields;
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

};union ast_Payload_cases {
struct ast_Payload_Int Int;
struct ast_Payload_Float Float;
struct ast_Payload_Bool Bool;
struct ast_Payload_Operator Operator;
struct ast_Payload_Identifier Identifier;

};
struct ast_Payload {
union ast_Payload_cases cases;
unsigned char tag;
};
struct ast_Payload ast_Root;
struct ast_Payload ast_Int(struct _global_String g,struct _global_Context* h){
struct ast_Payload j;
j.cases.Int.field0 = g;j.tag = 1;
return j;}
struct ast_Payload ast_Float(struct _global_String k,struct _global_Context* l){
struct ast_Payload m;
m.cases.Float.field0 = k;m.tag = 2;
return m;}
struct ast_Payload ast_Bool(_Bool n,struct _global_Context* p){
struct ast_Payload q;
q.cases.Bool.field0 = n;q.tag = 3;
return q;}
struct ast_Payload ast_Operator(struct ast_OperatorKind r,struct _global_Context* s){
struct ast_Payload t;
t.cases.Operator.field0 = r;t.tag = 4;
return t;}
struct ast_Payload ast_Identifier(struct ast_ReadInfo* v,struct _global_Context* w){
struct ast_Payload x;
x.cases.Identifier.field0 = v;x.tag = 5;
return x;}
struct ast_Payload ast_FuncCall;
struct ast_Payload ast_CreateAssign;
struct ast_Payload ast_Create;
struct ast_Payload ast_Assign;
struct ast_Payload ast_If;
struct ast_Payload ast_Block;
struct ast_Payload ast_IfCondition;
struct ast_Payload ast_Else;
struct _global_EnumType ast_PayloadType;struct _global_EnumType* ast_Payload_get_type(struct ast_Payload* self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_EnumType* ast_Payload_get_typeByValue(struct ast_Payload self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_Array_rast_AST {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct ast_AST** data;
};
static inline struct _global_Array_rast_AST _global_Array_rast_ASTInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct ast_AST** data){
struct _global_Array_rast_AST B;
B.length=length;B.capacity=capacity;B.allocator=allocator;B.data=data;return B;
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
struct ast_AST C;
C.payload=payload;C.nodes=nodes;C._type=_type;C.owner=owner;C._filename=_filename;C._line=_line;C._column=_column;return C;
};
struct _global_StructType ast_ASTType;struct _global_StructType* ast_AST_get_type(struct ast_AST* self, struct _global_Context* c){return &ast_ASTType;}
struct _global_Field* ast_ASTType_fields;
struct _global_PointerType _global_Maybe_rrast_ASTType;struct _global_PointerType* _global_Maybe_rrast_AST_get_type(struct ast_AST**** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType* _global_Maybe_rrast_AST_get_typeByValue(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType _global_Maybe_rast_ASTType;struct _global_PointerType* _global_Maybe_rast_AST_get_type(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType* _global_Maybe_rast_AST_get_typeByValue(struct ast_AST** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}

struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* b);

struct _global_String ast_Payload_toString(struct ast_Payload*,struct _global_Context* b);
struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* c);
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* d);
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* f);
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* g);

struct puintcrnonep  { unsigned int field0;void* field1; };
struct puintcrnonep puintcrnonepInit(unsigned int field0,void* field1) {struct puintcrnonep tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

void print_type_to_string(struct _global_Type print_kind, void* print_ptr, struct _global_String print_tab, struct stringBuilder_StringBuilder* print_s, struct _global_Context* b);

struct _global_Array_____operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_operatorParser_OpDesc* data;
};
static inline struct _global_Array_____operatorParser_OpDesc _global_Array_____operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_operatorParser_OpDesc* data){
struct _global_Array_____operatorParser_OpDesc f;
f.length=length;f.capacity=capacity;f.allocator=allocator;f.data=data;return f;
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
struct _global_Array_operatorParser_OpDesc d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
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
struct operatorParser_OpDesc c;
c.unary=unary;c.precedence=precedence;c.kind=kind;c.left_a=left_a;return c;
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
struct operatorParser_OpStack g;
g.scopes=scopes;return g;
};
struct _global_StructType operatorParser_OpStackType;struct _global_StructType* operatorParser_OpStack_get_type(struct operatorParser_OpStack* self, struct _global_Context* c){return &operatorParser_OpStackType;}
struct _global_Field* operatorParser_OpStackType_fields;
struct parser_Parser {
struct _global_StaticArray_StaticArray_S_lexer_Token tokens;
struct _global_String filename;
struct ast_AST* current_node;
unsigned int iter;
struct operatorParser_OpStack op_stack;
unsigned int num_paren;
unsigned int num_indent;
};
static inline struct parser_Parser parser_ParserInit(struct _global_StaticArray_StaticArray_S_lexer_Token tokens,struct _global_String filename,struct ast_AST* current_node,unsigned int iter,struct operatorParser_OpStack op_stack,unsigned int num_paren,unsigned int num_indent){
struct parser_Parser h;
h.tokens=tokens;h.filename=filename;h.current_node=current_node;h.iter=iter;h.op_stack=op_stack;h.num_paren=num_paren;h.num_indent=num_indent;return h;
};
struct _global_StructType parser_ParserType;struct _global_StructType* parser_Parser_get_type(struct parser_Parser* self, struct _global_Context* c){return &parser_ParserType;}
struct _global_Field* parser_ParserType_fields;
struct _global_StaticArray_5_string {
struct _global_String data[5];
};
struct _global_StaticArray_5_string _global_StaticArray_5_stringFill_array(struct _global_String with){
struct _global_StaticArray_5_string tmp;
for (unsigned int i = 0; i < 5; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_5_string _global_StaticArray_5_stringInit(struct _global_String j,struct _global_String k,struct _global_String l,struct _global_String m,struct _global_String n){
struct _global_StaticArray_5_string tmp;
tmp.data[0] = j;
tmp.data[1] = k;
tmp.data[2] = l;
tmp.data[3] = m;
tmp.data[4] = n;
return tmp; }
struct _global_ArrayType _global_StaticArray_5_stringType;struct _global_ArrayType* _global_StaticArray_5_string_get_type(struct _global_StaticArray_5_string* self, struct _global_Context* c){return &_global_StaticArray_5_stringType;}
struct _global_ArrayType* _global_StaticArray_5_string_get_typeByValue(struct _global_StaticArray_5_string self, struct _global_Context* c){return &_global_StaticArray_5_stringType;}
struct _global_ArrayType _global_StaticArray_5_stringType;
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


struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* b);
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* c);


struct error_CompilerError* tuple_parse_tuple(struct parser_Parser* tuple_self, struct _global_Context* b);


struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* b);


struct error_CompilerError* ifStatement_if_body(struct parser_Parser* ifStatement_self, struct _global_Context* b);
struct error_CompilerError* ifStatement_if_expr(struct parser_Parser* ifStatement_self, struct _global_Context* c);
struct error_CompilerError* ifStatement_else_expr(struct parser_Parser* ifStatement_self, struct _global_Context* d);

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
struct _global_Result_Result_E_rast_AST _global_Ok_Result_E_rast_AST(struct ast_AST* m,struct _global_Context* n){
struct _global_Result_Result_E_rast_AST p;
p.cases.Ok.field0 = m;p.tag = 0;
return p;}
struct _global_Result_Result_E_rast_AST _global_Error_Result_E_rast_AST(void* q,struct _global_Context* r){
struct _global_Result_Result_E_rast_AST s;
s.cases.Error.field0 = q;s.tag = 1;
return s;}
struct _global_EnumType _global_Result_Result_E_rast_ASTType;struct _global_EnumType* _global_Result_Result_E_rast_AST_get_type(struct _global_Result_Result_E_rast_AST* self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}
struct _global_EnumType* _global_Result_Result_E_rast_AST_get_typeByValue(struct _global_Result_Result_E_rast_AST self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}

struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* b);
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* c);
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* d);
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* f);
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* g);
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* h);
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* j);
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* k);
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* l);
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* m);
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* n);
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, unsigned int parser_num_indent, struct _global_Context* p);
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* q);

struct _global_AliasType mir_ID_Type;struct mir_CreateVar {
unsigned int name;
};
static inline struct mir_CreateVar mir_CreateVarInit(unsigned int name){
struct mir_CreateVar c;
c.name=name;return c;
};
struct _global_StructType mir_CreateVarType;struct _global_StructType* mir_CreateVar_get_type(struct mir_CreateVar* self, struct _global_Context* c){return &mir_CreateVarType;}
struct _global_Field* mir_CreateVarType_fields;
struct _global_Type_VTABLE rAliasType_VTABLE_FOR_Type;
struct _global_String mir_CreateVar_toString(struct mir_CreateVar* mir_self, struct _global_Context* b);

struct _global_String mir_CreateVar_toString(struct mir_CreateVar*,struct _global_Context* b);

struct _global_AliasType hashMap_Hash_Type;
unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* b);

struct _global_Array_mir_OpCode {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_OpCode* data;
};
static inline struct _global_Array_mir_OpCode _global_Array_mir_OpCodeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_OpCode* data){
struct _global_Array_mir_OpCode P;
P.length=length;P.capacity=capacity;P.allocator=allocator;P.data=data;return P;
};
struct _global_ArrayType _global_Array_mir_OpCodeType;struct _global_ArrayType* _global_Array_mir_OpCode_get_type(struct _global_Array_mir_OpCode* self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType* _global_Array_mir_OpCode_get_typeByValue(struct _global_Array_mir_OpCode self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType _global_Array_mir_OpCodeType;struct mir_ReadInfo {
_Bool is_global;
struct types_CompilerType _type;
unsigned int id;
};
static inline struct mir_ReadInfo mir_ReadInfoInit(_Bool is_global,struct types_CompilerType _type,unsigned int id){
struct mir_ReadInfo c;
c.is_global=is_global;c._type=_type;c.id=id;return c;
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

};struct mir_OpCode_FuncCall {
struct types_FuncPtr* field0;

};struct mir_OpCode_CondJump {
unsigned int field0;
unsigned int field1;

};struct mir_OpCode_Jump {
unsigned int field0;

};union mir_OpCode_cases {
struct mir_OpCode_Store_i32 Store_i32;
struct mir_OpCode_Store_f32 Store_f32;
struct mir_OpCode_Store_bool Store_bool;
struct mir_OpCode_Create Create;
struct mir_OpCode_Read Read;
struct mir_OpCode_Assign Assign;
struct mir_OpCode_FuncCall FuncCall;
struct mir_OpCode_CondJump CondJump;
struct mir_OpCode_Jump Jump;

};
struct mir_OpCode {
union mir_OpCode_cases cases;
unsigned char tag;
};
struct mir_OpCode mir_Add_i32;
struct mir_OpCode mir_Mul_i32;
struct mir_OpCode mir_Div_i32;
struct mir_OpCode mir_Add_f32;
struct mir_OpCode mir_Mul_f32;
struct mir_OpCode mir_Div_f32;
struct mir_OpCode mir_Store_i32(int32_t d,struct _global_Context* f){
struct mir_OpCode g;
g.cases.Store_i32.field0 = d;g.tag = 6;
return g;}
struct mir_OpCode mir_Store_f32(float h,struct _global_Context* j){
struct mir_OpCode k;
k.cases.Store_f32.field0 = h;k.tag = 7;
return k;}
struct mir_OpCode mir_Store_bool(_Bool l,struct _global_Context* m){
struct mir_OpCode n;
n.cases.Store_bool.field0 = l;n.tag = 8;
return n;}
struct mir_OpCode mir_Create(struct mir_ReadInfo* p,struct _global_Context* q){
struct mir_OpCode r;
r.cases.Create.field0 = p;r.tag = 9;
return r;}
struct mir_OpCode mir_Read(struct mir_ReadInfo* s,struct _global_Context* t){
struct mir_OpCode v;
v.cases.Read.field0 = s;v.tag = 10;
return v;}
struct mir_OpCode mir_Assign(struct mir_ReadInfo* w,struct _global_Context* x){
struct mir_OpCode y;
y.cases.Assign.field0 = w;y.tag = 11;
return y;}
struct mir_OpCode mir_FuncCall(struct types_FuncPtr* z,struct _global_Context* B){
struct mir_OpCode C;
C.cases.FuncCall.field0 = z;C.tag = 12;
return C;}
struct mir_OpCode mir_FuncReturn;
struct mir_OpCode mir_CondJump(unsigned int D,unsigned int F,struct _global_Context* G){
struct mir_OpCode H;
H.cases.CondJump.field0 = D;H.cases.CondJump.field1 = F;H.tag = 14;
return H;}
struct mir_OpCode mir_Jump(unsigned int J,struct _global_Context* K){
struct mir_OpCode L;
L.cases.Jump.field0 = J;L.tag = 15;
return L;}
struct _global_EnumType mir_OpCodeType;struct _global_EnumType* mir_OpCode_get_type(struct mir_OpCode* self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_EnumType* mir_OpCode_get_typeByValue(struct mir_OpCode self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_Type_VTABLE rFloatType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_OpCodeType;struct _global_PointerType* _global_Maybe_rmir_OpCode_get_type(struct mir_OpCode*** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct _global_PointerType* _global_Maybe_rmir_OpCode_get_typeByValue(struct mir_OpCode** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct mir_Block {
unsigned int id;
struct _global_Array_mir_OpCode* code;
};
static inline struct mir_Block mir_BlockInit(unsigned int id,struct _global_Array_mir_OpCode* code){
struct mir_Block Q;
Q.id=id;Q.code=code;return Q;
};
struct _global_StructType mir_BlockType;struct _global_StructType* mir_Block_get_type(struct mir_Block* self, struct _global_Context* c){return &mir_BlockType;}
struct _global_Field* mir_BlockType_fields;
struct _global_PointerType _global_Maybe_rmir_BlockType;struct _global_PointerType* _global_Maybe_rmir_Block_get_type(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct _global_PointerType* _global_Maybe_rmir_Block_get_typeByValue(struct mir_Block** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct astToMIR_CFG {
unsigned int return_to;
struct mir_Block* block;
};
static inline struct astToMIR_CFG astToMIR_CFGInit(unsigned int return_to,struct mir_Block* block){
struct astToMIR_CFG R;
R.return_to=return_to;R.block=block;return R;
};
struct _global_StructType astToMIR_CFGType;struct _global_StructType* astToMIR_CFG_get_type(struct astToMIR_CFG* self, struct _global_Context* c){return &astToMIR_CFGType;}
struct _global_Field* astToMIR_CFGType_fields;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ {
struct hashMap_HashBucket_uint* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(struct hashMap_HashBucket_uint* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ W;
W.data=data;W.length=length;return W;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_Array_string {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_String* data;
};
static inline struct _global_Array_string _global_Array_stringInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_String* data){
struct _global_Array_string S;
S.length=length;S.capacity=capacity;S.allocator=allocator;S.data=data;return S;
};
struct _global_ArrayType _global_Array_stringType;struct _global_ArrayType* _global_Array_string_get_type(struct _global_Array_string* self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType* _global_Array_string_get_typeByValue(struct _global_Array_string self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType _global_Array_stringType;struct _global_PointerType _global_Maybe_rstringType;struct _global_PointerType* _global_Maybe_rstring_get_type(struct _global_String*** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_PointerType* _global_Maybe_rstring_get_typeByValue(struct _global_String** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_Array_uint {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
unsigned int* data;
};
static inline struct _global_Array_uint _global_Array_uintInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,unsigned int* data){
struct _global_Array_uint T;
T.length=length;T.capacity=capacity;T.allocator=allocator;T.data=data;return T;
};
struct _global_ArrayType _global_Array_uintType;struct _global_ArrayType* _global_Array_uint_get_type(struct _global_Array_uint* self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType* _global_Array_uint_get_typeByValue(struct _global_Array_uint self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType _global_Array_uintType;struct _global_PointerType _global_Maybe_ruintType;struct _global_PointerType* _global_Maybe_ruint_get_type(unsigned int*** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct _global_PointerType* _global_Maybe_ruint_get_typeByValue(unsigned int** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct hashMap_HashBucket_uint {
struct _global_Array_string keys;
struct _global_Array_uint values;
};
static inline struct hashMap_HashBucket_uint hashMap_HashBucket_uintInit(struct _global_Array_string keys,struct _global_Array_uint values){
struct hashMap_HashBucket_uint V;
V.keys=keys;V.values=values;return V;
};
struct _global_StructType hashMap_HashBucket_uintType;struct _global_StructType* hashMap_HashBucket_uint_get_type(struct hashMap_HashBucket_uint* self, struct _global_Context* c){return &hashMap_HashBucket_uintType;}
struct _global_Field* hashMap_HashBucket_uintType_fields;
struct hashMap_HashMap_uint {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets;
};
static inline struct hashMap_HashMap_uint hashMap_HashMap_uintInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets){
struct hashMap_HashMap_uint X;
X.buckets=buckets;return X;
};
struct _global_StructType hashMap_HashMap_uintType;struct _global_StructType* hashMap_HashMap_uint_get_type(struct hashMap_HashMap_uint* self, struct _global_Context* c){return &hashMap_HashMap_uintType;}
struct _global_Field* hashMap_HashMap_uintType_fields;
struct _global_Array_astToMIR_CFG {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct astToMIR_CFG* data;
};
static inline struct _global_Array_astToMIR_CFG _global_Array_astToMIR_CFGInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct astToMIR_CFG* data){
struct _global_Array_astToMIR_CFG Y;
Y.length=length;Y.capacity=capacity;Y.allocator=allocator;Y.data=data;return Y;
};
struct _global_ArrayType _global_Array_astToMIR_CFGType;struct _global_ArrayType* _global_Array_astToMIR_CFG_get_type(struct _global_Array_astToMIR_CFG* self, struct _global_Context* c){return &_global_Array_astToMIR_CFGType;}
struct _global_ArrayType* _global_Array_astToMIR_CFG_get_typeByValue(struct _global_Array_astToMIR_CFG self, struct _global_Context* c){return &_global_Array_astToMIR_CFGType;}
struct _global_ArrayType _global_Array_astToMIR_CFGType;struct _global_PointerType _global_Maybe_rastToMIR_CFGType;struct _global_PointerType* _global_Maybe_rastToMIR_CFG_get_type(struct astToMIR_CFG*** self, struct _global_Context* c){return &_global_Maybe_rastToMIR_CFGType;}
struct _global_PointerType* _global_Maybe_rastToMIR_CFG_get_typeByValue(struct astToMIR_CFG** self, struct _global_Context* c){return &_global_Maybe_rastToMIR_CFGType;}
struct _global_Array_rmir_Block {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_rmir_Block _global_Array_rmir_BlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_rmir_Block Z;
Z.length=length;Z.capacity=capacity;Z.allocator=allocator;Z.data=data;return Z;
};
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_ArrayType* _global_Array_rmir_Block_get_type(struct _global_Array_rmir_Block* self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType* _global_Array_rmir_Block_get_typeByValue(struct _global_Array_rmir_Block self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_PointerType _global_Maybe_rrmir_BlockType;struct _global_PointerType* _global_Maybe_rrmir_Block_get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_PointerType* _global_Maybe_rrmir_Block_get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct astToMIR_Converter {
unsigned int global_var_counter;
unsigned int var_counter;
struct hashMap_HashMap_uint vars;
struct _global_Array_astToMIR_CFG cfgs;
struct mir_Block* block;
unsigned int block_counter;
struct _global_Array_rmir_Block* all_blocks;
};
static inline struct astToMIR_Converter astToMIR_ConverterInit(unsigned int global_var_counter,unsigned int var_counter,struct hashMap_HashMap_uint vars,struct _global_Array_astToMIR_CFG cfgs,struct mir_Block* block,unsigned int block_counter,struct _global_Array_rmir_Block* all_blocks){
struct astToMIR_Converter bb;
bb.global_var_counter=global_var_counter;bb.var_counter=var_counter;bb.vars=vars;bb.cfgs=cfgs;bb.block=block;bb.block_counter=block_counter;bb.all_blocks=all_blocks;return bb;
};
struct _global_StructType astToMIR_ConverterType;struct _global_StructType* astToMIR_Converter_get_type(struct astToMIR_Converter* self, struct _global_Context* c){return &astToMIR_ConverterType;}
struct _global_Field* astToMIR_ConverterType_fields;
struct _global_StaticArray_StaticArray_S_mir_Function {
struct mir_Function* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_Function _global_StaticArray_StaticArray_S_mir_FunctionInit(struct mir_Function* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_Function bg;
bg.data=data;bg.length=length;return bg;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_type(struct _global_StaticArray_StaticArray_S_mir_Function* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_Function self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_StaticArray_StaticArray_S_mir_CreateVar {
struct mir_CreateVar* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_CreateVar _global_StaticArray_StaticArray_S_mir_CreateVarInit(struct mir_CreateVar* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_CreateVar bc;
bc.data=data;bc.length=length;return bc;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_CreateVarType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_CreateVar_get_type(struct _global_StaticArray_StaticArray_S_mir_CreateVar* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_CreateVarType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_CreateVar_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_CreateVar self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_CreateVarType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_CreateVarType;struct _global_StaticArray_StaticArray_S_rmir_Block {
struct mir_Block** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rmir_Block _global_StaticArray_StaticArray_S_rmir_BlockInit(struct mir_Block** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rmir_Block bd;
bd.data=data;bd.length=length;return bd;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_type(struct _global_StaticArray_StaticArray_S_rmir_Block* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_typeByValue(struct _global_StaticArray_StaticArray_S_rmir_Block self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct mir_Function {
struct _global_String name;
struct _global_StaticArray_StaticArray_S_mir_CreateVar args;
struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks;
};
static inline struct mir_Function mir_FunctionInit(struct _global_String name,struct _global_StaticArray_StaticArray_S_mir_CreateVar args,struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks){
struct mir_Function bf;
bf.name=name;bf.args=args;bf.all_blocks=all_blocks;return bf;
};
struct _global_StructType mir_FunctionType;struct _global_StructType* mir_Function_get_type(struct mir_Function* self, struct _global_Context* c){return &mir_FunctionType;}
struct _global_Field* mir_FunctionType_fields;
struct mir_Program {
struct _global_StaticArray_StaticArray_S_mir_Function functions;
};
static inline struct mir_Program mir_ProgramInit(struct _global_StaticArray_StaticArray_S_mir_Function functions){
struct mir_Program bh;
bh.functions=functions;return bh;
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
struct _global_Array_hashMap_HashBucket_uint_ bj;
bj.length=length;bj.capacity=capacity;bj.allocator=allocator;bj.data=data;return bj;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_type(struct _global_Array_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_typeByValue(struct _global_Array_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_PointerType _global_Maybe_rmir_FunctionType;struct _global_PointerType* _global_Maybe_rmir_Function_get_type(struct mir_Function*** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_PointerType* _global_Maybe_rmir_Function_get_typeByValue(struct mir_Function** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_Array_mir_Function {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Function* data;
};
static inline struct _global_Array_mir_Function _global_Array_mir_FunctionInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Function* data){
struct _global_Array_mir_Function bk;
bk.length=length;bk.capacity=capacity;bk.allocator=allocator;bk.data=data;return bk;
};
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_ArrayType* _global_Array_mir_Function_get_type(struct _global_Array_mir_Function* self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType* _global_Array_mir_Function_get_typeByValue(struct _global_Array_mir_Function self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType _global_Array_mir_FunctionType;
struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG* astToMIR_self, struct _global_Context* b);

struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG*,struct _global_Context* b);
unsigned int astToMIR_Converter_push_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* c);
void astToMIR_Converter_append(struct astToMIR_Converter* astToMIR_self, struct mir_OpCode astToMIR_code, struct _global_Context* d);
void astToMIR_Converter_pop_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* f);
void astToMIR_Converter_push_cfg(struct astToMIR_Converter* astToMIR_self, struct astToMIR_CFG astToMIR_cfg, struct _global_Context* g);
void astToMIR_Converter_add_block(struct astToMIR_Converter* astToMIR_self, struct mir_Block* astToMIR_block, struct _global_Context* h);
void astToMIR_Converter_pop_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* j);
struct astToMIR_CFG* astToMIR_Converter_current_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* k);
struct mir_OpCode astToMIR_unsupported(struct _global_String astToMIR_mesg, struct _global_Context* l);
_Bool astToMIR_is_block(struct ast_AST* astToMIR_node, struct _global_Context* m);
void astToMIR_Converter_convert_node(struct astToMIR_Converter* astToMIR_self, struct ast_AST* astToMIR_node, struct _global_Context* n);
struct mir_Program astToMIR_convert(struct ast_AST* astToMIR_node, struct _global_Context* p);

struct _global_Array_rnone {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_rnone _global_Array_rnoneInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_rnone c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_rnoneType;struct _global_ArrayType* _global_Array_rnone_get_type(struct _global_Array_rnone* self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType* _global_Array_rnone_get_typeByValue(struct _global_Array_rnone self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType _global_Array_rnoneType;struct _global_PointerType _global_Maybe_rrnoneType;struct _global_PointerType* _global_Maybe_rrnone_get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_PointerType* _global_Maybe_rrnone_get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_Array_Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_Maybe_rmir_Block_ _global_Array_Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_Maybe_rmir_Block_ d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_PointerType _global_Maybe_rMaybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct interpreter_Interpreter {
struct _global_Array_rnone var_ptr;
struct _global_TemporaryStorage stack;
struct _global_Array_Maybe_rmir_Block_ blocks;
};
static inline struct interpreter_Interpreter interpreter_InterpreterInit(struct _global_Array_rnone var_ptr,struct _global_TemporaryStorage stack,struct _global_Array_Maybe_rmir_Block_ blocks){
struct interpreter_Interpreter f;
f.var_ptr=var_ptr;f.stack=stack;f.blocks=blocks;return f;
};
struct _global_StructType interpreter_InterpreterType;struct _global_StructType* interpreter_Interpreter_get_type(struct interpreter_Interpreter* self, struct _global_Context* c){return &interpreter_InterpreterType;}
struct _global_Field* interpreter_InterpreterType_fields;
typedef void(*printerpreter_Interpreterp___none)(struct interpreter_Interpreter*,struct _global_Context*) ;

void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* b);
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* c);
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_Context* d);
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* f);
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* g);

struct _global_Array_hashMap_HashMap_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashMap_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashMap_scope_DeclInfo_ _global_Array_hashMap_HashMap_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashMap_scope_DeclInfo* data){
struct _global_Array_hashMap_HashMap_scope_DeclInfo_ j;
j.length=length;j.capacity=capacity;j.allocator=allocator;j.data=data;return j;
};
struct _global_ArrayType _global_Array_hashMap_HashMap_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashMap_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashMap_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashMap_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashMap_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashMap_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashMap_scope_DeclInfo_Type;struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ {
struct hashMap_HashBucket_scope_DeclInfo* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(struct hashMap_HashBucket_scope_DeclInfo* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ g;
g.data=data;g.length=length;return g;
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
struct _global_Array_scope_DeclInfo d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_ArrayType* _global_Array_scope_DeclInfo_get_type(struct _global_Array_scope_DeclInfo* self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType* _global_Array_scope_DeclInfo_get_typeByValue(struct _global_Array_scope_DeclInfo self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct scope_DeclInfo {
struct types_CompilerType _type;
_Bool is_global;
};
static inline struct scope_DeclInfo scope_DeclInfoInit(struct types_CompilerType _type,_Bool is_global){
struct scope_DeclInfo c;
c._type=_type;c.is_global=is_global;return c;
};
struct _global_StructType scope_DeclInfoType;struct _global_StructType* scope_DeclInfo_get_type(struct scope_DeclInfo* self, struct _global_Context* c){return &scope_DeclInfoType;}
struct _global_Field* scope_DeclInfoType_fields;
struct _global_PointerType _global_Maybe_rscope_DeclInfoType;struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_type(struct scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_typeByValue(struct scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct hashMap_HashBucket_scope_DeclInfo {
struct _global_Array_string keys;
struct _global_Array_scope_DeclInfo values;
};
static inline struct hashMap_HashBucket_scope_DeclInfo hashMap_HashBucket_scope_DeclInfoInit(struct _global_Array_string keys,struct _global_Array_scope_DeclInfo values){
struct hashMap_HashBucket_scope_DeclInfo f;
f.keys=keys;f.values=values;return f;
};
struct _global_StructType hashMap_HashBucket_scope_DeclInfoType;struct _global_StructType* hashMap_HashBucket_scope_DeclInfo_get_type(struct hashMap_HashBucket_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashBucket_scope_DeclInfoType;}
struct _global_Field* hashMap_HashBucket_scope_DeclInfoType_fields;
struct hashMap_HashMap_scope_DeclInfo {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets;
};
static inline struct hashMap_HashMap_scope_DeclInfo hashMap_HashMap_scope_DeclInfoInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets){
struct hashMap_HashMap_scope_DeclInfo h;
h.buckets=buckets;return h;
};
struct _global_StructType hashMap_HashMap_scope_DeclInfoType;struct _global_StructType* hashMap_HashMap_scope_DeclInfo_get_type(struct hashMap_HashMap_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashMap_scope_DeclInfoType;}
struct _global_Field* hashMap_HashMap_scope_DeclInfoType_fields;
struct _global_PointerType _global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashMap_scope_DeclInfo__get_type(struct hashMap_HashMap_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashMap_scope_DeclInfo__get_typeByValue(struct hashMap_HashMap_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;}
struct scope_Scope {
struct _global_Array_hashMap_HashMap_scope_DeclInfo_ vars;
};
static inline struct scope_Scope scope_ScopeInit(struct _global_Array_hashMap_HashMap_scope_DeclInfo_ vars){
struct scope_Scope k;
k.vars=vars;return k;
};
struct _global_StructType scope_ScopeType;struct _global_StructType* scope_Scope_get_type(struct scope_Scope* self, struct _global_Context* c){return &scope_ScopeType;}
struct _global_Field* scope_ScopeType_fields;
struct validator_State {
struct scope_Scope* scope;
};
static inline struct validator_State validator_StateInit(struct scope_Scope* scope){
struct validator_State l;
l.scope=scope;return l;
};
struct _global_StructType validator_StateType;struct _global_StructType* validator_State_get_type(struct validator_State* self, struct _global_Context* c){return &validator_StateType;}
struct _global_Field* validator_StateType_fields;
struct _global_StaticArray_StaticArray_S_rast_AST {
struct ast_AST** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rast_AST _global_StaticArray_StaticArray_S_rast_ASTInit(struct ast_AST** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rast_AST m;
m.data=data;m.length=length;return m;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_type(struct _global_StaticArray_StaticArray_S_rast_AST* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_typeByValue(struct _global_StaticArray_StaticArray_S_rast_AST self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;
struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* b);

struct _global_PointerType _global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_type(struct hashMap_HashBucket_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct hashMap_HashBucket_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_scope_DeclInfo* data){
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;
struct types_CompilerType scope_DeclInfo_type_of_desc(struct scope_DeclInfo* scope_self, struct _global_Context* b);
struct scope_DeclInfo scope_make_DeclInfo(struct _global_Context* c);
struct scope_Scope* scope_make_Scope(struct _global_Context* d);
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* f);
_Bool scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct _global_Context* g);


struct error_CompilerError* varValidation_validate_read(struct validator_State* varValidation_state, struct ast_ReadInfo* varValidation_read_info, struct ast_AST* varValidation_node, struct _global_Context* b);
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* c);

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
struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* d);
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* f);
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* g);
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* h);

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
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_StructType llvm_LLVMTargetRefType;struct _global_StructType* llvm_LLVMTargetRef_get_type(struct LLVMTargetRef* self, struct _global_Context* c){return &llvm_LLVMTargetRefType;}
struct _global_Field* llvm_LLVMTargetRefType_fields;
struct _global_StructType llvm_LLVMCodeGenFileTypeType;struct _global_StructType* llvm_LLVMCodeGenFileType_get_type(struct LLVMCodeGenFileType* self, struct _global_Context* c){return &llvm_LLVMCodeGenFileTypeType;}
struct _global_Field* llvm_LLVMCodeGenFileTypeType_fields;
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
struct _global_StaticArray_1_llvm_LLVMTypeRef {
LLVMTypeRef data[1];
};
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefFill_array(LLVMTypeRef with){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefInit(LLVMTypeRef g){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
tmp.data[0] = g;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_1_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_1_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* b);
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* c);
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* d);
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* f);
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* g);
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* h);
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* j);
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* k);
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* l);
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* m);
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* n);
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* p);

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



struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g);

static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator**,struct _global_Allocator*,struct _global_Context* g);

struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator*,struct _global_Allocator*,struct _global_Context* g);
void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g);
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g);
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g);
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g);
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g);
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g);

static inline char* _global_Maybe_unwrap_rchar(char**,struct _global_Context* g);

char* _global_Maybe_unwrap_rcharByValue(char*,struct _global_Context* g);
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
struct _global_Array_char stringBuilder_chars;stringBuilder_chars = _global_Array_charInit(0, 0, NULL, NULL);;
_global_Array_reserve_char(&(stringBuilder_chars),((stringBuilder_self)->chars).length+1,g);
struct _global_Array_char h =(stringBuilder_self)->chars;
for (unsigned int j = 0;j < h.length; j++) {
char stringBuilder_c;stringBuilder_c = *_global_Array_op_get_char(&h, j, g);
;unsigned int stringBuilder_i;stringBuilder_i = j;
_global_Array_append_char(&(stringBuilder_chars),stringBuilder_c,g);
}
;
_global_Array_append_char(&(stringBuilder_chars),'\0',g);
;return _global_make_String(((stringBuilder_self)->chars).length,_global_Maybe_unwrap_rcharByValue((stringBuilder_chars).data,g),g);
;}
static inline struct _global_String stringBuilder_StringBuilder_toStringByValue(struct stringBuilder_StringBuilder k,struct _global_Context* g){
return stringBuilder_StringBuilder_toString(&k,g);
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
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpstringBuilderb(&_global_self,&_global_newSize,&_global_allocator, g);;
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
*(((_global_Maybe_unwrap_rcharByValue((_global_self)->data,g) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g){;
;
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
_global_panic(_global_StringInit(21,"Shorten out of bounds"),g);
;};
(_global_self)->length=(_global_self)->length-_global_num;;
;}
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),g);
;return (_global_Maybe_unwrap_rcharByValue((_global_self)->data,g) + (int64_t)_global_index);
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
}
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
struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* c){;
struct stringBuilder_StringBuilder error_s_buffer;error_s_buffer = stringBuilder_make_StringBuilder(c);;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(25,"Compilation Error\n\nFile '"),((error_self)->filename),c),_global_StringInit(8,"', line "),c),_global_uint_toStringByValue(((error_self)->line),c),c),_global_StringInit(2,"\n\t"),c),c);
stringBuilder_StringBuilder_append(&(error_s_buffer),(error_self)->mesg,c);
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(3,"\n\n\t"),c);
struct _global_File error_source_file;;
struct _global_Maybe_File d =_global_open((error_self)->filename,_global_ReadFile,c);if(d.tag==0){error_source_file = d.cases.Some.field0;

;}
else if(1){
return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),stringBuilder_StringBuilder_toStringByValue((error_s_buffer),c),c),_global_StringInit(27,"\nCould not load source file"),c);
;
;}
;
struct _global_File f = error_source_file;
;
struct _global_String error_src;error_src = _global_File_read(&(error_source_file),c);;
unsigned int error_at;error_at = 1;;
struct _global_Range g =_global_RangeInit(0,(error_src).length);
for (unsigned int h = g.start; h < g.end; h++) {
unsigned int error_i;error_i = h;
;if(error_at==(error_self)->line){;
_global_Array_append_char(&((error_s_buffer).chars),*(_global_String_op_getByValue(error_src,(unsigned int)error_i,c)),c);
;};
if(*(_global_String_op_getByValue(error_src,(unsigned int)error_i,c))=='\n'){;
error_at=error_at+1;;
;};
if(error_at>(error_self)->line){;
break;;
;};
}
;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1,"\t"),c);
struct _global_Range j =_global_RangeInit(0,(error_self)->column);
for (unsigned int k = j.start; k < j.end; k++) {
unsigned int error_i;error_i = k;
;stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1," "),c);
}
;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(1,"^"),c);
;struct _global_String l =stringBuilder_StringBuilder_toString(&(error_s_buffer),c);
_global_File_freeByValue(f,c);
return l;
 }static inline struct _global_String error_CompilerError_toStringByValue(struct error_CompilerError m,struct _global_Context* c){
return error_CompilerError_toString(&m,c);
}
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
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),x);
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
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),x);
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
struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* G);
_Bool types_is_kind_types_Void(struct types_CompilerType types__type, struct _global_Context* G);
_Bool types_is_kind_types_Float(struct types_CompilerType types__type, struct _global_Context* G);
_Bool types_is_kind_types_Int(struct types_CompilerType types__type, struct _global_Context* G);
_Bool types_is_kind_types_Bool(struct types_CompilerType types__type, struct _global_Context* G);
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* G);
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* G);
struct _global_String types_Void_toString(struct types_Void* types_self, struct _global_Context* G){;
;return _global_StringInit(4,"none");
;}
static inline struct _global_String types_Void_toStringByValue(struct types_Void H,struct _global_Context* G){
return types_Void_toString(&H,G);
}struct error_CompilerError* types_Void_duck_type(struct types_Void* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* G){;
;
;
;struct types_CompilerType H =types_other;
if(H.vtable->type.data == types_Void_get_type(NULL,G)){struct types_Void* types_other_type = (struct types_Void*)H.data;return NULL;}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(20,"Expecting none, not "),types_CompilerType_toStringByValue((types_other),G),G),_global_StringInit(0,""),G),G);};
;}
_Bool types_Void_equals(struct types_Void* types_self, struct types_CompilerType types_other, struct _global_Context* G){;
;
;return types_is_kind_types_Void(types_other,G);
;}
unsigned int types_Void_calc_size(struct types_Void* types_self, struct _global_Context* G){;
;return 0;
;}
struct types_Void types_none_type;struct types_Void* types_make_Void(struct _global_Context* G){;return &(types_none_type);
;}
struct _global_String types_Float_toString(struct types_Float* types_self, struct _global_Context* G){;
;return _global_StringInit(5,"float");
;}
static inline struct _global_String types_Float_toStringByValue(struct types_Float H,struct _global_Context* G){
return types_Float_toString(&H,G);
}struct error_CompilerError* types_Float_duck_type(struct types_Float* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* G){;
;
;
;struct types_CompilerType H =types_other;
if(H.vtable->type.data == types_Float_get_type(NULL,G)){struct types_Float* types_other_type = (struct types_Float*)H.data;return NULL;}else if(H.vtable->type.data == types_Int_get_type(NULL,G)){struct types_Int* types_other_type = (struct types_Int*)H.data;return NULL;}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),types_Float_toString((types_self),G),G),_global_StringInit(5," not "),G),types_CompilerType_toStringByValue((types_other),G),G),_global_StringInit(0,""),G),G);};
;}
_Bool types_Float_equals(struct types_Float* types_self, struct types_CompilerType types_other, struct _global_Context* G){;
;
;return types_is_kind_types_Float(types_other,G);
;}
unsigned int types_Float_calc_size(struct types_Float* types_self, struct _global_Context* G){;
;return 4;
;}
struct types_Float types_float_type;struct types_Float* types_make_Float(struct _global_Context* G){;return &(types_float_type);
;}
struct _global_String types_Int_toString(struct types_Int* types_self, struct _global_Context* G){;
;return _global_StringInit(3,"int");
;}
static inline struct _global_String types_Int_toStringByValue(struct types_Int H,struct _global_Context* G){
return types_Int_toString(&H,G);
}struct error_CompilerError* types_Int_duck_type(struct types_Int* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* G){;
;
;
;struct types_CompilerType H =types_other;
if(H.vtable->type.data == types_Int_get_type(NULL,G)){struct types_Int* types_other_type = (struct types_Int*)H.data;return NULL;}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),types_Int_toString((types_self),G),G),_global_StringInit(5," not "),G),types_CompilerType_toStringByValue((types_other),G),G),_global_StringInit(0,""),G),G);};
;}
_Bool types_Int_equals(struct types_Int* types_self, struct types_CompilerType types_other, struct _global_Context* G){;
;
;return types_is_kind_types_Int(types_other,G);
;}
unsigned int types_Int_calc_size(struct types_Int* types_self, struct _global_Context* G){;
;return 4;
;}
struct types_Int types_int_type;struct types_Int* types_make_Int(struct _global_Context* G){;return &(types_int_type);
;}
struct _global_String types_Bool_toString(struct types_Bool* types_self, struct _global_Context* G){;
;return _global_StringInit(4,"bool");
;}
static inline struct _global_String types_Bool_toStringByValue(struct types_Bool H,struct _global_Context* G){
return types_Bool_toString(&H,G);
}struct error_CompilerError* types_Bool_duck_type(struct types_Bool* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* G){;
;
;
;return (types_is_kind_types_Bool(types_other,G) ? NULL:(error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(23,"Expecting boolean, not "),types_CompilerType_toStringByValue((types_other),G),G),_global_StringInit(0,""),G),G)));
;}
_Bool types_Bool_equals(struct types_Bool* types_self, struct types_CompilerType types_other, struct _global_Context* G){;
;
;return types_is_kind_types_Bool(types_other,G);
;}
unsigned int types_Bool_calc_size(struct types_Bool* types_self, struct _global_Context* G){;
;return 1;
;}
struct types_Bool types_bool_type;struct types_Bool* types_make_Bool(struct _global_Context* G){;return &(types_bool_type);
;}
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* G){;
struct stringBuilder_StringBuilder types_s;types_s = stringBuilder_make_StringBuilder(G);;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(4,"def("),G);
struct _global_StaticArray_StaticArray_S_types_CompilerType H =(types_self)->args;
for (unsigned int J = 0;J < H.length; J++) {
struct types_CompilerType types_arg;types_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&H, J, G);
;unsigned int types_i;types_i = J;
stringBuilder_StringBuilder_append(&(types_s),types_CompilerType_toString(&(types_arg),G),G);
if(types_i<((types_self)->args).length-1){;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,","),G);
;};
}
;
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,")"),G);
;return stringBuilder_StringBuilder_toString(&(types_s),G);
;}
static inline struct _global_String types_FuncPtr_toStringByValue(struct types_FuncPtr K,struct _global_Context* G){
return types_FuncPtr_toString(&K,G);
}struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* G){;
;
;
;return NULL;
;}
_Bool types_FuncPtr_equals(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct _global_Context* G){;
;
;return 1;
;}
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* G){;
;return 8;
;}
struct types_CompilerType_VTABLE rtypes_Void_VTABLE_FOR_types_CompilerType;struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* G){;return _global_box_types_FuncPtr(types_FuncPtrInit(_global_StaticArray_StaticArray_S_types_CompilerTypeInit(NULL, 0),types_CompilerTypeFromStruct(types_make_Void(G),&rtypes_Void_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Void_get_type(NULL,G),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Void_toString, &types_Void_duck_type, &types_Void_equals, &types_Void_calc_size),0),G);
;}
struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* G){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(error_Thrower_get_filename(&(error_self),G),error_Thrower_get_line(&(error_self),G),error_mesg,error_Thrower_get_column(&(error_self),G)),G);
;}
_Bool types_is_kind_types_Void(struct types_CompilerType types__type, struct _global_Context* G){;
struct _global_Type types_type_a;types_type_a = _global_TypeFromStruct(types_Void_get_type(NULL,G),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size);;
struct _global_Type types_type_b;types_type_b = types_CompilerType_get_typeByValue(types__type,G);;
void* types_ptr_type_a;types_ptr_type_a = _global_Type_get_pointer_to_data(&(types_type_a),G);;
void* types_ptr_type_b;types_ptr_type_b = _global_Type_get_pointer_to_data(&(types_type_b),G);;
;return ((uint64_t)types_ptr_type_a)==((uint64_t)types_ptr_type_b);
;}
_Bool types_is_kind_types_Float(struct types_CompilerType types__type, struct _global_Context* G){;
struct _global_Type types_type_a;types_type_a = _global_TypeFromStruct(types_Float_get_type(NULL,G),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size);;
struct _global_Type types_type_b;types_type_b = types_CompilerType_get_typeByValue(types__type,G);;
void* types_ptr_type_a;types_ptr_type_a = _global_Type_get_pointer_to_data(&(types_type_a),G);;
void* types_ptr_type_b;types_ptr_type_b = _global_Type_get_pointer_to_data(&(types_type_b),G);;
;return ((uint64_t)types_ptr_type_a)==((uint64_t)types_ptr_type_b);
;}
_Bool types_is_kind_types_Int(struct types_CompilerType types__type, struct _global_Context* G){;
struct _global_Type types_type_a;types_type_a = _global_TypeFromStruct(types_Int_get_type(NULL,G),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size);;
struct _global_Type types_type_b;types_type_b = types_CompilerType_get_typeByValue(types__type,G);;
void* types_ptr_type_a;types_ptr_type_a = _global_Type_get_pointer_to_data(&(types_type_a),G);;
void* types_ptr_type_b;types_ptr_type_b = _global_Type_get_pointer_to_data(&(types_type_b),G);;
;return ((uint64_t)types_ptr_type_a)==((uint64_t)types_ptr_type_b);
;}
_Bool types_is_kind_types_Bool(struct types_CompilerType types__type, struct _global_Context* G){;
struct _global_Type types_type_a;types_type_a = _global_TypeFromStruct(types_Bool_get_type(NULL,G),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size);;
struct _global_Type types_type_b;types_type_b = types_CompilerType_get_typeByValue(types__type,G);;
void* types_ptr_type_a;types_ptr_type_a = _global_Type_get_pointer_to_data(&(types_type_a),G);;
void* types_ptr_type_b;types_ptr_type_b = _global_Type_get_pointer_to_data(&(types_type_b),G);;
;return ((uint64_t)types_ptr_type_a)==((uint64_t)types_ptr_type_b);
;}
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* G){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),G);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* G){;
struct types_FuncPtr* _global_pointer;_global_pointer = (struct types_FuncPtr*)(_global_Allocator_alloc((G)->allocator,(uint64_t)sizeof(struct types_FuncPtr),G));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}

void typesInitTypes() { 
 
types_VoidType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
types_VoidType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_VoidType_fields
,0
);
types_VoidType.package = _global_StringInit(5, "types");
types_VoidType.name = _global_StringInit(4, "Void");
types_VoidType.size = sizeof(struct types_Void);error_Thrower_Type.name = _global_StringInit(7, "Thrower")
;error_Thrower_Type.package = _global_StringInit(5, "error");types_CompilerType_Type.name = _global_StringInit(12, "CompilerType")
;types_CompilerType_Type.package = _global_StringInit(5, "types");types_FloatType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
types_FloatType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_FloatType_fields
,0
);
types_FloatType.package = _global_StringInit(5, "types");
types_FloatType.name = _global_StringInit(5, "Float");
types_FloatType.size = sizeof(struct types_Float);types_IntType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
types_IntType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_IntType_fields
,0
);
types_IntType.package = _global_StringInit(5, "types");
types_IntType.name = _global_StringInit(3, "Int");
types_IntType.size = sizeof(struct types_Int);types_BoolType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
types_BoolType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_BoolType_fields
,0
);
types_BoolType.package = _global_StringInit(5, "types");
types_BoolType.name = _global_StringInit(4, "Bool");
types_BoolType.size = sizeof(struct types_Bool);_global_StaticArray_StaticArray_S_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_types_CompilerTypeType.size->tag = 2;
_global_StaticArray_StaticArray_S_types_CompilerTypeType.array_type=
_global_TypeFromStruct(
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
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
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
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
; }
void typesInit() { 
;
types_none_type = types_VoidInit();;
types_float_type = types_FloatInit();;
types_int_type = types_IntInit();;
types_bool_type = types_BoolInit();;
;
};
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST** _global_self, struct _global_Context* h);

static inline struct ast_AST** _global_Maybe_unwrap_rrast_AST(struct ast_AST***,struct _global_Context* h);

struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST**,struct _global_Context* h);
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* h);
struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* h){;
struct _global_EnumType* ast_payload_type;ast_payload_type = ast_Payload_get_type(NULL,h);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((ast_payload_type)->cases),(unsigned int)(ast_self)->tag,h))).name;
;}
static inline struct _global_String ast_Payload_toStringByValue(struct ast_Payload j,struct _global_Context* h){
return ast_Payload_toString(&j,h);
}struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_filename;
;}
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_line;
;}
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_column;
;}
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* h){;
;
(ast_node)->owner=ast_self;;
_global_Array_append_rast_AST(&((ast_self)->nodes),ast_node,h);
;}
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct ast_AST*),h);
;}

static inline struct ast_AST** tmpastw(struct _global_Array_rast_AST** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct ast_AST** j =(*_global_self)->data;
if(j != NULL){struct ast_AST** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct ast_AST** _global_newData;_global_newData = (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),h));;
_global_memcpy_rast_AST(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),h));}
}
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastw(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST** _global_self, struct _global_Context* h){;
struct ast_AST** _global_x;;
struct ast_AST** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct ast_AST** _global_Maybe_unwrap_rrast_AST(struct ast_AST*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rrast_ASTByValue(*k,h);
}void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rast_AST(_global_self,1,h);
;}
else{_global_Array_reserve_rast_AST(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rrast_ASTByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

void astInitTypes() { 
 typesInitTypes();
ast_Add.tag = 0;
ast_Mul.tag = 1;
ast_Div.tag = 2;
struct _global_Case* c =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 3);
c[0].name = _global_StringInit(3, "Add");
c[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[1].name = _global_StringInit(3, "Mul");
c[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[2].name = _global_StringInit(3, "Div");
c[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
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
ast_OperatorKindType.cases.data = c;
ast_OperatorKindType.cases.length = 3;
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
;ast_Root.tag = 0;
ast_FuncCall.tag = 6;
ast_CreateAssign.tag = 7;
ast_Create.tag = 8;
ast_Assign.tag = 9;
ast_If.tag = 10;
ast_Block.tag = 11;
ast_IfCondition.tag = 12;
ast_Else.tag = 13;
struct _global_Case* y =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 14);
y[0].name = _global_StringInit(4, "Root");
y[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[1].name = _global_StringInit(3, "Int");
y[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; y[1].args.data[0].offset = offsetof(struct ast_Payload_Int, field0);
y[2].name = _global_StringInit(5, "Float");
y[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[2].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; y[2].args.data[0].offset = offsetof(struct ast_Payload_Float, field0);
y[3].name = _global_StringInit(4, "Bool");
y[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; y[3].args.data[0].offset = offsetof(struct ast_Payload_Bool, field0);
y[4].name = _global_StringInit(8, "Operator");
y[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[4].args.data[0].arg_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; y[4].args.data[0].offset = offsetof(struct ast_Payload_Operator, field0);
y[5].name = _global_StringInit(10, "Identifier");
y[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[5].args.data[0].arg_type = 
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
; y[5].args.data[0].offset = offsetof(struct ast_Payload_Identifier, field0);
y[6].name = _global_StringInit(8, "FuncCall");
y[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[7].name = _global_StringInit(12, "CreateAssign");
y[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[8].name = _global_StringInit(6, "Create");
y[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[9].name = _global_StringInit(6, "Assign");
y[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[10].name = _global_StringInit(2, "If");
y[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[11].name = _global_StringInit(5, "Block");
y[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[12].name = _global_StringInit(11, "IfCondition");
y[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[13].name = _global_StringInit(4, "Else");
y[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
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
ast_PayloadType.cases.data = y;
ast_PayloadType.cases.length = 14;
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
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
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
_global_Maybe_rast_ASTType.nullable = 1; }
void astInit() { 
typesInit();;
;
;
};
struct _global_Field* _global_StaticArray_op_get_StaticArray_S_Field(struct _global_StaticArray_StaticArray_S_Field* _global_self, unsigned int _global_index, struct _global_Context* c);
struct _global_CaseArg* _global_StaticArray_op_get_StaticArray_S_CaseArg(struct _global_StaticArray_StaticArray_S_CaseArg* _global_self, unsigned int _global_index, struct _global_Context* c);

static inline struct puintcrnonep tmpprintx(struct _global_Type* print_kind,void** print_ptr,struct _global_String* print_tab,struct stringBuilder_StringBuilder** print_s,struct _global_ArrayType** print_array_type,struct _global_Type* print_elem_type,uint64_t* print_elem_size,unsigned int* print_length,void** print_data, struct _global_Context* c) {
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
unsigned int print_length;void* print_data;struct puintcrnonep h;h = tmpprintx(&print_kind,&print_ptr,&print_tab,&print_s,&print_array_type,&print_elem_type,&print_elem_size,&print_length,&print_data, c);print_length=h.field0;print_data=h.field1;;
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
print_ptr=*(((void**)print_ptr));;
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
struct _global_String* _global_StaticArray_op_get_5_string(struct _global_StaticArray_5_string* _global_self, unsigned int _global_index, struct _global_Context* k);
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k);
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k);

static inline struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc**,struct _global_Context* k);

struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc*,struct _global_Context* k);
struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc* _global_self, struct _global_Context* k);

static inline struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDesc(struct operatorParser_OpDesc**,struct _global_Context* k);

struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc*,struct _global_Context* k);
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
_Bool _global_StaticArray_contains_5_string(struct _global_StaticArray_5_string* _global_self, struct _global_String _global_elem, struct _global_Context* k);
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k);
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* k);
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
struct _global_StaticArray_5_string operatorParser_unary_symbols;operatorParser_unary_symbols = _global_StaticArray_5_stringInit(_global_StringInit(1,"("),_global_StringInit(1,")"),_global_StringInit(2,":="),_global_StringInit(1,":"),_global_StringInit(1,"\n"));;
;struct lexer_TokenType l =(operatorParser_token).kind;
if(l.tag==5){return _global_StaticArray_contains_5_string(&(operatorParser_unary_symbols),(operatorParser_token).value,k);}else if(l.tag==3){return 1;}else if(l.tag==6){return 1;}else if(l.tag==4){return 1;}else if(1){return 0;};
;}
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
unsigned int operatorParser_takes;operatorParser_takes = ((operatorParser_self)->unary ? 1:(2));;
;if((((operatorParser_p)->current_node)->nodes).length<operatorParser_takes){;
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
struct error_CompilerError* l =operatorParser_OpDesc_add_to(&(operatorParser_current),operatorParser_p,k);if(l != NULL){struct error_CompilerError* operatorParser_e = l;

return operatorParser_e;
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
if(_global_String_op_eqByValue(l,_global_StringInit(1,"+"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Add,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"*"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Mul,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"/"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Div,1),k);}else if(1){return error_make_Error_rparser_Parser(operatorParser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unknown operator "),(operatorParser_kind),k),_global_StringInit(0,""),k),k);};
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
;struct error_CompilerError* n =operatorParser_OpDesc_add_to(&(*(_global_Array_op_get_operatorParser_OpDesc(&(operatorParser_op_left),(unsigned int)(operatorParser_op_left).length-operatorParser_i-1,k))),operatorParser_p,k);if(n != NULL){struct error_CompilerError* operatorParser_e = n;

return operatorParser_e;
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
struct _global_String* _global_StaticArray_op_get_5_string(struct _global_StaticArray_5_string* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<5,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((k)->longterm_storage,(uint64_t)sizeof(struct ast_AST),k));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_rrast_ASTByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
struct _global_Array_operatorParser_OpDesc* _global_x;;
struct _global_Array_operatorParser_OpDesc* l =_global_self;if(l != NULL){_global_x = l;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),k);
;}
;
;return _global_x;
;}
static inline struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc** m,struct _global_Context* k){
return _global_Maybe_unwrap_r____operatorParser_OpDescByValue(*m,k);
}struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc* _global_self, struct _global_Context* k){;
struct operatorParser_OpDesc* _global_x;;
struct operatorParser_OpDesc* l =_global_self;if(l != NULL){_global_x = l;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),k);
;}
;
;return _global_x;
;}
static inline struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDesc(struct operatorParser_OpDesc** m,struct _global_Context* k){
return _global_Maybe_unwrap_roperatorParser_OpDescByValue(*m,k);
}
static inline struct operatorParser_OpDesc* tmpoperatorParsery(struct _global_Array_operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
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
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpoperatorParsery(&_global_self,&_global_newSize,&_global_allocator, k);;
;}

static inline struct _global_Array_operatorParser_OpDesc* tmpoperatorParserz(struct _global_Array_____operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
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
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpoperatorParserz(&_global_self,&_global_newSize,&_global_allocator, k);;
;}
_Bool _global_StaticArray_contains_5_string(struct _global_StaticArray_5_string* _global_self, struct _global_String _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<5){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_5_string(_global_self,(unsigned int)_global_i,k))),&(_global_elem),k)){;
return 1;
;
;};_global_i=_global_i+1;;};
;return 0;
;}
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(k);;
print_type_to_string(_global_TypeFromStruct(ast_OperatorKind_get_type(NULL,k),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),k);
;return stringBuilder_StringBuilder_toString(&(print_s),k);
;}
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* k){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(parser_Parser_get_filename(error_self,k),parser_Parser_get_line(error_self,k),error_mesg,parser_Parser_get_column(error_self,k)),k);
;}
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator=(k)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_CompilerTypeFromStruct(types_make_Void(k),&rtypes_Void_VTABLE_FOR_types_CompilerType,rtypes_Void_VTABLE_FOR_types_CompilerType.type, &types_Void_toString, &types_Void_duck_type, &types_Void_equals, &types_Void_calc_size),NULL,parser_Parser_get_filename(ast_t,k),parser_Parser_get_line(ast_t,k),parser_Parser_get_column(ast_t,k)),k);
;}
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct ast_AST* _global_tmp;_global_tmp = *(_global_Array_op_get_rast_AST(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_r____operatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_roperatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
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
*(((_global_Maybe_unwrap_roperatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
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
*(((_global_Maybe_unwrap_r____operatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct _global_Array_operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_____operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}

void operatorParserInitTypes() { 
 printInitTypes();
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
;parser_ParserType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
parser_ParserType.fields = _global_StaticArray_StaticArray_S_FieldInit(
parser_ParserType_fields
,7
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
parser_ParserType_fields[5].name = _global_StringInit(9, "num_paren");
parser_ParserType_fields[5].offset = offsetof(struct parser_Parser, num_paren);
parser_ParserType_fields[5].field_type = 
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
parser_ParserType_fields[6].name = _global_StringInit(10, "num_indent");
parser_ParserType_fields[6].offset = offsetof(struct parser_Parser, num_indent);
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
;_global_StaticArray_5_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_5_stringType.size->tag = 0;
_global_StaticArray_5_stringType.size->cases.Static.field0 = 5;
_global_StaticArray_5_stringType.array_type = 
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
void operatorParserInit() { 
;
;
printInit();;
;
};
struct types_CompilerType_VTABLE rtypes_Int_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_int_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_int_literal;basicTypes_int_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Int(basicTypes_token,f),f);;
(basicTypes_int_literal)->_type=types_CompilerTypeFromStruct(types_make_Int(f),&rtypes_Int_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Int_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Int_toString, &types_Int_duck_type, &types_Int_equals, &types_Int_calc_size);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_int_literal,f);
;return NULL;
;}
struct types_CompilerType_VTABLE rtypes_Float_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_float_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
struct ast_AST* basicTypes_float_literal;basicTypes_float_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Float(basicTypes_token,f),f);;
(basicTypes_float_literal)->_type=types_CompilerTypeFromStruct(types_make_Float(f),&rtypes_Float_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Float_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Float_toString, &types_Float_duck_type, &types_Float_equals, &types_Float_calc_size);;
ast_AST_add((basicTypes_self)->current_node,basicTypes_float_literal,f);
;return NULL;
;}

static inline _Bool tmpbasicTypesB(struct parser_Parser** basicTypes_self,struct _global_String* basicTypes_token,_Bool* basicTypes_as_bool, struct _global_Context* f) {
struct _global_String g =*basicTypes_token;
if(_global_String_op_eqByValue(g,_global_StringInit(4,"true"),NULL)){return 1;}else if(1){return 0;}
}
struct types_CompilerType_VTABLE rtypes_Bool_VTABLE_FOR_types_CompilerType;struct error_CompilerError* basicTypes_parse_bool_literal(struct parser_Parser* basicTypes_self, struct _global_String basicTypes_token, struct _global_Context* f){;
;
_Bool basicTypes_as_bool;basicTypes_as_bool = tmpbasicTypesB(&basicTypes_self,&basicTypes_token,&basicTypes_as_bool, f);;
struct ast_AST* basicTypes_bool_literal;basicTypes_bool_literal = ast_make_AST_rparser_Parser(basicTypes_self,ast_Bool(basicTypes_as_bool,f),f);;
(basicTypes_bool_literal)->_type=types_CompilerTypeFromStruct(types_make_Bool(f),&rtypes_Bool_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_Bool_get_type(NULL,f),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_Bool_toString, &types_Bool_duck_type, &types_Bool_equals, &types_Bool_calc_size);;
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
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* d);
struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* d){;
;
struct ast_AST* varParser_id;varParser_id = ast_make_AST_rparser_Parser(varParser_self,ast_Identifier(_global_box_ast_ReadInfo(ast_ReadInfoInit(1,varParser_name),d),d),d);;
ast_AST_add((varParser_self)->current_node,varParser_id,d);
;return NULL;
;}
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* d){;
if((((varParser_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(varParser_self,_global_StringInit(17,"Unexpected assign"),d);
;
;};
struct ast_AST* varParser_v;varParser_v = _global_Array_pop_rast_AST(&(((varParser_self)->current_node)->nodes),d);;
struct ast_AST* varParser_node;varParser_node = ast_make_AST_rparser_Parser(varParser_self,ast_CreateAssign,d);;
struct ast_AST* varParser_create;varParser_create = ast_make_AST_rparser_Parser(varParser_self,ast_Create,d);;
ast_AST_add(varParser_create,varParser_v,d);
ast_AST_add(varParser_node,varParser_create,d);
struct ast_AST* varParser_assign;varParser_assign = ast_make_AST_rparser_Parser(varParser_self,ast_Assign,d);;
parser_Parser_push_current_node(varParser_self,varParser_node,d);
parser_Parser_push_current_node(varParser_self,varParser_assign,d);
unsigned int varParser_indent;varParser_indent = (varParser_self)->num_indent;;
;while(!((parser_Parser_is_end(varParser_self,varParser_indent,d)))){parser_Parser_next(varParser_self,d);struct error_CompilerError* f =parser_Parser_eval(varParser_self,d);if(f != NULL){struct error_CompilerError* varParser_e = f;

return varParser_e;
;
;}
else if(1){
;}
;};
parser_Parser_pop_current_node(varParser_self,d);
parser_Parser_pop_current_node(varParser_self,d);
;return NULL;
;}
struct ast_ReadInfo* _global_box_ast_ReadInfo(struct ast_ReadInfo _global_value, struct _global_Context* d){;
struct ast_ReadInfo* _global_pointer;_global_pointer = (struct ast_ReadInfo*)(_global_Allocator_alloc((d)->allocator,(uint64_t)sizeof(struct ast_ReadInfo),d));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}

void varParserInitTypes() { 
 
 }
void varParserInit() { 
;
};
struct error_CompilerError* tuple_parse_tuple(struct parser_Parser* tuple_self, struct _global_Context* c){;
;return NULL;
;}

void tupleInitTypes() { 
 
 }
void tupleInit() { 
;
};
struct error_CompilerError* funcCall_parse_funcCall(struct parser_Parser* funcCall_self, struct _global_Context* c){;
unsigned int funcCall_num_paren;funcCall_num_paren = (funcCall_self)->num_paren;;
struct ast_AST* funcCall_func_call;funcCall_func_call = ast_make_AST_rparser_Parser(funcCall_self,ast_FuncCall,c);;
if((((funcCall_self)->current_node)->nodes).length==0){;
return error_make_Error_rparser_Parser(funcCall_self,_global_StringInit(24,"Unexpected function call"),c);
;
;};
struct ast_AST* funcCall_calling;funcCall_calling = _global_Array_pop_rast_AST(&(((funcCall_self)->current_node)->nodes),c);;
ast_AST_add(funcCall_func_call,funcCall_calling,c);
parser_Parser_push_current_node(funcCall_self,funcCall_func_call,c);
(funcCall_self)->num_paren=(funcCall_self)->num_paren+1;;
;while((funcCall_self)->num_paren>funcCall_num_paren){parser_Parser_next(funcCall_self,c);parser_Parser_eval(funcCall_self,c);};
parser_Parser_pop_current_node(funcCall_self,c);
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
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* r);
struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* r){;
;
struct parser_Parser parser_p;parser_p = parser_ParserInit(parser_tokens,parser_filename,(struct ast_AST*)0,0,operatorParser_make_OpStack(r),0,0);;
(parser_p).current_node=ast_make_AST_rparser_Parser(&(parser_p),ast_Root,r);;
;return parser_Parser_parse(&(parser_p),r);
;}
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_self)->filename;
;}
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_Parser_current(parser_self,r)).line;
;}
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_Parser_current(parser_self,r)).column;
;}
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* r){;
;if((parser_self)->iter+1<((parser_self)->tokens).length){;
return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter+1,r));}
else{struct lexer_Token parser_be;parser_be = parser_Parser_behind(parser_self,r);;
return lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),(parser_be).line,(parser_be).column);};
;}
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* r){;
;return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter,r));
;}
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* r){;
;return ((parser_self)->iter<1 ? lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),0,0):(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter-1,r))));
;}
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* r){;
struct lexer_Token parser_t;parser_t = parser_Parser_peek(parser_self,r);;
(parser_self)->iter=(parser_self)->iter+1;;
;return parser_t;
;}

static inline struct error_CompilerError* tmpparserF(struct parser_Parser* *parser_self,struct lexer_Token *parser_token, struct _global_Context* r) {
if((*parser_self)->num_paren==0){;
return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected )"),r);}
else{(*parser_self)->num_paren=(*parser_self)->num_paren-1;;
return NULL;}
}

static inline struct error_CompilerError* tmpparserC(struct parser_Parser** parser_self,struct lexer_Token* parser_token, struct _global_Context* r) {
struct _global_String t =(*parser_token).value;
if(_global_String_op_eqByValue(t,_global_StringInit(4,"true"),NULL)||_global_String_op_eqByValue(t,_global_StringInit(5,"false"),NULL)){return basicTypes_parse_bool_literal(*parser_self,(*parser_token).value,r);}else if(_global_String_op_eqByValue(t,_global_StringInit(2,"if"),NULL)){return ifStatement_if_expr(*parser_self,r);}else if(_global_String_op_eqByValue(t,_global_StringInit(4,"else"),NULL)){return ifStatement_else_expr(*parser_self,r);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),r),_global_StringInit(19," token, not handled"),r),r);}
}

static inline struct error_CompilerError* tmpparserD(struct parser_Parser** parser_self,struct lexer_Token* parser_token, struct _global_Context* r) {
struct _global_String v =(*parser_token).value;
if(_global_String_op_eqByValue(v,_global_StringInit(1,"("),NULL)){return (operatorParser_is_unary(*parser_self,r) ? tuple_parse_tuple(*parser_self,r):(funcCall_parse_funcCall(*parser_self,r)));}else if(_global_String_op_eqByValue(v,_global_StringInit(2,":="),NULL)){return varParser_parse_create_assign(*parser_self,r);}else if(_global_String_op_eqByValue(v,_global_StringInit(1,"\n"),NULL)){return NULL;}else if(_global_String_op_eqByValue(v,_global_StringInit(1,")"),NULL)){return tmpparserF(parser_self,parser_token, r);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),r),_global_StringInit(19," token, not handled"),r),r);}
}
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* r){;
struct lexer_Token parser_token;parser_token = parser_Parser_current(parser_self,r);;
;struct lexer_TokenType s =(parser_token).kind;
if(s.tag==3){return operatorParser_parse_operator(parser_self,(parser_token).value,r);}else if(s.tag==0){return basicTypes_parse_int_literal(parser_self,(parser_token).value,r);}else if(s.tag==1){return basicTypes_parse_float_literal(parser_self,(parser_token).value,r);}else if(s.tag==2){return varParser_parse_identifier(parser_self,(parser_token).value,r);}else if(s.tag==6){(parser_self)->num_indent=((parser_token).value).length;;
return NULL;}else if(s.tag==7){return tmpparserC(&parser_self,&parser_token, r);}else if(s.tag==5){return tmpparserD(&parser_self,&parser_token, r);}else if(1){return error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((parser_token).kind),r),r),_global_StringInit(19," token, not handled"),r),r);};
;}
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* r){;
;
ast_AST_add((parser_self)->current_node,parser_node,r);
(parser_self)->current_node=parser_node;;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,r);
;}
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* r){;
struct ast_AST* parser_owner;;
struct ast_AST* s =((parser_self)->current_node)->owner;if(s != NULL){parser_owner = s;

;}
else if(1){
_global_panic(_global_StringInit(52,"Tried to pop current node which didn't have an owner"),r);
;}
;
struct error_CompilerError* t =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,r);if(t != NULL){struct error_CompilerError* parser_e = t;

return parser_e;
;
;}
else if(1){
;}
;
(parser_self)->current_node=parser_owner;;
;return NULL;
;}
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, unsigned int parser_num_indent, struct _global_Context* r){;
;
;struct lexer_TokenType s =(parser_Parser_current(parser_self,r)).kind;
if(s.tag==6){return (parser_self)->num_indent<=parser_num_indent;}else if(1){return 0;};
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserG(struct _global_Result_rerror_CompilerError_Result_T v) {
struct _global_Result_rerror_CompilerError_rast_AST t;t.tag = v.tag;t.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(v.cases);return t;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserH(struct _global_Result_rerror_CompilerError_Result_T y) {
struct _global_Result_rerror_CompilerError_rast_AST x;x.tag = y.tag;x.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(y.cases);return x;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserJ(struct _global_Result_Result_E_rast_AST B) {
struct _global_Result_rerror_CompilerError_rast_AST z;z.tag = B.tag;z.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(B.cases);return z;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* r){;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,r);
;while((parser_self)->iter<((parser_self)->tokens).length){struct error_CompilerError* s =parser_Parser_eval(parser_self,r);if(s != NULL){struct error_CompilerError* parser_e = s;

return tmpparserG(_global_Error_rerror_CompilerError_Result_T(parser_e,r));
;
;}
else if(1){
;}
;parser_Parser_next(parser_self,r);};
(parser_self)->iter=((parser_self)->tokens).length-1;;
struct error_CompilerError* w =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,r);if(w != NULL){struct error_CompilerError* parser_e = w;

return tmpparserH(_global_Error_rerror_CompilerError_Result_T(parser_e,r));
;
;}
else if(1){
;}
;
;return tmpparserJ(_global_Ok_Result_E_rast_AST((parser_self)->current_node,r));
;}
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* r){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),r);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void parserInitTypes() { 
 astInitTypes();operatorParserInitTypes();basicTypesInitTypes();varParserInitTypes();tupleInitTypes();funcCallInitTypes();ifStatementInitTypes();
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
struct _global_Case* t =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
t[0].name = _global_StringInit(2, "Ok");
t[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[0].args.data[0].arg_type = 
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
; t[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Ok, field0);
t[1].name = _global_StringInit(5, "Error");
t[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; t[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Error, field0);
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
_global_Result_Result_E_rast_ASTType.cases.data = t;
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
;
};
struct _global_String mir_CreateVar_toString(struct mir_CreateVar* mir_self, struct _global_Context* c){;
;return _global_uint_toStringByValue((mir_self)->name,c);
;}
static inline struct _global_String mir_CreateVar_toStringByValue(struct mir_CreateVar d,struct _global_Context* c){
return mir_CreateVar_toString(&d,c);
}
void mirInitTypes() { 
 
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
;mir_CreateVarType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
mir_CreateVarType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_CreateVarType_fields
,1
);
mir_CreateVarType.package = _global_StringInit(3, "mir");
mir_CreateVarType.name = _global_StringInit(9, "CreateVar");
mir_CreateVarType.size = sizeof(struct mir_CreateVar);
mir_CreateVarType_fields[0].name = _global_StringInit(4, "name");
mir_CreateVarType_fields[0].offset = offsetof(struct mir_CreateVar, name);
mir_CreateVarType_fields[0].field_type = 
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
; }
void mirInit() { 
;
};
unsigned int hashMap_default_table_size;unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* c){;
;
unsigned int hashMap_h;hashMap_h = 0;;
unsigned int hashMap_o;hashMap_o = 31415;;
unsigned int hashMap_t;hashMap_t = 27183;;
char* hashMap_key;hashMap_key = _global_String_to_c_stringByValue(hashMap_s_key,c);;
struct _global_Range d =_global_RangeInit(0,(hashMap_s_key).length);
for (unsigned int f = d.start; f < d.end; f++) {
unsigned int hashMap_i;hashMap_i = f;
;hashMap_h=(hashMap_o*hashMap_h+(unsigned int)(*(((hashMap_key + (int64_t)hashMap_i)))))%hashMap_table_size;;
hashMap_o=hashMap_o*hashMap_t%(hashMap_table_size-1);;
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
hashMap_default_table_size = 1003;;
;
};
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_astToMIR_CFG(struct astToMIR_CFG* _global_target, struct astToMIR_CFG* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* q);
unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int* _global_self, struct _global_Context* q);

static inline unsigned int* _global_Maybe_unwrap_ruint(unsigned int**,struct _global_Context* q);

unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int*,struct _global_Context* q);
struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String* _global_self, struct _global_Context* q);

static inline struct _global_String* _global_Maybe_unwrap_rstring(struct _global_String**,struct _global_Context* q);

struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String*,struct _global_Context* q);
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* q);
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* q);
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint* _global_self, struct _global_Context* q);

static inline struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_(struct hashMap_HashBucket_uint**,struct _global_Context* q);

struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint*,struct _global_Context* q);
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode* _global_self, struct _global_Context* q);

static inline struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCode(struct mir_OpCode**,struct _global_Context* q);

struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode*,struct _global_Context* q);
void _global_Array_reserve_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG* _global_self, struct _global_Context* q);

static inline struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFG(struct astToMIR_CFG**,struct _global_Context* q);

struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG*,struct _global_Context* q);
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block** _global_self, struct _global_Context* q);

static inline struct mir_Block** _global_Maybe_unwrap_rrmir_Block(struct mir_Block***,struct _global_Context* q);

struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block**,struct _global_Context* q);
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* q);
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* q);
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* q);
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* q);
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Context* q);
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* q);
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function* _global_self, struct _global_Context* q);

static inline struct mir_Function* _global_Maybe_unwrap_rmir_Function(struct mir_Function**,struct _global_Context* q);

struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function*,struct _global_Context* q);
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* q);
void _global_Array_append_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct astToMIR_CFG _global_value, struct _global_Context* q);
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* q);
struct astToMIR_CFG _global_Array_pop_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct _global_Context* q);
struct astToMIR_CFG* _global_Array_op_get_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_index, struct _global_Context* q);
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* q);
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* q);
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* q);
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* q);
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* q);
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* q);
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* q);

#define astToMIR_atoi(q,r) atoi(q)

#define astToMIR_atof(s,t) atof(s)
struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG* astToMIR_self, struct _global_Context* v){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"CFG "),_global_uint_toStringByValue(((astToMIR_self)->return_to),v),v),_global_StringInit(0,""),v);
;}
static inline struct _global_String astToMIR_CFG_toStringByValue(struct astToMIR_CFG w,struct _global_Context* v){
return astToMIR_CFG_toString(&w,v);
}unsigned int astToMIR_Converter_push_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
(astToMIR_self)->block_counter=(astToMIR_self)->block_counter+1;;
;return (astToMIR_self)->block_counter;
;}
void astToMIR_Converter_append(struct astToMIR_Converter* astToMIR_self, struct mir_OpCode astToMIR_code, struct _global_Context* v){;
;
_global_Array_append_mir_OpCode(((astToMIR_self)->block)->code,astToMIR_code,v);
;}
void astToMIR_Converter_pop_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
(astToMIR_self)->block_counter=(astToMIR_self)->block_counter-1;;
;}
void astToMIR_Converter_push_cfg(struct astToMIR_Converter* astToMIR_self, struct astToMIR_CFG astToMIR_cfg, struct _global_Context* v){;
;
_global_Array_append_astToMIR_CFG(&((astToMIR_self)->cfgs),astToMIR_cfg,v);
struct mir_Block* astToMIR_block;;
struct mir_Block* w =(astToMIR_cfg).block;if(w != NULL){astToMIR_block = w;

;}
else if(1){
return ;
;
;}
;
(astToMIR_self)->block=astToMIR_block;;
_global_Array_append_rmir_Block((astToMIR_self)->all_blocks,astToMIR_block,v);
;}
void astToMIR_Converter_add_block(struct astToMIR_Converter* astToMIR_self, struct mir_Block* astToMIR_block, struct _global_Context* v){;
;
(astToMIR_self)->block=astToMIR_block;;
_global_Array_append_rmir_Block((astToMIR_self)->all_blocks,astToMIR_block,v);
;}
void astToMIR_Converter_pop_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
_global_Array_pop_astToMIR_CFG(&((astToMIR_self)->cfgs),v);
;}
struct astToMIR_CFG* astToMIR_Converter_current_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
;return &(*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-1,v)));
;}
struct mir_OpCode astToMIR_unsupported(struct _global_String astToMIR_mesg, struct _global_Context* v){;
_global_panic(astToMIR_mesg,v);
;return mir_Add_i32;
;}
_Bool astToMIR_is_block(struct ast_AST* astToMIR_node, struct _global_Context* v){;
;return ((astToMIR_node)->payload).tag==(ast_Block).tag;
;}

static inline unsigned int tmpastToMIRK(struct astToMIR_Converter** astToMIR_self,struct ast_AST** astToMIR_node,unsigned int* astToMIR_previous_num_vars,struct ast_AST** astToMIR_ident,struct ast_ReadInfo** astToMIR_read_info,unsigned int* astToMIR_id, struct _global_Context* v) {
if((*astToMIR_read_info)->is_global){;
(*astToMIR_self)->global_var_counter=(*astToMIR_self)->global_var_counter+1;;
return (*astToMIR_self)->global_var_counter-1;}
else{(*astToMIR_self)->var_counter=(*astToMIR_self)->var_counter+1;;
return (*astToMIR_self)->var_counter-1;}
}

static inline struct mir_OpCode tmpastToMIRL(struct astToMIR_Converter** astToMIR_self,struct ast_AST** astToMIR_node,unsigned int* astToMIR_previous_num_vars,struct ast_OperatorKind* astToMIR_op_kind,struct types_CompilerType* astToMIR_node_type,_Bool* astToMIR_is_int,_Bool* astToMIR_is_float, struct _global_Context* v) {
struct ast_OperatorKind K =*astToMIR_op_kind;
if(K.tag==0){return (*astToMIR_is_int ? mir_Add_i32 : (*astToMIR_is_float) ? mir_Add_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}else if(K.tag==1){return (*astToMIR_is_int ? mir_Mul_i32 : (*astToMIR_is_float) ? mir_Mul_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}else if(K.tag==2){return (*astToMIR_is_int ? mir_Div_i32 : (*astToMIR_is_float) ? mir_Div_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}
}
void astToMIR_Converter_convert_node(struct astToMIR_Converter* astToMIR_self, struct ast_AST* astToMIR_node, struct _global_Context* v){;
;
unsigned int astToMIR_previous_num_vars;astToMIR_previous_num_vars = (astToMIR_self)->var_counter;;
struct ast_Payload w =(astToMIR_node)->payload;if(w.tag==8){
;}
else if(w.tag==10){
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_Converter_push_block(astToMIR_self,v),NULL),v);
struct _global_Array_rast_AST x =(astToMIR_node)->nodes;
for (unsigned int y = 0;y < x.length; y++) {
struct ast_AST* astToMIR_n;astToMIR_n = *_global_Array_op_get_rast_AST(&x, y, v);
;unsigned int astToMIR_i;astToMIR_i = y;
astToMIR_Converter_convert_node(astToMIR_self,astToMIR_n,v);
}
;
;}
else if(1){
struct _global_Array_rast_AST z =(astToMIR_node)->nodes;
for (unsigned int B = 0;B < z.length; B++) {
struct ast_AST* astToMIR_n;astToMIR_n = *_global_Array_op_get_rast_AST(&z, B, v);
;unsigned int astToMIR_i;astToMIR_i = B;
astToMIR_Converter_convert_node(astToMIR_self,astToMIR_n,v);
}
;
;}
;
if(astToMIR_is_block(astToMIR_node,v)){;
(astToMIR_self)->var_counter=astToMIR_previous_num_vars;;
;};
struct ast_Payload C =(astToMIR_node)->payload;if(C.tag==5){struct ast_ReadInfo* astToMIR_read_info = C.cases.Identifier.field0;

astToMIR_Converter_append(astToMIR_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_node)->_type,*(hashMap_HashMap_op_get_uint(&((astToMIR_self)->vars),(struct _global_String)(astToMIR_read_info)->name,v))),v),v),v);
;}
else if(C.tag==7){
;}
else if(C.tag==11){
struct astToMIR_CFG astToMIR_cfg;astToMIR_cfg = *(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-2,v));;
astToMIR_Converter_append(astToMIR_self,mir_Jump((astToMIR_cfg).return_to,v),v);
;}
else if(C.tag==10){
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
struct astToMIR_CFG* astToMIR_cfg;astToMIR_cfg = astToMIR_Converter_current_cfg(astToMIR_self,v);;
unsigned int astToMIR_to;astToMIR_to = (astToMIR_cfg)->return_to;;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
astToMIR_Converter_add_block(astToMIR_self,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v),v);
;}
else if(C.tag==12){
unsigned int astToMIR_to;astToMIR_to = astToMIR_Converter_push_block(astToMIR_self,v);;
struct ast_AST* astToMIR_owner;;
struct ast_AST* D =(astToMIR_node)->owner;if(D != NULL){astToMIR_owner = D;

;}
else if(1){
_global_panic(_global_StringInit(25,"If Condition has no owner"),v);
;}
;
unsigned int astToMIR_return_to;astToMIR_return_to = (((astToMIR_owner)->nodes).length==2 ? (*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-1,v))).return_to:(astToMIR_Converter_push_block(astToMIR_self,v)));;
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_append(astToMIR_self,mir_CondJump(astToMIR_to,astToMIR_return_to,v),v);
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_return_to,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v)),v);
;}
else if(C.tag==13){
struct astToMIR_CFG* astToMIR_cfg;astToMIR_cfg = astToMIR_Converter_current_cfg(astToMIR_self,v);;
unsigned int astToMIR_to;astToMIR_to = (astToMIR_cfg)->return_to;;
unsigned int astToMIR_end_if;astToMIR_end_if = (*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-2,v))).return_to;;
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_end_if,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v)),v);
;}
else if(C.tag==9){
struct ast_AST* astToMIR_owner;;
struct ast_AST* F =(astToMIR_node)->owner;if(F != NULL){astToMIR_owner = F;

;}
else if(1){
return ;
;
;}
;
struct ast_AST* astToMIR_create;astToMIR_create = *(_global_Array_op_get_rast_AST(&((astToMIR_owner)->nodes),(unsigned int)0,v));;
struct ast_AST* astToMIR_ident;astToMIR_ident = *(_global_Array_op_get_rast_AST(&((astToMIR_create)->nodes),(unsigned int)0,v));;
struct ast_ReadInfo* astToMIR_read_info;;
struct ast_Payload G =(astToMIR_ident)->payload;if(G.tag==5){astToMIR_read_info = G.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),v);
;}
;
astToMIR_Converter_append(astToMIR_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_ident)->_type,*(hashMap_HashMap_op_get_uint(&((astToMIR_self)->vars),(struct _global_String)(astToMIR_read_info)->name,v))),v),v),v);
;}
else if(C.tag==8){
struct ast_AST* astToMIR_ident;astToMIR_ident = *(_global_Array_op_get_rast_AST(&((astToMIR_node)->nodes),(unsigned int)0,v));;
struct ast_ReadInfo* astToMIR_read_info;;
struct ast_Payload H =(astToMIR_ident)->payload;if(H.tag==5){astToMIR_read_info = H.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),v);
;}
;
unsigned int astToMIR_id;astToMIR_id = tmpastToMIRK(&astToMIR_self,&astToMIR_node,&astToMIR_previous_num_vars,&astToMIR_ident,&astToMIR_read_info,&astToMIR_id, v);;
hashMap_HashMap_insert_uint(&((astToMIR_self)->vars),(astToMIR_read_info)->name,astToMIR_id,v);
astToMIR_Converter_append(astToMIR_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_ident)->_type,astToMIR_id),v),v),v);
;}
else if(C.tag==6){
struct types_CompilerType astToMIR_func_ptr;astToMIR_func_ptr = (*(_global_Array_op_get_rast_AST(&((astToMIR_node)->nodes),(unsigned int)0,v)))->_type;;
struct types_CompilerType J =astToMIR_func_ptr;if(J.vtable->type.data == types_FuncPtr_get_type(NULL,v)){struct types_FuncPtr* astToMIR_func = (struct types_FuncPtr*)J.data;
astToMIR_Converter_append(astToMIR_self,mir_FuncCall(astToMIR_func,v),v);
;}
else if(1){
_global_panic(_global_StringInit(46,"Expecting func pointer as argument to function"),v);
;}
;
;}
else if(C.tag==4){struct ast_OperatorKind astToMIR_op_kind = C.cases.Operator.field0;

struct types_CompilerType astToMIR_node_type;astToMIR_node_type = (astToMIR_node)->_type;;
_Bool astToMIR_is_int;astToMIR_is_int = types_is_kind_types_Int(astToMIR_node_type,v);;
_Bool astToMIR_is_float;astToMIR_is_float = types_is_kind_types_Float(astToMIR_node_type,v);;
astToMIR_Converter_append(astToMIR_self,tmpastToMIRL(&astToMIR_self,&astToMIR_node,&astToMIR_previous_num_vars,&astToMIR_op_kind,&astToMIR_node_type,&astToMIR_is_int,&astToMIR_is_float, v),v);
;}
else if(C.tag==3){_Bool astToMIR_is_true = C.cases.Bool.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_bool(astToMIR_is_true,v),v);
;}
else if(C.tag==1){struct _global_String astToMIR_s = C.cases.Int.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_i32((int32_t)astToMIR_atoi(_global_String_to_c_stringByValue(astToMIR_s,v),v),v),v);
;}
else if(C.tag==2){struct _global_String astToMIR_s = C.cases.Float.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_f32((float)astToMIR_atof(_global_String_to_c_stringByValue(astToMIR_s,v),v),v),v);
;}
else if(C.tag==0){
;}
;
;}
struct mir_Program astToMIR_convert(struct ast_AST* astToMIR_node, struct _global_Context* v){;
struct _global_Array_mir_Function astToMIR_functions;astToMIR_functions = _global_Array_mir_FunctionInit(0, 0, NULL, NULL);;
struct _global_Array_mir_OpCode* astToMIR_op_codes;astToMIR_op_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
struct _global_Array_rmir_Block astToMIR_all_blocks;astToMIR_all_blocks = _global_Array_rmir_BlockInit(0, 0, NULL, NULL);;
struct _global_Array_astToMIR_CFG astToMIR_cfgs;astToMIR_cfgs = _global_Array_astToMIR_CFGInit(0, 0, NULL, NULL);;
struct mir_Block* astToMIR_block;astToMIR_block = _global_box_mir_Block(mir_BlockInit(0,astToMIR_op_codes),v);;
struct astToMIR_Converter astToMIR_converter;astToMIR_converter = astToMIR_ConverterInit(0,0,hashMap_make_HashMap_uint(v),astToMIR_cfgs,astToMIR_block,0,&(astToMIR_all_blocks));;
astToMIR_Converter_push_cfg(&(astToMIR_converter),astToMIR_CFGInit(0,astToMIR_block),v);
hashMap_HashMap_insert_uint(&((astToMIR_converter).vars),_global_StringInit(3,"log"),0,v);
(astToMIR_converter).global_var_counter=(astToMIR_converter).global_var_counter+1;;
hashMap_HashMap_insert_uint(&((astToMIR_converter).vars),_global_StringInit(7,"log_int"),1,v);
(astToMIR_converter).global_var_counter=(astToMIR_converter).global_var_counter+1;;
astToMIR_Converter_convert_node(&(astToMIR_converter),astToMIR_node,v);
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block(&(astToMIR_all_blocks),(unsigned int)(astToMIR_all_blocks).length-1,v)))->code,mir_FuncReturn,v);
struct mir_Function astToMIR_main;astToMIR_main = mir_FunctionInit(_global_StringInit(4,"main"),_global_StaticArray_StaticArray_S_mir_CreateVarInit(NULL, 0),_global_StaticArray_StaticArray_S_rmir_BlockInit(astToMIR_all_blocks.data, astToMIR_all_blocks.length));;
_global_Array_append_mir_Function(&(astToMIR_functions),astToMIR_main,v);
;return mir_ProgramInit(_global_StaticArray_StaticArray_S_mir_FunctionInit(astToMIR_functions.data, astToMIR_functions.length));
;}
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_String),v);
;}
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(unsigned int),v);
;}
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_uint),v);
;}
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_OpCode),v);
;}
void _global_memcpy_astToMIR_CFG(struct astToMIR_CFG* _global_target, struct astToMIR_CFG* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct astToMIR_CFG),v);
;}
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),v);
;}
unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int* _global_self, struct _global_Context* v){;
unsigned int* _global_x;;
unsigned int* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline unsigned int* _global_Maybe_unwrap_ruint(unsigned int** x,struct _global_Context* v){
return _global_Maybe_unwrap_ruintByValue(*x,v);
}struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String* _global_self, struct _global_Context* v){;
struct _global_String* _global_x;;
struct _global_String* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct _global_String* _global_Maybe_unwrap_rstring(struct _global_String** x,struct _global_Context* v){
return _global_Maybe_unwrap_rstringByValue(*x,v);
}
static inline struct _global_String* tmpastToMIRM(struct _global_Array_string** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct _global_String* w =(*_global_self)->data;
if(w != NULL){struct _global_String* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct _global_String* _global_newData;_global_newData = (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),v));;
_global_memcpy_string(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),v));}
}
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRM(&_global_self,&_global_newSize,&_global_allocator, v);;
;}

static inline unsigned int* tmpastToMIRN(struct _global_Array_uint** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
unsigned int* w =(*_global_self)->data;
if(w != NULL){unsigned int* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
unsigned int* _global_newData;_global_newData = (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),v));;
_global_memcpy_uint(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),v));}
}
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRN(&_global_self,&_global_newSize,&_global_allocator, v);;
;}

static inline struct hashMap_HashBucket_uint* tmpastToMIRP(struct _global_Array_hashMap_HashBucket_uint_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct hashMap_HashBucket_uint* w =(*_global_self)->data;
if(w != NULL){struct hashMap_HashBucket_uint* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct hashMap_HashBucket_uint* _global_newData;_global_newData = (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),v));;
_global_memcpy_hashMap_HashBucket_uint_(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),v));}
}
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRP(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint* _global_self, struct _global_Context* v){;
struct hashMap_HashBucket_uint* _global_x;;
struct hashMap_HashBucket_uint* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_(struct hashMap_HashBucket_uint** x,struct _global_Context* v){
return _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(*x,v);
}void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Function),v);
;}

static inline struct mir_OpCode* tmpastToMIRQ(struct _global_Array_mir_OpCode** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_OpCode* w =(*_global_self)->data;
if(w != NULL){struct mir_OpCode* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_OpCode* _global_newData;_global_newData = (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),v));;
_global_memcpy_mir_OpCode(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),v));}
}
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRQ(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode* _global_self, struct _global_Context* v){;
struct mir_OpCode* _global_x;;
struct mir_OpCode* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCode(struct mir_OpCode** x,struct _global_Context* v){
return _global_Maybe_unwrap_rmir_OpCodeByValue(*x,v);
}
static inline struct astToMIR_CFG* tmpastToMIRR(struct _global_Array_astToMIR_CFG** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct astToMIR_CFG* w =(*_global_self)->data;
if(w != NULL){struct astToMIR_CFG* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct astToMIR_CFG* _global_newData;_global_newData = (struct astToMIR_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct astToMIR_CFG),v));;
_global_memcpy_astToMIR_CFG(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct astToMIR_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct astToMIR_CFG),v));}
}
void _global_Array_reserve_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRR(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG* _global_self, struct _global_Context* v){;
struct astToMIR_CFG* _global_x;;
struct astToMIR_CFG* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFG(struct astToMIR_CFG** x,struct _global_Context* v){
return _global_Maybe_unwrap_rastToMIR_CFGByValue(*x,v);
}
static inline struct mir_Block** tmpastToMIRS(struct _global_Array_rmir_Block** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_Block** w =(*_global_self)->data;
if(w != NULL){struct mir_Block** _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),v));;
_global_memcpy_rmir_Block(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),v));}
}
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRS(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block** _global_self, struct _global_Context* v){;
struct mir_Block** _global_x;;
struct mir_Block** w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_Block** _global_Maybe_unwrap_rrmir_Block(struct mir_Block*** x,struct _global_Context* v){
return _global_Maybe_unwrap_rrmir_BlockByValue(*x,v);
}struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return ((_global_self)->data + (int64_t)_global_index);
;}
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_ruintByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rstringByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_string(_global_self,1,v);
;}
else{_global_Array_reserve_string(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rstringByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_uint(_global_self,1,v);
;}
else{_global_Array_reserve_uint(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_ruintByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Context* v){;return hashMap_HashBucket_uintInit(_global_Array_stringInit(0, 0, NULL, NULL),_global_Array_uintInit(0, 0, NULL, NULL));
;}
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,1,v);
;}
else{_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

static inline struct mir_Function* tmpastToMIRT(struct _global_Array_mir_Function** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_Function* w =(*_global_self)->data;
if(w != NULL){struct mir_Function* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_Function* _global_newData;_global_newData = (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),v));;
_global_memcpy_mir_Function(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),v));}
}
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRT(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function* _global_self, struct _global_Context* v){;
struct mir_Function* _global_x;;
struct mir_Function* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_Function* _global_Maybe_unwrap_rmir_Function(struct mir_Function** x,struct _global_Context* v){
return _global_Maybe_unwrap_rmir_FunctionByValue(*x,v);
}void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_OpCode(_global_self,1,v);
;}
else{_global_Array_reserve_mir_OpCode(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rmir_OpCodeByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct astToMIR_CFG _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_astToMIR_CFG(_global_self,1,v);
;}
else{_global_Array_reserve_astToMIR_CFG(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rastToMIR_CFGByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_Block(_global_self,1,v);
;}
else{_global_Array_reserve_rmir_Block(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rrmir_BlockByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct astToMIR_CFG _global_Array_pop_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct _global_Context* v){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),v);
;};
struct astToMIR_CFG _global_tmp;_global_tmp = *(_global_Array_op_get_astToMIR_CFG(_global_self,(unsigned int)(_global_self)->length-1,v));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
struct astToMIR_CFG* _global_Array_op_get_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rastToMIR_CFGByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* v){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,v);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,v)));;
struct _global_Array_string w =(hashMap_bucket)->keys;
for (unsigned int x = 0;x < w.length; x++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&w, x, v);
;unsigned int hashMap_i;hashMap_i = x;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,v)){;
return &(*(_global_Array_op_get_uint(&((hashMap_bucket)->values),(unsigned int)hashMap_i,v)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),v),_global_StringInit(12," in hash map"),v),v);
;return (unsigned int*)0;
;}
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* v){;
struct mir_ReadInfo* _global_pointer;_global_pointer = (struct mir_ReadInfo*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct mir_ReadInfo),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* v){;
struct _global_Array_mir_OpCode* _global_pointer;_global_pointer = (struct _global_Array_mir_OpCode*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct _global_Array_mir_OpCode),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* v){;
struct mir_Block* _global_pointer;_global_pointer = (struct mir_Block*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct mir_Block),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* v){;
;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,v);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,v)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,v);
_global_Array_append_uint(&((hashMap_bucket)->values),hashMap_value,v);
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* v){struct _global_Array_hashMap_HashBucket_uint_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_uint_Init(0, 0, NULL, NULL);;
struct _global_Range w =_global_RangeInit(0,hashMap_default_table_size);
for (unsigned int x = w.start; x < w.end; x++) {
unsigned int hashMap_i;hashMap_i = x;
;_global_Array_append_hashMap_HashBucket_uint_(&(hashMap_buckets),hashMap_make_HashBucket_uint(v),v);
}
;
;return hashMap_HashMap_uintInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(hashMap_buckets.data, hashMap_buckets.length));
;}
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rrmir_BlockByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_Function(_global_self,1,v);
;}
else{_global_Array_reserve_mir_Function(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rmir_FunctionByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

void astToMIRInitTypes() { 
 mirInitTypes();hashMapInitTypes();
_global_Array_mir_OpCodeType.size = malloc(sizeof(struct _global_ArraySize));
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
;mir_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
mir_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ReadInfoType_fields
,3
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
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
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
;mir_Add_i32.tag = 0;
mir_Mul_i32.tag = 1;
mir_Div_i32.tag = 2;
mir_Add_f32.tag = 3;
mir_Mul_f32.tag = 4;
mir_Div_f32.tag = 5;
mir_FuncReturn.tag = 13;
struct _global_Case* M =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 16);
M[0].name = _global_StringInit(7, "Add_i32");
M[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[1].name = _global_StringInit(7, "Mul_i32");
M[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[2].name = _global_StringInit(7, "Div_i32");
M[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[3].name = _global_StringInit(7, "Add_f32");
M[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[4].name = _global_StringInit(7, "Mul_f32");
M[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[5].name = _global_StringInit(7, "Div_f32");
M[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[6].name = _global_StringInit(9, "Store_i32");
M[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[6].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_i32_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[6].args.data[0].offset = offsetof(struct mir_OpCode_Store_i32, field0);
M[7].name = _global_StringInit(9, "Store_f32");
M[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[7].args.data[0].arg_type = 
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
; M[7].args.data[0].offset = offsetof(struct mir_OpCode_Store_f32, field0);
M[8].name = _global_StringInit(10, "Store_bool");
M[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[8].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; M[8].args.data[0].offset = offsetof(struct mir_OpCode_Store_bool, field0);
M[9].name = _global_StringInit(6, "Create");
M[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[9].args.data[0].arg_type = 
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
; M[9].args.data[0].offset = offsetof(struct mir_OpCode_Create, field0);
M[10].name = _global_StringInit(4, "Read");
M[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[10].args.data[0].arg_type = 
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
; M[10].args.data[0].offset = offsetof(struct mir_OpCode_Read, field0);
M[11].name = _global_StringInit(6, "Assign");
M[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[11].args.data[0].arg_type = 
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
; M[11].args.data[0].offset = offsetof(struct mir_OpCode_Assign, field0);
M[12].name = _global_StringInit(8, "FuncCall");
M[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[12].args.data[0].arg_type = 
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
; M[12].args.data[0].offset = offsetof(struct mir_OpCode_FuncCall, field0);
M[13].name = _global_StringInit(10, "FuncReturn");
M[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[14].name = _global_StringInit(8, "CondJump");
M[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
M[14].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[14].args.data[0].offset = offsetof(struct mir_OpCode_CondJump, field0);
M[14].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[14].args.data[1].offset = offsetof(struct mir_OpCode_CondJump, field1);
M[15].name = _global_StringInit(4, "Jump");
M[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[15].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[15].args.data[0].offset = offsetof(struct mir_OpCode_Jump, field0);
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
mir_OpCodeType.cases.data = M;
mir_OpCodeType.cases.length = 16;
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
rAliasType_VTABLE_FOR_Type.type
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
_global_Maybe_rmir_BlockType.nullable = 1;astToMIR_CFGType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
astToMIR_CFGType.fields = _global_StaticArray_StaticArray_S_FieldInit(
astToMIR_CFGType_fields
,2
);
astToMIR_CFGType.package = _global_StringInit(8, "astToMIR");
astToMIR_CFGType.name = _global_StringInit(3, "CFG");
astToMIR_CFGType.size = sizeof(struct astToMIR_CFG);
astToMIR_CFGType_fields[0].name = _global_StringInit(9, "return_to");
astToMIR_CFGType_fields[0].offset = offsetof(struct astToMIR_CFG, return_to);
astToMIR_CFGType_fields[0].field_type = 
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
astToMIR_CFGType_fields[1].name = _global_StringInit(5, "block");
astToMIR_CFGType_fields[1].offset = offsetof(struct astToMIR_CFG, block);
astToMIR_CFGType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rstringType.nullable = 1;_global_Array_uintType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_ruintType.nullable = 1;hashMap_HashBucket_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
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
;hashMap_HashMap_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
hashMap_HashMap_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_uintType_fields
,1
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
;_global_Array_astToMIR_CFGType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_astToMIR_CFGType.size->tag = 1;
_global_Array_astToMIR_CFGType.array_type=
_global_TypeFromStruct(
astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rastToMIR_CFGType.p_type =
_global_TypeFromStruct(
astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rastToMIR_CFGType.nullable = 1;_global_Array_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rrmir_BlockType.nullable = 1;astToMIR_ConverterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
astToMIR_ConverterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
astToMIR_ConverterType_fields
,7
);
astToMIR_ConverterType.package = _global_StringInit(8, "astToMIR");
astToMIR_ConverterType.name = _global_StringInit(9, "Converter");
astToMIR_ConverterType.size = sizeof(struct astToMIR_Converter);
astToMIR_ConverterType_fields[0].name = _global_StringInit(18, "global_var_counter");
astToMIR_ConverterType_fields[0].offset = offsetof(struct astToMIR_Converter, global_var_counter);
astToMIR_ConverterType_fields[0].field_type = 
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
astToMIR_ConverterType_fields[1].name = _global_StringInit(11, "var_counter");
astToMIR_ConverterType_fields[1].offset = offsetof(struct astToMIR_Converter, var_counter);
astToMIR_ConverterType_fields[1].field_type = 
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
astToMIR_ConverterType_fields[2].name = _global_StringInit(4, "vars");
astToMIR_ConverterType_fields[2].offset = offsetof(struct astToMIR_Converter, vars);
astToMIR_ConverterType_fields[2].field_type = 
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
astToMIR_ConverterType_fields[3].name = _global_StringInit(4, "cfgs");
astToMIR_ConverterType_fields[3].offset = offsetof(struct astToMIR_Converter, cfgs);
astToMIR_ConverterType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Array_astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
astToMIR_ConverterType_fields[4].name = _global_StringInit(5, "block");
astToMIR_ConverterType_fields[4].offset = offsetof(struct astToMIR_Converter, block);
astToMIR_ConverterType_fields[4].field_type = 
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
astToMIR_ConverterType_fields[5].name = _global_StringInit(13, "block_counter");
astToMIR_ConverterType_fields[5].offset = offsetof(struct astToMIR_Converter, block_counter);
astToMIR_ConverterType_fields[5].field_type = 
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
astToMIR_ConverterType_fields[6].name = _global_StringInit(10, "all_blocks");
astToMIR_ConverterType_fields[6].offset = offsetof(struct astToMIR_Converter, all_blocks);
astToMIR_ConverterType_fields[6].field_type = 
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
;_global_StaticArray_StaticArray_S_mir_CreateVarType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_mir_CreateVarType.size->tag = 2;
_global_StaticArray_StaticArray_S_mir_CreateVarType.array_type=
_global_TypeFromStruct(
mir_CreateVar_get_type(NULL,(&_global_context))
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
;mir_FunctionType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
mir_FunctionType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FunctionType_fields
,3
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
mir_FunctionType_fields[1].name = _global_StringInit(4, "args");
mir_FunctionType_fields[1].offset = offsetof(struct mir_Function, args);
mir_FunctionType_fields[1].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_mir_CreateVar_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
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
_global_Maybe_rmir_FunctionType.nullable = 1;_global_Array_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
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
; }
void astToMIRInit() { 
mirInit();;
hashMapInit();;
;
;
;
;
};
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* h);
void** _global_Maybe_unwrap_rrnoneByValue(void** _global_self, struct _global_Context* h);

static inline void** _global_Maybe_unwrap_rrnone(void***,struct _global_Context* h);

void** _global_Maybe_unwrap_rrnoneByValue(void**,struct _global_Context* h);
struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block** _global_self, struct _global_Context* h);

static inline struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_(struct mir_Block***,struct _global_Context* h);

struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block**,struct _global_Context* h);
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void _global_log_float(float _global_s, struct _global_Context* h);
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void _global_log_int(int _global_s, struct _global_Context* h);
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* h);
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* h);
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* h);
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* h);
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* h);
void interpreter_push_stack_i32(struct interpreter_Interpreter* interpreter_self, int32_t interpreter_value, struct _global_Context* h);
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* h);
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* h);
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* h);
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* h);
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* h){;
_global_log_float(interpreter_pop_stack_float(interpreter_state,h),h);
;}
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* h){;
_global_log_int(interpreter_pop_stack_int(interpreter_state,h),h);
;}
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_Context* h){;
;
struct _global_Array_rnone interpreter_local_args;interpreter_local_args = _global_Array_rnoneInit(0, 0, NULL, NULL);;
struct _global_Array_mir_OpCode j =*((interpreter_block)->code);
for (unsigned int k = 0;k < j.length; k++) {
struct mir_OpCode interpreter_inst;interpreter_inst = *_global_Array_op_get_mir_OpCode(&j, k, h);
;unsigned int interpreter_i;interpreter_i = k;
struct _global_EnumType* interpreter_typ_of_block;interpreter_typ_of_block = mir_OpCode_get_type(NULL,h);;
struct mir_OpCode l =interpreter_inst;if(l.tag==9){struct mir_ReadInfo* interpreter_read_info = l.cases.Create.field0;

unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)interpreter_size,h);;
if((interpreter_read_info)->is_global){;
_global_Array_append_rnone(&((interpreter_self)->var_ptr),interpreter_ptr_to_var,h);
_global_assert((((interpreter_self)->var_ptr).length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),h);
;}
else{_global_Array_append_rnone(&(interpreter_local_args),interpreter_ptr_to_var,h);
_global_assert(((interpreter_local_args).length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),h);
;};
;}
else if(l.tag==14){unsigned int interpreter_a = l.cases.CondJump.field0;
unsigned int interpreter_b = l.cases.CondJump.field1;

_Bool interpreter_boolean;interpreter_boolean = interpreter_pop_stack_bool(interpreter_self,h);;
if(interpreter_boolean){;
return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_a,h));
;
;}
else{return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_b,h));
;
;};
;}
else if(l.tag==15){unsigned int interpreter_a = l.cases.Jump.field0;

return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_a,h));
;
;}
else if(l.tag==11){struct mir_ReadInfo* interpreter_read_info = l.cases.Assign.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? *(_global_Array_op_get_rnone(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,h)):(*(_global_Array_op_get_rnone(&(interpreter_local_args),(unsigned int)(interpreter_read_info)->id,h))));;
unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)interpreter_size;;
void* interpreter_set_to;interpreter_set_to = _global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h);;
_global_memcpy_none(interpreter_ptr_to_var,interpreter_set_to,interpreter_size,h);
;}
else if(l.tag==10){struct mir_ReadInfo* interpreter_read_info = l.cases.Read.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? *(_global_Array_op_get_rnone(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,h)):(*(_global_Array_op_get_rnone(&(interpreter_local_args),(unsigned int)(interpreter_read_info)->id,h))));;
unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
void* interpreter_ptr;interpreter_ptr = _global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)interpreter_size,h);;
_global_memcpy_none(interpreter_ptr,interpreter_ptr_to_var,interpreter_size,h);
;}
else if(l.tag==0){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,h))+interpreter_pop_stack_int(interpreter_self,h),h);
;}
else if(l.tag==1){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,h))*interpreter_pop_stack_int(interpreter_self,h),h);
;}
else if(l.tag==2){
int interpreter_b;interpreter_b = interpreter_pop_stack_int(interpreter_self,h);;
int interpreter_a;interpreter_a = interpreter_pop_stack_int(interpreter_self,h);;
interpreter_push_stack_int(interpreter_self,interpreter_a/interpreter_b,h);
;}
else if(l.tag==12){struct types_FuncPtr* interpreter_func_ptr_type = l.cases.FuncCall.field0;

unsigned int interpreter_size_of_args;interpreter_size_of_args = 8;;
struct _global_StaticArray_StaticArray_S_types_CompilerType m =(interpreter_func_ptr_type)->args;
for (unsigned int n = 0;n < m.length; n++) {
struct types_CompilerType interpreter_arg;interpreter_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&m, n, h);
;unsigned int interpreter_i;interpreter_i = n;
interpreter_size_of_args=interpreter_size_of_args+types_CompilerType_calc_size(&(interpreter_arg),h);;
}
;
if((interpreter_func_ptr_type)->external){;
printerpreter_Interpreterp___none interpreter_func_ptr;interpreter_func_ptr = *((printerpreter_Interpreterp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,h)));;
interpreter_func_ptr(interpreter_self,h);
interpreter_pop_stack_pp___none(interpreter_self,h);
;}
else{struct mir_Function* interpreter_func_ptr;interpreter_func_ptr = *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,h)));;
interpreter_Interpreter_exec_function(interpreter_self,interpreter_func_ptr,h);
;};
;}
else if(l.tag==13){
return NULL;
;
;}
else if(l.tag==3){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,h))+interpreter_pop_stack_float(interpreter_self,h),h);
;}
else if(l.tag==4){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,h))*interpreter_pop_stack_float(interpreter_self,h),h);
;}
else if(l.tag==5){
float interpreter_b;interpreter_b = interpreter_pop_stack_float(interpreter_self,h);;
float interpreter_a;interpreter_a = interpreter_pop_stack_float(interpreter_self,h);;
interpreter_push_stack_float(interpreter_self,interpreter_a/interpreter_b,h);
;}
else if(l.tag==6){int32_t interpreter_num = l.cases.Store_i32.field0;

interpreter_push_stack_i32(interpreter_self,interpreter_num,h);
;}
else if(l.tag==7){float interpreter_num = l.cases.Store_f32.field0;

interpreter_push_stack_float(interpreter_self,interpreter_num,h);
;}
else if(l.tag==8){_Bool interpreter_b = l.cases.Store_bool.field0;

interpreter_push_stack_bool(interpreter_self,interpreter_b,h);
;}
;
}
;
;return NULL;
;}
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* h){;
;
_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(19,"executing function "),((interpreter_func)->name),h),_global_StringInit(0,""),h),h);
struct _global_StaticArray_StaticArray_S_rmir_Block j =(interpreter_func)->all_blocks;
for (unsigned int k = 0;k < j.length; k++) {
struct mir_Block* interpreter_block;interpreter_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&j, k, h);
;unsigned int interpreter_i;interpreter_i = k;
if((interpreter_block)->id>=((interpreter_self)->blocks).length){;
struct _global_Range l =_global_RangeInit(0,((interpreter_block)->id-((interpreter_self)->blocks).length+1));
for (unsigned int m = l.start; m < l.end; m++) {
unsigned int interpreter_c;interpreter_c = m;
;_global_Array_append_Maybe_rmir_Block_(&((interpreter_self)->blocks),NULL,h);
}
;
;};
*(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)(interpreter_block)->id,h))=interpreter_block;;
}
;
struct mir_Block* interpreter_block;interpreter_block = *(_global_StaticArray_op_get_StaticArray_S_rmir_Block(&((interpreter_func)->all_blocks),(unsigned int)0,h));;
;while(1){struct mir_Block* n =interpreter_Interpreter_exec_block(interpreter_self,interpreter_block,h);if(n != NULL){struct mir_Block* interpreter_next_block = n;

interpreter_block=interpreter_next_block;;
;}
else if(1){
break;;
;}
;};
;}
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* h){;
struct _global_Array_Maybe_rmir_Block_ interpreter_all_blocks;interpreter_all_blocks = _global_Array_Maybe_rmir_Block_Init(0, 0, NULL, NULL);;
struct interpreter_Interpreter interpreter_i;interpreter_i = interpreter_InterpreterInit(_global_Array_rnoneInit(0, 0, NULL, NULL),_global_new_TemporaryStorage((uint64_t)10000,h),interpreter_all_blocks);;
printerpreter_Interpreterp___none interpreter_ptr_to_log_function;interpreter_ptr_to_log_function = interpreter_log_float;;
_global_Array_append_rnone(&((interpreter_i).var_ptr),(void*)&(interpreter_ptr_to_log_function),h);
printerpreter_Interpreterp___none interpreter_ptr_to_log_int_func;interpreter_ptr_to_log_int_func = interpreter_log_int;;
_global_Array_append_rnone(&((interpreter_i).var_ptr),(void*)&(interpreter_ptr_to_log_int_func),h);
struct _global_TemporaryStorage* j = &((interpreter_i).stack);
;
interpreter_Interpreter_exec_function(&(interpreter_i),&(*(_global_StaticArray_op_get_StaticArray_S_mir_Function(&((interpreter_ir).functions),(unsigned int)0,h))),h);
_global_TemporaryStorage_free_allocator(j,h);
;}
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),h);
;}
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),h);
;}

static inline void** tmpinterpreterV(struct _global_Array_rnone** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
void** j =(*_global_self)->data;
if(j != NULL){void** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),h));;
_global_memcpy_rnone(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),h));}
}
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpinterpreterV(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
void** _global_Maybe_unwrap_rrnoneByValue(void** _global_self, struct _global_Context* h){;
void** _global_x;;
void** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline void** _global_Maybe_unwrap_rrnone(void*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rrnoneByValue(*k,h);
}struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block** _global_self, struct _global_Context* h){;
struct mir_Block** _global_x;;
struct mir_Block** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_(struct mir_Block*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(*k,h);
}
static inline struct mir_Block** tmpinterpreterW(struct _global_Array_Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct mir_Block** j =(*_global_self)->data;
if(j != NULL){struct mir_Block** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),h));;
_global_memcpy_Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),h));}
}
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpinterpreterW(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(float);;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void _global_log_float(float _global_s, struct _global_Context* h){;
_global_c_log(_global_Float_toString(&(_global_s),h),h);
;}
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(int);;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void _global_log_int(int _global_s, struct _global_Context* h){;
_global_c_log(_global_int_toString(&(_global_s),h),h);
;}
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rnone(_global_self,1,h);
;}
else{_global_Array_reserve_rnone(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rrnoneByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(_Bool);;
;return *((_Bool*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rMaybe_rmir_Block_ByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rrnoneByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy(_global_target,_global_destination,(uint64_t)_global_length*sizeof(void),h);
;}
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* h){;
;
int* interpreter_ptr;interpreter_ptr = (int*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int),h));;
*(interpreter_ptr)=interpreter_value;;
;}
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(pp___none);;
;return *((pp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* h){;
;
float* interpreter_ptr;interpreter_ptr = (float*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(float),h));;
*(interpreter_ptr)=interpreter_value;;
;}
void interpreter_push_stack_i32(struct interpreter_Interpreter* interpreter_self, int32_t interpreter_value, struct _global_Context* h){;
;
int32_t* interpreter_ptr;interpreter_ptr = (int32_t*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int32_t),h));;
*(interpreter_ptr)=interpreter_value;;
;}
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* h){;
;
_Bool* interpreter_ptr;interpreter_ptr = (_Bool*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(_Bool),h));;
*(interpreter_ptr)=interpreter_value;;
;}
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rmir_OpCodeByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rmir_Block_(_global_self,1,h);
;}
else{_global_Array_reserve_Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rMaybe_rmir_Block_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void interpreterInitTypes() { 
 
_global_Array_rnoneType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rrnoneType.nullable = 1;_global_Array_Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rMaybe_rmir_Block_Type.nullable = 1;interpreter_InterpreterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
interpreter_InterpreterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
interpreter_InterpreterType_fields
,3
);
interpreter_InterpreterType.package = _global_StringInit(11, "interpreter");
interpreter_InterpreterType.name = _global_StringInit(11, "Interpreter");
interpreter_InterpreterType.size = sizeof(struct interpreter_Interpreter);
interpreter_InterpreterType_fields[0].name = _global_StringInit(7, "var_ptr");
interpreter_InterpreterType_fields[0].offset = offsetof(struct interpreter_Interpreter, var_ptr);
interpreter_InterpreterType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_rnone_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[1].name = _global_StringInit(5, "stack");
interpreter_InterpreterType_fields[1].offset = offsetof(struct interpreter_Interpreter, stack);
interpreter_InterpreterType_fields[1].field_type = 
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
interpreter_InterpreterType_fields[2].name = _global_StringInit(6, "blocks");
interpreter_InterpreterType_fields[2].offset = offsetof(struct interpreter_Interpreter, blocks);
interpreter_InterpreterType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; }
void interpreterInit() { 
;
};
struct error_Thrower_VTABLE rast_AST_VTABLE_FOR_error_Thrower;struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* c){;
;
;
struct error_CompilerError* d =validator_State_validate_nodes(operatorValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((operatorValidation_node)->nodes.data, (operatorValidation_node)->nodes.length),c);if(d != NULL){struct error_CompilerError* operatorValidation_e = d;

return operatorValidation_e;
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
struct error_CompilerError* h =types_CompilerType_duck_type(&(operatorValidation_op_t),operatorValidation__type,error_ThrowerFromStruct(operatorValidation_node,&rast_AST_VTABLE_FOR_error_Thrower,_global_TypeFromStruct(ast_AST_get_type(NULL,c),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),c);if(h != NULL){struct error_CompilerError* operatorValidation_e = h;

return operatorValidation_e;
;
;}
else if(1){
;}
;
}
;
(operatorValidation_node)->_type=operatorValidation_op_t;;
;return NULL;
;}

void operatorValidationInitTypes() { 
 
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.size->tag = 1;
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
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
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
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
;hashMap_HashMap_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
hashMap_HashMap_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_scope_DeclInfoType_fields
,1
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
;_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type.p_type =
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type.nullable = 1;scope_ScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeType_fields
,1
);
scope_ScopeType.package = _global_StringInit(5, "scope");
scope_ScopeType.name = _global_StringInit(5, "Scope");
scope_ScopeType.size = sizeof(struct scope_Scope);
scope_ScopeType_fields[0].name = _global_StringInit(4, "vars");
scope_ScopeType_fields[0].offset = offsetof(struct scope_Scope, vars);
scope_ScopeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_hashMap_HashMap_scope_DeclInfo__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;validator_StateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
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
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo**,struct _global_Context* h);

struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo*,struct _global_Context* h);
void _global_memcpy_hashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo* _global_target, struct hashMap_HashMap_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfo(struct scope_DeclInfo**,struct _global_Context* h);

struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo*,struct _global_Context* h);
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Context* h);
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* h);
void _global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo**,struct _global_Context* h);

struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo*,struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h);
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_scope_DeclInfo(struct _global_Context* h);
void _global_Array_append_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, struct hashMap_HashMap_scope_DeclInfo _global_value, struct _global_Context* h);
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo* _global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h);
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h);
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h);
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* h);
struct types_CompilerType scope_DeclInfo_type_of_desc(struct scope_DeclInfo* scope_self, struct _global_Context* h){;
;return (scope_self)->_type;
;}
struct scope_DeclInfo scope_make_DeclInfo(struct _global_Context* h){;return scope_DeclInfoInit(types_CompilerTypeFromStruct(types_make_Void(h),&rtypes_Void_VTABLE_FOR_types_CompilerType,rtypes_Void_VTABLE_FOR_types_CompilerType.type, &types_Void_toString, &types_Void_duck_type, &types_Void_equals, &types_Void_calc_size),0);
;}
struct scope_Scope* scope_make_Scope(struct _global_Context* h){struct _global_Array_hashMap_HashMap_scope_DeclInfo_ scope_vars;scope_vars = _global_Array_hashMap_HashMap_scope_DeclInfo_Init(0, 0, NULL, NULL);;
_global_Array_append_hashMap_HashMap_scope_DeclInfo_(&(scope_vars),hashMap_make_HashMap_scope_DeclInfo(h),h);
;return _global_box_scope_Scope(scope_ScopeInit(scope_vars),h);
;}
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* h){;
;
int scope_i;scope_i = (int)((scope_self)->vars).length-1;;
;while(scope_i>=(int)0){struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &(*(_global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(&((scope_self)->vars),(unsigned int)(unsigned int)scope_i,h)));;if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,h)){;
return &(*(hashMap_HashMap_op_get_scope_DeclInfo(scope_vars,(struct _global_String)scope_name,h)));
;
;};scope_i=scope_i-(int)1;;};
;return NULL;
;}
_Bool scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct _global_Context* h){;
;
;
_global_assert(((scope_self)->vars).length>0,_global_StringInit(20,"Missing global scope"),h);
struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &(*(_global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(&((scope_self)->vars),(unsigned int)((scope_self)->vars).length-1,h)));;
if(((scope_self)->vars).length==1){;
(scope_info)->is_global=1;;
;};
;if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,h)){;
return 1;}
else{hashMap_HashMap_insert_scope_DeclInfo(scope_vars,scope_name,*(scope_info),h);
return 0;};
;}
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h);
;}
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_DeclInfo),h);
;}

static inline struct hashMap_HashBucket_scope_DeclInfo* tmpscopeX(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct hashMap_HashBucket_scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct hashMap_HashBucket_scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct hashMap_HashBucket_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h));;
_global_memcpy_hashMap_HashBucket_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h));}
}
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeX(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo* _global_self, struct _global_Context* h){;
struct hashMap_HashBucket_scope_DeclInfo* _global_x;;
struct hashMap_HashBucket_scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(*k,h);
}void _global_memcpy_hashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo* _global_target, struct hashMap_HashMap_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashMap_scope_DeclInfo),h);
;}
struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo* _global_self, struct _global_Context* h){;
struct scope_DeclInfo* _global_x;;
struct scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfo(struct scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rscope_DeclInfoByValue(*k,h);
}
static inline struct scope_DeclInfo* tmpscopeY(struct _global_Array_scope_DeclInfo** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct scope_DeclInfo* _global_newData;_global_newData = (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),h));;
_global_memcpy_scope_DeclInfo(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),h));}
}
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeY(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Context* h){;return hashMap_HashBucket_scope_DeclInfoInit(_global_Array_stringInit(0, 0, NULL, NULL),_global_Array_scope_DeclInfoInit(0, 0, NULL, NULL));
;}
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,1,h);
;}
else{_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

static inline struct hashMap_HashMap_scope_DeclInfo* tmpscopeZ(struct _global_Array_hashMap_HashMap_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct hashMap_HashMap_scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct hashMap_HashMap_scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct hashMap_HashMap_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashMap_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashMap_scope_DeclInfo),h));;
_global_memcpy_hashMap_HashMap_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct hashMap_HashMap_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashMap_scope_DeclInfo),h));}
}
void _global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeZ(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo* _global_self, struct _global_Context* h){;
struct hashMap_HashMap_scope_DeclInfo* _global_x;;
struct hashMap_HashMap_scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(*k,h);
}struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rscope_DeclInfoByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_scope_DeclInfo(_global_self,1,h);
;}
else{_global_Array_reserve_scope_DeclInfo(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rscope_DeclInfoByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_scope_DeclInfo(struct _global_Context* h){struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(0, 0, NULL, NULL);;
struct _global_Range j =_global_RangeInit(0,hashMap_default_table_size);
for (unsigned int k = j.start; k < j.end; k++) {
unsigned int hashMap_i;hashMap_i = k;
;_global_Array_append_hashMap_HashBucket_scope_DeclInfo_(&(hashMap_buckets),hashMap_make_HashBucket_scope_DeclInfo(h),h);
}
;
;return hashMap_HashMap_scope_DeclInfoInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(hashMap_buckets.data, hashMap_buckets.length));
;}
void _global_Array_append_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, struct hashMap_HashMap_scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(_global_self,1,h);
;}
else{_global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* h){;
struct scope_Scope* _global_pointer;_global_pointer = (struct scope_Scope*)(_global_Allocator_alloc((h)->allocator,(uint64_t)sizeof(struct scope_Scope),h));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct hashMap_HashMap_scope_DeclInfo* _global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
struct _global_Array_string j =(hashMap_bucket)->keys;
for (unsigned int k = 0;k < j.length; k++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&j, k, h);
;unsigned int hashMap_i;hashMap_i = k;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,h)){;
return 1;
;
;};
}
;
;return 0;
;}
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
struct _global_Array_string j =(hashMap_bucket)->keys;
for (unsigned int k = 0;k < j.length; k++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&j, k, h);
;unsigned int hashMap_i;hashMap_i = k;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,h)){;
return &(*(_global_Array_op_get_scope_DeclInfo(&((hashMap_bucket)->values),(unsigned int)hashMap_i,h)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),h),_global_StringInit(12," in hash map"),h),h);
;return (struct scope_DeclInfo*)0;
;}
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* h){;
;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,h);
_global_Array_append_scope_DeclInfo(&((hashMap_bucket)->values),hashMap_value,h);
;}

void scopeInitTypes() { 
 
_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.p_type =
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
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* d);
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
(varValidation_node)->_type=scope_DeclInfo_type_of_desc(varValidation_desc_info,d);;
(varValidation_read_info)->is_global=(varValidation_desc_info)->is_global;;
;return NULL;
;}
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
struct ast_AST* varValidation_create;varValidation_create = *(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)0,d));;
struct ast_AST* varValidation_assign;varValidation_assign = *(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)1,d));;
struct error_CompilerError* f =validator_State_validate_nodes(varValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((varValidation_assign)->nodes.data, (varValidation_assign)->nodes.length),d);if(f != NULL){struct error_CompilerError* varValidation_e = f;

return varValidation_e;
;
;}
else if(1){
;}
;
struct types_CompilerType varValidation_typ;varValidation_typ = (*(_global_Array_op_get_rast_AST(&((varValidation_assign)->nodes),(unsigned int)0,d)))->_type;;
struct ast_AST* varValidation_v;varValidation_v = *(_global_Array_op_get_rast_AST(&((varValidation_create)->nodes),(unsigned int)0,d));;
(varValidation_v)->_type=varValidation_typ;;
struct ast_ReadInfo* varValidation_read_info;;
struct ast_Payload g =(varValidation_v)->payload;if(g.tag==5){varValidation_read_info = g.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(37,"Expecting identifier in create assign"),d);
;}
;
struct scope_DeclInfo varValidation_decl_info;varValidation_decl_info = scope_make_DeclInfo(d);;
(varValidation_decl_info)._type=varValidation_typ;;
_Bool varValidation_var_exists;varValidation_var_exists = scope_Scope_create_decl((varValidation_state)->scope,(varValidation_read_info)->name,&(varValidation_decl_info),d);;
if(varValidation_var_exists){;
return error_make_Error_rast_AST(varValidation_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"Var "),((varValidation_read_info)->name),d),_global_StringInit(15," already exists"),d),d);
;
;};
(varValidation_read_info)->is_global=(varValidation_decl_info).is_global;;
;return NULL;
;}
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* d){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(ast_AST_get_filename(error_self,d),ast_AST_get_line(error_self,d),error_mesg,ast_AST_get_column(error_self,d)),d);
;}

void varValidationInitTypes() { 
 scopeInitTypes();
 }
void varValidationInit() { 
scopeInit();;
;
};
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* j);
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* j);
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* j){;
;
;struct ast_Payload k =(validator_syntax_tree)->payload;
if(k.tag==4){struct ast_OperatorKind validator_kind = k.cases.Operator.field0;
return operatorValidation_validate(validator_state,validator_kind,validator_syntax_tree,j);}else if(k.tag==5){struct ast_ReadInfo* validator_read_info = k.cases.Identifier.field0;
return varValidation_validate_read(validator_state,validator_read_info,validator_syntax_tree,j);}else if(k.tag==7){return varValidation_validate_create_assign(validator_state,validator_syntax_tree,j);}else if(1){return validator_State_validate_nodes(validator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((validator_syntax_tree)->nodes.data, (validator_syntax_tree)->nodes.length),j);};
;}
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* j){;
;
struct _global_StaticArray_StaticArray_S_rast_AST k =validator_nodes;
for (unsigned int l = 0;l < k.length; l++) {
struct ast_AST* validator_node;validator_node = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&k, l, j);
;unsigned int validator_i;validator_i = l;
struct error_CompilerError* m =validator_State_validate(validator_self,validator_node,j);if(m != NULL){struct error_CompilerError* validator_e = m;

return validator_e;
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
struct _global_StaticArray_StaticArray_S_types_CompilerType tmpvalidatorbb(struct _global_StaticArray_1_types_CompilerType* k) {
return _global_StaticArray_StaticArray_S_types_CompilerTypeInit(k->data, 1);};
struct types_CompilerType_VTABLE rtypes_FuncPtr_VTABLE_FOR_types_CompilerType;struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* j){;
struct validator_State validator_state;validator_state = validator_StateInit(scope_make_Scope(j));;
struct types_FuncPtr* validator_log_func_type;validator_log_func_type = types_make_FuncPtr(j);;
(validator_log_func_type)->args=tmpvalidatorbb(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(types_CompilerTypeFromStruct(types_make_Float(j),&rtypes_Float_VTABLE_FOR_types_CompilerType,rtypes_Float_VTABLE_FOR_types_CompilerType.type, &types_Float_toString, &types_Float_duck_type, &types_Float_equals, &types_Float_calc_size)),j));;
(validator_log_func_type)->external=1;;
struct scope_DeclInfo validator_decl_info;validator_decl_info = scope_make_DeclInfo(j);;
(validator_decl_info)._type=types_CompilerTypeFromStruct(validator_log_func_type,&rtypes_FuncPtr_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_FuncPtr_get_type(NULL,j),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_FuncPtr_toString, &types_FuncPtr_duck_type, &types_FuncPtr_equals, &types_FuncPtr_calc_size);;
struct types_FuncPtr* validator_log_func_type_int;validator_log_func_type_int = types_make_FuncPtr(j);;
(validator_log_func_type_int)->args=tmpvalidatorbb(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(types_CompilerTypeFromStruct(types_make_Int(j),&rtypes_Int_VTABLE_FOR_types_CompilerType,rtypes_Int_VTABLE_FOR_types_CompilerType.type, &types_Int_toString, &types_Int_duck_type, &types_Int_equals, &types_Int_calc_size)),j));;
(validator_log_func_type_int)->external=1;;
struct scope_DeclInfo validator_decl_info_2;validator_decl_info_2 = scope_make_DeclInfo(j);;
(validator_decl_info_2)._type=types_CompilerTypeFromStruct(validator_log_func_type,&rtypes_FuncPtr_VTABLE_FOR_types_CompilerType,rtypes_FuncPtr_VTABLE_FOR_types_CompilerType.type, &types_FuncPtr_toString, &types_FuncPtr_duck_type, &types_FuncPtr_equals, &types_FuncPtr_calc_size);;
_global_assert((!((scope_Scope_create_decl((validator_state).scope,_global_StringInit(3,"log"),&(validator_decl_info),j)))),_global_StringInit(19,"Log already defined"),j);
_global_assert((!((scope_Scope_create_decl((validator_state).scope,_global_StringInit(7,"log_int"),&(validator_decl_info_2),j)))),_global_StringInit(23,"Log_int already defined"),j);
struct error_CompilerError* l =validator_State_validate(&(validator_state),validator_syntax_tree,j);if(l != NULL){struct error_CompilerError* validator_e = l;

return validator_e;
;
;}
else if(1){
;}
;
struct error_CompilerError* m =validator_check_useless(validator_syntax_tree,j);if(m != NULL){struct error_CompilerError* validator_e = m;

return validator_e;
;
;}
else if(1){
;}
;
;return validator_check_other(validator_syntax_tree,j);
;}
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* j){;
;
;return error_make_Error_rast_AST(validator_i,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(8,"Useless "),(validator_mesg),j),_global_StringInit(0,""),j),j);
;}
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* j){;
;struct ast_Payload k =(validator_i)->payload;
if(k.tag==5&&1){return validator_useless(validator_i,_global_StringInit(4,"read"),j);}else if(k.tag==1){return validator_useless(validator_i,_global_StringInit(11,"int literal"),j);}else if(k.tag==2){return validator_useless(validator_i,_global_StringInit(13,"float literal"),j);}else if(k.tag==3){return validator_useless(validator_i,_global_StringInit(12,"bool literal"),j);}else if(k.tag==4){struct ast_OperatorKind validator_kind = k.cases.Operator.field0;
return validator_useless(validator_i,_global_StringInit(8,"operator"),j);}else if(k.tag==0){struct _global_Array_rast_AST l =(validator_i)->nodes;
for (unsigned int m = 0;m < l.length; m++) {
struct ast_AST* validator_node;validator_node = *_global_Array_op_get_rast_AST(&l, m, j);
;unsigned int validator_i;validator_i = m;
struct error_CompilerError* n =validator_check_useless(validator_node,j);if(n != NULL){struct error_CompilerError* validator_e = n;

return validator_e;
;
;}
else if(1){
;}
;
}
;
return NULL;}else if(1){return NULL;};
;}
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* j){;
;return NULL;
;}
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* j){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),j);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* j){;
struct _global_StaticArray_1_types_CompilerType* _global_pointer;_global_pointer = (struct _global_StaticArray_1_types_CompilerType*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_types_CompilerType),j));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}

void validatorInitTypes() { 
 operatorValidationInitTypes();varValidationInitTypes();
_global_StaticArray_1_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_types_CompilerTypeType.size->tag = 0;
_global_StaticArray_1_types_CompilerTypeType.size->cases.Static.field0 = 1;
_global_StaticArray_1_types_CompilerTypeType.array_type = 
_global_TypeFromStruct(
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
; }
void validatorInit() { 
;
operatorValidationInit();;
varValidationInit();;
;
};
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* q);
LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef* _global_self, struct _global_Context* q);

static inline LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRef(LLVMValueRef**,struct _global_Context* q);

LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef*,struct _global_Context* q);
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* q);
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* q);
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* q);
LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_log_uint(unsigned int _global_s, struct _global_Context* q);
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* q);

#define llvm__llvmModuleCreateWithName(q,r) LLVMModuleCreateWithName(q)
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* s){;
;return llvm__llvmModuleCreateWithName(_global_String_to_c_stringByValue(llvm_name,s),s);
;}

#define llvm_llvmInt8Type(s) LLVMInt8Type()

#define llvm_llvmInt32Type(t) LLVMInt32Type()

#define llvm_llvmFloatType(v) LLVMFloatType()

#define llvm_llvmVoidType(w) LLVMVoidType()

#define llvm__llvmFunctionType(x,y,z,B,C) LLVMFunctionType(x,y,z,B)
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* D){;
;
;return llvm__llvmFunctionType(llvm_return_type,(llvm_args).data,(llvm_args).length,0,D);
;}

#define llvm__llvmAppendBasicBlock(D,F,G) LLVMAppendBasicBlock(D,F)
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* H){;
;
;return llvm__llvmAppendBasicBlock(llvm_sum,_global_String_to_c_stringByValue(llvm_name,H),H);
;}

#define llvm_llvmCreateBuilder(H) LLVMCreateBuilder()

#define llvm_llvmPositionBuilderAtEnd(J,K,L) LLVMPositionBuilderAtEnd(J,K)

#define llvm__llvmBuildAdd(M,N,P,Q,R) LLVMBuildAdd(M,N,P,Q)
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* S){;
;
;
;
;return llvm__llvmBuildAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,S),S);
;}

#define llvm__llvmBuildMul(S,T,V,W,X) LLVMBuildMul(S,T,V,W)
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* Y){;
;
;
;
;return llvm__llvmBuildMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,Y),Y);
;}

#define llvm__llvmBuildDiv(Y,Z,bb,bc,bd) LLVMBuildSDiv(Y,Z,bb,bc)
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bf){;
;
;
;
;return llvm__llvmBuildDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bf),bf);
;}

#define llvm_llvmConstInt(bf,bg,bh,bj) LLVMConstInt(bf,bg,bh)

#define llvm_llvmConstReal(bk,bl,bm) LLVMConstReal(bk,bl)

#define llvm_llvmBuildRetVoid(bn,bp) LLVMBuildRetVoid(bn)

#define llvm__llvmAddFunction(bq,br,bs,bt) LLVMAddFunction(bq,br,bs)
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* bv){;
;
;
;return llvm__llvmAddFunction(llvm_mod,_global_String_to_c_stringByValue(llvm_name,bv),llvm_ret,bv);
;}

#define llvm_llvmVerifyModule(bv,bw,bx,by) LLVMVerifyModule(bv,bw,bx)

#define llvm_llvmDisposeMessage(bz,bB) LLVMDisposeMessage(bz)

#define llvm_llvmAbortProcessAction LLVMAbortProcessAction

#define llvm__llvmBuildCall(bC,bD,bF,bG,bH,bJ) LLVMBuildCall(bC,bD,bF,bG,bH)
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* bK){;
;
;
;
;return llvm__llvmBuildCall(llvm_builder,llvm_f,(llvm_args).data,(llvm_args).length,_global_String_to_c_stringByValue(llvm_name,bK),bK);
;}

#define llvm_llvmGetDefaultTargetTriple(bK) LLVMGetDefaultTargetTriple()

#define llvm_llvmGetTargetFromTriple(bL,bM,bN,bP) LLVMGetTargetFromTriple(bL,bM,bN)

#define llvm__llvmTargetMachineEmitToFile(bQ,bR,bS,bT,bV,bW) LLVMTargetMachineEmitToFile(bQ,bR,bS,bT,bV)
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* bX){;
;
;
;
;
;return llvm__llvmTargetMachineEmitToFile(llvm_t,llvm_m,_global_String_to_c_stringByValue(llvm_file,bX),llvm_typ,llvm_err,bX);
;}

#define llvm_llvmObjectFile LLVMObjectFile

#define llvm_llvmInitializeNativeTarget(bX) LLVMInitializeNativeTarget()

#define llvm_llvmInitializeNativeAsmParser(bY) LLVMInitializeNativeAsmParser()

#define llvm_llvmInitializeNativeAsmPrinter(bZ) LLVMInitializeNativeAsmPrinter()
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* cb){;
struct _global_String llvm_s;llvm_s = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"tmp."),_global_uint_toString((llvm_t),cb),cb),_global_StringInit(0,""),cb);;
*(llvm_t)=*(llvm_t)+1;;
;return llvm_s;
;}
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* cb){;
;
;
;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,cb);;
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,cb);;
_global_Array_append_llvm_LLVMValueRef(llvm_stack,llvm_func(*(llvm_builder),llvm_a,llvm_b,llvm_next_tmp(llvm_tmp,cb),cb),cb);
;}
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef tmpllvmbc(struct _global_StaticArray_1_llvm_LLVMTypeRef* db) {
return _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(db->data, 1);};
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* cb){;
llvm_llvmInitializeNativeTarget(cb);
llvm_llvmInitializeNativeAsmParser(cb);
llvm_llvmInitializeNativeAsmPrinter(cb);
LLVMModuleRef llvm_mod;llvm_mod = llvm_llvmModuleCreateWithName(_global_StringInit(9,"my_module"),cb);;
LLVMBuilderRef llvm_builder;llvm_builder = llvm_llvmCreateBuilder(cb);;
struct _global_Array_llvm_LLVMValueRef llvm_stack;llvm_stack = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Array_llvm_LLVMValueRef llvm_global_vars;llvm_global_vars = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
LLVMTypeRef llvm_log_float_type;llvm_log_float_type = llvm_llvmFunctionType(llvm_llvmVoidType(cb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmFloatType(cb)),cb)),cb);;
LLVMValueRef llvm_log_float_func;llvm_log_float_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(9,"log_float"),llvm_log_float_type,cb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_global_vars),llvm_log_float_func,cb);
LLVMTypeRef llvm_log_int_type;llvm_log_int_type = llvm_llvmFunctionType(llvm_llvmVoidType(cb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmInt32Type(cb)),cb)),cb);;
LLVMValueRef llvm_log_int_func;llvm_log_int_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(7,"log_int"),llvm_log_int_type,cb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_global_vars),llvm_log_int_func,cb);
struct _global_StaticArray_StaticArray_S_mir_Function fb =(llvm_program)->functions;
for (unsigned int gb = 0;gb < fb.length; gb++) {
struct mir_Function llvm_mir_func;llvm_mir_func = *_global_StaticArray_op_get_StaticArray_S_mir_Function(&fb, gb, cb);
;unsigned int llvm_i;llvm_i = gb;
LLVMTypeRef llvm_ret_type;llvm_ret_type = llvm_llvmFunctionType(llvm_llvmVoidType(cb),_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(NULL, 0),cb);;
LLVMValueRef llvm_llvm_func;llvm_llvm_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(3,"foo"),llvm_ret_type,cb);;
unsigned int llvm_tmp;llvm_tmp = 0;;
struct _global_StaticArray_StaticArray_S_rmir_Block hb =(llvm_mir_func).all_blocks;
for (unsigned int jb = 0;jb < hb.length; jb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&hb, jb, cb);
;unsigned int llvm_i;llvm_i = jb;
struct _global_String llvm_name;llvm_name = (llvm_i==0 ? _global_StringInit(5,"entry"):(_global_uint_toStringByValue((llvm_mir_block)->id,cb)));;
LLVMBasicBlockRef llvm_block;llvm_block = llvm_llvmAppendBasicBlock(llvm_llvm_func,llvm_name,cb);;
llvm_llvmPositionBuilderAtEnd(llvm_builder,llvm_block,cb);
struct _global_Array_mir_OpCode kb =*((llvm_mir_block)->code);
for (unsigned int lb = 0;lb < kb.length; lb++) {
struct mir_OpCode llvm_inst;llvm_inst = *_global_Array_op_get_mir_OpCode(&kb, lb, cb);
;unsigned int llvm_i;llvm_i = lb;
struct mir_OpCode mb =llvm_inst;if(mb.tag==0){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,cb);
;}
else if(mb.tag==3){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,cb);
;}
else if(mb.tag==1){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,cb);
;}
else if(mb.tag==4){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,cb);
;}
else if(mb.tag==2){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,cb);
;}
else if(mb.tag==5){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,cb);
;}
else if(mb.tag==8){_Bool llvm_b = mb.cases.Store_bool.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt8Type(cb),(int64_t)llvm_b,0,cb),cb);
;}
else if(mb.tag==6){int32_t llvm_integer = mb.cases.Store_i32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt32Type(cb),(int64_t)llvm_integer,1,cb),cb);
;}
else if(mb.tag==7){float llvm_f = mb.cases.Store_f32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstReal(llvm_llvmFloatType(cb),(double)llvm_f,cb),cb);
;}
else if(mb.tag==13){
llvm_llvmBuildRetVoid(llvm_builder,cb);
;}
else if(mb.tag==10){struct mir_ReadInfo* llvm_info = mb.cases.Read.field0;

_global_assert((llvm_info)->is_global,_global_StringInit(24,"Can't handle locals yet!"),cb);
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_global_vars),(unsigned int)(llvm_info)->id,cb)),cb);
;}
else if(mb.tag==12){struct types_FuncPtr* llvm_fptr_type = mb.cases.FuncCall.field0;

unsigned int llvm_arg_count;llvm_arg_count = ((llvm_fptr_type)->args).length;;
LLVMValueRef llvm_func;llvm_func = *(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count-1,cb));;
struct _global_Array_llvm_LLVMValueRef llvm_args;llvm_args = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Range nb =_global_RangeInit(0,llvm_arg_count);
for (unsigned int pb = nb.start; pb < nb.end; pb++) {
unsigned int llvm_c;llvm_c = pb;
;_global_Array_append_llvm_LLVMValueRef(&(llvm_args),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count+llvm_c,cb)),cb);
}
;
_global_log_uint((llvm_args).length,cb);
if(types_is_kind_types_Void((llvm_fptr_type)->return_type,cb)){;
llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),_global_StringInit(0,""),cb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),llvm_next_tmp(&(llvm_tmp),cb),cb),cb);
;};
;}
else if(1){
_global_panic(print_obj_toString_mir_OpCode(llvm_inst,cb),cb);
;}
;
}
;
}
;
}
;
char* llvm_error;llvm_error = NULL;;
_global_log_string(_global_StringInit(16,"verifying module"),cb);
if(llvm_llvmVerifyModule(llvm_mod,llvm_llvmAbortProcessAction,&(llvm_error),cb)){;
_global_log_string(_global_StringInit(10,"llvm error"),cb);
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,cb),cb),cb);
_global_panic(_global_StringInit(10,"LLVM ERROR"),cb);
;};
llvm_llvmDisposeMessage(llvm_error,cb);
char* llvm_target_triple;llvm_target_triple = llvm_llvmGetDefaultTargetTriple(cb);;
LLVMTargetRef llvm_target;;
if(llvm_llvmGetTargetFromTriple(llvm_target_triple,&(llvm_target),&(llvm_error),cb)){;
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,cb),cb),cb);
_global_log_string(_global_char_buffer_toString(llvm_target_triple,cb),cb);
_global_panic(_global_StringInit(33,"LLVM GET TARGET FROM TRIPLE ERROR"),cb);
;};
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,cb),cb),cb);
if(llvm_llvmTargetMachineEmitToFile(llvm_target,llvm_mod,_global_StringInit(11,"test/main.o"),llvm_llvmObjectFile,&(llvm_error),cb)){;
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,cb),cb),cb);
_global_panic(_global_StringInit(9,"LLVM EMIT"),cb);
;};
_global_log_string(_global_StringInit(6,"passed"),cb);
;}
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* cb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMValueRef),cb);
;}

static inline LLVMValueRef* tmpllvmbd(struct _global_Array_llvm_LLVMValueRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* cb) {
LLVMValueRef* db =(*_global_self)->data;
if(db != NULL){LLVMValueRef* _global_data = db;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),cb);
LLVMValueRef* _global_newData;_global_newData = (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),cb));;
_global_memcpy_llvm_LLVMValueRef(_global_newData,_global_data,(*_global_self)->length,cb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,cb);
return _global_newData;}else if(db == NULL){return (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),cb));}
}
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* cb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(cb)->allocator,cb);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpllvmbd(&_global_self,&_global_newSize,&_global_allocator, cb);;
;}
LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef* _global_self, struct _global_Context* cb){;
LLVMValueRef* _global_x;;
LLVMValueRef* db =_global_self;if(db != NULL){_global_x = db;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),cb);
;}
;
;return _global_x;
;}
static inline LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRef(LLVMValueRef** fb,struct _global_Context* cb){
return _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(*fb,cb);
}LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* cb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),cb);
;};
LLVMValueRef _global_tmp;_global_tmp = *(_global_Array_op_get_llvm_LLVMValueRef(_global_self,(unsigned int)(_global_self)->length-1,cb));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* cb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMValueRef(_global_self,1,cb);
;}
else{_global_Array_reserve_llvm_LLVMValueRef(_global_self,(_global_self)->capacity*2,cb);
;};
;};
*(((_global_Maybe_unwrap_rllvm_LLVMValueRefByValue((_global_self)->data,cb) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* cb){;
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_pointer;_global_pointer = (struct _global_StaticArray_1_llvm_LLVMTypeRef*)(_global_Allocator_alloc((cb)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_llvm_LLVMTypeRef),cb));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* cb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),cb);
;return (_global_Maybe_unwrap_rllvm_LLVMValueRefByValue((_global_self)->data,cb) + (int64_t)_global_index);
;}
void _global_log_uint(unsigned int _global_s, struct _global_Context* cb){;
_global_c_log(_global_uint_toString(&(_global_s),cb),cb);
;}
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* cb){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(cb);;
print_type_to_string(_global_TypeFromStruct(mir_OpCode_get_type(NULL,cb),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),cb);
;return stringBuilder_StringBuilder_toString(&(print_s),cb);
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
llvm_LLVMBuilderRefType.name = _global_StringInit(14, "LLVMBuilderRef");_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
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
;llvm_LLVMTargetRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetRefType_fields
,0
);
llvm_LLVMTargetRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetRefType.name = _global_StringInit(13, "LLVMTargetRef");llvm_LLVMCodeGenFileTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeGenFileTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeGenFileTypeType_fields
,0
);
llvm_LLVMCodeGenFileTypeType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeGenFileTypeType.name = _global_StringInit(19, "LLVMCodeGenFileType");_global_Array_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rllvm_LLVMValueRefType.nullable = 1;_global_StaticArray_1_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
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
};
static inline struct _global_Result_string_Result_T tmpcompilerbf(struct _global_Result_Result_E_Result_T m) {
struct _global_Result_string_Result_T l;l.tag = m.tag;l.cases = *(union _global_Result_string_Result_T_cases*) &(m.cases);return l;
}
struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* c){;
struct _global_File compiler_f;;
struct _global_Maybe_File d =_global_open(compiler_filename,_global_ReadFile,c);if(d.tag==0){compiler_f = d.cases.Some.field0;

;}
else if(1){
return _global_Error_string_Result_T(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(20,"could Not open file "),(compiler_filename),c),_global_StringInit(0,""),c),c);
;
;}
;
struct _global_File f = compiler_f;
;
struct _global_String compiler_src;compiler_src = _global_File_read(&(compiler_f),c);;
_global_log_string(_global_StringInit(25,"=== read source files ==="),c);
struct _global_StaticArray_StaticArray_S_lexer_Token compiler_tokens;struct error_CompilerError* compiler_lex_e;;
struct _global_Result_rerror_CompilerError___lexer_Token g =lexer_lex(compiler_src,compiler_filename,c);if(g.tag==0){compiler_tokens = g.cases.Ok.field0;

;}
else if(g.tag==1){compiler_lex_e = g.cases.Error.field0;

_global_File_freeByValue(f,c);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_lex_e,c),c);
;
;}
;
_global_log_string(_global_StringInit(16,"=== tokenize ==="),c);
struct ast_AST* compiler_syntax_tree;struct error_CompilerError* compiler_ast_e;;
struct _global_Result_rerror_CompilerError_rast_AST h =parser_parse(compiler_tokens,compiler_filename,c);if(h.tag==0){compiler_syntax_tree = h.cases.Ok.field0;

;}
else if(h.tag==1){compiler_ast_e = h.cases.Error.field0;

_global_File_freeByValue(f,c);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_ast_e,c),c);
;
;}
;
_global_log_string(_global_StringInit(13,"=== parsed =="),c);
struct error_CompilerError* j =validator_validate(compiler_syntax_tree,c);if(j != NULL){struct error_CompilerError* compiler_validation_error = j;

_global_File_freeByValue(f,c);
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_validation_error,c),c);
;
;}
else if(1){
;}
;
_global_log_string(_global_StringInit(17,"=== validated ==="),c);
struct mir_Program compiler_ir;compiler_ir = astToMIR_convert(compiler_syntax_tree,c);;
_global_log_string(_global_StringInit(21,"=== generated id ===="),c);
interpreter_exec(compiler_ir,c);
llvm_convert_to_LLVMModule(&(compiler_ir),c);
;struct _global_Result_string_Result_T k =tmpcompilerbf(_global_Ok_Result_E_Result_T(NULL,c));
_global_File_freeByValue(f,c);
return k;
 }
void compilerInitTypes() { 
 lexerInitTypes();parserInitTypes();astToMIRInitTypes();interpreterInitTypes();validatorInitTypes();llvmInitTypes();
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
struct _global_Case* t =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
t[0].name = _global_StringInit(2, "Ok");
t[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; t[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_Result_T_Ok, field0);
t[1].name = _global_StringInit(5, "Error");
t[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; t[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_Result_T_Error, field0);
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
_global_Result_Result_E_Result_TType.cases.data = t;
_global_Result_Result_E_Result_TType.cases.length = 2;
 }
void compilerInit() { 
lexerInit();;
parserInit();;
;
astToMIRInit();;
;
interpreterInit();;
validatorInit();;
llvmInit();;
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