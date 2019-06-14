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