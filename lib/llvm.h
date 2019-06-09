struct _global_StructType llvm_LLVMModuleRefType;struct _global_StructType* llvm_LLVMModuleRef_get_type(struct LLVMModuleRef* self, struct _global_Context* c){return &llvm_LLVMModuleRefType;}
struct _global_Field* llvm_LLVMModuleRefType_fields;
struct _global_StructType llvm_LLVMTypeRefType;struct _global_StructType* llvm_LLVMTypeRef_get_type(struct LLVMTypeRef* self, struct _global_Context* c){return &llvm_LLVMTypeRefType;}
struct _global_Field* llvm_LLVMTypeRefType_fields;
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef {
LLVMTypeRef* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefInit(LLVMTypeRef* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef c;
c.data=data;c.length=length;return c;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMTypeRefType;struct _global_StructType llvm_LLVMBasicBlockRefType;struct _global_StructType* llvm_LLVMBasicBlockRef_get_type(struct LLVMBasicBlockRef* self, struct _global_Context* c){return &llvm_LLVMBasicBlockRefType;}
struct _global_Field* llvm_LLVMBasicBlockRefType_fields;
struct _global_StructType llvm_LLVMValueRefType;struct _global_StructType* llvm_LLVMValueRef_get_type(struct LLVMValueRef* self, struct _global_Context* c){return &llvm_LLVMValueRefType;}
struct _global_Field* llvm_LLVMValueRefType_fields;
struct _global_StructType llvm_LLVMBuilderRefType;struct _global_StructType* llvm_LLVMBuilderRef_get_type(struct LLVMBuilderRef* self, struct _global_Context* c){return &llvm_LLVMBuilderRefType;}
struct _global_Field* llvm_LLVMBuilderRefType_fields;
struct _global_StructType llvm_LLVMIntPredicateType;struct _global_StructType* llvm_LLVMIntPredicate_get_type(struct LLVMIntPredicate* self, struct _global_Context* c){return &llvm_LLVMIntPredicateType;}
struct _global_Field* llvm_LLVMIntPredicateType_fields;
struct _global_StructType llvm_LLVMRealPredicateType;struct _global_StructType* llvm_LLVMRealPredicate_get_type(struct LLVMRealPredicate* self, struct _global_Context* c){return &llvm_LLVMRealPredicateType;}
struct _global_Field* llvm_LLVMRealPredicateType_fields;
struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef {
LLVMValueRef* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef _global_StaticArray_StaticArray_S_llvm_LLVMValueRefInit(LLVMValueRef* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef d;
d.data=data;d.length=length;return d;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMValueRef_get_type(struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_llvm_LLVMValueRef_get_typeByValue(struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_StructType llvm_LLVMTargetMachineRefType;struct _global_StructType* llvm_LLVMTargetMachineRef_get_type(struct LLVMTargetMachineRef* self, struct _global_Context* c){return &llvm_LLVMTargetMachineRefType;}
struct _global_Field* llvm_LLVMTargetMachineRefType_fields;
struct _global_StructType llvm_LLVMCodeGenFileTypeType;struct _global_StructType* llvm_LLVMCodeGenFileType_get_type(struct LLVMCodeGenFileType* self, struct _global_Context* c){return &llvm_LLVMCodeGenFileTypeType;}
struct _global_Field* llvm_LLVMCodeGenFileTypeType_fields;
struct _global_StructType llvm_LLVMTargetRefType;struct _global_StructType* llvm_LLVMTargetRef_get_type(struct LLVMTargetRef* self, struct _global_Context* c){return &llvm_LLVMTargetRefType;}
struct _global_Field* llvm_LLVMTargetRefType_fields;
struct _global_StructType llvm_LLVMCodeGenOptLevelType;struct _global_StructType* llvm_LLVMCodeGenOptLevel_get_type(struct LLVMCodeGenOptLevel* self, struct _global_Context* c){return &llvm_LLVMCodeGenOptLevelType;}
struct _global_Field* llvm_LLVMCodeGenOptLevelType_fields;
struct _global_StructType llvm_LLVMRelocModeType;struct _global_StructType* llvm_LLVMRelocMode_get_type(struct LLVMRelocMode* self, struct _global_Context* c){return &llvm_LLVMRelocModeType;}
struct _global_Field* llvm_LLVMRelocModeType_fields;
struct _global_StructType llvm_LLVMCodeModelType;struct _global_StructType* llvm_LLVMCodeModel_get_type(struct LLVMCodeModel* self, struct _global_Context* c){return &llvm_LLVMCodeModelType;}
struct _global_Field* llvm_LLVMCodeModelType_fields;
struct _global_Array_llvm_LLVMValueRef {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
LLVMValueRef* data;
};
static inline struct _global_Array_llvm_LLVMValueRef _global_Array_llvm_LLVMValueRefInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,LLVMValueRef* data){
struct _global_Array_llvm_LLVMValueRef f;
f.length=length;f.capacity=capacity;f.allocator=allocator;f.data=data;return f;
};
struct _global_ArrayType _global_Array_llvm_LLVMValueRefType;struct _global_ArrayType* _global_Array_llvm_LLVMValueRef_get_type(struct _global_Array_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_Array_llvm_LLVMValueRefType;}
struct _global_ArrayType* _global_Array_llvm_LLVMValueRef_get_typeByValue(struct _global_Array_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_Array_llvm_LLVMValueRefType;}
struct _global_ArrayType _global_Array_llvm_LLVMValueRefType;struct _global_PointerType _global_Maybe_rllvm_LLVMValueRefType;struct _global_PointerType* _global_Maybe_rllvm_LLVMValueRef_get_type(LLVMValueRef*** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMValueRefType;}
struct _global_PointerType* _global_Maybe_rllvm_LLVMValueRef_get_typeByValue(LLVMValueRef** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMValueRefType;}
typedef LLVMValueRef(*pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef)(LLVMBuilderRef,LLVMValueRef,LLVMValueRef,struct _global_String,struct _global_Context*) ;
struct _global_Maybe_llvm_LLVMBasicBlockRef_Some {
LLVMBasicBlockRef field0;

};union _global_Maybe_llvm_LLVMBasicBlockRef_cases {
struct _global_Maybe_llvm_LLVMBasicBlockRef_Some Some;

};
struct _global_Maybe_llvm_LLVMBasicBlockRef {
union _global_Maybe_llvm_LLVMBasicBlockRef_cases cases;
unsigned char tag;
};
struct _global_Maybe_llvm_LLVMBasicBlockRef _global_Some_llvm_LLVMBasicBlockRef(LLVMBasicBlockRef g,struct _global_Context* h){
struct _global_Maybe_llvm_LLVMBasicBlockRef j;
j.cases.Some.field0 = g;j.tag = 0;
return j;}
struct _global_EnumType _global_Maybe_llvm_LLVMBasicBlockRefType;struct _global_EnumType* _global_Maybe_llvm_LLVMBasicBlockRef_get_type(struct _global_Maybe_llvm_LLVMBasicBlockRef* self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMBasicBlockRefType;}
struct _global_EnumType* _global_Maybe_llvm_LLVMBasicBlockRef_get_typeByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMBasicBlockRefType;}
struct _global_Maybe_llvm_LLVMValueRef_Some {
LLVMValueRef field0;

};union _global_Maybe_llvm_LLVMValueRef_cases {
struct _global_Maybe_llvm_LLVMValueRef_Some Some;

};
struct _global_Maybe_llvm_LLVMValueRef {
union _global_Maybe_llvm_LLVMValueRef_cases cases;
unsigned char tag;
};
struct _global_Maybe_llvm_LLVMValueRef _global_Some_llvm_LLVMValueRef(LLVMValueRef m,struct _global_Context* n){
struct _global_Maybe_llvm_LLVMValueRef p;
p.cases.Some.field0 = m;p.tag = 0;
return p;}
struct _global_EnumType _global_Maybe_llvm_LLVMValueRefType;struct _global_EnumType* _global_Maybe_llvm_LLVMValueRef_get_type(struct _global_Maybe_llvm_LLVMValueRef* self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMValueRefType;}
struct _global_EnumType* _global_Maybe_llvm_LLVMValueRef_get_typeByValue(struct _global_Maybe_llvm_LLVMValueRef self, struct _global_Context* c){return &_global_Maybe_llvm_LLVMValueRefType;}
struct _global_PointerType _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef__get_type(struct _global_Maybe_llvm_LLVMBasicBlockRef*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMBasicBlockRef__get_typeByValue(struct _global_Maybe_llvm_LLVMBasicBlockRef** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_llvm_LLVMBasicBlockRef* data;
};
static inline struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ _global_Array_Maybe_llvm_LLVMBasicBlockRef_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_llvm_LLVMBasicBlockRef* data){
struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ s;
s.length=length;s.capacity=capacity;s.allocator=allocator;s.data=data;return s;
};
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMBasicBlockRef__get_type(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_* self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMBasicBlockRef__get_typeByValue(struct _global_Array_Maybe_llvm_LLVMBasicBlockRef_ self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;}
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMBasicBlockRef_Type;struct _global_PointerType _global_Maybe_rllvm_LLVMTypeRefType;struct _global_PointerType* _global_Maybe_rllvm_LLVMTypeRef_get_type(LLVMTypeRef*** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMTypeRefType;}
struct _global_PointerType* _global_Maybe_rllvm_LLVMTypeRef_get_typeByValue(LLVMTypeRef** self, struct _global_Context* c){return &_global_Maybe_rllvm_LLVMTypeRefType;}
struct _global_Array_llvm_LLVMTypeRef {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
LLVMTypeRef* data;
};
static inline struct _global_Array_llvm_LLVMTypeRef _global_Array_llvm_LLVMTypeRefInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,LLVMTypeRef* data){
struct _global_Array_llvm_LLVMTypeRef t;
t.length=length;t.capacity=capacity;t.allocator=allocator;t.data=data;return t;
};
struct _global_ArrayType _global_Array_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_Array_llvm_LLVMTypeRef_get_type(struct _global_Array_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_Array_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_Array_llvm_LLVMTypeRef_get_typeByValue(struct _global_Array_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_Array_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_Array_llvm_LLVMTypeRefType;struct _global_PointerType _global_Maybe_rMaybe_llvm_LLVMValueRef_Type;struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMValueRef__get_type(struct _global_Maybe_llvm_LLVMValueRef*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMValueRef_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_llvm_LLVMValueRef__get_typeByValue(struct _global_Maybe_llvm_LLVMValueRef** self, struct _global_Context* c){return &_global_Maybe_rMaybe_llvm_LLVMValueRef_Type;}
struct _global_Array_Maybe_llvm_LLVMValueRef_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_llvm_LLVMValueRef* data;
};
static inline struct _global_Array_Maybe_llvm_LLVMValueRef_ _global_Array_Maybe_llvm_LLVMValueRef_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_llvm_LLVMValueRef* data){
struct _global_Array_Maybe_llvm_LLVMValueRef_ v;
v.length=length;v.capacity=capacity;v.allocator=allocator;v.data=data;return v;
};
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMValueRef_Type;struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMValueRef__get_type(struct _global_Array_Maybe_llvm_LLVMValueRef_* self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMValueRef_Type;}
struct _global_ArrayType* _global_Array_Maybe_llvm_LLVMValueRef__get_typeByValue(struct _global_Array_Maybe_llvm_LLVMValueRef_ self, struct _global_Context* c){return &_global_Array_Maybe_llvm_LLVMValueRef_Type;}
struct _global_ArrayType _global_Array_Maybe_llvm_LLVMValueRef_Type;struct _global_StaticArray_1_llvm_LLVMTypeRef {
LLVMTypeRef data[1];
};
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefFill_array(LLVMTypeRef with){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefInit(LLVMTypeRef w){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
tmp.data[0] = w;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_1_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_1_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* b);
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* c);
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* d);
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* f);
LLVMValueRef llvm_llvmBuildSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* g);
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* h);
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* j);
LLVMValueRef llvm_llvmBuildFAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* k);
LLVMValueRef llvm_llvmBuildFSub(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* l);
LLVMValueRef llvm_llvmBuildFMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* m);
LLVMValueRef llvm_llvmBuildFDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* n);
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* p);
LLVMValueRef llvm_llvmAddGlobal(LLVMModuleRef llvm_mod, LLVMTypeRef llvm_typ, struct _global_String llvm_s, struct _global_Context* q);
LLVMValueRef llvm_llvmBuildLoad(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_ptr, struct _global_String llvm_name, struct _global_Context* r);
LLVMValueRef llvm_llvmBuildICmp(LLVMBuilderRef llvm_a, LLVMIntPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* s);
LLVMValueRef llvm_llvmBuildFCmp(LLVMBuilderRef llvm_a, LLVMRealPredicate llvm_b, LLVMValueRef llvm_c, LLVMValueRef llvm_d, struct _global_String llvm_e, struct _global_Context* t);
LLVMValueRef llvm_llvmBuildAlloca(LLVMBuilderRef llvm_builder, LLVMTypeRef llvm_typ, struct _global_String llvm_e, struct _global_Context* v);
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* w);
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetMachineRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* x);
LLVMTargetMachineRef llvm_llvmCreateTargetMachine(LLVMTargetRef llvm_t, char* llvm_triple, struct _global_String llvm_cpu, struct _global_String llvm_features, LLVMCodeGenOptLevel llvm_opt, LLVMRelocMode llvm_reloc, LLVMCodeModel llvm_m, struct _global_Context* y);
LLVMTypeRef llvm_llvm_type_for(struct types_CompilerType llvm_typ, struct _global_Context* z);
LLVMValueRef llvm_llvm_initial_value_for(struct types_CompilerType llvm_typ, struct _global_Context* B);
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* C);
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* D);
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* F);
