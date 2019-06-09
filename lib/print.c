struct _global_Field* _global_StaticArray_op_get_StaticArray_S_Field(struct _global_StaticArray_StaticArray_S_Field* _global_self, unsigned int _global_index, struct _global_Context* c);
struct _global_CaseArg* _global_StaticArray_op_get_StaticArray_S_CaseArg(struct _global_StaticArray_StaticArray_S_CaseArg* _global_self, unsigned int _global_index, struct _global_Context* c);

static inline struct puintcrnonep tmpprintM(struct _global_Type* print_kind,void** print_ptr,struct _global_String* print_tab,struct stringBuilder_StringBuilder** print_s,struct _global_ArrayType** print_array_type,struct _global_Type* print_elem_type,uint64_t* print_elem_size,unsigned int* print_length,void** print_data, struct _global_Context* c) {
struct _global_ArraySize j =*((*print_array_type)->size);
if(j.tag==2){struct _global_StaticArray_StaticArray_S_none* print_arr;print_arr = (struct _global_StaticArray_StaticArray_S_none*)*print_ptr;;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
return puintcrnonepInit((print_arr)->length,(print_arr)->data);}else if(j.tag==1){struct _global_Array_none* print_arr;print_arr = (struct _global_Array_none*)*print_ptr;;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
return puintcrnonepInit((print_arr)->length,(void*)(print_arr)->data);}else if(j.tag==0){unsigned int print_length = j.cases.Static.field0;
return puintcrnonepInit(print_length,*print_ptr);}
}
void print_type_to_string(struct _global_Type print_kind, void* print_ptr, struct _global_String print_tab, struct stringBuilder_StringBuilder* print_s, struct _global_Context* c){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_Type d =print_kind;if(d.vtable->type.data == _global_StructType_get_type(NULL,c)){struct _global_StructType* print_struct_type = (struct _global_StructType*)d.data;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((print_struct_type)->package),c),_global_StringInit(1,"."),c),((print_struct_type)->name),c),_global_StringInit(0,""),c),c);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"{\n"),c);
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_StaticArray_StaticArray_S_Field f =(print_struct_type)->fields;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
for (unsigned int g = 0;g < f.length; g++) {
struct _global_Field print_field;print_field = *_global_StaticArray_op_get_StaticArray_S_Field(&f, g, c);
;unsigned int print_i;print_i = g;
if(_global_String_op_eqByValue((print_struct_type)->name,_global_StringInit(3,"AST"),c)&&_global_String_op_eqByValue((print_field).name,_global_StringInit(5,"owner"),c)){;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
 continue;;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;};
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(2,"\t"),c),((print_field).name),c),_global_StringInit(3," : "),c),c);
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string((print_field).field_type,(_global_offsetPtr(print_ptr,(int64_t)(print_field).offset,c)),_global_String_op_addByValue(print_tab,_global_StringInit(2,"\t"),c),print_s,c);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"\n"),c);
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
}
;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,print_tab,c);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"}"),c);
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_IntType_get_type(NULL,c)){struct IntType* print_int_type = (struct IntType*)d.data;
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
if((print_int_type)->sign){;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_int_toString(((int*)print_ptr),c),c),_global_StringInit(0,""),c),c);
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_uint_toString(((unsigned int*)print_ptr),c),c),_global_StringInit(0,""),c),c);
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;};
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_FloatType_get_type(NULL,c)){struct FloatType* print_float_type = (struct FloatType*)d.data;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
if((print_float_type)->size==4){;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_Float_toString(((float*)print_ptr),c),c),_global_StringInit(0,""),c),c);
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),_global_Float_toString(((double*)print_ptr),c),c),_global_StringInit(0,""),c),c);
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;};
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_StringType_get_type(NULL,c)){struct StringType* print_string_type = (struct StringType*)d.data;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(1,"'"),_global_String_toString(((struct _global_String*)print_ptr),c),c),_global_StringInit(1,"'"),c),c);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_AliasType_get_type(NULL,c)){struct _global_AliasType* print_alias_type = (struct _global_AliasType*)d.data;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string((print_alias_type)->real_type,print_ptr,print_tab,print_s,c);
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_ArrayType_get_type(NULL,c)){struct _global_ArrayType* print_array_type = (struct _global_ArrayType*)d.data;
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_Type print_elem_type;print_elem_type = (print_array_type)->array_type;;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
uint64_t print_elem_size;print_elem_size = _global_Type_get_size(&(print_elem_type),c);;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
unsigned int print_length;void* print_data;struct puintcrnonep h;h = tmpprintM(&print_kind,&print_ptr,&print_tab,&print_s,&print_array_type,&print_elem_type,&print_elem_size,&print_length,&print_data, c);print_length=h.field0;print_data=h.field1;;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
if(print_length==0){;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"[]"),c);
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
else{stringBuilder_StringBuilder_append(print_s,_global_StringInit(2,"[\n"),c);
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_Range k =_global_RangeInit(0,print_length);
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
for (unsigned int l = k.start; l < k.end; l++) {
unsigned int print_i;print_i = l;
;stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(2,"\t"),c),c);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string(print_elem_type,(_global_offsetPtr(print_data,(int64_t)(uint64_t)print_i*print_elem_size,c)),_global_String_op_addByValue(print_tab,_global_StringInit(2,"\t"),c),print_s,c);
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,"\n"),c);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
}
;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),(print_tab),c),_global_StringInit(1,"]"),c),c);
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;};
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_PointerType_get_type(NULL,c)){struct _global_PointerType* print_p_type = (struct _global_PointerType*)d.data;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_ptr = *(((void**)print_ptr));;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string((print_p_type)->p_type,print_ptr,print_tab,print_s,c);
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_BoolType_get_type(NULL,c)){struct BoolType* print_bool_type = (struct BoolType*)d.data;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_Bool_toString(((_Bool*)print_ptr),c),c);
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_EnumType_get_type(NULL,c)){struct _global_EnumType* print_enum_type = (struct _global_EnumType*)d.data;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
unsigned char print_tag;print_tag = _global_EnumType_get_tag(print_enum_type,print_ptr,c);;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((print_enum_type)->cases),(unsigned int)print_tag,c))).name),c),_global_StringInit(1,"("),c),c);
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_StaticArray_StaticArray_S_CaseArg m =(*(_global_StaticArray_op_get_StaticArray_S_Case(&((print_enum_type)->cases),(unsigned int)print_tag,c))).args;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
for (unsigned int n = 0;n < m.length; n++) {
struct _global_CaseArg print_arg;print_arg = *_global_StaticArray_op_get_StaticArray_S_CaseArg(&m, n, c);
;unsigned int print_i;print_i = n;
print_type_to_string((print_arg).arg_type,(_global_offsetPtr(print_ptr,(int64_t)(print_arg).offset,c)),print_tab,print_s,c);
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,","),c);
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
}
;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(1,")"),c);
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(d.vtable->type.data == _global_InterfaceType_get_type(NULL,c)){struct _global_InterfaceType* print_interface_type = (struct _global_InterfaceType*)d.data;
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
if(_global_String_op_eqByValue((print_interface_type)->name,_global_StringInit(12,"CompilerType"),c)){;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct types_CompilerType* print_ptr_to_interface;print_ptr_to_interface = (struct types_CompilerType*)print_ptr;;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,types_CompilerType_toString(print_ptr_to_interface,c),c);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
else{stringBuilder_StringBuilder_append(print_s,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),_global_InterfaceType_toString((print_interface_type),c),c),_global_StringInit(0,""),c),c);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;};
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
else if(1){
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
stringBuilder_StringBuilder_append(print_s,_global_StringInit(11,"Unsupported"),c);
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
struct _global_Field* _global_StaticArray_op_get_StaticArray_S_Field(struct _global_StaticArray_StaticArray_S_Field* _global_self, unsigned int _global_index, struct _global_Context* c){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
struct _global_CaseArg* _global_StaticArray_op_get_StaticArray_S_CaseArg(struct _global_StaticArray_StaticArray_S_CaseArg* _global_self, unsigned int _global_index, struct _global_Context* c){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),c);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}

void printInitTypes() { 
 
 }
void printInit() { 
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
};