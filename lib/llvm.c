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
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmModuleCreateWithName(_global_String_to_c_stringByValue(llvm_name,J),J);
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmInt1Type(J) LLVMInt1Type()

#define llvm_llvmInt8Type(K) LLVMInt8Type()

#define llvm_llvmInt32Type(L) LLVMInt32Type()

#define llvm_llvmFloatType(M) LLVMFloatType()

#define llvm_llvmVoidType(N) LLVMVoidType()

#define llvm__llvmFunctionType(P,Q,R,S,T) LLVMFunctionType(P,Q,R,S)
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* V){;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmFunctionType(llvm_return_type,(llvm_args).data,(llvm_args).length,0,V);
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmAppendBasicBlock(V,W,X) LLVMAppendBasicBlock(V,W)
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* Y){;
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmAppendBasicBlock(llvm_sum,_global_String_to_c_stringByValue(llvm_name,Y),Y);
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmCreateBuilder(Y) LLVMCreateBuilder()

#define llvm_llvmPositionBuilderAtEnd(Z,bb,bc) LLVMPositionBuilderAtEnd(Z,bb)

#define llvm__llvmBuildAdd(bd,bf,bg,bh,bj) LLVMBuildAdd(bd,bf,bg,bh)
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bk){;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bk),bk);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildSub(bk,bl,bm,bn,bp) LLVMBuildSub(bk,bl,bm,bn)
LLVMValueRef llvm_llvmBuildSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bq){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bq),bq);
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildMul(bq,br,bs,bt,bv) LLVMBuildMul(bq,br,bs,bt)
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bw){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bw),bw);
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildDiv(bw,bx,by,bz,bB) LLVMBuildSDiv(bw,bx,by,bz)
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bC){;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bC),bC);
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildFAdd(bC,bD,bF,bG,bH) LLVMBuildFAdd(bC,bD,bF,bG)
LLVMValueRef llvm_llvmBuildFAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bJ){;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildFAdd(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bJ),bJ);
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmGetParam(bJ,bK,bL) LLVMGetParam(bJ,bK)

#define llvm__llvmBuildFSub(bM,bN,bP,bQ,bR) LLVMBuildFSub(bM,bN,bP,bQ)
LLVMValueRef llvm_llvmBuildFSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bS){;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildFSub(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bS),bS);
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildFMul(bS,bT,bV,bW,bX) LLVMBuildFMul(bS,bT,bV,bW)
LLVMValueRef llvm_llvmBuildFMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* bY){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildFMul(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,bY),bY);
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildFDiv(bY,bZ,cb,db,fb) LLVMBuildFDiv(bY,bZ,cb,db)
LLVMValueRef llvm_llvmBuildFDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* gb){;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildFDiv(llvm_builder,llvm_a,llvm_b,_global_String_to_c_stringByValue(llvm_name,gb),gb);
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmConstInt(gb,hb,jb,kb) LLVMConstInt(gb,hb,jb)

#define llvm_llvmConstReal(lb,mb,nb) LLVMConstReal(lb,mb)

#define llvm_llvmBuildRetVoid(pb,qb) LLVMBuildRetVoid(pb)

#define llvm_llvmBuildRet(rb,sb,tb) LLVMBuildRet(rb,sb)

#define llvm_llvmBuildBr(vb,wb,xb) LLVMBuildBr(vb,wb)

#define llvm_llvmBuildCondBr(yb,zb,Bb,Cb,Db) LLVMBuildCondBr(yb,zb,Bb,Cb)

#define llvm__llvmAddFunction(Fb,Gb,Hb,Jb) LLVMAddFunction(Fb,Gb,Hb)
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* Kb){;
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmAddFunction(llvm_mod,_global_String_to_c_stringByValue(llvm_name,Kb),llvm_ret,Kb);
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmVerifyModule(Kb,Lb,Mb,Nb) LLVMVerifyModule(Kb,Lb,Mb)

#define llvm_llvmDisposeMessage(Pb,Qb) LLVMDisposeMessage(Pb)

#define llvm_llvmAbortProcessAction LLVMAbortProcessAction

#define llvm__llvmAddGlobal(Rb,Sb,Tb,Vb) LLVMAddGlobal(Rb,Sb,Tb)
LLVMValueRef llvm_llvmAddGlobal(LLVMModuleRef llvm_mod, LLVMTypeRef llvm_typ, struct _global_String llvm_s, struct _global_Context* Wb){;
#line 102 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 102 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 102 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmAddGlobal(llvm_mod,llvm_typ,_global_String_to_c_stringByValue(llvm_s,Wb),Wb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmBuildStore(Wb,Xb,Yb,Zb) LLVMBuildStore(Wb,Xb,Yb)

#define llvm__llvmBuildLoad(bbb,bbc,bbd,bbf) LLVMBuildLoad(bbb,bbc,bbd)
LLVMValueRef llvm_llvmBuildLoad(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_ptr, struct _global_String llvm_name, struct _global_Context* bbg){;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildLoad(llvm_builder,llvm_ptr,_global_String_to_c_stringByValue(llvm_name,bbg),bbg);
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmSetInitializer(bbg,bbh,bbj) LLVMSetInitializer(bbg,bbh)

#define llvm__llvmBuildICmp(bbk,bbl,bbm,bbn,bbp,bbq) LLVMBuildICmp(bbk,bbl,bbm,bbn,bbp)
LLVMValueRef llvm_llvmBuildICmp(LLVMBuilderRef llvm_a, LLVMIntPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bbr){;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildICmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bbr),bbr);
#line 114 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildFCmp(bbr,bbs,bbt,bbv,bbw,bbx) LLVMBuildFCmp(bbr,bbs,bbt,bbv,bbw)
LLVMValueRef llvm_llvmBuildFCmp(LLVMBuilderRef llvm_a, LLVMRealPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* bby){;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildFCmp(llvm_a,llvm_b,llvm_c,llvm_d,_global_String_to_c_stringByValue(llvm_e,bby),bby);
#line 118 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmIntSLT LLVMIntSLT

#define llvm_llvmRealOLT LLVMRealOLT

#define llvm__llvmBuildAlloca(bby,bbz,bbB,bbC) LLVMBuildAlloca(bby,bbz,bbB)
LLVMValueRef llvm_llvmBuildAlloca(LLVMBuilderRef llvm_builder, LLVMTypeRef llvm_typ, struct _global_String llvm_e, struct _global_Context* bbD){;
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildAlloca(llvm_builder,llvm_typ,_global_String_to_c_stringByValue(llvm_e,bbD),bbD);
#line 125 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmBuildCall(bbD,bbF,bbG,bbH,bbJ,bbK) LLVMBuildCall(bbD,bbF,bbG,bbH,bbJ)
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* bbL){;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmBuildCall(llvm_builder,llvm_f,(llvm_args).data,(llvm_args).length,_global_String_to_c_stringByValue(llvm_name,bbL),bbL);
#line 133 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm_llvmGetDefaultTargetTriple(bbL) LLVMGetDefaultTargetTriple()

#define llvm_llvmGetTargetFromTriple(bbM,bbN,bbP,bbQ) LLVMGetTargetFromTriple(bbM,bbN,bbP)

#define llvm__llvmTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW,bbX) LLVMTargetMachineEmitToFile(bbR,bbS,bbT,bbV,bbW)
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* bbY){;
#line 139 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 139 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 139 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 139 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 139 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmTargetMachineEmitToFile(llvm_t,llvm_m,_global_String_to_c_stringByValue(llvm_file,bbY),llvm_typ,llvm_err,bbY);
#line 140 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;}

#define llvm__llvmCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb,bjb) LLVMCreateTargetMachine(bbY,bbZ,bcb,bdb,bfb,bgb,bhb)
LLVMTargetMachineRef llvm_llvmCreateTargetMachine(LLVMTargetRef llvm_t, char* llvm_triple, struct _global_String llvm_cpu, struct _global_String llvm_features, LLVMCodeGenOptLevel llvm_opt, LLVMRelocMode llvm_reloc, LLVMCodeModel llvm_m, struct _global_Context* bkb){;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;return llvm__llvmCreateTargetMachine(llvm_t,llvm_triple,_global_String_to_c_stringByValue(llvm_cpu,bkb),_global_String_to_c_stringByValue(llvm_features,bkb),llvm_opt,llvm_reloc,llvm_m,bkb);
#line 146 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
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
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmInt32Type(bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmFloatType(bnb);}else if(bpb.tag==2){return llvm_llvmInt1Type(bnb);}else if(bpb.tag==6){struct types_FuncPtr* llvm_x = bpb.cases.Func.field0;
struct _global_Array_llvm_LLVMTypeRef llvm_args;llvm_args = _global_Array_llvm_LLVMTypeRefInit(0, 0, NULL, NULL);;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
struct _global_StaticArray_StaticArray_S_types_CompilerType bqb =(llvm_x)->args;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
for (unsigned int brb = 0;brb < bqb.length; brb++) {
struct types_CompilerType llvm_arg;llvm_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&bqb, brb, bnb);
;unsigned int llvm_i;llvm_i = brb;
_global_Array_append_llvm_LLVMTypeRef(&(llvm_args),llvm_llvm_type_for(llvm_arg,bnb),bnb);
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
}
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
return llvm_llvmFunctionType((llvm_llvm_type_for((llvm_x)->return_type,bnb)),_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(llvm_args.data, llvm_args.length),bnb);}else if(bpb.tag==0){return llvm_llvmVoidType(bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
return (LLVMTypeRef)0;};
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
;}
LLVMValueRef llvm_llvm_initial_value_for(struct types_CompilerType llvm_typ, struct _global_Context* bnb){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
;struct types_CompilerType bpb =llvm_typ;
if(bpb.tag==2){return llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)0,0,bnb);}else if(bpb.tag==3){_Bool llvm_unsigned = bpb.cases.Int.field0;
unsigned int llvm_size = bpb.cases.Int.field1;
return llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)0,1,bnb);}else if(bpb.tag==4){unsigned int llvm_size = bpb.cases.Float.field0;
return llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)0,bnb);}else if(1){struct _global_EnumType* llvm_enum_typ;llvm_enum_typ = types_CompilerType_get_type(NULL,bnb);;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown type: "),((*(_global_StaticArray_op_get_StaticArray_S_Case(&((llvm_enum_typ)->cases),(unsigned int)(llvm_typ).tag,bnb))).name),bnb),_global_StringInit(0,""),bnb),bnb);
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
return (LLVMValueRef)0;};
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/toLLVMType.top"
;}
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* bnb){;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_String llvm_s;llvm_s = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"tmp."),_global_uint_toString((llvm_t),bnb),bnb),_global_StringInit(0,""),bnb);;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
*(llvm_t) = *(llvm_t)+1;;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;return llvm_s;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* bnb){;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(llvm_stack,bnb);;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(llvm_stack,llvm_func(*(llvm_builder),llvm_a,llvm_b,llvm_next_tmp(llvm_tmp,bnb),bnb),bnb);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef tmpllvmbC(struct _global_StaticArray_1_llvm_LLVMTypeRef* brb) {
return _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(brb->data, 1);};
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* bnb){;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Allocator* bpb = (bnb)->allocator;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
uint64_t bqb = _global_Allocator_get_occupied((bnb)->allocator,bnb);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmInitializeNativeTarget(bnb);
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmInitializeNativeAsmParser(bnb);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmInitializeNativeAsmPrinter(bnb);
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMModuleRef llvm_mod;llvm_mod = llvm_llvmModuleCreateWithName(_global_StringInit(9,"my_module"),bnb);;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMBuilderRef llvm_builder;llvm_builder = llvm_llvmCreateBuilder(bnb);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_llvm_LLVMValueRef llvm_stack;llvm_stack = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_global_vars;llvm_global_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMTypeRef llvm_log_int_type;llvm_log_int_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbC(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmInt32Type(bnb)),bnb)),bnb);;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_log_int_func;llvm_log_int_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(9,"c_log_int"),llvm_log_int_type,bnb);;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_int_func,bnb),bnb);
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMTypeRef llvm_log_float_type;llvm_log_float_type = llvm_llvmFunctionType(llvm_llvmVoidType(bnb),tmpllvmbC(_global_box__1_llvm_LLVMTypeRef(_global_StaticArray_1_llvm_LLVMTypeRefInit(llvm_llvmFloatType(bnb)),bnb)),bnb);;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_log_float_func;llvm_log_float_func = llvm_llvmAddFunction(llvm_mod,_global_StringInit(11,"c_log_float"),llvm_log_float_type,bnb);;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),_global_Some_llvm_LLVMValueRef(llvm_log_float_func,bnb),bnb);
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_StaticArray_StaticArray_S_mir_Function bsb =(llvm_program)->functions;
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
for (unsigned int btb = 0;btb < bsb.length; btb++) {
struct mir_Function llvm_mir_func;llvm_mir_func = *_global_StaticArray_op_get_StaticArray_S_mir_Function(&bsb, btb, bnb);
;unsigned int llvm_i;llvm_i = btb;
LLVMTypeRef llvm_ret_type;llvm_ret_type = llvm_llvm_type_for(types_Func((llvm_mir_func)._type,bnb),bnb);;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_llvm_func;llvm_llvm_func = llvm_llvmAddFunction(llvm_mod,(llvm_mir_func).name,llvm_ret_type,bnb);;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
unsigned int llvm_tmp;llvm_tmp = 0;;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ llvm_blocks;llvm_blocks = _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(0, 0, NULL, NULL);;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_Maybe_llvm_LLVMValueRef_ llvm_local_vars;llvm_local_vars = _global_Array_Maybe_llvm_LLVMValueRef_Init(0, 0, NULL, NULL);;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_mir_func).id,llvm_llvm_func,bnb);
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_StaticArray_StaticArray_S_rmir_Block bvb =(llvm_mir_func).all_blocks;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
for (unsigned int bwb = 0;bwb < bvb.length; bwb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bvb, bwb, bnb);
;struct _global_String llvm_name;llvm_name = (llvm_i==0 ? _global_StringInit(5,"entry"):(_global_uint_toStringByValue((llvm_mir_block)->id,bnb)));;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMBasicBlockRef llvm_block;llvm_block = llvm_llvmAppendBasicBlock(llvm_llvm_func,llvm_name,bnb);;
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
insertByID_insert_at_index_llvm_LLVMBasicBlockRef(&(llvm_blocks),(llvm_mir_block)->id,llvm_block,bnb);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
}
;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_StaticArray_StaticArray_S_rmir_Block bxb =(llvm_mir_func).all_blocks;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
for (unsigned int byb = 0;byb < bxb.length; byb++) {
struct mir_Block* llvm_mir_block;llvm_mir_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&bxb, byb, bnb);
;LLVMBasicBlockRef llvm_block;llvm_block = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)(llvm_mir_block)->id,bnb)),_global_StringInit(24,"Could not get llvm block"),bnb);;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmPositionBuilderAtEnd(llvm_builder,llvm_block,bnb);
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_mir_OpCode bzb =*((llvm_mir_block)->code);
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
for (unsigned int bBb = 0;bBb < bzb.length; bBb++) {
struct mir_OpCode llvm_inst;llvm_inst = *_global_Array_op_get_mir_OpCode(&bzb, bBb, bnb);
;struct mir_OpCode bCb =llvm_inst;if(bCb.tag==0){
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildAdd,bnb);
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==5){
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFAdd,bnb);
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==1){
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildSub,bnb);
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==6){
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFSub,bnb);
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==2){
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildMul,bnb);
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==7){
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFMul,bnb);
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==3){
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildFDiv,bnb);
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==8){
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_op(&(llvm_builder),&(llvm_stack),&(llvm_tmp),llvm_llvmBuildDiv,bnb);
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==4){
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildICmp(llvm_builder,llvm_llvmIntSLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==9){
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_b;llvm_b = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
#line 88 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_a;llvm_a = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildFCmp(llvm_builder,llvm_llvmRealOLT,llvm_a,llvm_b,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==12){_Bool llvm_b = bCb.cases.Store_bool.field0;

#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt1Type(bnb),(int64_t)llvm_b,0,bnb),bnb);
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==10){int32_t llvm_integer = bCb.cases.Store_i32.field0;

#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstInt(llvm_llvmInt32Type(bnb),(int64_t)llvm_integer,1,bnb),bnb);
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==11){float llvm_f = bCb.cases.Store_f32.field0;

#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmConstReal(llvm_llvmFloatType(bnb),(double)llvm_f,bnb),bnb);
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==18){struct types_CompilerType llvm_typ = bCb.cases.FuncReturn.field0;

#line 97 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(types_CompilerType_is_typeByValue(llvm_typ,types_Void,bnb)){;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmBuildRetVoid(llvm_builder,bnb);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
else{llvm_llvmBuildRet(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),bnb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 97 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==20){unsigned int llvm_a = bCb.cases.Jump.field0;

#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmBuildBr(llvm_builder,_global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb),bnb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==19){unsigned int llvm_a = bCb.cases.CondJump.field0;
unsigned int llvm_b = bCb.cases.CondJump.field1;

#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_cond;llvm_cond = _global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb);;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMBasicBlockRef llvm_block_a;llvm_block_a = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_a,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMBasicBlockRef llvm_block_b;llvm_block_b = _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(&(llvm_blocks),(unsigned int)llvm_b,bnb)),_global_StringInit(20,"Could not find block"),bnb);;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmBuildCondBr(llvm_builder,llvm_cond,llvm_block_a,llvm_block_b,bnb);
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==14){struct mir_ReadInfo* llvm_info = bCb.cases.Read.field0;

#line 111 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if((llvm_info)->is_global){;
#line 112 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_v;llvm_v = _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb);;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(types_CompilerType_is_typeByValue((llvm_info)->_type,types_func_type,bnb)){;
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_v,bnb);
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,llvm_v,llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
#line 118 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildLoad(llvm_builder,_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
#line 120 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 112 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 111 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==13){struct mir_ReadInfo* llvm_info = bCb.cases.Create.field0;

#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_assert((llvm_info)->is_global,_global_StringInit(30,"Can't handle local create yet!"),bnb);
#line 123 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmAddGlobal(llvm_mod,(llvm_llvm_type_for((llvm_info)->_type,bnb)),(llvm_info)->name,bnb);;
#line 125 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_global_vars),(llvm_info)->id,llvm_llvm_var,bnb);
#line 126 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmSetInitializer(llvm_llvm_var,llvm_llvm_initial_value_for((llvm_info)->_type,bnb),bnb);
#line 127 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==16){unsigned int llvm_id = bCb.cases.FuncArg.field0;
struct mir_ReadInfo* llvm_info = bCb.cases.FuncArg.field1;

#line 129 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_arg;llvm_arg = llvm_llvmGetParam(llvm_llvm_func,llvm_id,bnb);;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_llvm_var;llvm_llvm_var = llvm_llvmBuildAlloca(llvm_builder,(llvm_llvm_type_for((llvm_info)->_type,bnb)),llvm_next_tmp(&(llvm_tmp),bnb),bnb);;
#line 132 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
insertByID_insert_at_index_llvm_LLVMValueRef(&(llvm_local_vars),(llvm_info)->id,llvm_llvm_var,bnb);
#line 133 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_arg,bnb);
#line 135 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 129 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==15){struct mir_ReadInfo* llvm_info = bCb.cases.Assign.field0;

#line 137 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_v;llvm_v = ((llvm_info)->is_global ? _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_global_vars),(unsigned int)(llvm_info)->id,bnb)),bnb):(_global_Maybe_unwrap_llvm_LLVMValueRefByValue(*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_(&(llvm_local_vars),(unsigned int)(llvm_info)->id,bnb)),bnb)));;
#line 138 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmBuildStore(llvm_builder,_global_Array_pop_llvm_LLVMValueRef(&(llvm_stack),bnb),llvm_v,bnb);
#line 142 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 137 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(bCb.tag==17){struct types_FuncPtr* llvm_fptr_type = bCb.cases.FuncCall.field0;

#line 144 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
unsigned int llvm_arg_count;llvm_arg_count = ((llvm_fptr_type)->args).length;;
#line 145 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMValueRef llvm_func;llvm_func = *(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count-1,bnb));;
#line 147 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Array_llvm_LLVMValueRef llvm_args;llvm_args = _global_Array_llvm_LLVMValueRefInit(0, 0, NULL, NULL);;
#line 148 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_Range bDb =_global_RangeInit(0,llvm_arg_count);
#line 150 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
for (unsigned int bFb = bDb.start; bFb < bDb.end; bFb++) {
unsigned int llvm_c;llvm_c = bFb;
;_global_Array_append_llvm_LLVMValueRef(&(llvm_args),*(_global_Array_op_get_llvm_LLVMValueRef(&(llvm_stack),(unsigned int)(llvm_stack).length-llvm_arg_count+llvm_c,bnb)),bnb);
#line 151 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
}
;
#line 150 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Array_shorten_llvm_LLVMValueRef(&(llvm_stack),llvm_arg_count+1,bnb);
#line 153 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(types_CompilerType_is_typeByValue((llvm_fptr_type)->return_type,types_Void,bnb)){;
#line 155 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),_global_StringInit(0,""),bnb);
#line 156 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
else{_global_Array_append_llvm_LLVMValueRef(&(llvm_stack),llvm_llvmBuildCall(llvm_builder,llvm_func,_global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(llvm_args.data, llvm_args.length),llvm_next_tmp(&(llvm_tmp),bnb),bnb),bnb);
#line 158 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 155 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 144 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
else if(1){
#line 160 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_panic(print_obj_toString_mir_OpCode(llvm_inst,bnb),bnb);
#line 160 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
#line 160 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
}
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
}
;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
}
;
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
char* llvm_error;llvm_error = NULL;;
#line 162 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(llvm_llvmVerifyModule(llvm_mod,llvm_llvmAbortProcessAction,&(llvm_error),bnb)){;
#line 164 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"LLVM ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
#line 165 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 164 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
llvm_llvmDisposeMessage(llvm_error,bnb);
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
char* llvm_target_triple;llvm_target_triple = llvm_llvmGetDefaultTargetTriple(bnb);;
#line 169 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMTargetRef llvm_target;;
#line 170 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(llvm_llvmGetTargetFromTriple(llvm_target_triple,&(llvm_target),&(llvm_error),bnb)){;
#line 172 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(35,"LLVM GET TARGET FROM TRIPLE ERROR: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
#line 173 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 172 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_String llvm_cpu;llvm_cpu = _global_StringInit(7,"generic");;
#line 175 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
struct _global_String llvm_features;llvm_features = _global_StringInit(0,"");;
#line 176 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
LLVMTargetMachineRef llvm_target_machine;llvm_target_machine = llvm_llvmCreateTargetMachine(llvm_target,llvm_target_triple,llvm_cpu,llvm_features,llvm_llvmCodeGenLevelNone,llvm_llvmRelocDefault,llvm_llvmCodeModelDefault,bnb);;
#line 178 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
if(llvm_llvmTargetMachineEmitToFile(llvm_target_machine,llvm_mod,_global_StringInit(11,"test/main.o"),llvm_llvmObjectFile,&(llvm_error),bnb)){;
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(11,"LLVM EMIT: "),(_global_char_buffer_toString(_global_Maybe_unwrap_rcharByValue(llvm_error,bnb),bnb)),bnb),_global_StringInit(0,""),bnb),bnb);
#line 181 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;};
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
_global_Allocator_reset_to(bpb,bqb,bnb);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;}
void _global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_target, struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_llvm_LLVMTypeRef(LLVMTypeRef* _global_target, LLVMTypeRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMTypeRef),bnb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_llvm_LLVMValueRef(LLVMValueRef* _global_target, LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(LLVMValueRef),bnb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_Maybe_llvm_LLVMValueRef_(struct _global_Maybe_llvm_LLVMValueRef* _global_target, struct _global_Maybe_llvm_LLVMValueRef* _global_destination, unsigned int _global_length, struct _global_Context* bnb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline struct _global_Maybe_llvm_LLVMBasicBlockRef* tmpllvmbD(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_Maybe_llvm_LLVMBasicBlockRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMBasicBlockRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpllvmbD(&_global_self,&_global_newSize,&_global_allocator, bnb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline LLVMTypeRef* tmpllvmbF(struct _global_Array_llvm_LLVMTypeRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMTypeRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMTypeRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
LLVMTypeRef* _global_newData;_global_newData = (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_llvm_LLVMTypeRef(_global_newData,_global_data,(*_global_self)->length,bnb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bpb == NULL){return (LLVMTypeRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMTypeRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpllvmbF(&_global_self,&_global_newSize,&_global_allocator, bnb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline LLVMValueRef* tmpllvmbG(struct _global_Array_llvm_LLVMValueRef** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
LLVMValueRef* _global_newData;_global_newData = (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_llvm_LLVMValueRef(_global_newData,_global_data,(*_global_self)->length,bnb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bpb == NULL){return (LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(LLVMValueRef),bnb));}
}
void _global_Array_reserve_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpllvmbG(&_global_self,&_global_newSize,&_global_allocator, bnb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline struct _global_Maybe_llvm_LLVMValueRef* tmpllvmbH(struct _global_Array_Maybe_llvm_LLVMValueRef_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bnb) {
struct _global_Maybe_llvm_LLVMValueRef* bpb =(*_global_self)->data;
if(bpb != NULL){struct _global_Maybe_llvm_LLVMValueRef* _global_data = bpb;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bnb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Maybe_llvm_LLVMValueRef* _global_newData;_global_newData = (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_Maybe_llvm_LLVMValueRef_(_global_newData,_global_data,(*_global_self)->length,bnb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bnb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bpb == NULL){return (struct _global_Maybe_llvm_LLVMValueRef*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_llvm_LLVMValueRef),bnb));}
}
void _global_Array_reserve_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_newSize, struct _global_Context* bnb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bnb)->allocator,bnb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpllvmbH(&_global_self,&_global_newSize,&_global_allocator, bnb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, struct _global_Maybe_llvm_LLVMBasicBlockRef _global_value, struct _global_Context* bnb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,1,bnb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_Maybe_llvm_LLVMBasicBlockRef_(_global_self,(_global_self)->capacity*2,bnb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_llvm_LLVMTypeRef(struct _global_Array_llvm_LLVMTypeRef* _global_self, LLVMTypeRef _global_value, struct _global_Context* bnb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_llvm_LLVMTypeRef(_global_self,1,bnb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_llvm_LLVMTypeRef(_global_self,(_global_self)->capacity*2,bnb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((LLVMTypeRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
LLVMValueRef _global_Array_pop_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, struct _global_Context* bnb){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),bnb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
LLVMValueRef _global_tmp;_global_tmp = *(_global_Array_op_get_llvm_LLVMValueRef(_global_self,(unsigned int)(_global_self)->length-1,bnb));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, LLVMValueRef _global_value, struct _global_Context* bnb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_llvm_LLVMValueRef(_global_self,1,bnb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_llvm_LLVMValueRef(_global_self,(_global_self)->capacity*2,bnb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_box__1_llvm_LLVMTypeRef(struct _global_StaticArray_1_llvm_LLVMTypeRef _global_value, struct _global_Context* bnb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct _global_StaticArray_1_llvm_LLVMTypeRef* _global_pointer;_global_pointer = (struct _global_StaticArray_1_llvm_LLVMTypeRef*)(_global_Allocator_alloc((bnb)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_llvm_LLVMTypeRef),bnb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_Array_append_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, struct _global_Maybe_llvm_LLVMValueRef _global_value, struct _global_Context* bnb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,1,bnb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_Maybe_llvm_LLVMValueRef_(_global_self,(_global_self)->capacity*2,bnb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
static inline struct _global_Maybe_llvm_LLVMValueRef tmpllvmbJ(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMValueRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMValueRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMValueRef(struct _global_Array_Maybe_llvm_LLVMValueRef_* insertByID_arr, unsigned int insertByID_id, LLVMValueRef insertByID_data, struct _global_Context* bnb){;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
if(insertByID_id>=(insertByID_arr)->length){;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMValueRef_(insertByID_arr,tmpllvmbJ(_global_None),bnb);
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
}
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;};
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
*(_global_Array_op_get_Maybe_llvm_LLVMValueRef_((struct _global_Array_Maybe_llvm_LLVMValueRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMValueRef(insertByID_data,bnb);;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;}
static inline struct _global_Maybe_llvm_LLVMBasicBlockRef tmpllvmbK(struct _global_Maybe_Maybe_T bsb) {
struct _global_Maybe_llvm_LLVMBasicBlockRef brb;brb.tag = bsb.tag;brb.cases = *(union _global_Maybe_llvm_LLVMBasicBlockRef_cases*) &(bsb.cases);return brb;
}
void insertByID_insert_at_index_llvm_LLVMBasicBlockRef(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* insertByID_arr, unsigned int insertByID_id, LLVMBasicBlockRef insertByID_data, struct _global_Context* bnb){;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
if(insertByID_id>=(insertByID_arr)->length){;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
struct _global_Range bpb =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
for (unsigned int bqb = bpb.start; bqb < bpb.end; bqb++) {
unsigned int insertByID_c;insertByID_c = bqb;
;_global_Array_append_Maybe_llvm_LLVMBasicBlockRef_(insertByID_arr,tmpllvmbK(_global_None),bnb);
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
}
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;};
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
*(_global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_((struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_*)insertByID_arr,(unsigned int)insertByID_id,bnb)) = _global_Some_llvm_LLVMBasicBlockRef(insertByID_data,bnb);;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//insertByID.top"
;}
struct _global_Maybe_llvm_LLVMBasicBlockRef* _global_Array_op_get_Maybe_llvm_LLVMBasicBlockRef_(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct _global_Maybe_llvm_LLVMBasicBlockRef*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef _global_self, struct _global_String _global_mesg, struct _global_Context* bnb){;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
LLVMBasicBlockRef _global_x;;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
struct _global_Maybe_llvm_LLVMBasicBlockRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

#line 20 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 20 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
else if(1){
#line 20 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
_global_panic(_global_mesg,bnb);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 21 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;return _global_x;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
static inline LLVMBasicBlockRef _global_Maybe_expect_llvm_LLVMBasicBlockRef(struct _global_Maybe_llvm_LLVMBasicBlockRef* bqb,struct _global_String brb,struct _global_Context* bnb){
return _global_Maybe_expect_llvm_LLVMBasicBlockRefByValue(*bqb,brb,bnb);
}struct _global_Maybe_llvm_LLVMValueRef* _global_Array_op_get_Maybe_llvm_LLVMValueRef_(struct _global_Array_Maybe_llvm_LLVMValueRef_* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct _global_Maybe_llvm_LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRefByValue(struct _global_Maybe_llvm_LLVMValueRef _global_self, struct _global_Context* bnb){;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
LLVMValueRef _global_x;;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
struct _global_Maybe_llvm_LLVMValueRef bpb =_global_self;if(bpb.tag==0){_global_x = bpb.cases.Some.field0;

#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
else if(1){
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),bnb);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;return _global_x;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
static inline LLVMValueRef _global_Maybe_unwrap_llvm_LLVMValueRef(struct _global_Maybe_llvm_LLVMValueRef* bqb,struct _global_Context* bnb){
return _global_Maybe_unwrap_llvm_LLVMValueRefByValue(*bqb,bnb);
}LLVMValueRef* _global_Array_op_get_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_index, struct _global_Context* bnb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bnb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((LLVMValueRef*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_shorten_llvm_LLVMValueRef(struct _global_Array_llvm_LLVMValueRef* _global_self, unsigned int _global_num, struct _global_Context* bnb){;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(21,"Shorten out of bounds"),bnb);
#line 39 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 38 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-_global_num;;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct _global_String print_obj_toString_mir_OpCode(struct mir_OpCode print_t, struct _global_Context* bnb){;
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(bnb);;
#line 92 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
print_type_to_string(_global_TypeFromStruct(mir_OpCode_get_type(NULL,bnb),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),bnb);
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
;return stringBuilder_StringBuilder_toString(&(print_s),bnb);
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//print.top"
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
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 70 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 90 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 92 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 110 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 112 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 120 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 121 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 123 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 131 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 135 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 136 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 138 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 144 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 148 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 150 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 151 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 152 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 154 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 156 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 157 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 159 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/llvmWrapper.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/llvm/mirToLLVM.top"
;
};