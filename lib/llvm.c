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