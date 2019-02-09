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