void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* h);
void** _global_Maybe_unwrap_rrnoneByValue(void** _global_self, struct _global_Context* h);

static inline void** _global_Maybe_unwrap_rrnone(void***,struct _global_Context* h);

void** _global_Maybe_unwrap_rrnoneByValue(void**,struct _global_Context* h);
struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block** _global_self, struct _global_Context* h);

static inline struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_(struct mir_Block***,struct _global_Context* h);

struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block**,struct _global_Context* h);
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void _global_log_float(float _global_s, struct _global_Context* h);
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void _global_log_int(int _global_s, struct _global_Context* h);
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* h);
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* h);
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* h);
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* h);
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h);
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* h);
void interpreter_push_stack_i32(struct interpreter_Interpreter* interpreter_self, int32_t interpreter_value, struct _global_Context* h);
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* h);
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* h);
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* h);
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* h);
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* h){;
_global_log_float(interpreter_pop_stack_float(interpreter_state,h),h);
;}
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* h){;
_global_log_int(interpreter_pop_stack_int(interpreter_state,h),h);
;}
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_Context* h){;
;
struct _global_Array_rnone interpreter_local_args;interpreter_local_args = _global_Array_rnoneInit(0, 0, NULL, NULL);;
struct _global_Array_mir_OpCode j =*((interpreter_block)->code);
for (unsigned int k = 0;k < j.length; k++) {
struct mir_OpCode interpreter_inst;interpreter_inst = *_global_Array_op_get_mir_OpCode(&j, k, h);
;unsigned int interpreter_i;interpreter_i = k;
struct _global_EnumType* interpreter_typ_of_block;interpreter_typ_of_block = mir_OpCode_get_type(NULL,h);;
struct mir_OpCode l =interpreter_inst;if(l.tag==9){struct mir_ReadInfo* interpreter_read_info = l.cases.Create.field0;

unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)interpreter_size,h);;
if((interpreter_read_info)->is_global){;
_global_Array_append_rnone(&((interpreter_self)->var_ptr),interpreter_ptr_to_var,h);
_global_assert((((interpreter_self)->var_ptr).length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),h);
;}
else{_global_Array_append_rnone(&(interpreter_local_args),interpreter_ptr_to_var,h);
_global_assert(((interpreter_local_args).length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),h);
;};
;}
else if(l.tag==14){unsigned int interpreter_a = l.cases.CondJump.field0;
unsigned int interpreter_b = l.cases.CondJump.field1;

_Bool interpreter_boolean;interpreter_boolean = interpreter_pop_stack_bool(interpreter_self,h);;
if(interpreter_boolean){;
return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_a,h));
;
;}
else{return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_b,h));
;
;};
;}
else if(l.tag==15){unsigned int interpreter_a = l.cases.Jump.field0;

return *(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)interpreter_a,h));
;
;}
else if(l.tag==11){struct mir_ReadInfo* interpreter_read_info = l.cases.Assign.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? *(_global_Array_op_get_rnone(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,h)):(*(_global_Array_op_get_rnone(&(interpreter_local_args),(unsigned int)(interpreter_read_info)->id,h))));;
unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)interpreter_size;;
void* interpreter_set_to;interpreter_set_to = _global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h);;
_global_memcpy_none(interpreter_ptr_to_var,interpreter_set_to,interpreter_size,h);
;}
else if(l.tag==10){struct mir_ReadInfo* interpreter_read_info = l.cases.Read.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? *(_global_Array_op_get_rnone(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,h)):(*(_global_Array_op_get_rnone(&(interpreter_local_args),(unsigned int)(interpreter_read_info)->id,h))));;
unsigned int interpreter_size;interpreter_size = types_CompilerType_calc_size(&((interpreter_read_info)->_type),h);;
void* interpreter_ptr;interpreter_ptr = _global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)interpreter_size,h);;
_global_memcpy_none(interpreter_ptr,interpreter_ptr_to_var,interpreter_size,h);
;}
else if(l.tag==0){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,h))+interpreter_pop_stack_int(interpreter_self,h),h);
;}
else if(l.tag==1){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,h))*interpreter_pop_stack_int(interpreter_self,h),h);
;}
else if(l.tag==2){
int interpreter_b;interpreter_b = interpreter_pop_stack_int(interpreter_self,h);;
int interpreter_a;interpreter_a = interpreter_pop_stack_int(interpreter_self,h);;
interpreter_push_stack_int(interpreter_self,interpreter_a/interpreter_b,h);
;}
else if(l.tag==12){struct types_FuncPtr* interpreter_func_ptr_type = l.cases.FuncCall.field0;

unsigned int interpreter_size_of_args;interpreter_size_of_args = 8;;
struct _global_StaticArray_StaticArray_S_types_CompilerType m =(interpreter_func_ptr_type)->args;
for (unsigned int n = 0;n < m.length; n++) {
struct types_CompilerType interpreter_arg;interpreter_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&m, n, h);
;unsigned int interpreter_i;interpreter_i = n;
interpreter_size_of_args=interpreter_size_of_args+types_CompilerType_calc_size(&(interpreter_arg),h);;
}
;
if((interpreter_func_ptr_type)->external){;
printerpreter_Interpreterp___none interpreter_func_ptr;interpreter_func_ptr = *((printerpreter_Interpreterp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,h)));;
interpreter_func_ptr(interpreter_self,h);
interpreter_pop_stack_pp___none(interpreter_self,h);
;}
else{struct mir_Function* interpreter_func_ptr;interpreter_func_ptr = *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,h)));;
interpreter_Interpreter_exec_function(interpreter_self,interpreter_func_ptr,h);
;};
;}
else if(l.tag==13){
return NULL;
;
;}
else if(l.tag==3){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,h))+interpreter_pop_stack_float(interpreter_self,h),h);
;}
else if(l.tag==4){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,h))*interpreter_pop_stack_float(interpreter_self,h),h);
;}
else if(l.tag==5){
float interpreter_b;interpreter_b = interpreter_pop_stack_float(interpreter_self,h);;
float interpreter_a;interpreter_a = interpreter_pop_stack_float(interpreter_self,h);;
interpreter_push_stack_float(interpreter_self,interpreter_a/interpreter_b,h);
;}
else if(l.tag==6){int32_t interpreter_num = l.cases.Store_i32.field0;

interpreter_push_stack_i32(interpreter_self,interpreter_num,h);
;}
else if(l.tag==7){float interpreter_num = l.cases.Store_f32.field0;

interpreter_push_stack_float(interpreter_self,interpreter_num,h);
;}
else if(l.tag==8){_Bool interpreter_b = l.cases.Store_bool.field0;

interpreter_push_stack_bool(interpreter_self,interpreter_b,h);
;}
;
}
;
;return NULL;
;}
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* h){;
;
_global_log_string(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(19,"executing function "),((interpreter_func)->name),h),_global_StringInit(0,""),h),h);
struct _global_StaticArray_StaticArray_S_rmir_Block j =(interpreter_func)->all_blocks;
for (unsigned int k = 0;k < j.length; k++) {
struct mir_Block* interpreter_block;interpreter_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&j, k, h);
;unsigned int interpreter_i;interpreter_i = k;
if((interpreter_block)->id>=((interpreter_self)->blocks).length){;
struct _global_Range l =_global_RangeInit(0,((interpreter_block)->id-((interpreter_self)->blocks).length+1));
for (unsigned int m = l.start; m < l.end; m++) {
unsigned int interpreter_c;interpreter_c = m;
;_global_Array_append_Maybe_rmir_Block_(&((interpreter_self)->blocks),NULL,h);
}
;
;};
*(_global_Array_op_get_Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)(interpreter_block)->id,h))=interpreter_block;;
}
;
struct mir_Block* interpreter_block;interpreter_block = *(_global_StaticArray_op_get_StaticArray_S_rmir_Block(&((interpreter_func)->all_blocks),(unsigned int)0,h));;
;while(1){struct mir_Block* n =interpreter_Interpreter_exec_block(interpreter_self,interpreter_block,h);if(n != NULL){struct mir_Block* interpreter_next_block = n;

interpreter_block=interpreter_next_block;;
;}
else if(1){
break;;
;}
;};
;}
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* h){;
struct _global_Array_Maybe_rmir_Block_ interpreter_all_blocks;interpreter_all_blocks = _global_Array_Maybe_rmir_Block_Init(0, 0, NULL, NULL);;
struct interpreter_Interpreter interpreter_i;interpreter_i = interpreter_InterpreterInit(_global_Array_rnoneInit(0, 0, NULL, NULL),_global_new_TemporaryStorage((uint64_t)10000,h),interpreter_all_blocks);;
printerpreter_Interpreterp___none interpreter_ptr_to_log_function;interpreter_ptr_to_log_function = interpreter_log_float;;
_global_Array_append_rnone(&((interpreter_i).var_ptr),(void*)&(interpreter_ptr_to_log_function),h);
printerpreter_Interpreterp___none interpreter_ptr_to_log_int_func;interpreter_ptr_to_log_int_func = interpreter_log_int;;
_global_Array_append_rnone(&((interpreter_i).var_ptr),(void*)&(interpreter_ptr_to_log_int_func),h);
struct _global_TemporaryStorage* j = &((interpreter_i).stack);
;
interpreter_Interpreter_exec_function(&(interpreter_i),&(*(_global_StaticArray_op_get_StaticArray_S_mir_Function(&((interpreter_ir).functions),(unsigned int)0,h))),h);
_global_TemporaryStorage_free_allocator(j,h);
;}
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),h);
;}
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),h);
;}

static inline void** tmpinterpreterV(struct _global_Array_rnone** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
void** j =(*_global_self)->data;
if(j != NULL){void** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),h));;
_global_memcpy_rnone(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),h));}
}
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpinterpreterV(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
void** _global_Maybe_unwrap_rrnoneByValue(void** _global_self, struct _global_Context* h){;
void** _global_x;;
void** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline void** _global_Maybe_unwrap_rrnone(void*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rrnoneByValue(*k,h);
}struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(struct mir_Block** _global_self, struct _global_Context* h){;
struct mir_Block** _global_x;;
struct mir_Block** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct mir_Block** _global_Maybe_unwrap_rMaybe_rmir_Block_(struct mir_Block*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rMaybe_rmir_Block_ByValue(*k,h);
}
static inline struct mir_Block** tmpinterpreterW(struct _global_Array_Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct mir_Block** j =(*_global_self)->data;
if(j != NULL){struct mir_Block** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),h));;
_global_memcpy_Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),h));}
}
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpinterpreterW(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(float);;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void _global_log_float(float _global_s, struct _global_Context* h){;
_global_c_log(_global_Float_toString(&(_global_s),h),h);
;}
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(int);;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void _global_log_int(int _global_s, struct _global_Context* h){;
_global_c_log(_global_int_toString(&(_global_s),h),h);
;}
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rnone(_global_self,1,h);
;}
else{_global_Array_reserve_rnone(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rrnoneByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(_Bool);;
;return *((_Bool*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rMaybe_rmir_Block_ByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rrnoneByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy(_global_target,_global_destination,(uint64_t)_global_length*sizeof(void),h);
;}
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* h){;
;
int* interpreter_ptr;interpreter_ptr = (int*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int),h));;
*(interpreter_ptr)=interpreter_value;;
;}
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* h){;
_global_assert(((interpreter_self)->stack).occupied>(uint64_t)0,_global_StringInit(18,"Popped empty stack"),h);
((interpreter_self)->stack).occupied=((interpreter_self)->stack).occupied-(uint64_t)sizeof(pp___none);;
;return *((pp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,h)));
;}
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* h){;
;
float* interpreter_ptr;interpreter_ptr = (float*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(float),h));;
*(interpreter_ptr)=interpreter_value;;
;}
void interpreter_push_stack_i32(struct interpreter_Interpreter* interpreter_self, int32_t interpreter_value, struct _global_Context* h){;
;
int32_t* interpreter_ptr;interpreter_ptr = (int32_t*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int32_t),h));;
*(interpreter_ptr)=interpreter_value;;
;}
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* h){;
;
_Bool* interpreter_ptr;interpreter_ptr = (_Bool*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(_Bool),h));;
*(interpreter_ptr)=interpreter_value;;
;}
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rmir_OpCodeByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rmir_Block_(_global_self,1,h);
;}
else{_global_Array_reserve_Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rMaybe_rmir_Block_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void interpreterInitTypes() { 
 
_global_Array_rnoneType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rnoneType.size->tag = 1;
_global_Array_rnoneType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rrnoneType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rrnoneType.nullable = 1;_global_Array_Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_rmir_Block_Type.size->tag = 1;
_global_Array_Maybe_rmir_Block_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rMaybe_rmir_Block_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rMaybe_rmir_Block_Type.nullable = 1;interpreter_InterpreterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
interpreter_InterpreterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
interpreter_InterpreterType_fields
,3
);
interpreter_InterpreterType.package = _global_StringInit(11, "interpreter");
interpreter_InterpreterType.name = _global_StringInit(11, "Interpreter");
interpreter_InterpreterType.size = sizeof(struct interpreter_Interpreter);
interpreter_InterpreterType_fields[0].name = _global_StringInit(7, "var_ptr");
interpreter_InterpreterType_fields[0].offset = offsetof(struct interpreter_Interpreter, var_ptr);
interpreter_InterpreterType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_rnone_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[1].name = _global_StringInit(5, "stack");
interpreter_InterpreterType_fields[1].offset = offsetof(struct interpreter_Interpreter, stack);
interpreter_InterpreterType_fields[1].field_type = 
_global_TypeFromStruct(
_global_TemporaryStorage_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
interpreter_InterpreterType_fields[2].name = _global_StringInit(6, "blocks");
interpreter_InterpreterType_fields[2].offset = offsetof(struct interpreter_Interpreter, blocks);
interpreter_InterpreterType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; }
void interpreterInit() { 
;
};