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