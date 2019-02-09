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
struct _global_ArrayType _global_StaticArray_StaticArray_S_llvm_LLVMValueRefType;struct _global_StructType llvm_LLVMTargetRefType;struct _global_StructType* llvm_LLVMTargetRef_get_type(struct LLVMTargetRef* self, struct _global_Context* c){return &llvm_LLVMTargetRefType;}
struct _global_Field* llvm_LLVMTargetRefType_fields;
struct _global_StructType llvm_LLVMCodeGenFileTypeType;struct _global_StructType* llvm_LLVMCodeGenFileType_get_type(struct LLVMCodeGenFileType* self, struct _global_Context* c){return &llvm_LLVMCodeGenFileTypeType;}
struct _global_Field* llvm_LLVMCodeGenFileTypeType_fields;
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
struct _global_StaticArray_1_llvm_LLVMTypeRef {
LLVMTypeRef data[1];
};
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefFill_array(LLVMTypeRef with){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_llvm_LLVMTypeRef _global_StaticArray_1_llvm_LLVMTypeRefInit(LLVMTypeRef g){
struct _global_StaticArray_1_llvm_LLVMTypeRef tmp;
tmp.data[0] = g;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_type(struct _global_StaticArray_1_llvm_LLVMTypeRef* self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType* _global_StaticArray_1_llvm_LLVMTypeRef_get_typeByValue(struct _global_StaticArray_1_llvm_LLVMTypeRef self, struct _global_Context* c){return &_global_StaticArray_1_llvm_LLVMTypeRefType;}
struct _global_ArrayType _global_StaticArray_1_llvm_LLVMTypeRefType;
LLVMModuleRef llvm_llvmModuleCreateWithName(struct _global_String llvm_name, struct _global_Context* b);
LLVMTypeRef llvm_llvmFunctionType(LLVMTypeRef llvm_return_type, struct _global_StaticArray_StaticArray_S_llvm_LLVMTypeRef llvm_args, struct _global_Context* c);
LLVMBasicBlockRef llvm_llvmAppendBasicBlock(LLVMValueRef llvm_sum, struct _global_String llvm_name, struct _global_Context* d);
LLVMValueRef llvm_llvmBuildAdd(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* f);
LLVMValueRef llvm_llvmBuildMul(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* g);
LLVMValueRef llvm_llvmBuildDiv(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_a, LLVMValueRef llvm_b, struct _global_String llvm_name, struct _global_Context* h);
LLVMValueRef llvm_llvmAddFunction(LLVMModuleRef llvm_mod, struct _global_String llvm_name, LLVMTypeRef llvm_ret, struct _global_Context* j);
LLVMValueRef llvm_llvmBuildCall(LLVMBuilderRef llvm_builder, LLVMValueRef llvm_f, struct _global_StaticArray_StaticArray_S_llvm_LLVMValueRef llvm_args, struct _global_String llvm_name, struct _global_Context* k);
_Bool llvm_llvmTargetMachineEmitToFile(LLVMTargetRef llvm_t, LLVMModuleRef llvm_m, struct _global_String llvm_file, LLVMCodeGenFileType llvm_typ, char** llvm_err, struct _global_Context* l);
struct _global_String llvm_next_tmp(unsigned int* llvm_t, struct _global_Context* m);
void llvm_op(LLVMBuilderRef* llvm_builder, struct _global_Array_llvm_LLVMValueRef* llvm_stack, unsigned int* llvm_tmp, pllvm_LLVMBuilderRefc_llvm_LLVMValueRefc_llvm_LLVMValueRefc_stringp___llvm_LLVMValueRef llvm_func, struct _global_Context* n);
void llvm_convert_to_LLVMModule(struct mir_Program* llvm_program, struct _global_Context* p);
