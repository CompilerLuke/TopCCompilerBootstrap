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