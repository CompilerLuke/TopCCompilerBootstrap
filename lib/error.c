struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* c){;
struct stringBuilder_StringBuilder error_s_buffer;error_s_buffer = stringBuilder_make_StringBuilder(c);;
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(27,"Compilation Error\n\nFile '"),((error_self)->filename),c),_global_StringInit(8,"', line "),c),_global_uint_toStringByValue(((error_self)->line),c),c),_global_StringInit(4,"\n\t"),c),c);
stringBuilder_StringBuilder_append(&(error_s_buffer),(error_self)->mesg,c);
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(6,"\n\n\t"),c);
struct _global_File error_source_file;;
struct _global_Maybe_File d =_global_open((error_self)->filename,_global_ReadFile,c);if(d.tag==0){error_source_file = d.cases.Some.field0;

;}
else if(1){
return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),stringBuilder_StringBuilder_toStringByValue((error_s_buffer),c),c),_global_StringInit(28,"\nCould not load source file"),c);
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
stringBuilder_StringBuilder_append(&(error_s_buffer),_global_StringInit(2,"\t"),c);
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