void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* q);
LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef* _global_self, struct _global_Context* q);

static inline LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRef(LLVMValueRef**,struct _global_Context* q);

LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef*,struct _global_Context* q);
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_self, struct _global_Context* q);

static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef**,struct _global_Context* q);

struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef*,struct _global_Context* q);
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* q);
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* q);
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* q);
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* q);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* q);
LLVMBasicBlockRef _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_Context* q);

static inline LLVMBasicBlockRef _global_Maybe_unwrap_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef*,struct _global_Context* q);

LLVMBasicBlockRef _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef,struct _global_Context* q);
LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* q);
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* q);

#define llvm__llvmModuleCreateWithName(q,r) LLVMModuleCreateWithName(q)
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* s){;
;return llvm__llvmModuleCreateWithName(_global_String_to_c_stringByValue(llvm_name,s),s);
;}

#define llvm_llvmInt1Type(s) LLVMInt1Type()

#define llvm_llvmInt8Type(t) LLVMInt8Type()

#define llvm_llvmInt32Type(v) LLVMInt32Type()

#define llvm_llvmFloatType(w) LLVMFloatType()

#define llvm_llvmVoidType(x) LLVMVoidType()

#define llvm__llvmFunctionType(y,z,B,C,D) LLVMFunctionType(y,z,B,C)
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* F){;
;
;return llvm__llvmFunctionType(llvm_return_type,(llvm_args).data,(llvm_args).length,0,F);
;}

#define llvm__llvmAppendBasicBlock(F,G,H) LLVMAppendBasicBlock(F,G)
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* J){;
;
;return llvm__llvmAppendBasicBlock(llvm_sum,_global_String_to_c_stringByValue(llvm_name,J),J);
;}

#define llvm_llvmCreateBuilder(J) LLVMCreateBuilder()

#define llvm_llvmPositionBuilderAtEnd(K,L,M) LLVMPositionBuilderAtEnd(K,L)

#define llvm__llvmBuildAdd(N,P,Q,R,S) LLVMBuildAdd(N,P,Q,R)
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* T){;
;
;
;
;return llvm__llvmBuildAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,T),T);
;}

#define llvm__llvmBuildMul(T,V,W,X,Y) LLVMBuildMul(T,V,W,X)
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* Z){;
;
;
;
;return llvm__llvmBuildMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,Z),Z);
;}

#define llvm__llvmBuildDiv(Z,bb,bc,bd,bf) LLVMBuildSDiv(Z,bb,bc,bd)
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bg){;
;
;
;
;return llvm__llvmBuildDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bg),bg);
;}

#define llvm_llvmConstInt(bg,bh,bj,bk) LLVMConstInt(bg,bh,bj)

#define llvm_llvmConstReal(bl,bm,bn) LLVMConstReal(bl,bm)

#define llvm_llvmBuildRetVoid(bp,bq) LLVMBuildRetVoid(bp)

#define llvm__llvmAddFunction(br,bs,bt,bv) LLVMAddFunction(br,bs,bt)
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* bw){;
;
;
;return llvm__llvmAddFunction(llvm_mod,_global_String_to_c_stringByValue(llvm_name,bw),llvm_ret,bw);
;}

#define llvm_llvmBuildCondBr(bw,bx,by,bz,bB) LLVMBuildCondBr(bw,bx,by,bz)

#define llvm_llvmBuildBr(bC,bD,bF) LLVMBuildBr(bC,bD)

#define llvm_llvmVerifyModule(bG,bH,bJ,bK) LLVMVerifyModule(bG,bH,bJ)

#define llvm_llvmDisposeMessage(bL,bM) LLVMDisposeMessage(bL)

#define llvm_llvmAbortProcessAction LLVMAbortProcessAction

#define llvm__llvmBuildCall(bN,bP,bQ,bR,bS,bT) LLVMBuildCall(bN,bP,bQ,bR,bS)
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* bV){;
;
;
;
;return llvm__llvmBuildCall(llvm_builder,llvm_f,(llvm_args).data,(llvm_args).length,_global_String_to_c_stringByValue(llvm_name,bV),bV);
;}

#define llvm_llvmGetDefaultTargetTriple(bV) LLVMGetDefaultTargetTriple()

#define llvm_llvmGetTargetFromTriple(bW,bX,bY,bZ) LLVMGetTargetFromTriple(bW,bX,bY)

#define llvm__llvmTargetMachineEmitToFile(cb,db,fb,gb,hb,jb) LLVMTargetMachineEmitToFile(cb,db,fb,gb,hb)
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* kb){;
;
;
;
;
;return llvm__llvmTargetMachineEmitToFile(llvm_t,llvm_m,_global_String_to_c_stringByValue(llvm_file,kb),llvm_typ,llvm_err,kb);
;}

#define llvm_llvmObjectFile LLVMObjectFile

#define llvm_llvmInitializeAllTargets(kb) LLVMInitializeAllTargets()

#define llvm_llvmInitializeAllTargetInfos(lb) LLVMInitializeAllTargetInfos()

#define llvm_llvmInitializeAllTargetMCs(mb) LLVMInitializeAllTargetMCs()

#define llvm_llvmInitializeAllAsmParsers(nb) LLVMInitializeAllAsmParsers()

#define llvm_llvmInitializeAllAsmPrinters(pb) LLVMInitializeAllAsmPrinters()

#define llvm_llvmCreateTargetMachine(qb,rb,sb,tb,vb,wb,xb,yb) LLVMCreateTargetMachine(qb,rb,sb,tb,vb,wb,xb)

#define llvm_llvmCodeGenLevelNone LLVMCodeGenLevelNone

#define llvm_llvmRelocStatic LLVMRelocStatic

#define llvm_llvmCodeModelDefault LLVMCodeModelDefault
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* zb){;
struct _global_String llvm_s;llvm_s = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"tmp."),_global_uint_toString((llvm_t),zb),zb),_global_StringInit(0,""),zb);;
*(llvm_t)=*(llvm_t)+1;;
;return llvm_s;
;}
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* zb){;
;
;
;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,zb);;
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,zb);;
_global_Array_append_llvm_LLVMValueRef(llvm_stack,llvm_func(*(llvm_builder),llvm_a,llvm_b,llvm_next_tmp(llvm_tmp,zb),zb),zb);
;}
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef tmpllvmbc(struct _global_StaticArray_1_llvm_LLVMTypeRef* Bb) {
return _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(Bb->data, 1);};
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef tmpllvmbd(struct _global_Maybe_Maybe_T Lb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef Kb;Kb.tag = Lb.tag;Kb.cases = *(union _global_Maybe_llvm_LLVMBasicBlockRef_cases*) &(Lb.cases);return Kb;
}
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* zb){;
llvm_llvmInitializeAllTargets(zb);
llvm_llvmInitializeAllTargetInfos(zb);
llvm_llvmInitializeAllTargetMCs(zb);
llvm_llvmInitializeAllAsmParsers(zb);
llvm_llvmInitializeAllAsmPrinters(zb);
LLVMModuleRef llvm_mod;llvm_mod = llvm_llvmModuleCreateWithName(_global_StringInit(9,"my_module"),zb);;
LLVMBuilderRef llvm_builder;llvm_builder = llvm_llvmCreateBuilder(zb);;
struct _global_Array_llvm_LLVMValueRef llvm_stack;llvm_stack = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Array_llvm_LLVMValueRef llvm_global_vars;llvm_global_vars = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
LLVMTypeRef llvm_log_float_type;llvm_log_float_type = llvm_llvmFunctionType(llvm_llvmVoidType(zb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmFloatType(zb)),zb)),zb);;
LLVMValueRef llvm_log_float_func;llvm_log_float_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(9,"log_float"),llvm_log_float_type,zb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_global_vars),llvm_log_float_func,zb);
LLVMTypeRef llvm_log_int_type;llvm_log_int_type = llvm_llvmFunctionType(llvm_llvmVoidType(zb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmInt32Type(zb)),zb)),zb);;
LLVMValueRef llvm_log_int_func;llvm_log_int_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(7,"log_int"),llvm_log_int_type,zb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_global_vars),llvm_log_int_func,zb);
struct _global_StaticArray_StaticArray_S_mir_Function Cb =(llvm_program)->functions;
for (unsigned int Db = 0;Db < Cb.length; Db++) {
struct mir_Function llvm_mir_func;llvm_mir_func = *_global_StaticArray_op_get_StaticArray_S_mir_Function(&Cb, Db, zb);
;unsigned int llvm_i;llvm_i = Db;
LLVMTypeRef llvm_ret_type;llvm_ret_type = llvm_llvmFunctionType(llvm_llvmVoidType(zb),_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(NULL, 0),zb);;
LLVMValueRef llvm_llvm_func;llvm_llvm_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(4,"main"),llvm_ret_type,zb);;
unsigned int llvm_tmp;llvm_tmp = 0;;
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ llvm_blocks;llvm_blocks = _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_rmir_Block Fb =(llvm_mir_func).all_blocks;
for (unsigned int Gb = 0;Gb < Fb.length; Gb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&Fb, Gb, zb);
;unsigned int llvm_i;llvm_i = Gb;
unsigned int llvm_id;llvm_id = (llvm_mir_block)->id;;
struct _global_String llvm_name;llvm_name = (llvm_i==0 ? _global_StringInit(5,"entry"):(_global_uint_toStringByValue(llvm_id,zb)));;
LLVMBasicBlockRef llvm_block;llvm_block = llvm_llvmAppendBasicBlock(llvm_llvm_func,llvm_name,zb);;
if(llvm_id>=(llvm_blocks).length){;
struct _global_Range Hb =_global_RangeInit(0,(llvm_id-(llvm_blocks).length+1));
for (unsigned int Jb = Hb.start; Jb < Hb.end; Jb++) {
unsigned int llvm_c;llvm_c = Jb;
;_global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),tmpllvmbd(_global_None),zb);
}
;
;};
_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(8,"setting "),_global_uint_toStringByValue((llvm_id),zb),zb),_global_StringInit(0,""),zb),zb);
*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_id,zb))=_global_Some_llvm_LLVMBasicBlockRef(llvm_block,zb);;
}
;
struct _global_StaticArray_StaticArray_S_rmir_Block Mb =(llvm_mir_func).all_blocks;
for (unsigned int Nb = 0;Nb < Mb.length; Nb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&Mb, Nb, zb);
;unsigned int llvm_i;llvm_i = Nb;
LLVMBasicBlockRef llvm_block;llvm_block = _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)(llvm_mir_block)->id,zb)),zb);;
llvm_llvmPositionBuilderAtEnd(llvm_builder,llvm_block,zb);
struct _global_Array_mir_OpCode Pb =*((llvm_mir_block)->code);
for (unsigned int Qb = 0;Qb < Pb.length; Qb++) {
struct mir_OpCode llvm_inst;llvm_inst = *_global_Array_op_get_mir_OpCode(&Pb, Qb, zb);
;unsigned int llvm_i;llvm_i = Qb;
struct mir_OpCode Rb =llvm_inst;if(Rb.tag==0){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,zb);
;}
else if(Rb.tag==3){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,zb);
;}
else if(Rb.tag==1){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,zb);
;}
else if(Rb.tag==4){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,zb);
;}
else if(Rb.tag==2){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,zb);
;}
else if(Rb.tag==5){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,zb);
;}
else if(Rb.tag==8){_Bool llvm_b = Rb.cases.Store_bool.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt1Type(zb),(int64_t)llvm_b,0,zb),zb);
;}
else if(Rb.tag==6){int32_t llvm_integer = Rb.cases.Store_i32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt32Type(zb),(int64_t)llvm_integer,1,zb),zb);
;}
else if(Rb.tag==7){float llvm_f = Rb.cases.Store_f32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstReal(llvm_llvmFloatType(zb),(double)llvm_f,zb),zb);
;}
else if(Rb.tag==13){
llvm_llvmBuildRetVoid(llvm_builder,zb);
;}
else if(Rb.tag==10){struct mir_ReadInfo* llvm_info = Rb.cases.Read.field0;

_global_assert((llvm_info)->is_global,_global_StringInit(24,"Can't handle locals yet!"),zb);
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_global_vars),(unsigned int)(llvm_info)->id,zb)),zb);
;}
else if(Rb.tag==14){unsigned int llvm_a = Rb.cases.CondJump.field0;
unsigned int llvm_b = Rb.cases.CondJump.field1;

LLVMValueRef llvm_cond;llvm_cond = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),zb);;
LLVMBasicBlockRef llvm_block_then;llvm_block_then = _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,zb)),zb);;
LLVMBasicBlockRef llvm_block_else;llvm_block_else = _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_b,zb)),zb);;
llvm_llvmBuildCondBr(llvm_builder,llvm_cond,llvm_block_then,llvm_block_else,zb);
;}
else if(Rb.tag==15){unsigned int llvm_a = Rb.cases.Jump.field0;

llvm_llvmBuildBr(llvm_builder,_global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,zb)),zb),zb);
;}
else if(Rb.tag==12){struct types_FuncPtr* llvm_fptr_type = Rb.cases.FuncCall.field0;

unsigned int llvm_arg_count;llvm_arg_count = ((llvm_fptr_type)->args).length;;
LLVMValueRef llvm_func;llvm_func = *(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count-1,zb));;
struct _global_Array_llvm_LLVMValueRef llvm_args;llvm_args = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Range Sb =_global_RangeInit(0,llvm_arg_count);
for (unsigned int Tb = Sb.start; Tb < Sb.end; Tb++) {
unsigned int llvm_c;llvm_c = Tb;
;_global_Array_append_llvm_LLVMValueRef(&(llvm_args),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count+llvm_c,zb)),zb);
}
;
_global_Array_shorten_llvm_LLVMValueRef(&(llvm_stack),1+llvm_arg_count,zb);
if(types_is_kind_types_Void((llvm_fptr_type)->return_type,zb)){;
llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),_global_StringInit(0,""),zb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),llvm_next_tmp(&(llvm_tmp),zb),zb),zb);
;};
;}
else if(1){
_global_panic(print_obj_toString_mir_OpCode(llvm_inst,zb),zb);
;}
;
}
;
}
;
}
;
char* llvm_error;llvm_error = NULL;;
_global_log_string(_global_StringInit(16,"verifying module"),zb);
if(llvm_llvmVerifyModule(llvm_mod,llvm_llvmAbortProcessAction,&(llvm_error),zb)){;
_global_log_string(_global_StringInit(23,"llvm verification error"),zb);
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,zb),zb),zb);
_global_panic(_global_StringInit(10,"LLVM ERROR"),zb);
;};
char* llvm_target_triple;llvm_target_triple = llvm_llvmGetDefaultTargetTriple(zb);;
LLVMTargetRef llvm_target;;
if(llvm_llvmGetTargetFromTriple(llvm_target_triple,&(llvm_target),&(llvm_error),zb)){;
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,zb),zb),zb);
_global_log_string(_global_char_buffer_toString(llvm_target_triple,zb),zb);
_global_panic(_global_StringInit(33,"LLVM GET TARGET FROM TRIPLE ERROR"),zb);
;};
struct _global_String llvm_cpu;llvm_cpu = _global_StringInit(7,"generic");;
struct _global_String llvm_features;llvm_features = _global_StringInit(0,"");;
LLVMTargetMachineRef llvm_target_machine;llvm_target_machine = llvm_llvmCreateTargetMachine(llvm_target,llvm_target_triple,_global_String_to_c_stringByValue(llvm_cpu,zb),_global_String_to_c_stringByValue(llvm_features,zb),llvm_llvmCodeGenLevelNone,llvm_llvmRelocStatic,llvm_llvmCodeModelDefault,zb);;
if(llvm_llvmTargetMachineEmitToFile(llvm_target_machine,llvm_mod,_global_StringInit(11,"test/main.o"),llvm_llvmObjectFile,&(llvm_error),zb)){;
_global_log_string(_global_StringInit(5,"error"),zb);
_global_log_string(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,zb),zb),zb);
_global_panic(_global_StringInit(9,"LLVM EMIT"),zb);
;};
_global_log_string(_global_StringInit(6,"passed"),zb);
;}
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* zb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMValueRef),zb);
;}
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* zb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),zb);
;}

static inline LLVMValueRef* tmpllvmbf(struct _global_Array_llvm_LLVMValueRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* zb) {
LLVMValueRef* Bb =(*_global_self)->data;
if(Bb != NULL){LLVMValueRef* _global_data = Bb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),zb);
LLVMValueRef* _global_newData;_global_newData = (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),zb));;
_global_memcpy_llvm_LLVMValueRef(_global_newData,_global_data,(*_global_self)->length,zb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,zb);
return _global_newData;}else if(Bb == NULL){return (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),zb));}
}
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* zb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(zb)->allocator,zb);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpllvmbf(&_global_self,&_global_newSize,&_global_allocator, zb);;
;}
LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(LLVMValueRef* _global_self, struct _global_Context* zb){;
LLVMValueRef* _global_x;;
LLVMValueRef* Bb =_global_self;if(Bb != NULL){_global_x = Bb;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),zb);
;}
;
;return _global_x;
;}
static inline LLVMValueRef* _global_Maybe_unwrap_rllvm_LLVMValueRef(LLVMValueRef** Cb,struct _global_Context* zb){
return _global_Maybe_unwrap_rllvm_LLVMValueRefByValue(*Cb,zb);
}
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* tmpllvmbg(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* zb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef* Bb =(*_global_self)->data;
if(Bb != NULL){struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_data = Bb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),zb);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),zb));;
_global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(_global_newData,_global_data,(*_global_self)->length,zb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,zb);
return _global_newData;}else if(Bb == NULL){return (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),zb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* zb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(zb)->allocator,zb);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpllvmbg(&_global_self,&_global_newSize,&_global_allocator, zb);;
;}
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_self, struct _global_Context* zb){;
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_x;;
struct _global_Maybe_llvm_LLVMBasicBlockRef* Bb =_global_self;if(Bb != NULL){_global_x = Bb;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),zb);
;}
;
;return _global_x;
;}
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef** Cb,struct _global_Context* zb){
return _global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue(*Cb,zb);
}LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* zb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),zb);
;};
LLVMValueRef _global_tmp;_global_tmp = *(_global_Array_op_get_llvm_LLVMValueRef(_global_self,(unsigned int)(_global_self)->length-1,zb));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* zb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMValueRef(_global_self,1,zb);
;}
else{_global_Array_reserve_llvm_LLVMValueRef(_global_self,(_global_self)->capacity*2,zb);
;};
;};
*(((_global_Maybe_unwrap_rllvm_LLVMValueRefByValue((_global_self)->data,zb) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* zb){;
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_pointer;_global_pointer = (struct _global_StaticArray_1_llvm_LLVMTypeRef*)(_global_Allocator_alloc((zb)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_llvm_LLVMTypeRef),zb));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* zb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,1,zb);
;}
else{_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,(_global_self)->capacity*2,zb);
;};
;};
*(((_global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue((_global_self)->data,zb) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* zb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),zb);
;return (_global_Maybe_unwrap_rMaybe_llvm_LLVMBasicBlockRef_ByValue((_global_self)->data,zb) + (int64_t)_global_index);
;}
LLVMBasicBlockRef _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_Context* zb){;
LLVMBasicBlockRef _global_x;;
struct _global_Maybe_llvm_LLVMBasicBlockRef Bb =_global_self;if(Bb.tag==0){_global_x = Bb.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),zb);
;}
;
;return _global_x;
;}
static inline LLVMBasicBlockRef _global_Maybe_unwrap_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef* Cb,struct _global_Context* zb){
return _global_Maybe_unwrap_llvm_LLVMBasicBlockRefByValue(*Cb,zb);
}LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* zb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),zb);
;return (_global_Maybe_unwrap_rllvm_LLVMValueRefByValue((_global_self)->data,zb) + (int64_t)_global_index);
;}
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* zb){;
;
(_global_self)->length=(_global_self)->length-_global_num;;
if((_global_self)->length<0){;
_global_panic(_global_StringInit(21,"shorten out of bounds"),zb);
;};
;}
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* zb){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(zb);;
print_type_to_string(_global_TypeFromStruct(mir_OpCode_get_type(NULL,zb),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),zb);
;return stringBuilder_StringBuilder_toString(&(print_s),zb);
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
;llvm_LLVMTargetMachineRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetMachineRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetMachineRefType_fields
,0
);
llvm_LLVMTargetMachineRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetMachineRefType.name = _global_StringInit(20, "LLVMTargetMachineRef");llvm_LLVMCodeGenFileTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
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
_global_Maybe_rllvm_LLVMValueRefType.nullable = 1;struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(4, "Some");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
_global_TypeFromStruct(
llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; k[0].args.data[0].offset = offsetof(struct _global_Maybe_llvm_LLVMBasicBlockRef_Some, field0);
k[1].name = _global_StringInit(4, "None");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.offset = offsetof(struct _global_Maybe_llvm_LLVMBasicBlockRef, tag);
_global_Maybe_llvm_LLVMBasicBlockRefType.tag_field.field_type = 
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

_global_Maybe_llvm_LLVMBasicBlockRefType.size = sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef);

_global_Maybe_llvm_LLVMBasicBlockRefType.package = _global_StringInit(7, "_global");
_global_Maybe_llvm_LLVMBasicBlockRefType.name = _global_StringInit(28, "Maybe_llvm_LLVMBasicBlockRef");
_global_Maybe_llvm_LLVMBasicBlockRefType.cases.data = k;
_global_Maybe_llvm_LLVMBasicBlockRefType.cases.length = 2;
_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type.nullable = 1;_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.size->tag = 1;
_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMBasicBlockRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;_global_StaticArray_1_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
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
;llvm_LLVMTargetRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetRefType_fields
,0
);
llvm_LLVMTargetRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetRefType.name = _global_StringInit(13, "LLVMTargetRef"); }
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