void _global_memcpy_Maybe_string_(struct _global_Maybe_string* _global_target, struct _global_Maybe_string* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_Maybe_____Maybe_rmir_Block__(struct _global_Maybe_____Maybe_rmir_Block_* _global_target, struct _global_Maybe_____Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_memcpy_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_target, struct _global_Array_Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_reserve_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_memcpy_Maybe_rnone_(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_log_float(float _global_s, struct _global_Context* m);
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void _global_log_int(int _global_s, struct _global_Context* m);
struct _global_String interpreter_pop_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_append_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, struct _global_Maybe_string _global_value, struct _global_Context* m);
void _global_Array_reserve_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* m);
void _global_Array_append_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, struct _global_Maybe_____Maybe_rmir_Block_ _global_value, struct _global_Context* m);
void _global_Array_reserve_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void interpreter_log_impl_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void interpreter_log_impl_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void interpreter_log_impl_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m);
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* m);
void insertByID_insert_at_index_rnone(struct _global_Array_Maybe_rnone_* insertByID_arr, unsigned int insertByID_id, void* insertByID_data, struct _global_Context* m);
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_* _global_Array_op_get_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m);
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m);
void insertByID_insert_at_index_string(struct _global_Array_Maybe_string_* insertByID_arr, unsigned int insertByID_id, struct _global_String insertByID_data, struct _global_Context* m);
struct _global_Maybe_string* _global_Array_op_get_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string _global_self, struct _global_Context* m);

static inline struct _global_String _global_Maybe_unwrap_string(struct _global_Maybe_string*,struct _global_Context* m);

struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string,struct _global_Context* m);
void interpreter_push_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_String interpreter_value, struct _global_Context* m);
void** _global_Array_op_get_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_index, struct _global_Context* m);
void* _global_Maybe_expect_rnoneByValue(void* _global_self, struct _global_String _global_mesg, struct _global_Context* m);

static inline void* _global_Maybe_expect_rnone(void**,struct _global_String,struct _global_Context* m);

void* _global_Maybe_expect_rnoneByValue(void*,struct _global_String,struct _global_Context* m);
void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* m);
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* m);
struct mir_Function* interpreter_pop_stack_rmir_Function(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
int interpreter_pop_under_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
int interpreter_pop_2_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* m);
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* m);
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* m);
float interpreter_pop_under_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
float interpreter_pop_2_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m);
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_Maybe_____Maybe_rmir_Block_* _global_Array_op_get_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_index, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_ _global_self, struct _global_Context* m);

static inline struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_(struct _global_Maybe_____Maybe_rmir_Block_*,struct _global_Context* m);

struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_,struct _global_Context* m);
void _global_Array_append_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Array_Maybe_rmir_Block_ _global_value, struct _global_Context* m);
struct _global_Array_Maybe_rmir_Block_ _global_Array_pop_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Context* m);
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* m);
void insertByID_insert_at_index_rmir_Block(struct _global_Array_Maybe_rmir_Block_* insertByID_arr, unsigned int insertByID_id, struct mir_Block* insertByID_data, struct _global_Context* m);
void insertByID_insert_at_index_____Maybe_rmir_Block_(struct _global_Array_Maybe_____Maybe_rmir_Block__* insertByID_arr, unsigned int insertByID_id, struct _global_Array_Maybe_rmir_Block_ insertByID_data, struct _global_Context* m);
printerpreter_Interpreterp___none* _global_StaticArray_op_get_3_printerpreter_Interpreterp___none(struct _global_StaticArray_3_printerpreter_Interpreterp___none* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_append_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, void* _global_value, struct _global_Context* m);
void* interpreter_pop_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* m){;
;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-interpreter_size;;
;return _global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m);
;}
void* interpreter_push_dynamic(struct interpreter_Interpreter* interpreter_self, uint64_t interpreter_size, struct _global_Context* m){;
;
;return _global_TemporaryStorage_alloc(&((interpreter_self)->stack),interpreter_size,m);
;}
void interpreter_log_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_float(interpreter_state,m);
;}
void interpreter_log_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_int(interpreter_state,m);
;}
void interpreter_log_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
interpreter_log_impl_string(interpreter_state,m);
;}
struct mir_Block* interpreter_Interpreter_exec_block(struct interpreter_Interpreter* interpreter_self, struct mir_Block* interpreter_block, struct _global_TemporaryStorage* interpreter_local_var_stack, struct _global_Array_rnone* interpreter_local_args, struct _global_Context* m){;
;
;
;
struct _global_Array_mir_OpCode n =*((interpreter_block)->code);
for (unsigned int p = 0;p < n.length; p++) {
struct mir_OpCode interpreter_inst;interpreter_inst = *_global_Array_op_get_mir_OpCode(&n, p, m);
;unsigned int interpreter_i;interpreter_i = p;
struct mir_OpCode q =interpreter_inst;if(q.tag==16){unsigned int interpreter_id = q.cases.FuncArg.field0;
struct mir_ReadInfo* interpreter_read_info = q.cases.FuncArg.field1;

unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(interpreter_local_var_stack,(uint64_t)interpreter_size,m);;
_global_Array_append_rnone(interpreter_local_args,interpreter_ptr_to_var,m);
;}
else if(q.tag==13){struct mir_ReadInfo* interpreter_read_info = q.cases.Create.field0;

unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr_to_var;interpreter_ptr_to_var = _global_TemporaryStorage_alloc(interpreter_local_var_stack,(uint64_t)interpreter_size,m);;
if((interpreter_read_info)->is_global){;
insertByID_insert_at_index_rnone(&((interpreter_self)->var_ptr),(interpreter_read_info)->id,interpreter_ptr_to_var,m);
;}
else{_global_Array_append_rnone(interpreter_local_args,interpreter_ptr_to_var,m);
_global_assert(((interpreter_local_args)->length-1)==(interpreter_read_info)->id,_global_StringInit(21,"Incorrect id assigned"),m);
;};
;}
else if(q.tag==19){unsigned int interpreter_a = q.cases.CondJump.field0;
unsigned int interpreter_b = q.cases.CondJump.field1;

_Bool interpreter_cond;interpreter_cond = interpreter_pop_stack_bool(interpreter_self,m);;
return *(_global_Array_op_get_Maybe_rmir_Block_(&(*(_global_Array_op_get_____Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)((interpreter_self)->blocks).length-1,m))),(unsigned int)(interpreter_cond ? interpreter_a:(interpreter_b)),m));
;
;}
else if(q.tag==20){unsigned int interpreter_a = q.cases.Jump.field0;

return *(_global_Array_op_get_Maybe_rmir_Block_(&(*(_global_Array_op_get_____Maybe_rmir_Block_(&((interpreter_self)->blocks),(unsigned int)((interpreter_self)->blocks).length-1,m))),(unsigned int)interpreter_a,m));
;
;}
else if(q.tag==22){unsigned int interpreter_id = q.cases.StringDecl.field0;
struct _global_String interpreter_str = q.cases.StringDecl.field1;

insertByID_insert_at_index_string(&((interpreter_self)->string_literals),interpreter_id,interpreter_str,m);
;}
else if(q.tag==21){unsigned int interpreter_id = q.cases.StringRef.field0;

interpreter_push_stack_string(interpreter_self,_global_Maybe_unwrap_stringByValue(*(_global_Array_op_get_Maybe_string_(&((interpreter_self)->string_literals),(unsigned int)interpreter_id,m)),m),m);
;}
else if(q.tag==15){struct mir_ReadInfo* interpreter_read_info = q.cases.Assign.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? _global_Maybe_expect_rnoneByValue(*(_global_Array_op_get_Maybe_rnone_(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,m)),_global_StringInit(32,"Could not assign global variable"),m):(*(_global_Array_op_get_rnone((struct _global_Array_rnone*)interpreter_local_args,(unsigned int)(interpreter_read_info)->id,m))));;
unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_set_to;interpreter_set_to = interpreter_pop_dynamic(interpreter_self,(uint64_t)interpreter_size,m);;
_global_memcpy_none(interpreter_ptr_to_var,interpreter_set_to,interpreter_size,m);
if(interpreter_i>0){;
struct mir_OpCode r =*(_global_Array_op_get_mir_OpCode((struct _global_Array_mir_OpCode*)(interpreter_block)->code,(unsigned int)interpreter_i-1,m));if(r.tag==16){unsigned int interpreter_id = r.cases.FuncArg.field0;
struct mir_ReadInfo* interpreter_name = r.cases.FuncArg.field1;

if(interpreter_id==0){;
interpreter_pop_stack_rmir_Function(interpreter_self,m);
;};
;}
else if(1){
;}
;
;};
;}
else if(q.tag==14){struct mir_ReadInfo* interpreter_read_info = q.cases.Read.field0;

void* interpreter_ptr_to_var;interpreter_ptr_to_var = ((interpreter_read_info)->is_global ? _global_Maybe_expect_rnoneByValue(*(_global_Array_op_get_Maybe_rnone_(&((interpreter_self)->var_ptr),(unsigned int)(interpreter_read_info)->id,m)),_global_StringInit(30,"Could not read global variable"),m):(*(_global_Array_op_get_rnone((struct _global_Array_rnone*)interpreter_local_args,(unsigned int)(interpreter_read_info)->id,m))));;
unsigned int interpreter_size;interpreter_size = mir_calc_size((interpreter_read_info)->_type,m);;
void* interpreter_ptr;interpreter_ptr = interpreter_push_dynamic(interpreter_self,(uint64_t)interpreter_size,m);;
_global_memcpy_none(interpreter_ptr,interpreter_ptr_to_var,interpreter_size,m);
;}
else if(q.tag==4){
interpreter_push_stack_bool(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))<(interpreter_pop_2_stack_int(interpreter_self,m)),m);
;}
else if(q.tag==0){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,m))+interpreter_pop_stack_int(interpreter_self,m),m);
;}
else if(q.tag==1){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))-interpreter_pop_2_stack_int(interpreter_self,m),m);
;}
else if(q.tag==2){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_stack_int(interpreter_self,m))*interpreter_pop_stack_int(interpreter_self,m),m);
;}
else if(q.tag==3){
interpreter_push_stack_int(interpreter_self,(interpreter_pop_under_int(interpreter_self,m))/interpreter_pop_2_stack_int(interpreter_self,m),m);
;}
else if(q.tag==17){struct types_FuncPtr* interpreter_func_ptr_type = q.cases.FuncCall.field0;

unsigned int interpreter_size_of_args;interpreter_size_of_args = sizeof(pp___none);;
struct _global_StaticArray_StaticArray_S_types_CompilerType s =(interpreter_func_ptr_type)->args;
for (unsigned int t = 0;t < s.length; t++) {
struct types_CompilerType interpreter_arg;interpreter_arg = *_global_StaticArray_op_get_StaticArray_S_types_CompilerType(&s, t, m);
;interpreter_size_of_args = interpreter_size_of_args+mir_calc_size(interpreter_arg,m);;
}
;
if((interpreter_func_ptr_type)->external){;
printerpreter_Interpreterp___none interpreter_func_ptr;interpreter_func_ptr = *((printerpreter_Interpreterp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,m)));;
interpreter_func_ptr(interpreter_self,m);
;}
else{struct mir_Function* interpreter_func_ptr;interpreter_func_ptr = *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)interpreter_size_of_args,m)));;
interpreter_Interpreter_exec_function(interpreter_self,interpreter_func_ptr,m);
;};
;}
else if(q.tag==18){struct types_CompilerType interpreter_typ = q.cases.FuncReturn.field0;

return NULL;
;
;}
else if(q.tag==5){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,m))+interpreter_pop_stack_float(interpreter_self,m),m);
;}
else if(q.tag==6){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))-interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==7){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_stack_float(interpreter_self,m))*interpreter_pop_stack_float(interpreter_self,m),m);
;}
else if(q.tag==8){
interpreter_push_stack_float(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))/interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==9){
interpreter_push_stack_bool(interpreter_self,(interpreter_pop_under_float(interpreter_self,m))<interpreter_pop_2_stack_float(interpreter_self,m),m);
;}
else if(q.tag==10){int32_t interpreter_num = q.cases.Store_i32.field0;

interpreter_push_stack_int(interpreter_self,(int)interpreter_num,m);
;}
else if(q.tag==11){float interpreter_num = q.cases.Store_f32.field0;

interpreter_push_stack_float(interpreter_self,interpreter_num,m);
;}
else if(q.tag==12){_Bool interpreter_b = q.cases.Store_bool.field0;

interpreter_push_stack_bool(interpreter_self,interpreter_b,m);
;}
;
}
;
;return NULL;
;}
void interpreter_Interpreter_exec_function(struct interpreter_Interpreter* interpreter_self, struct mir_Function* interpreter_func, struct _global_Context* m){;
;
struct _global_TemporaryStorage* n = &((interpreter_self)->var_stack);
uint64_t p = _global_TemporaryStorage_get_occupied(&((interpreter_self)->var_stack),m);
;
struct _global_Array_rnone interpreter_local_args;interpreter_local_args = _global_Array_rnoneInit(0, 0, NULL, NULL);;
struct mir_Block* interpreter_block;interpreter_block = *(_global_StaticArray_op_get_StaticArray_S_rmir_Block(&((interpreter_func)->all_blocks),(unsigned int)0,m));;
_global_Array_append_____Maybe_rmir_Block_(&((interpreter_self)->blocks),_global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(*(_global_Array_op_get_Maybe_____Maybe_rmir_Block__(&((interpreter_self)->all_blocks),(unsigned int)(interpreter_func)->id,m)),m),m);
;while(1){struct mir_Block* q =interpreter_Interpreter_exec_block(interpreter_self,interpreter_block,&((interpreter_self)->var_stack),&(interpreter_local_args),m);if(q != NULL){struct mir_Block* interpreter_next_block = q;

interpreter_block = interpreter_next_block;;
;}
else if(1){
break;;
;}
;};
_global_Array_pop_____Maybe_rmir_Block_(&((interpreter_self)->blocks),m);
_global_TemporaryStorage_reset_to(n,p,m);
;}
void interpreter_Interpreter_set_functions(struct interpreter_Interpreter* interpreter_self, struct mir_Program* interpreter_ir, struct _global_Context* m){;
;
struct _global_Range n =_global_RangeInit(0,((interpreter_ir)->functions).length);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int interpreter_i;interpreter_i = p;
;struct mir_Function* interpreter_func;interpreter_func = &(*(_global_StaticArray_op_get_StaticArray_S_mir_Function(&((interpreter_ir)->functions),(unsigned int)interpreter_i,m)));;
struct mir_Function** interpreter_func_ptr;interpreter_func_ptr = (struct mir_Function**)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(struct mir_Function*),m));;
*(interpreter_func_ptr) = interpreter_func;;
insertByID_insert_at_index_rnone(&((interpreter_self)->var_ptr),(interpreter_func)->id,(void*)interpreter_func_ptr,m);
struct _global_Array_Maybe_rmir_Block_ interpreter_blocks;interpreter_blocks = _global_Array_Maybe_rmir_Block_Init(0, 0, NULL, NULL);;
struct _global_StaticArray_StaticArray_S_rmir_Block q =(interpreter_func)->all_blocks;
for (unsigned int r = 0;r < q.length; r++) {
struct mir_Block* interpreter_block;interpreter_block = *_global_StaticArray_op_get_StaticArray_S_rmir_Block(&q, r, m);
;insertByID_insert_at_index_rmir_Block(&(interpreter_blocks),(interpreter_block)->id,interpreter_block,m);
}
;
insertByID_insert_at_index_____Maybe_rmir_Block_(&((interpreter_self)->all_blocks),(interpreter_func)->id,interpreter_blocks,m);
}
;
;}
void interpreter_exec(struct mir_Program interpreter_ir, struct _global_Context* m){;
struct _global_Array_Maybe_____Maybe_rmir_Block__ interpreter_all_blocks;interpreter_all_blocks = _global_Array_Maybe_____Maybe_rmir_Block__Init(0, 0, NULL, NULL);;
struct interpreter_Interpreter interpreter_i;interpreter_i = interpreter_InterpreterInit(_global_Array_Maybe_string_Init(0, 0, NULL, NULL),_global_Array_Maybe_rnone_Init(0, 0, NULL, NULL),_global_new_TemporaryStorage((uint64_t)10000,m),_global_new_TemporaryStorage((uint64_t)100000,m),_global_Array_____Maybe_rmir_Block_Init(0, 0, NULL, NULL),interpreter_all_blocks);;
struct _global_StaticArray_3_printerpreter_Interpreterp___none interpreter_ptr_to_func;interpreter_ptr_to_func = _global_StaticArray_3_printerpreter_Interpreterp___noneInit(interpreter_log_int,interpreter_log_float,interpreter_log_string);;
struct _global_Range n =_global_RangeInit(0,3);
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int interpreter_c;interpreter_c = p;
;_global_Array_append_Maybe_rnone_(&((interpreter_i).var_ptr),(void*)(&(*(_global_StaticArray_op_get_3_printerpreter_Interpreterp___none(&(interpreter_ptr_to_func),(unsigned int)interpreter_c,m)))),m);
}
;
struct _global_TemporaryStorage* q = &((interpreter_i).stack);
;
struct _global_TemporaryStorage* r = &((interpreter_i).var_stack);
;
interpreter_Interpreter_set_functions(&(interpreter_i),&(interpreter_ir),m);
interpreter_Interpreter_exec_function(&(interpreter_i),*(((struct mir_Function**)*(_global_Array_op_get_Maybe_rnone_(&((interpreter_i).var_ptr),(unsigned int)3,m)))),m);
_global_TemporaryStorage_free_allocator(q,m);
_global_TemporaryStorage_free_allocator(r,m);
;}
void _global_memcpy_Maybe_string_(struct _global_Maybe_string* _global_target, struct _global_Maybe_string* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_string),m);
;}
void _global_memcpy_Maybe_rmir_Block_(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),m);
;}
void _global_memcpy_Maybe_____Maybe_rmir_Block__(struct _global_Maybe_____Maybe_rmir_Block_* _global_target, struct _global_Maybe_____Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m);
;}
void _global_memcpy_rnone(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),m);
;}

static inline struct _global_Maybe_string* tmpinterpreterS(struct _global_Array_Maybe_string_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Maybe_string* n =(*_global_self)->data;
if(n != NULL){struct _global_Maybe_string* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Maybe_string* _global_newData;_global_newData = (struct _global_Maybe_string*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_string),m));;
_global_memcpy_Maybe_string_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Maybe_string*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_string),m));}
}
void _global_Array_reserve_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterS(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_memcpy_____Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_target, struct _global_Array_Maybe_rmir_Block_* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Array_Maybe_rmir_Block_),m);
;}

static inline struct mir_Block** tmpinterpreterT(struct _global_Array_Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct mir_Block** n =(*_global_self)->data;
if(n != NULL){struct mir_Block** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),m));;
_global_memcpy_Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),m));}
}
void _global_Array_reserve_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterT(&_global_self,&_global_newSize,&_global_allocator, m);;
;}

static inline struct _global_Maybe_____Maybe_rmir_Block_* tmpinterpreterV(struct _global_Array_Maybe_____Maybe_rmir_Block__** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Maybe_____Maybe_rmir_Block_* n =(*_global_self)->data;
if(n != NULL){struct _global_Maybe_____Maybe_rmir_Block_* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Maybe_____Maybe_rmir_Block_* _global_newData;_global_newData = (struct _global_Maybe_____Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m));;
_global_memcpy_Maybe_____Maybe_rmir_Block__(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Maybe_____Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Maybe_____Maybe_rmir_Block_),m));}
}
void _global_Array_reserve_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterV(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_memcpy_Maybe_rnone_(void** _global_target, void** _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(void*),m);
;}
void _global_log_float(float _global_s, struct _global_Context* m){;
_global_c_log(_global_Float_toString(&(_global_s),m),m);
;}
pp___none interpreter_pop_stack_pp___none(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(pp___none),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(pp___none);;
;return *((pp___none*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void _global_log_int(int _global_s, struct _global_Context* m){;
_global_c_log(_global_int_toString(&(_global_s),m),m);
;}
struct _global_String interpreter_pop_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(struct _global_String),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(struct _global_String);;
;return *((struct _global_String*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}

static inline void** tmpinterpreterW(struct _global_Array_rnone** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
void** n =(*_global_self)->data;
if(n != NULL){void** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));;
_global_memcpy_rnone(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));}
}
void _global_Array_reserve_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterW(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_Array_append_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, struct _global_Maybe_string _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_string_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_string_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Maybe_string*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

static inline struct _global_Array_Maybe_rmir_Block_* tmpinterpreterX(struct _global_Array_____Maybe_rmir_Block_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_Array_Maybe_rmir_Block_* n =(*_global_self)->data;
if(n != NULL){struct _global_Array_Maybe_rmir_Block_* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
struct _global_Array_Maybe_rmir_Block_* _global_newData;_global_newData = (struct _global_Array_Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_Maybe_rmir_Block_),m));;
_global_memcpy_____Maybe_rmir_Block_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (struct _global_Array_Maybe_rmir_Block_*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_Maybe_rmir_Block_),m));}
}
void _global_Array_reserve_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterX(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void _global_Array_append_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, struct mir_Block* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rmir_Block_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct mir_Block**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, struct _global_Maybe_____Maybe_rmir_Block_ _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_____Maybe_rmir_Block__(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_____Maybe_rmir_Block__(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Maybe_____Maybe_rmir_Block_*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

static inline void** tmpinterpreterY(struct _global_Array_Maybe_rnone_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
void** n =(*_global_self)->data;
if(n != NULL){void** _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
void** _global_newData;_global_newData = (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));;
_global_memcpy_Maybe_rnone_(_global_newData,_global_data,(*_global_self)->length,m);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
return _global_newData;}else if(n == NULL){return (void**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(void*),m));}
}
void _global_Array_reserve_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpinterpreterY(&_global_self,&_global_newSize,&_global_allocator, m);;
;}
void interpreter_log_impl_float(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_float(interpreter_pop_stack_float(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void interpreter_log_impl_int(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_int(interpreter_pop_stack_int(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void interpreter_log_impl_string(struct interpreter_Interpreter* interpreter_state, struct _global_Context* m){;
struct _global_Allocator* n = (m)->allocator;
uint64_t p = _global_Allocator_get_occupied((m)->allocator,m);
;
_global_log_string(interpreter_pop_stack_string(interpreter_state,m),m);
interpreter_pop_stack_pp___none(interpreter_state,m);
_global_Allocator_reset_to(n,p,m);
;}
void _global_Array_append_rnone(struct _global_Array_rnone* _global_self, void* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rnone(_global_self,1,m);
;}
else{_global_Array_reserve_rnone(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((void**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void insertByID_insert_at_index_rnone(struct _global_Array_Maybe_rnone_* insertByID_arr, unsigned int insertByID_id, void* insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_rnone_(insertByID_arr,NULL,m);
}
;
;};
*(_global_Array_op_get_Maybe_rnone_((struct _global_Array_Maybe_rnone_*)insertByID_arr,(unsigned int)insertByID_id,m)) = insertByID_data;;
;}
_Bool interpreter_pop_stack_bool(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(_Bool),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(_Bool);;
;return *((_Bool*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
struct _global_Array_Maybe_rmir_Block_* _global_Array_op_get_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Array_Maybe_rmir_Block_*)(_global_self)->data + (int64_t)_global_index);
;}
struct mir_Block** _global_Array_op_get_Maybe_rmir_Block_(struct _global_Array_Maybe_rmir_Block_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct mir_Block**)(_global_self)->data + (int64_t)_global_index);
;}
static inline struct _global_Maybe_string tmpinterpreterZ(struct _global_Maybe_Maybe_T r) {
struct _global_Maybe_string q;q.tag = r.tag;q.cases = *(union _global_Maybe_string_cases*) &(r.cases);return q;
}
void insertByID_insert_at_index_string(struct _global_Array_Maybe_string_* insertByID_arr, unsigned int insertByID_id, struct _global_String insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_string_(insertByID_arr,tmpinterpreterZ(_global_None),m);
}
;
;};
*(_global_Array_op_get_Maybe_string_((struct _global_Array_Maybe_string_*)insertByID_arr,(unsigned int)insertByID_id,m)) = _global_Some_string(insertByID_data,m);;
;}
struct _global_Maybe_string* _global_Array_op_get_Maybe_string_(struct _global_Array_Maybe_string_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Maybe_string*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_String _global_Maybe_unwrap_stringByValue(struct _global_Maybe_string _global_self, struct _global_Context* m){;
struct _global_String _global_x;;
struct _global_Maybe_string n =_global_self;if(n.tag==0){_global_x = n.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),m);
;}
;
;return _global_x;
;}
static inline struct _global_String _global_Maybe_unwrap_string(struct _global_Maybe_string* p,struct _global_Context* m){
return _global_Maybe_unwrap_stringByValue(*p,m);
}void interpreter_push_stack_string(struct interpreter_Interpreter* interpreter_self, struct _global_String interpreter_value, struct _global_Context* m){;
;
struct _global_String* interpreter_ptr;interpreter_ptr = (struct _global_String*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(struct _global_String),m));;
*(interpreter_ptr) = interpreter_value;;
;}
void** _global_Array_op_get_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((void**)(_global_self)->data + (int64_t)_global_index);
;}
void* _global_Maybe_expect_rnoneByValue(void* _global_self, struct _global_String _global_mesg, struct _global_Context* m){;
;
void* _global_x;;
void* n =_global_self;if(n != NULL){_global_x = n;

;}
else if(1){
_global_panic(_global_mesg,m);
;}
;
;return _global_x;
;}
static inline void* _global_Maybe_expect_rnone(void** p,struct _global_String q,struct _global_Context* m){
return _global_Maybe_expect_rnoneByValue(*p,q,m);
}void** _global_Array_op_get_rnone(struct _global_Array_rnone* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((void**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_memcpy_none(void* _global_target, void* _global_destination, unsigned int _global_length, struct _global_Context* m){;
;
;
_global_c_memcpy(_global_target,_global_destination,(uint64_t)_global_length*sizeof(void),m);
;}
struct mir_OpCode* _global_Array_op_get_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct mir_OpCode*)(_global_self)->data + (int64_t)_global_index);
;}
struct mir_Function* interpreter_pop_stack_rmir_Function(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(struct mir_Function*),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(struct mir_Function*);;
;return *((struct mir_Function**)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
int interpreter_pop_under_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(int),m)));
;}
int interpreter_pop_2_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)2*sizeof(int),_global_StringInit(18,"Popped empty stack"),m);
int* interpreter_ptr;interpreter_ptr = (int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)sizeof(int),m));;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(int);;
;return *(interpreter_ptr);
;}
void interpreter_push_stack_bool(struct interpreter_Interpreter* interpreter_self, _Bool interpreter_value, struct _global_Context* m){;
;
_Bool* interpreter_ptr;interpreter_ptr = (_Bool*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(_Bool),m));;
*(interpreter_ptr) = interpreter_value;;
;}
int interpreter_pop_stack_int(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(int),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(int);;
;return *((int*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void interpreter_push_stack_int(struct interpreter_Interpreter* interpreter_self, int interpreter_value, struct _global_Context* m){;
;
int* interpreter_ptr;interpreter_ptr = (int*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(int),m));;
*(interpreter_ptr) = interpreter_value;;
;}
float interpreter_pop_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)sizeof(float),_global_StringInit(18,"Popped empty stack"),m);
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)sizeof(float);;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied,m)));
;}
void interpreter_push_stack_float(struct interpreter_Interpreter* interpreter_self, float interpreter_value, struct _global_Context* m){;
;
float* interpreter_ptr;interpreter_ptr = (float*)(_global_TemporaryStorage_alloc(&((interpreter_self)->stack),(uint64_t)sizeof(float),m));;
*(interpreter_ptr) = interpreter_value;;
;}
float interpreter_pop_under_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
;return *((float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(float),m)));
;}
float interpreter_pop_2_stack_float(struct interpreter_Interpreter* interpreter_self, struct _global_Context* m){;
_global_assert(((interpreter_self)->stack).occupied>=(uint64_t)2*sizeof(float),_global_StringInit(18,"Popped empty stack"),m);
float* interpreter_ptr;interpreter_ptr = (float*)(_global_offsetPtr(((interpreter_self)->stack).data,(int64_t)((interpreter_self)->stack).occupied-(uint64_t)sizeof(float),m));;
((interpreter_self)->stack).occupied = ((interpreter_self)->stack).occupied-(uint64_t)2*sizeof(float);;
;return *(interpreter_ptr);
;}
struct mir_Block** _global_StaticArray_op_get_StaticArray_S_rmir_Block(struct _global_StaticArray_StaticArray_S_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_Maybe_____Maybe_rmir_Block_* _global_Array_op_get_Maybe_____Maybe_rmir_Block__(struct _global_Array_Maybe_____Maybe_rmir_Block__* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((struct _global_Maybe_____Maybe_rmir_Block_*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(struct _global_Maybe_____Maybe_rmir_Block_ _global_self, struct _global_Context* m){;
struct _global_Array_Maybe_rmir_Block_ _global_x;;
struct _global_Maybe_____Maybe_rmir_Block_ n =_global_self;if(n.tag==0){_global_x = n.cases.Some.field0;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),m);
;}
;
;return _global_x;
;}
static inline struct _global_Array_Maybe_rmir_Block_ _global_Maybe_unwrap_____Maybe_rmir_Block_(struct _global_Maybe_____Maybe_rmir_Block_* p,struct _global_Context* m){
return _global_Maybe_unwrap_____Maybe_rmir_Block_ByValue(*p,m);
}void _global_Array_append_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Array_Maybe_rmir_Block_ _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_____Maybe_rmir_Block_(_global_self,1,m);
;}
else{_global_Array_reserve_____Maybe_rmir_Block_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((struct _global_Array_Maybe_rmir_Block_*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_Array_Maybe_rmir_Block_ _global_Array_pop_____Maybe_rmir_Block_(struct _global_Array_____Maybe_rmir_Block_* _global_self, struct _global_Context* m){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),m);
;};
struct _global_Array_Maybe_rmir_Block_ _global_tmp;_global_tmp = *(_global_Array_op_get_____Maybe_rmir_Block_(_global_self,(unsigned int)(_global_self)->length-1,m));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_Function* _global_StaticArray_op_get_StaticArray_S_mir_Function(struct _global_StaticArray_StaticArray_S_mir_Function* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void insertByID_insert_at_index_rmir_Block(struct _global_Array_Maybe_rmir_Block_* insertByID_arr, unsigned int insertByID_id, struct mir_Block* insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_rmir_Block_(insertByID_arr,NULL,m);
}
;
;};
*(_global_Array_op_get_Maybe_rmir_Block_((struct _global_Array_Maybe_rmir_Block_*)insertByID_arr,(unsigned int)insertByID_id,m)) = insertByID_data;;
;}
static inline struct _global_Maybe_____Maybe_rmir_Block_ tmpinterpreterbb(struct _global_Maybe_Maybe_T r) {
struct _global_Maybe_____Maybe_rmir_Block_ q;q.tag = r.tag;q.cases = *(union _global_Maybe_____Maybe_rmir_Block__cases*) &(r.cases);return q;
}
void insertByID_insert_at_index_____Maybe_rmir_Block_(struct _global_Array_Maybe_____Maybe_rmir_Block__* insertByID_arr, unsigned int insertByID_id, struct _global_Array_Maybe_rmir_Block_ insertByID_data, struct _global_Context* m){;
;
;
if(insertByID_id>=(insertByID_arr)->length){;
struct _global_Range n =_global_RangeInit(0,(insertByID_id-(insertByID_arr)->length+1));
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int insertByID_c;insertByID_c = p;
;_global_Array_append_Maybe_____Maybe_rmir_Block__(insertByID_arr,tmpinterpreterbb(_global_None),m);
}
;
;};
*(_global_Array_op_get_Maybe_____Maybe_rmir_Block__((struct _global_Array_Maybe_____Maybe_rmir_Block__*)insertByID_arr,(unsigned int)insertByID_id,m)) = _global_Some_____Maybe_rmir_Block_(insertByID_data,m);;
;}
printerpreter_Interpreterp___none* _global_StaticArray_op_get_3_printerpreter_Interpreterp___none(struct _global_StaticArray_3_printerpreter_Interpreterp___none* _global_self, unsigned int _global_index, struct _global_Context* m){;
;
_global_assert(_global_index<3,_global_StringInit(13,"Out of bounds"),m);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_Maybe_rnone_(struct _global_Array_Maybe_rnone_* _global_self, void* _global_value, struct _global_Context* m){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_Maybe_rnone_(_global_self,1,m);
;}
else{_global_Array_reserve_Maybe_rnone_(_global_self,(_global_self)->capacity*2,m);
;};
;};
*((((void**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

void interpreterInitTypes() { 
 insertByIDInitTypes();
_global_Array_Maybe_string_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_string_Type.size->tag = 1;
_global_Array_Maybe_string_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_string_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;struct _global_Case* g =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
g[0].name = _global_StringInit(4, "Some");
g[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
g[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; g[0].args.data[0].offset = offsetof(struct _global_Maybe_string_Some, field0);
g[1].name = _global_StringInit(4, "None");
g[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_stringType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_stringType.tag_field.offset = offsetof(struct _global_Maybe_string, tag);
_global_Maybe_stringType.tag_field.field_type = 
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

_global_Maybe_stringType.size = sizeof(struct _global_Maybe_string);

_global_Maybe_stringType.package = _global_StringInit(7, "_global");
_global_Maybe_stringType.name = _global_StringInit(12, "Maybe_string");
_global_Maybe_stringType.cases.data = g;
_global_Maybe_stringType.cases.length = 2;
_global_Maybe_rMaybe_string_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_string_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_string_Type.nullable = 1;_global_Array_Maybe_rnone_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_rnone_Type.size->tag = 1;
_global_Array_Maybe_rnone_Type.array_type=
_global_TypeFromStruct(
_global_Maybe_rnone_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rMaybe_rnone_Type.p_type =
_global_TypeFromStruct(
_global_Maybe_rnone_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rMaybe_rnone_Type.nullable = 1;_global_Array_____Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_____Maybe_rmir_Block_Type.size->tag = 1;
_global_Array_____Maybe_rmir_Block_Type.array_type=
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_Maybe_rmir_Block_Type.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rMaybe_rmir_Block_Type.nullable = 1;_global_Maybe_r____Maybe_rmir_Block_Type.p_type =
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_Maybe_r____Maybe_rmir_Block_Type.nullable = 1;_global_Array_Maybe_____Maybe_rmir_Block__Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_Maybe_____Maybe_rmir_Block__Type.size->tag = 1;
_global_Array_Maybe_____Maybe_rmir_Block__Type.array_type=
_global_TypeFromStruct(
_global_Maybe_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;struct _global_Case* r =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
r[0].name = _global_StringInit(4, "Some");
r[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
r[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; r[0].args.data[0].offset = offsetof(struct _global_Maybe_____Maybe_rmir_Block__Some, field0);
r[1].name = _global_StringInit(4, "None");
r[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_____Maybe_rmir_Block_Type.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_____Maybe_rmir_Block_Type.tag_field.offset = offsetof(struct _global_Maybe_____Maybe_rmir_Block_, tag);
_global_Maybe_____Maybe_rmir_Block_Type.tag_field.field_type = 
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

_global_Maybe_____Maybe_rmir_Block_Type.size = sizeof(struct _global_Maybe_____Maybe_rmir_Block_);

_global_Maybe_____Maybe_rmir_Block_Type.package = _global_StringInit(7, "_global");
_global_Maybe_____Maybe_rmir_Block_Type.name = _global_StringInit(27, "Maybe_____Maybe_rmir_Block_");
_global_Maybe_____Maybe_rmir_Block_Type.cases.data = r;
_global_Maybe_____Maybe_rmir_Block_Type.cases.length = 2;
_global_Maybe_rMaybe_____Maybe_rmir_Block__Type.p_type =
_global_TypeFromStruct(
_global_Maybe_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rMaybe_____Maybe_rmir_Block__Type.nullable = 1;interpreter_InterpreterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 6);
interpreter_InterpreterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
interpreter_InterpreterType_fields
,6
);
interpreter_InterpreterType.package = _global_StringInit(11, "interpreter");
interpreter_InterpreterType.name = _global_StringInit(11, "Interpreter");
interpreter_InterpreterType.size = sizeof(struct interpreter_Interpreter);
interpreter_InterpreterType_fields[0].name = _global_StringInit(15, "string_literals");
interpreter_InterpreterType_fields[0].offset = offsetof(struct interpreter_Interpreter, string_literals);
interpreter_InterpreterType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_string__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[1].name = _global_StringInit(7, "var_ptr");
interpreter_InterpreterType_fields[1].offset = offsetof(struct interpreter_Interpreter, var_ptr);
interpreter_InterpreterType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_rnone__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[2].name = _global_StringInit(5, "stack");
interpreter_InterpreterType_fields[2].offset = offsetof(struct interpreter_Interpreter, stack);
interpreter_InterpreterType_fields[2].field_type = 
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
interpreter_InterpreterType_fields[3].name = _global_StringInit(9, "var_stack");
interpreter_InterpreterType_fields[3].offset = offsetof(struct interpreter_Interpreter, var_stack);
interpreter_InterpreterType_fields[3].field_type = 
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
interpreter_InterpreterType_fields[4].name = _global_StringInit(6, "blocks");
interpreter_InterpreterType_fields[4].offset = offsetof(struct interpreter_Interpreter, blocks);
interpreter_InterpreterType_fields[4].field_type = 
_global_TypeFromStruct(
_global_Array_____Maybe_rmir_Block__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
interpreter_InterpreterType_fields[5].name = _global_StringInit(10, "all_blocks");
interpreter_InterpreterType_fields[5].offset = offsetof(struct interpreter_Interpreter, all_blocks);
interpreter_InterpreterType_fields[5].field_type = 
_global_TypeFromStruct(
_global_Array_Maybe_____Maybe_rmir_Block___get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_rnoneType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rrnoneType.nullable = 1;_global_StaticArray_3_printerpreter_Interpreterp___noneType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_3_printerpreter_Interpreterp___noneType.size->tag = 0;
_global_StaticArray_3_printerpreter_Interpreterp___noneType.size->cases.Static.field0 = 3;
_global_StaticArray_3_printerpreter_Interpreterp___noneType.array_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; }
void interpreterInit() { 
insertByIDInit();;
;
;
};