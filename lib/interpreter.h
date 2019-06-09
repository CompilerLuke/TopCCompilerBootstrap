struct _global_Array_Maybe_string_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_string* data;
};
static inline struct _global_Array_Maybe_string_ _global_Array_Maybe_string_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_string* data){
struct _global_Array_Maybe_string_ j;
j.length=length;j.capacity=capacity;j.allocator=allocator;j.data=data;return j;
};
struct _global_ArrayType _global_Array_Maybe_string_Type;struct _global_ArrayType* _global_Array_Maybe_string__get_type(struct _global_Array_Maybe_string_* self, struct _global_Context* c){return &_global_Array_Maybe_string_Type;}
struct _global_ArrayType* _global_Array_Maybe_string__get_typeByValue(struct _global_Array_Maybe_string_ self, struct _global_Context* c){return &_global_Array_Maybe_string_Type;}
struct _global_ArrayType _global_Array_Maybe_string_Type;struct _global_Maybe_string_Some {
struct _global_String field0;

};union _global_Maybe_string_cases {
struct _global_Maybe_string_Some Some;

};
struct _global_Maybe_string {
union _global_Maybe_string_cases cases;
unsigned char tag;
};
struct _global_Maybe_string _global_Some_string(struct _global_String c,struct _global_Context* d){
struct _global_Maybe_string f;
f.cases.Some.field0 = c;f.tag = 0;
return f;}
struct _global_EnumType _global_Maybe_stringType;struct _global_EnumType* _global_Maybe_string_get_type(struct _global_Maybe_string* self, struct _global_Context* c){return &_global_Maybe_stringType;}
struct _global_EnumType* _global_Maybe_string_get_typeByValue(struct _global_Maybe_string self, struct _global_Context* c){return &_global_Maybe_stringType;}
struct _global_PointerType _global_Maybe_rMaybe_string_Type;struct _global_PointerType* _global_Maybe_rMaybe_string__get_type(struct _global_Maybe_string*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_string_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_string__get_typeByValue(struct _global_Maybe_string** self, struct _global_Context* c){return &_global_Maybe_rMaybe_string_Type;}
struct _global_Array_Maybe_rnone_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_Maybe_rnone_ _global_Array_Maybe_rnone_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_Maybe_rnone_ k;
k.length=length;k.capacity=capacity;k.allocator=allocator;k.data=data;return k;
};
struct _global_ArrayType _global_Array_Maybe_rnone_Type;struct _global_ArrayType* _global_Array_Maybe_rnone__get_type(struct _global_Array_Maybe_rnone_* self, struct _global_Context* c){return &_global_Array_Maybe_rnone_Type;}
struct _global_ArrayType* _global_Array_Maybe_rnone__get_typeByValue(struct _global_Array_Maybe_rnone_ self, struct _global_Context* c){return &_global_Array_Maybe_rnone_Type;}
struct _global_ArrayType _global_Array_Maybe_rnone_Type;struct _global_PointerType _global_Maybe_rMaybe_rnone_Type;struct _global_PointerType* _global_Maybe_rMaybe_rnone__get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rnone_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rnone__get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rnone_Type;}
struct _global_Array_____Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_Maybe_rmir_Block_* data;
};
static inline struct _global_Array_____Maybe_rmir_Block_ _global_Array_____Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_Maybe_rmir_Block_* data){
struct _global_Array_____Maybe_rmir_Block_ m;
m.length=length;m.capacity=capacity;m.allocator=allocator;m.data=data;return m;
};
struct _global_ArrayType _global_Array_____Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_____Maybe_rmir_Block__get_type(struct _global_Array_____Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_____Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_____Maybe_rmir_Block__get_typeByValue(struct _global_Array_____Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_____Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_____Maybe_rmir_Block_Type;struct _global_Array_Maybe_rmir_Block_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_Maybe_rmir_Block_ _global_Array_Maybe_rmir_Block_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_Maybe_rmir_Block_ l;
l.length=length;l.capacity=capacity;l.allocator=allocator;l.data=data;return l;
};
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType* _global_Array_Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Array_Maybe_rmir_Block_Type;}
struct _global_ArrayType _global_Array_Maybe_rmir_Block_Type;struct _global_PointerType _global_Maybe_rMaybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_rMaybe_rmir_Block__get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_rmir_Block_Type;}
struct _global_PointerType _global_Maybe_r____Maybe_rmir_Block_Type;struct _global_PointerType* _global_Maybe_r____Maybe_rmir_Block__get_type(struct _global_Array_Maybe_rmir_Block_*** self, struct _global_Context* c){return &_global_Maybe_r____Maybe_rmir_Block_Type;}
struct _global_PointerType* _global_Maybe_r____Maybe_rmir_Block__get_typeByValue(struct _global_Array_Maybe_rmir_Block_** self, struct _global_Context* c){return &_global_Maybe_r____Maybe_rmir_Block_Type;}
struct _global_Array_Maybe_____Maybe_rmir_Block__ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Maybe_____Maybe_rmir_Block_* data;
};
static inline struct _global_Array_Maybe_____Maybe_rmir_Block__ _global_Array_Maybe_____Maybe_rmir_Block__Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Maybe_____Maybe_rmir_Block_* data){
struct _global_Array_Maybe_____Maybe_rmir_Block__ t;
t.length=length;t.capacity=capacity;t.allocator=allocator;t.data=data;return t;
};
struct _global_ArrayType _global_Array_Maybe_____Maybe_rmir_Block__Type;struct _global_ArrayType* _global_Array_Maybe_____Maybe_rmir_Block___get_type(struct _global_Array_Maybe_____Maybe_rmir_Block__* self, struct _global_Context* c){return &_global_Array_Maybe_____Maybe_rmir_Block__Type;}
struct _global_ArrayType* _global_Array_Maybe_____Maybe_rmir_Block___get_typeByValue(struct _global_Array_Maybe_____Maybe_rmir_Block__ self, struct _global_Context* c){return &_global_Array_Maybe_____Maybe_rmir_Block__Type;}
struct _global_ArrayType _global_Array_Maybe_____Maybe_rmir_Block__Type;struct _global_Maybe_____Maybe_rmir_Block__Some {
struct _global_Array_Maybe_rmir_Block_ field0;

};union _global_Maybe_____Maybe_rmir_Block__cases {
struct _global_Maybe_____Maybe_rmir_Block__Some Some;

};
struct _global_Maybe_____Maybe_rmir_Block_ {
union _global_Maybe_____Maybe_rmir_Block__cases cases;
unsigned char tag;
};
struct _global_Maybe_____Maybe_rmir_Block_ _global_Some_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_ n,struct _global_Context* p){
struct _global_Maybe_____Maybe_rmir_Block_ q;
q.cases.Some.field0 = n;q.tag = 0;
return q;}
struct _global_EnumType _global_Maybe_____Maybe_rmir_Block_Type;struct _global_EnumType* _global_Maybe_____Maybe_rmir_Block__get_type(struct _global_Maybe_____Maybe_rmir_Block_* self, struct _global_Context* c){return &_global_Maybe_____Maybe_rmir_Block_Type;}
struct _global_EnumType* _global_Maybe_____Maybe_rmir_Block__get_typeByValue(struct _global_Maybe_____Maybe_rmir_Block_ self, struct _global_Context* c){return &_global_Maybe_____Maybe_rmir_Block_Type;}
struct _global_PointerType _global_Maybe_rMaybe_____Maybe_rmir_Block__Type;struct _global_PointerType* _global_Maybe_rMaybe_____Maybe_rmir_Block___get_type(struct _global_Maybe_____Maybe_rmir_Block_*** self, struct _global_Context* c){return &_global_Maybe_rMaybe_____Maybe_rmir_Block__Type;}
struct _global_PointerType* _global_Maybe_rMaybe_____Maybe_rmir_Block___get_typeByValue(struct _global_Maybe_____Maybe_rmir_Block_** self, struct _global_Context* c){return &_global_Maybe_rMaybe_____Maybe_rmir_Block__Type;}
struct interpreter_Interpreter {
struct _global_Array_Maybe_string_ string_literals;
struct _global_Array_Maybe_rnone_ var_ptr;
struct _global_TemporaryStorage stack;
struct _global_TemporaryStorage var_stack;
struct _global_Array_____Maybe_rmir_Block_ blocks;
struct _global_Array_Maybe_____Maybe_rmir_Block__ all_blocks;
};
static inline struct interpreter_Interpreter interpreter_InterpreterInit(struct _global_Array_Maybe_string_ string_literals,struct _global_Array_Maybe_rnone_ var_ptr,struct _global_TemporaryStorage stack,struct _global_TemporaryStorage var_stack,struct _global_Array_____Maybe_rmir_Block_ blocks,struct _global_Array_Maybe_____Maybe_rmir_Block__ all_blocks){
struct interpreter_Interpreter v;
v.string_literals=string_literals;v.var_ptr=var_ptr;v.stack=stack;v.var_stack=var_stack;v.blocks=blocks;v.all_blocks=all_blocks;return v;
};
struct _global_StructType interpreter_InterpreterType;struct _global_StructType* interpreter_Interpreter_get_type(struct interpreter_Interpreter* self, struct _global_Context* c){return &interpreter_InterpreterType;}
struct _global_Field* interpreter_InterpreterType_fields;
struct _global_Array_rnone {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
void** data;
};
static inline struct _global_Array_rnone _global_Array_rnoneInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,void** data){
struct _global_Array_rnone w;
w.length=length;w.capacity=capacity;w.allocator=allocator;w.data=data;return w;
};
struct _global_ArrayType _global_Array_rnoneType;struct _global_ArrayType* _global_Array_rnone_get_type(struct _global_Array_rnone* self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType* _global_Array_rnone_get_typeByValue(struct _global_Array_rnone self, struct _global_Context* c){return &_global_Array_rnoneType;}
struct _global_ArrayType _global_Array_rnoneType;struct _global_PointerType _global_Maybe_rrnoneType;struct _global_PointerType* _global_Maybe_rrnone_get_type(void**** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
struct _global_PointerType* _global_Maybe_rrnone_get_typeByValue(void*** self, struct _global_Context* c){return &_global_Maybe_rrnoneType;}
typedef void(*printerpreter_Interpreterp___none)(struct interpreter_Interpreter*,struct _global_Context*) ;
struct _global_StaticArray_3_printerpreter_Interpreterp___none {
printerpreter_Interpreterp___none data[3];
};
struct _global_StaticArray_3_printerpreter_Interpreterp___none _global_StaticArray_3_printerpreter_Interpreterp___noneFill_array(printerpreter_Interpreterp___none with){
struct _global_StaticArray_3_printerpreter_Interpreterp___none tmp;
for (unsigned int i = 0; i < 3; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_3_printerpreter_Interpreterp___none _global_StaticArray_3_printerpreter_Interpreterp___noneInit(printerpreter_Interpreterp___none x,printerpreter_Interpreterp___none y,printerpreter_Interpreterp___none z){
struct _global_StaticArray_3_printerpreter_Interpreterp___none tmp;
tmp.data[0] = x;
tmp.data[1] = y;
tmp.data[2] = z;
return tmp; }
struct _global_ArrayType _global_StaticArray_3_printerpreter_Interpreterp___noneType;struct _global_ArrayType* _global_StaticArray_3_printerpreter_Interpreterp___none_get_type(struct _global_StaticArray_3_printerpreter_Interpreterp___none* self, struct _global_Context* c){return &_global_StaticArray_3_printerpreter_Interpreterp___noneType;}
struct _global_ArrayType* _global_StaticArray_3_printerpreter_Interpreterp___none_get_typeByValue(struct _global_StaticArray_3_printerpreter_Interpreterp___none self, struct _global_Context* c){return &_global_StaticArray_3_printerpreter_Interpreterp___noneType;}
struct _global_ArrayType _global_StaticArray_3_printerpreter_Interpreterp___noneType;
void* interpreter_pop_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* b);
void* interpreter_push_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* c);
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* d);
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* f);
void interpreter_log_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* g);
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_TemporaryStorage* interpreter_local_var_stack, struct _global_Array_rnone* interpreter_local_args, struct _global_Context* h);
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* j);
void interpreter_Interpreter_set_functions(struct interpreter_Interpreter* interpreter_self, struct mir_Program* interpreter_ir, struct _global_Context* k);
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* l);
