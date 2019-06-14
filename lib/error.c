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