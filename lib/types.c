struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* D);
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* D);
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* D);
struct types_StructInfo* _global_box_types_StructInfo(struct types_StructInfo _global_value, struct _global_Context* D);
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* D);
struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType types_self, struct _global_Context* D){;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;struct types_CompilerType F =types_self;
if(F.tag==0){return _global_StringInit(4,"none");}else if(F.tag==1){return _global_StringInit(6,"string");}else if(F.tag==2){return _global_StringInit(4,"bool");}else if(F.tag==3){_Bool types_unsigned = F.cases.Int.field0;
unsigned int types_size = F.cases.Int.field1;
return types_int_to_string(types_unsigned,types_size,D);}else if(F.tag==4){unsigned int types_size = F.cases.Float.field0;
return types_float_to_string(types_size,D);}else if(F.tag==5){struct types_StructInfo* types_info = F.cases.Struct.field0;
return types_StructInfo_toString(types_info,D);}else if(F.tag==6){struct types_FuncPtr* types_info = F.cases.Func.field0;
return types_FuncPtr_toString(types_info,D);};
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;}
static inline struct _global_String types_CompilerType_toString(struct types_CompilerType* G,struct _global_Context* D){
return types_CompilerType_toStringByValue(*G,D);
}struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;return NULL;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
static inline struct error_CompilerError* types_CompilerType_expect_equals(struct types_CompilerType* F,struct types_CompilerType G,struct error_Thrower H,struct _global_Context* D){
return types_CompilerType_expect_equalsByValue(*F,G,H,D);
}_Bool types_CompilerType_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* D){;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
types_self = types_CompilerType_to_real_typeByValue(types_self,D);;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
types_other = types_CompilerType_to_real_typeByValue(types_other,D);;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
if((types_self).tag!=(types_other).tag){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
return 0;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;};
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
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
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;}
static inline _Bool types_CompilerType_equals(struct types_CompilerType* G,struct types_CompilerType H,struct _global_Context* D){
return types_CompilerType_equalsByValue(*G,H,D);
}struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;struct types_CompilerType F =types_self;
if(F.tag==0||F.tag==1||F.tag==2){return types_CompilerType_expect_equalsByValue(types_self,types_other,types_thrower,D);}else if(F.tag==3){_Bool types_unsigned = F.cases.Int.field0;
unsigned int types_size = F.cases.Int.field1;
return types_int_duck_type(types_unsigned,types_size,types_other,types_thrower,D);}else if(F.tag==4){unsigned int types_size = F.cases.Float.field0;
return types_float_duck_type(types_size,types_other,types_thrower,D);}else if(F.tag==5){struct types_StructInfo* types_info = F.cases.Struct.field0;
return types_StructInfo_duck_type(types_info,types_other,types_thrower,D);}else if(F.tag==6){struct types_FuncPtr* types_info = F.cases.Func.field0;
return types_FuncPtr_duck_type(types_info,types_other,types_thrower,D);};
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;}
static inline struct error_CompilerError* types_CompilerType_duck_type(struct types_CompilerType* G,struct types_CompilerType H,struct error_Thrower J,struct _global_Context* D){
return types_CompilerType_duck_typeByValue(*G,H,J,D);
}struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType types_self, struct _global_Context* D){;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;struct types_CompilerType F =types_self;
if(1){return types_self;};
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;}
static inline struct types_CompilerType types_CompilerType_to_real_type(struct types_CompilerType* G,struct _global_Context* D){
return types_CompilerType_to_real_typeByValue(*G,D);
}_Bool types_CompilerType_is_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* D){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;return (types_CompilerType_to_real_typeByValue(types_self,D)).tag==(types_CompilerType_to_real_typeByValue(types_other,D)).tag;
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;}
static inline _Bool types_CompilerType_is_type(struct types_CompilerType* F,struct types_CompilerType G,struct _global_Context* D){
return types_CompilerType_is_typeByValue(*F,G,D);
}struct types_CompilerType types_func_type;struct types_CompilerType types_struct_type;struct _global_String types_float_to_string(unsigned int types_size, struct _global_Context* D){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/float.top"
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"f"),_global_uint_toStringByValue((types_size),D),D),_global_StringInit(0,""),D);
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* types_float_duck_type(unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/float.top"
;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/float.top"
;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/float.top"
;return NULL;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct types_CompilerType types_make_Float(struct _global_Context* D){;return types_Float(32,D);
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/float.top"
;}
struct _global_String types_int_to_string(_Bool types_unsigned, unsigned int types_size, struct _global_Context* D){;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
struct _global_String types_prefix;types_prefix = (types_unsigned ? _global_StringInit(1,"u"):(_global_StringInit(1,"i")));;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(types_prefix),D),_global_StringInit(0,""),D),_global_uint_toStringByValue((types_size),D),D),_global_StringInit(0,""),D);
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* types_int_duck_type(_Bool types_unsigned, unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;struct types_CompilerType F =types_CompilerType_to_real_typeByValue(types_other,D);
if(F.tag==3){_Bool types_unsigned2 = F.cases.Int.field0;
unsigned int types_size2 = F.cases.Int.field1;
return (types_unsigned&&!(types_unsigned2) ? error_make_Error_error_Thrower(types_thrower,_global_StringInit(42,"Cannot convert from signed to unsigned int"),D) : (types_size2>types_size) ? error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(36,"Loosing information by casting from "),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(2,", "),D),(types_int_to_string(types_unsigned,types_size,D)),D),_global_StringInit(0,""),D),D):(NULL));}else if(1){return error_make_Error_error_Thrower(types_thrower,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"Expecting "),(types_int_to_string(types_unsigned,types_size,D)),D),_global_StringInit(6,", not "),D),types_CompilerType_toStringByValue((types_other),D),D),_global_StringInit(0,""),D),D);};
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;}
struct types_CompilerType types_make_Int(struct _global_Context* D){;return types_Int(0,32,D);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/int.top"
;}
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* D){;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
struct stringBuilder_StringBuilder types_s;types_s = stringBuilder_make_StringBuilder(D);;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(4,"def("),D);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
struct _global_StaticArray_StaticArray_S_types_CompilerType F =(types_self)->args;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
for (unsigned int G = 0;G < F.length; G++) {
struct types_CompilerType types_arg;types_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&F, G, D);
;unsigned int types_i;types_i = G;
stringBuilder_StringBuilder_append(&(types_s),types_CompilerType_toStringByValue(types_arg,D),D);
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
if(types_i<((types_self)->args).length-1){;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,","),D);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;};
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
}
;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
stringBuilder_StringBuilder_append(&(types_s),_global_StringInit(1,")"),D);
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;return stringBuilder_StringBuilder_toString(&(types_s),D);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;}
static inline struct _global_String types_FuncPtr_toStringByValue(struct types_FuncPtr H,struct _global_Context* D){
return types_FuncPtr_toString(&H,D);
}struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;return NULL;
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
_Bool types_FuncPtr_op_eq(struct types_FuncPtr* types_self, struct types_FuncPtr* types_other, struct _global_Context* D){;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;return 1;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;}
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* D){;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;return 8;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;}
struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* D){;return _global_box_types_FuncPtr(types_FuncPtrInit(_global_StaticArray_StaticArray_S_types_CompilerTypeInit(NULL, 0),types_Void,0),D);
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/funcPtr.top"
;}
struct _global_String types_StructInfo_toString(struct types_StructInfo* types_self, struct _global_Context* D){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;return (types_self)->name;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;}
static inline struct _global_String types_StructInfo_toStringByValue(struct types_StructInfo F,struct _global_Context* D){
return types_StructInfo_toString(&F,D);
}_Bool types_StructInfo_equals(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct _global_Context* D){;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;struct types_CompilerType F =types_CompilerType_to_real_typeByValue(types_other,D);
if(F.tag==5){struct types_StructInfo* types_o = F.cases.Struct.field0;
return _global_String_op_eqByValue((types_o)->name,(types_self)->name,D);}else if(1){return 0;};
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;}
struct error_CompilerError* types_StructInfo_duck_type(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* D){;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;return NULL;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
_Bool types_StructInfo_op_eq(struct types_StructInfo* types_self, struct types_StructInfo* types_other, struct _global_Context* D){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;return _global_String_op_eqByValue((types_self)->name,(types_other)->name,D);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct types_StructInfo* types_make_StructInfo(struct _global_String types_name, struct hashMap_HashMap_types_CompilerType types_fields, struct _global_Context* D){;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;return _global_box_types_StructInfo(types_StructInfoInit(types_name,types_fields),D);
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;}
static inline struct _global_Result_Result_E_types_CompilerType tmptypesK(struct _global_Result_rerror_CompilerError_Result_T K) {
struct _global_Result_Result_E_types_CompilerType J;J.tag = K.tag;J.cases = *(union _global_Result_Result_E_types_CompilerType_cases*) &(K.cases);return J;
}
static inline struct _global_Result_rerror_CompilerError_types_CompilerType tmptypesH(struct _global_Result_Result_E_types_CompilerType G) {
struct _global_Result_rerror_CompilerError_types_CompilerType F;F.tag = G.tag;F.cases = *(union _global_Result_rerror_CompilerError_types_CompilerType_cases*) &(G.cases);return F;
}

static inline struct _global_Result_Result_E_types_CompilerType tmptypesJ(struct parser_Parser** types_self, struct _global_Context* D) {
struct _global_String H =(parser_Parser_current(*types_self,D)).value;
if(_global_String_op_eqByValue(H,_global_StringInit(3,"int"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Int(0,32,D),D);}else if(_global_String_op_eqByValue(H,_global_StringInit(5,"float"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Float(32,D),D);}else if(_global_String_op_eqByValue(H,_global_StringInit(4,"none"),NULL)){return _global_Ok_Result_E_types_CompilerType(types_Void,D);}else if(1){return tmptypesK(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(*types_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((parser_Parser_current(*types_self,D)).value),D),_global_StringInit(0,""),D),D),D));}
}
struct _global_Result_rerror_CompilerError_types_CompilerType types_parse_type(struct parser_Parser* types_self, struct _global_Context* D){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/parseType.top"
;return tmptypesH(tmptypesJ(&types_self, D));
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* error_make_Error_error_Thrower(struct error_Thrower error_self, struct _global_String error_mesg, struct _global_Context* D){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
struct error_CompilerError* error_err;error_err = _global_box_longterm_error_CompilerError(error_CompilerErrorInit(error_Thrower_get_filename(&(error_self),D),error_Thrower_get_line(&(error_self),D),error_mesg,error_Thrower_get_column(&(error_self),D)),D);;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
_global_panic(error_CompilerError_toString(error_err,D),D);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;return error_err;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;}
struct types_CompilerType* _global_StaticArray_op_get_StaticArray_S_types_CompilerType(struct _global_StaticArray_StaticArray_S_types_CompilerType* _global_self, unsigned int _global_index, struct _global_Context* D){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),D);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
struct types_FuncPtr* _global_box_types_FuncPtr(struct types_FuncPtr _global_value, struct _global_Context* D){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct types_FuncPtr* _global_pointer;_global_pointer = (struct types_FuncPtr*)(_global_Allocator_alloc((D)->allocator,(uint64_t)sizeof(struct types_FuncPtr),D));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct types_StructInfo* _global_box_types_StructInfo(struct types_StructInfo _global_value, struct _global_Context* D){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct types_StructInfo* _global_pointer;_global_pointer = (struct types_StructInfo*)(_global_Allocator_alloc((D)->allocator,(uint64_t)sizeof(struct types_StructInfo),D));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* D){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
struct error_CompilerError* error_err;error_err = _global_box_longterm_error_CompilerError(error_CompilerErrorInit(parser_Parser_get_filename(error_self,D),parser_Parser_get_line(error_self,D),error_mesg,parser_Parser_get_column(error_self,D)),D);;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
_global_panic(error_CompilerError_toString(error_err,D),D);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;return error_err;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
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
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
hashMapInit();;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
scopeInit();;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
types_func_type = types_Func((struct types_FuncPtr*)0,(&_global_context));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
types_struct_type = types_Struct((struct types_StructInfo*)0,(&_global_context));;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/types.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/types/struct.top"
;
};