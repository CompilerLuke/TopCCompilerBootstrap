struct validator_State {
struct scope_Scope* scope;
};
static inline struct validator_State validator_StateInit(struct scope_Scope* scope){
struct validator_State c;
c.scope=scope;return c;
};
struct _global_StructType validator_StateType;struct _global_StructType* validator_State_get_type(struct validator_State* self, struct _global_Context* c){return &validator_StateType;}
struct _global_Field* validator_StateType_fields;
struct _global_StaticArray_1_u8 {
unsigned char data[1];
};
struct _global_StaticArray_1_u8 _global_StaticArray_1_u8Fill_array(unsigned char with){
struct _global_StaticArray_1_u8 tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_u8 _global_StaticArray_1_u8Init(unsigned char d){
struct _global_StaticArray_1_u8 tmp;
tmp.data[0] = d;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_u8Type;struct _global_ArrayType* _global_StaticArray_1_u8_get_type(struct _global_StaticArray_1_u8* self, struct _global_Context* c){return &_global_StaticArray_1_u8Type;}
struct _global_ArrayType* _global_StaticArray_1_u8_get_typeByValue(struct _global_StaticArray_1_u8 self, struct _global_Context* c){return &_global_StaticArray_1_u8Type;}
struct _global_ArrayType _global_StaticArray_1_u8Type;struct _global_StaticArray_StaticArray_S_rast_AST {
struct ast_AST** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rast_AST _global_StaticArray_StaticArray_S_rast_ASTInit(struct ast_AST** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rast_AST f;
f.data=data;f.length=length;return f;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_type(struct _global_StaticArray_StaticArray_S_rast_AST* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_typeByValue(struct _global_StaticArray_StaticArray_S_rast_AST self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;
struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* b);
