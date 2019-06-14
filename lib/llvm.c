void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_llvm_LLVMTypeRef(LLVMTypeRef* _global_target, LLVMTypeRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_memcpy_Maybe_llvm_LLVMValueRef_(struct _global_Maybe_llvm_LLVMValueRef* _global_target, struct _global_Maybe_llvm_LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_reserve_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_newSize, struct _global_Context* G);
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* G);
void _global_Array_append_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, LLVMTypeRef _global_value, struct _global_Context* G);
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* G);
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* G);
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* G);
void _global_Array_append_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, struct _global_Maybe_llvm_LLVMValueRef _global_value, struct _global_Context* G);
void insertByID_insert_at_index_llvm_LLVMValueRef(struct _global_Array_Maybe_llvm_LLVMValueRef_* insertByID_arr, unsigned int insertByID_id, LLVMValueRef insertByID_data, struct _global_Context* G);
void insertByID_insert_at_index_llvm_LLVMBasicBlockRef(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* insertByID_arr, unsigned int insertByID_id, LLVMBasicBlockRef insertByID_data, struct _global_Context* G);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* G);
LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_String _global_mesg, struct _global_Context* G);

static inline LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef*,struct _global_String,struct _global_Context* G);

LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef,struct _global_String,struct _global_Context* G);
struct _global_Maybe_llvm_LLVMValueRef* _global_Array_op_get_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_index, struct _global_Context* G);
LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef _global_self, struct _global_Context* G);

static inline LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRef(struct _global_Maybe_llvm_LLVMValueRef*,struct _global_Context* G);

LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef,struct _global_Context* G);
LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* G);
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* G);
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* G);

#define llvm__llvmModuleCreateWithName(G,H) LLVMModuleCreateWithName(G)
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* J){;
;return llvm__llvmModuleCreateWithName(_global_String_to_c_stringByValue(llvm_name,J),J);
;}

#define llvm_llvmInt1Type(J) LLVMInt1Type()

#define llvm_llvmInt8Type(K) LLVMInt8Type()

#define llvm_llvmInt32Type(L) LLVMInt32Type()

#define llvm_llvmFloatType(M) LLVMFloatType()

#define llvm_llvmVoidType(N) LLVMVoidType()

#define llvm__llvmFunctionType(P,Q,R,S,T) LLVMFunctionType(P,Q,R,S)
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* V){;
;
;return llvm__llvmFunctionType(llvm_return_type,(llvm_args).data,(llvm_args).length,0,V);
;}

#define llvm__llvmAppendBasicBlock(V,W,X) LLVMAppendBasicBlock(V,W)
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* Y){;
;
;return llvm__llvmAppendBasicBlock(llvm_sum,_global_String_to_c_stringByValue(llvm_name,Y),Y);
;}

#define llvm_llvmCreateBuilder(Y) LLVMCreateBuilder()

#define llvm_llvmPositionBuilderAtEnd(Z,bb,bc) LLVMPositionBuilderAtEnd(Z,bb)

#define llvm__llvmBuildAdd(bd,bf,bg,bh,bj) LLVMBuildAdd(bd,bf,bg,bh)
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bk){;
;
;
;
;return llvm__llvmBuildAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bk),bk);
;}

#define llvm__llvmBuildSub(bk,bl,bm,bn,bp) LLVMBuildSub(bk,bl,bm,bn)
LLVMValueRef llvm_llvmBuildSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bq){;
;
;
;
;return llvm__llvmBuildSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bq),bq);
;}

#define llvm__llvmBuildMul(bq,br,bs,bt,bv) LLVMBuildMul(bq,br,bs,bt)
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bw){;
;
;
;
;return llvm__llvmBuildMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bw),bw);
;}

#define llvm__llvmBuildDiv(bw,bx,by,bz,bB) LLVMBuildSDiv(bw,bx,by,bz)
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bC){;
;
;
;
;return llvm__llvmBuildDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bC),bC);
;}

#define llvm__llvmBuildFAdd(bC,bD,bF,bG,bH) LLVMBuildFAdd(bC,bD,bF,bG)
LLVMValueRef llvm_llvmBuildFAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bJ){;
;
;
;
;return llvm__llvmBuildFAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bJ),bJ);
;}

#define llvm_llvmGetParam(bJ,bK,bL) LLVMGetParam(bJ,bK)

#define llvm__llvmBuildFSub(bM,bN,bP,bQ,bR) LLVMBuildFSub(bM,bN,bP,bQ)
LLVMValueRef llvm_llvmBuildFSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bS){;
;
;
;
;return llvm__llvmBuildFSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bS),bS);
;}

#define llvm__llvmBuildFMul(bS,bT,bV,bW,bX) LLVMBuildFMul(bS,bT,bV,bW)
LLVMValueRef llvm_llvmBuildFMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bY){;
;
;
;
;return llvm__llvmBuildFMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bY),bY);
;}

#define llvm__llvmBuildFDiv(bY,bZ,cb,db,fb) LLVMBuildFDiv(bY,bZ,cb,db)
LLVMValueRef llvm_llvmBuildFDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* gb){;
;
;
;
;return llvm__llvmBuildFDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,gb),gb);
;}

#define llvm_llvmConstInt(gb,hb,jb,kb) LLVMConstInt(gb,hb,jb)

#define llvm_llvmConstReal(lb,mb,nb) LLVMConstReal(lb,mb)

#define llvm_llvmBuildRetVoid(pb,qb) LLVMBuildRetVoid(pb)

#define llvm_llvmBuildRet(rb,sb,tb) LLVMBuildRet(rb,sb)

#define llvm_llvmBuildBr(vb,wb,xb) LLVMBuildBr(vb,wb)

#define llvm_llvmBuildCondBr(yb,zb,Bb,Cb,Db) LLVMBuildCondBr(yb,zb,Bb,Cb)

#define llvm__llvmAddFunction(Fb,Gb,Hb,Jb) LLVMAddFunction(Fb,Gb,Hb)
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* Kb){;
;
;
;return llvm__llvmAddFunction(llvm_mod,_global_String_to_c_stringByValue(llvm_name,Kb),llvm_ret,Kb);
;}

#define llvm_llvmVerifyModule(Kb,Lb,Mb,Nb) LLVMVerifyModule(Kb,Lb,Mb)

#define llvm_llvmDisposeMessage(Pb,Qb) LLVMDisposeMessage(Pb)

#define llvm_llvmAbortProcessAction LLVMAbortProcessAction

#define llvm__llvmAddGlobal(Rb,Sb,Tb,Vb) LLVMAddGlobal(Rb,Sb,Tb)
LLVMValueRef llvm_llvmAddGlobal(LLVMModuleRef llvm_mod, LLVMTypeRef llvm_typ, struct _global_String llvm_s, struct _global_Context* Wb){;
;
;
;return llvm__llvmAddGlobal(llvm_mod,llvm_typ,_global_String_to_c_stringByValue(llvm_s,Wb),Wb);
;}

#define llvm_llvmBuildStore(Wb,Xb,Yb,Zb) LLVMBuildStore(Wb,Xb,Yb)

#define llvm__llvmBuildLoad(bbb,bbc,bbd,bbf) LLVMBuildLoad(bbb,bbc,bbd)
LLVMValueRef llvm_llvmBuildLoad(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_ptr, struct _global_String llvm_name, struct _global_Context* bbg){;
;
;
;return llvm__llvmBuildLoad(llvm_builder,llvm_ptr,_global_String_to_c_stringByValue(llvm_name,bbg),bbg);
;}

#define llvm_llvmSetInitializer(bbg,bbh,bbj) LLVMSetInitializer(bbg,bbh)

#define llvm__llvmBuildICmp(bbk,bbl,bbm,bbn,bbp,bbq) LLVMBuildICmp(bbk,bbl,bbm,bbn,bbp)
LLVMValueRef llvm_llvmBuildICmp(LLVMBuilderRef llvm_a, LLVMIntPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bbr){;
;
;
;
;
;return llvm__llvmBuildICmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bbr),bbr);
;}

#define llvm__llvmBuildFCmp(bbr,bbs,bbt,bbv,bbw,bbx) LLVMBuildFCmp(bbr,bbs,bbt,bbv,bbw)
LLVMValueRef llvm_llvmBuildFCmp(LLVMBuilderRef llvm_a, LLVMRealPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bby){;
;
;
;
;
;return llvm__llvmBuildFCmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bby),bby);
;}

#define llvm_llvmIntSLT LLVMIntSLT

#define llvm_llvmRealOLT LLVMRealOLT

#define llvm__llvmBuildAlloca(bby,bbz,bbB,bbC) LLVMBuildAlloca(bby,bbz,bbB)
LLVMValueRef llvm_llvmBuildAlloca(LLVMBuilderRef llvm_builder, LLVMTypeRef llvm_typ, struct _global_String llvm_e, struct _global_Context* bbD){;
;
;
;return llvm__llvmBuildAlloca(llvm_builder,llvm_typ,_global_String_to_c_stringByValue(llvm_e,bbD),bbD);
;}

#define llvm__llvmBuildCall(bbD,bbF,bbG,bbH,bbJ,bbK) LLVMBuildCall(bbD,bbF,bbG,bbH,bbJ)
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* bbL){;
;
;
;
;return llvm__llvmBuildCall(llvm_builder,llvm_f,(llvm_args).data,(llvm_args).length,_global_String_to_c_stringByValue(llvm_name,bbL),bbL);
;}

#define llvm_llvmGetDefaultTargetTriple(bbL) LLVMGetDefaultTargetTriple()

#define llvm_llvmGetTargetFromTriple(bbM,bbN,bbP,bbQ) LLVMGetTargetFromTriple(bbM,bbN,bbP)

#define llvm__llvmTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW,bbX) LLVMTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW)
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* bbY){;
;
;
;
;
;return llvm__llvmTargetMachineEmitToFile(llvm_t,llvm_m,_global_String_to_c_stringByValue(llvm_file,bbY),llvm_typ,llvm_err,bbY);
;}

#define llvm__llvmCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb,bjb) LLVMCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb)
LLVMTargetMachineRef llvm_llvmCreateTargetMachine(LLVMTargetRef llvm_t, char* llvm_triple, struct _global_String llvm_cpu, struct _global_String llvm_features, LLVMCodeGenOptLevel llvm_opt, LLVMRelocMode llvm_reloc, LLVMCodeModel llvm_m, struct _global_Context* bkb){;
;
;
;
;
;
;
;return llvm__llvmCreateTargetMachine(llvm_t,llvm_triple,_global_String_to_c_stringByValue(llvm_cpu,bkb),_global_String_to_c_stringByValue(llvm_features,bkb),llvm_opt,llvm_reloc,llvm_m,bkb);
;}

#define llvm_llvmObjectFile LLVMObjectFile

#define llvm_llvmInitializeNativeTarget(bkb) LLVMInitializeNativeTarget()

#define llvm_llvmInitializeNativeAsmParser(blb) LLVMInitializeNativeAsmParser()

#define llvm_llvmInitializeNativeAsmPrinter(bmb) LLVMInitializeNativeAsmPrinter()

#define llvm_llvmCodeGenLevelNone LLVMCodeGenLevelNone

#define llvm_llvmRelocDefault LLVMRelocDefault

#define llvm_llvmRelocStatic LLVMRelocStatic

#define llvm_llvmCodeModelDefault LLVMCodeModelDefault
LLVMTypeRef llvm_llvm_type_for(struct types_CompilerType llvm_typ, struct _global_Context* bnb){;
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmInt32Type(bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmFloatType(bnb);}else if(bpb.tag==2){return llvm_llvmInt1Type(bnb);}else if(bpb.tag==6){struct types_FuncPtr* llvm_x = bpb.cases.Func.field0;
struct _global_Array_llvm_LLVMTypeRef llvm_args;llvm_args = _global_Array_llvm_LLVMTypeRefInit(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_types_CompilerType bqb =(llvm_x)->args;
for (unsigned int brb = 0;brb < bqb.length; brb++) {
struct types_CompilerType llvm_arg;llvm_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&bqb, brb, bnb);
;unsigned int llvm_i;llvm_i = brb;
_global_Array_append_llvm_LLVMTypeRef(&(llvm_args),llvm_llvm_type_for(llvm_arg,bnb),bnb);
}
;
return llvm_llvmFunctionType((llvm_llvm_type_for((llvm_x)->return_type,bnb)),_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(llvm_args.data, llvm_args.length),bnb);}else if(bpb.tag==0){return llvm_llvmVoidType(bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
return (LLVMTypeRef)0;};
;}
LLVMValueRef llvm_llvm_initial_value_for(struct types_CompilerType llvm_typ, struct _global_Context* bnb){;
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==2){return llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)0,0,bnb);}else if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)0,1,bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)0,bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
return (LLVMValueRef)0;};
;}
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* bnb){;
struct _global_String llvm_s;llvm_s = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"tmp."),_global_uint_toString((llvm_t),bnb),bnb),_global_StringInit(0,""),bnb);;
*(llvm_t) = *(llvm_t)+1;;
;return llvm_s;
;}
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* bnb){;
;
;
;
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
_global_Array_append_llvm_LLVMValueRef(llvm_stack,llvm_func(*(llvm_builder),llvm_a,llvm_b,llvm_next_tmp(llvm_tmp,bnb),bnb),bnb);
;}
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef tmpllvmbc(struct _global_StaticArray_1_llvm_LLVMTypeRef* brb) {
return _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(brb->data, 1);};
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* bnb){;
struct _global_Allocator* bpb = (bnb)->allocator;
uint64_t bqb = _global_Allocator_get_occupied((bnb)->allocator,bnb);
;
llvm_llvmInitializeNativeTarget(bnb);
llvm_llvmInitializeNativeAsmParser(bnb);
llvm_llvmInitializeNativeAsmPrinter(bnb);
LLVMModuleRef llvm_mod;llvm_mod = llvm_llvmModuleCreateWithName(_global_StringInit(9,"my_module"),bnb);;
LLVMBuilderRef llvm_builder;llvm_builder = llvm_llvmCreateBuilder(bnb);;
struct _global_Array_llvm_LLVMValueRef llvm_stack;llvm_stack = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_global_vars;llvm_global_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
LLVMTypeRef llvm_log_int_type;llvm_log_int_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmInt32Type(bnb)),bnb)),bnb);;
LLVMValueRef llvm_log_int_func;llvm_log_int_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(9,"c_log_int"),llvm_log_int_type,bnb);;
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_int_func,bnb),bnb);
LLVMTypeRef llvm_log_float_type;llvm_log_float_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbc(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmFloatType(bnb)),bnb)),bnb);;
LLVMValueRef llvm_log_float_func;llvm_log_float_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(11,"c_log_float"),llvm_log_float_type,bnb);;
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_float_func,bnb),bnb);
struct _global_StaticArray_StaticArray_S_mir_Function bsb =(llvm_program)->functions;
for (unsigned int btb = 0;btb < bsb.length; btb++) {
struct mir_Function llvm_mir_func;llvm_mir_func = *_global_StaticArray_op_get_StaticArray_S_mir_Function(&bsb, btb, bnb);
;unsigned int llvm_i;llvm_i = btb;
LLVMTypeRef llvm_ret_type;llvm_ret_type = llvm_llvm_type_for(types_Func((llvm_mir_func)._type,bnb),bnb);;
LLVMValueRef llvm_llvm_func;llvm_llvm_func = llvm_llvmAddFunction(llvm_mod,(llvm_mir_func).name,llvm_ret_type,bnb);;
unsigned int llvm_tmp;llvm_tmp = 0;;
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ llvm_blocks;llvm_blocks = _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(0, 0, NULL, NULL);;
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_local_vars;llvm_local_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_mir_func).id,llvm_llvm_func,bnb);
struct _global_StaticArray_StaticArray_S_rmir_Block bvb =(llvm_mir_func).all_blocks;
for (unsigned int bwb = 0;bwb < bvb.length; bwb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bvb, bwb, bnb);
;struct _global_String llvm_name;llvm_name = (llvm_i==0 ? _global_StringInit(5,"entry"):(_global_uint_toStringByValue((llvm_mir_block)->id,bnb)));;
LLVMBasicBlockRef llvm_block;llvm_block = llvm_llvmAppendBasicBlock(llvm_llvm_func,llvm_name,bnb);;
insertByID_insert_at_index_llvm_LLVMBasicBlockRef(&(llvm_blocks),(llvm_mir_block)->id,llvm_block,bnb);
}
;
struct _global_StaticArray_StaticArray_S_rmir_Block bxb =(llvm_mir_func).all_blocks;
for (unsigned int byb = 0;byb < bxb.length; byb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bxb, byb, bnb);
;LLVMBasicBlockRef llvm_block;llvm_block = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)(llvm_mir_block)->id,bnb)),_global_StringInit(24,"Could not get llvm block"),bnb);;
llvm_llvmPositionBuilderAtEnd(llvm_builder,llvm_block,bnb);
struct _global_Array_mir_OpCode bzb =*((llvm_mir_block)->code);
for (unsigned int bBb = 0;bBb < bzb.length; bBb++) {
struct mir_OpCode llvm_inst;llvm_inst = *_global_Array_op_get_mir_OpCode(&bzb, bBb, bnb);
;struct mir_OpCode bCb =llvm_inst;if(bCb.tag==0){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,bnb);
;}
else if(bCb.tag==5){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFAdd,bnb);
;}
else if(bCb.tag==1){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildSub,bnb);
;}
else if(bCb.tag==6){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFSub,bnb);
;}
else if(bCb.tag==2){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,bnb);
;}
else if(bCb.tag==7){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFMul,bnb);
;}
else if(bCb.tag==3){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFDiv,bnb);
;}
else if(bCb.tag==8){
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,bnb);
;}
else if(bCb.tag==4){
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildICmp(llvm_builder,llvm_llvmIntSLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;}
else if(bCb.tag==9){
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildFCmp(llvm_builder,llvm_llvmRealOLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;}
else if(bCb.tag==12){_Bool llvm_b = bCb.cases.Store_bool.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)llvm_b,0,bnb),bnb);
;}
else if(bCb.tag==10){int32_t llvm_integer = bCb.cases.Store_i32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)llvm_integer,1,bnb),bnb);
;}
else if(bCb.tag==11){float llvm_f = bCb.cases.Store_f32.field0;

_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)llvm_f,bnb),bnb);
;}
else if(bCb.tag==18){struct types_CompilerType llvm_typ = bCb.cases.FuncReturn.field0;

if(types_CompilerType_is_typeByValue(llvm_typ,types_Void,bnb)){;
llvm_llvmBuildRetVoid(llvm_builder,bnb);
;}
else{llvm_llvmBuildRet(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),bnb);
;};
;}
else if(bCb.tag==20){unsigned int llvm_a = bCb.cases.Jump.field0;

llvm_llvmBuildBr(llvm_builder,_global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb),bnb);
;}
else if(bCb.tag==19){unsigned int llvm_a = bCb.cases.CondJump.field0;
unsigned int llvm_b = bCb.cases.CondJump.field1;

LLVMValueRef llvm_cond;llvm_cond = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
LLVMBasicBlockRef llvm_block_a;llvm_block_a = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
LLVMBasicBlockRef llvm_block_b;llvm_block_b = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_b,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
llvm_llvmBuildCondBr(llvm_builder,llvm_cond,llvm_block_a,llvm_block_b,bnb);
;}
else if(bCb.tag==14){struct mir_ReadInfo* llvm_info = bCb.cases.Read.field0;

if((llvm_info)->is_global){;
LLVMValueRef llvm_v;llvm_v = _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb);;
if(types_CompilerType_is_typeByValue((llvm_info)->_type,types_func_type,bnb)){;
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_v,bnb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,llvm_v,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else if(bCb.tag==13){struct mir_ReadInfo* llvm_info = bCb.cases.Create.field0;

_global_assert((llvm_info)->is_global,_global_StringInit(30,"Can't handle local create yet!"),bnb);
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmAddGlobal(llvm_mod,(llvm_llvm_type_for((llvm_info)->_type,bnb)),(llvm_info)->name,bnb);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_info)->id,llvm_llvm_var,bnb);
llvm_llvmSetInitializer(llvm_llvm_var,llvm_llvm_initial_value_for((llvm_info)->_type,bnb),bnb);
;}
else if(bCb.tag==16){unsigned int llvm_id = bCb.cases.FuncArg.field0;
struct mir_ReadInfo* llvm_info = bCb.cases.FuncArg.field1;

LLVMValueRef llvm_arg;llvm_arg = llvm_llvmGetParam(llvm_llvm_func,llvm_id,bnb);;
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmBuildAlloca(llvm_builder,(llvm_llvm_type_for((llvm_info)->_type,bnb)),llvm_next_tmp(&(llvm_tmp),bnb),bnb);;
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_local_vars),(llvm_info)->id,llvm_llvm_var,bnb);
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_arg,bnb);
;}
else if(bCb.tag==15){struct mir_ReadInfo* llvm_info = bCb.cases.Assign.field0;

LLVMValueRef llvm_v;llvm_v = ((llvm_info)->is_global ? _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb):(_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb)));;
llvm_llvmBuildStore(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),llvm_v,bnb);
;}
else if(bCb.tag==17){struct types_FuncPtr* llvm_fptr_type = bCb.cases.FuncCall.field0;

unsigned int llvm_arg_count;llvm_arg_count = ((llvm_fptr_type)->args).length;;
LLVMValueRef llvm_func;llvm_func = *(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count-1,bnb));;
struct _global_Array_llvm_LLVMValueRef llvm_args;llvm_args = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
struct _global_Range bDb =_global_RangeInit(0,llvm_arg_count);
for (unsigned int bFb = bDb.start; bFb < bDb.end; bFb++) {
unsigned int llvm_c;llvm_c = bFb;
;_global_Array_append_llvm_LLVMValueRef(&(llvm_args),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count+llvm_c,bnb)),bnb);
}
;
_global_Array_shorten_llvm_LLVMValueRef(&(llvm_stack),llvm_arg_count+1,bnb);
if(types_CompilerType_is_typeByValue((llvm_fptr_type)->return_type,types_Void,bnb)){;
llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),_global_StringInit(0,""),bnb);
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
;};
;}
else if(1){
_global_panic(print_obj_toString_mir_OpCode(llvm_inst,bnb),bnb);
;}
;
}
;
}
;
}
;
char* llvm_error;llvm_error = NULL;;
if(llvm_llvmVerifyModule(llvm_mod,llvm_llvmAbortProcessAction,&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"LLVM ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
llvm_llvmDisposeMessage(llvm_error,bnb);
char* llvm_target_triple;llvm_target_triple = llvm_llvmGetDefaultTargetTriple(bnb);;
LLVMTargetRef llvm_target;;
if(llvm_llvmGetTargetFromTriple(llvm_target_triple,&(llvm_target),&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(35,"LLVM GET TARGET FROM TRIPLE ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
struct _global_String llvm_cpu;llvm_cpu = _global_StringInit(7,"generic");;
struct _global_String llvm_features;llvm_features = _global_StringInit(0,"");;
LLVMTargetMachineRef llvm_target_machine;llvm_target_machine = llvm_llvmCreateTargetMachine(llvm_target,llvm_target_triple,llvm_cpu,llvm_features,llvm_llvmCodeGenLevelNone,llvm_llvmRelocDefault,llvm_llvmCodeModelDefault,bnb);;
if(llvm_llvmTargetMachineEmitToFile(llvm_target_machine,llvm_mod,_global_StringInit(11,"test/main.o"),llvm_llvmObjectFile,&(llvm_error),bnb)){;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(11,"LLVM EMIT: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
;};
_global_Allocator_reset_to(bpb,bqb,bnb);
;}
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb);
;}
void _global_memcpy_llvm_LLVMTypeRef(LLVMTypeRef* _global_target, LLVMTypeRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMTypeRef),bnb);
;}
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMValueRef),bnb);
;}
void _global_memcpy_Maybe_llvm_LLVMValueRef_(struct _global_Maybe_llvm_LLVMValueRef* _global_target, struct _global_Maybe_llvm_LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb);
;}

static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* tmpllvmbd(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));;
_global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbd(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline LLVMTypeRef* tmpllvmbf(struct _global_Array_llvm_LLVMTypeRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMTypeRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMTypeRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
LLVMTypeRef* _global_newData;_global_newData = (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));;
_global_memcpy_llvm_LLVMTypeRef(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbf(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline LLVMValueRef* tmpllvmbg(struct _global_Array_llvm_LLVMValueRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
LLVMValueRef* _global_newData;_global_newData = (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));;
_global_memcpy_llvm_LLVMValueRef(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbg(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}

static inline struct _global_Maybe_llvm_LLVMValueRef* tmpllvmbh(struct _global_Array_Maybe_llvm_LLVMValueRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
struct _global_Maybe_llvm_LLVMValueRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));;
_global_memcpy_Maybe_llvm_LLVMValueRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpllvmbh(&_global_self,&_global_newSize,&_global_allocator, bnb);;
;}
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,1,bnb);
;}
else{_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, LLVMTypeRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMTypeRef(_global_self,1,bnb);
;}
else{_global_Array_reserve_llvm_LLVMTypeRef(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((LLVMTypeRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* bnb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bnb);
;};
LLVMValueRef _global_tmp;_global_tmp = *(_global_Array_op_get_llvm_LLVMValueRef(_global_self,(unsigned int)(_global_self)->length-1,bnb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_llvm_LLVMValueRef(_global_self,1,bnb);
;}
else{_global_Array_reserve_llvm_LLVMValueRef(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* bnb){;
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_pointer;_global_pointer = (struct _global_StaticArray_1_llvm_LLVMTypeRef*)(_global_Allocator_alloc((bnb)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_llvm_LLVMTypeRef),bnb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_Array_append_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, struct _global_Maybe_llvm_LLVMValueRef _global_value, struct _global_Context* bnb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,1,bnb);
;}
else{_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,(_global_self)->capacity*2,bnb);
;};
;};
*((((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
static inline struct _global_Maybe_llvm_LLVMValueRef tmpllvmbj(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMValueRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMValueRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMValueRef(struct _global_Array_Maybe_llvm_LLVMValueRef_* insertByID_arr, unsigned int insertByID_id, LLVMValueRef insertByID_data, struct _global_Context* bnb){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMValueRef_(insertByID_arr,tmpllvmbj(_global_None),bnb);
}
;
;};
*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_((struct _global_Array_Maybe_llvm_LLVMValueRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMValueRef(insertByID_data,bnb);;
;}
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef tmpllvmbk(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMBasicBlockRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMBasicBlockRef(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* insertByID_arr, unsigned int insertByID_id, LLVMBasicBlockRef insertByID_data, struct _global_Context* bnb){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(insertByID_arr,tmpllvmbk(_global_None),bnb);
}
;
;};
*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_((struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMBasicBlockRef(insertByID_data,bnb);;
;}
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)_global_index);
;}
LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_String _global_mesg, struct _global_Context* bnb){;
;
LLVMBasicBlockRef _global_x;;
struct _global_Maybe_llvm_LLVMBasicBlockRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

;}
else if(1){
_global_panic(_global_mesg,bnb);
;}
;
;return _global_x;
;}
static inline LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef* bqb,struct _global_String brb,struct _global_Context* bnb){
return _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*bqb,brb,bnb);
}struct _global_Maybe_llvm_LLVMValueRef* _global_Array_op_get_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
;}
LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef _global_self, struct _global_Context* bnb){;
LLVMValueRef _global_x;;
struct _global_Maybe_llvm_LLVMValueRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),bnb);
;}
;
;return _global_x;
;}
static inline LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRef(struct _global_Maybe_llvm_LLVMValueRef* bqb,struct _global_Context* bnb){
return _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*bqb,bnb);
}LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
;return ((LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* bnb){;
;
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
_global_panic(_global_StringInit(21,"Shorten out of bounds"),bnb);
;};
(_global_self)->length = (_global_self)->length-_global_num;;
;}
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* bnb){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(bnb);;
print_type_to_string(_global_TypeFromStruct(mir_OpCode_get_type(NULL,bnb),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),bnb);
;return stringBuilder_StringBuilder_toString(&(print_s),bnb);
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
llvm_LLVMBuilderRefType.name = _global_StringInit(14, "LLVMBuilderRef");llvm_LLVMIntPredicateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMIntPredicateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMIntPredicateType_fields
,0
);
llvm_LLVMIntPredicateType.package = _global_StringInit(4, "llvm");
llvm_LLVMIntPredicateType.name = _global_StringInit(16, "LLVMIntPredicate");llvm_LLVMRealPredicateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMRealPredicateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMRealPredicateType_fields
,0
);
llvm_LLVMRealPredicateType.package = _global_StringInit(4, "llvm");
llvm_LLVMRealPredicateType.name = _global_StringInit(17, "LLVMRealPredicate");_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
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
llvm_LLVMCodeGenFileTypeType.name = _global_StringInit(19, "LLVMCodeGenFileType");llvm_LLVMTargetRefType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMTargetRefType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMTargetRefType_fields
,0
);
llvm_LLVMTargetRefType.package = _global_StringInit(4, "llvm");
llvm_LLVMTargetRefType.name = _global_StringInit(13, "LLVMTargetRef");llvm_LLVMCodeGenOptLevelType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeGenOptLevelType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeGenOptLevelType_fields
,0
);
llvm_LLVMCodeGenOptLevelType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeGenOptLevelType.name = _global_StringInit(19, "LLVMCodeGenOptLevel");llvm_LLVMRelocModeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMRelocModeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMRelocModeType_fields
,0
);
llvm_LLVMRelocModeType.package = _global_StringInit(4, "llvm");
llvm_LLVMRelocModeType.name = _global_StringInit(13, "LLVMRelocMode");llvm_LLVMCodeModelType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 0);
llvm_LLVMCodeModelType.fields = _global_StaticArray_StaticArray_S_FieldInit(
llvm_LLVMCodeModelType_fields
,0
);
llvm_LLVMCodeModelType.package = _global_StringInit(4, "llvm");
llvm_LLVMCodeModelType.name = _global_StringInit(13, "LLVMCodeModel");_global_Array_llvm_LLVMValueRefType.size = malloc(sizeof(struct _global_ArraySize));
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
struct _global_Case* q =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
q[0].name = _global_StringInit(4, "Some");
q[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
q[0].args.data[0].arg_type = 
_global_TypeFromStruct(
llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; q[0].args.data[0].offset = offsetof(struct _global_Maybe_llvm_LLVMValueRef_Some, field0);
q[1].name = _global_StringInit(4, "None");
q[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_llvm_LLVMValueRefType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_llvm_LLVMValueRefType.tag_field.offset = offsetof(struct _global_Maybe_llvm_LLVMValueRef, tag);
_global_Maybe_llvm_LLVMValueRefType.tag_field.field_type = 
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

_global_Maybe_llvm_LLVMValueRefType.size = sizeof(struct _global_Maybe_llvm_LLVMValueRef);

_global_Maybe_llvm_LLVMValueRefType.package = _global_StringInit(7, "_global");
_global_Maybe_llvm_LLVMValueRefType.name = _global_StringInit(23, "Maybe_llvm_LLVMValueRef");
_global_Maybe_llvm_LLVMValueRefType.cases.data = q;
_global_Maybe_llvm_LLVMValueRefType.cases.length = 2;
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
;_global_Maybe_rllvm_LLVMTypeRefType.p_type =
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rllvm_LLVMTypeRefType.nullable = 1;_global_Array_llvm_LLVMTypeRefType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_llvm_LLVMTypeRefType.size->tag = 1;
_global_Array_llvm_LLVMTypeRefType.array_type=
_global_TypeFromStruct(
llvm_LLVMTypeRef_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rMaybe_llvm_LLVMValueRef_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMValueRef_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_llvm_LLVMValueRef_Type.nullable = 1;_global_Array_Maybe_llvm_LLVMValueRef_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_llvm_LLVMValueRef_Type.size->tag = 1;
_global_Array_Maybe_llvm_LLVMValueRef_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_llvm_LLVMValueRef_get_type(NULL,(&_global_context))
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