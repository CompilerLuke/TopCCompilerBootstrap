struct _global_String print_obj_toString_mir_Program(struct mir_Program print_t, struct _global_Context* d);
void print_print_obj_mir_Program(struct mir_Program print_t, struct _global_Context* d);
void compiler_log_memory_usage(struct _global_Context* d){_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(6,"USED: "),_global_u64_toStringByValue((_global_Allocator_get_occupied((d)->allocator,d)+_global_Allocator_get_occupied((d)->longterm_storage,d)),d),d),_global_StringInit(0,""),d),d);
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
struct _global_StaticArray_StaticArray_S_string tmpcompilerbL(struct _global_StaticArray_1_string* l) {
return _global_StaticArray_StaticArray_S_stringInit(l->data, 1);};
static inline struct _global_Result_string_Result_T tmpcompilerbM(struct _global_Result_Result_E_Result_T p) {
struct _global_Result_string_Result_T n;n.tag = p.tag;n.cases = *(union _global_Result_string_Result_T_cases*) &(p.cases);return n;
}
struct _global_Result_string_Result_T compiler_compile_file(struct _global_String compiler_filename, struct _global_Context* d){;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_File compiler_f;;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_Maybe_File f =_global_open(compiler_filename,_global_ReadFile,d);if(f.tag==0){compiler_f = f.cases.Some.field0;

#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
else if(1){
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
return _global_Error_string_Result_T(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(20,"could Not open file "),(compiler_filename),d),_global_StringInit(0,""),d),d);
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_File g = compiler_f;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_String compiler_src;compiler_src = _global_StringInit(0,"");;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_Context compiler_new_context;compiler_new_context = *(d);;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
(compiler_new_context).allocator = &(_global_malloc_as_allocator);;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_src = _global_File_read(&(compiler_f),&compiler_new_context);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(25,"=== read source files ==="),d);
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_StaticArray_StaticArray_S_lexer_Token compiler_tokens;struct error_CompilerError* compiler_lex_e;;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_Result_rerror_CompilerError___lexer_Token h =lexer_lex(compiler_src,compiler_filename,d);if(h.tag==0){compiler_tokens = h.cases.Ok.field0;

#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
else if(h.tag==1){compiler_lex_e = h.cases.Error.field0;

#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_File_freeByValue(g,d);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_lex_e,d),d);
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_Allocator_dealloc((compiler_new_context).allocator,(void*)(_global_String_to_c_stringByValue(compiler_src,d)),d);
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(16,"=== tokenize ==="),d);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct ast_AST* compiler_syntax_tree;struct error_CompilerError* compiler_ast_e;;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_Result_rerror_CompilerError_rast_AST j =parser_parse(compiler_tokens,compiler_filename,d);if(j.tag==0){compiler_syntax_tree = j.cases.Ok.field0;

#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
else if(j.tag==1){compiler_ast_e = j.cases.Error.field0;

#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_File_freeByValue(g,d);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_ast_e,d),d);
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(13,"=== parsed =="),d);
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct error_CompilerError* k =validator_validate(compiler_syntax_tree,d);if(k != NULL){struct error_CompilerError* compiler_validation_error = k;

#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
_global_File_freeByValue(g,d);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
return _global_Error_string_Result_T(error_CompilerError_toString(compiler_validation_error,d),d);
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;}
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
else if(1){
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
_global_log_string(_global_StringInit(17,"=== validated ==="),d);
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct mir_Program compiler_ir;compiler_ir = mir_convert(compiler_syntax_tree,d);;
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(21,"=== generated ir ===="),d);
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
print_print_obj_mir_Program(compiler_ir,d);
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
interpreter_exec(compiler_ir,d);
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(16,"=== llvm ir ===="),d);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
compiler_log_memory_usage(d);
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
llvm_convert_to_LLVMModule(&(compiler_ir),d);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(15,"=== linking ==="),d);
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct _global_StaticArray_1_string compiler_object_files;compiler_object_files = _global_StaticArray_1_stringInit(_global_StringInit(11,"test/main.o"));;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
struct linker_Linker compiler_l;compiler_l = linker_LinkerInit(_global_StringInit(13,"test/prog.exe"),_global_StringInit(14,"test/runtime.o"),tmpcompilerbL(&(compiler_object_files)),_global_StringInit(5,"clang"));;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
linker_Linker_link(&(compiler_l),d);
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
_global_log_string(_global_StringInit(26,"=== running executable ==="),d);
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
linker_Linker_run(&(compiler_l),d);
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;struct _global_Result_string_Result_T m =tmpcompilerbM(_global_Ok_Result_E_Result_T(NULL,d));
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
_global_File_freeByValue(g,d);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
return m;
 }struct _global_String print_obj_toString_mir_Program(struct mir_Program print_t, struct _global_Context* d){;
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(d);;
#line 92 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string(_global_TypeFromStruct(mir_Program_get_type(NULL,d),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),d);
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;return stringBuilder_StringBuilder_toString(&(print_s),d);
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;}
void print_print_obj_mir_Program(struct mir_Program print_t, struct _global_Context* d){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct _global_Allocator* f = (d)->allocator;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
uint64_t g = _global_Allocator_get_occupied((d)->allocator,d);
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
_global_log_string(print_obj_toString_mir_Program(print_t,d),d);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
_global_Allocator_reset_to(f,g,d);
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
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
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
parserInit();;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
mirInit();;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
interpreterInit();;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
llvmInit();;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
linkerInit();;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//compiler.top"
;
};