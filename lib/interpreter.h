struct _global_Array_rnone {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_rnone _global_Array_rnoneInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_rnone c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_rnoneType;struct _global_ArrayType* _global_Array_rnone_get_type(struct _global_Array_rnone* self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType* _global_Array_rnone_get_typeByValue(struct _global_Array_rnone self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType _global_Array_rnoneType;struct _global_PointerType _global_Maybe_rrnoneType;struct _global_PointerType* _global_Maybe_rrnone_get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_PointerType* _global_Maybe_rrnone_get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_Array_Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_Maybe_rmir_Block_ _global_Array_Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_Maybe_rmir_Block_ d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_PointerType _global_Maybe_rMaybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct interpreter_Interpreter {
struct _global_Array_rnone var_ptr;
struct _global_TemporaryStorage stack;
struct _global_Array_Maybe_rmir_Block_ blocks;
};
static inline struct interpreter_Interpreter interpreter_InterpreterInit(struct _global_Array_rnone var_ptr,struct _global_TemporaryStorage stack,struct _global_Array_Maybe_rmir_Block_ blocks){
struct interpreter_Interpreter f;
f.var_ptr=var_ptr;f.stack=stack;f.blocks=blocks;return f;
};
struct _global_StructType interpreter_InterpreterType;struct _global_StructType* interpreter_Interpreter_get_type(struct interpreter_Interpreter* self, struct _global_Context* c){return &interpreter_InterpreterType;}
struct _global_Field* interpreter_InterpreterType_fields;
typedef void(*printerpreter_Interpreterp___none)(struct interpreter_Interpreter*,struct _global_Context*) ;

void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* b);
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* c);
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_Context* d);
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* f);
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* g);
