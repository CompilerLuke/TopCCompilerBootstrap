void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_astToMIR_CFG(struct astToMIR_CFG* _global_target, struct astToMIR_CFG* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* q);
unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int* _global_self, struct _global_Context* q);

static inline unsigned int* _global_Maybe_unwrap_ruint(unsigned int**,struct _global_Context* q);

unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int*,struct _global_Context* q);
struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String* _global_self, struct _global_Context* q);

static inline struct _global_String* _global_Maybe_unwrap_rstring(struct _global_String**,struct _global_Context* q);

struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String*,struct _global_Context* q);
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* q);
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* q);
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint* _global_self, struct _global_Context* q);

static inline struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_(struct hashMap_HashBucket_uint**,struct _global_Context* q);

struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint*,struct _global_Context* q);
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* q);
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode* _global_self, struct _global_Context* q);

static inline struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCode(struct mir_OpCode**,struct _global_Context* q);

struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode*,struct _global_Context* q);
void _global_Array_reserve_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG* _global_self, struct _global_Context* q);

static inline struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFG(struct astToMIR_CFG**,struct _global_Context* q);

struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG*,struct _global_Context* q);
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block** _global_self, struct _global_Context* q);

static inline struct mir_Block** _global_Maybe_unwrap_rrmir_Block(struct mir_Block***,struct _global_Context* q);

struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block**,struct _global_Context* q);
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* q);
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* q);
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* q);
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* q);
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Context* q);
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* q);
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* q);
struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function* _global_self, struct _global_Context* q);

static inline struct mir_Function* _global_Maybe_unwrap_rmir_Function(struct mir_Function**,struct _global_Context* q);

struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function*,struct _global_Context* q);
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* q);
void _global_Array_append_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct astToMIR_CFG _global_value, struct _global_Context* q);
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* q);
struct astToMIR_CFG _global_Array_pop_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct _global_Context* q);
struct astToMIR_CFG* _global_Array_op_get_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_index, struct _global_Context* q);
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* q);
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* q);
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* q);
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* q);
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* q);
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* q);
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* q);
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* q);

#define astToMIR_atoi(q,r) atoi(q)

#define astToMIR_atof(s,t) atof(s)
struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG* astToMIR_self, struct _global_Context* v){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"CFG "),_global_uint_toStringByValue(((astToMIR_self)->return_to),v),v),_global_StringInit(0,""),v);
;}
static inline struct _global_String astToMIR_CFG_toStringByValue(struct astToMIR_CFG w,struct _global_Context* v){
return astToMIR_CFG_toString(&w,v);
}unsigned int astToMIR_Converter_push_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
(astToMIR_self)->block_counter=(astToMIR_self)->block_counter+1;;
;return (astToMIR_self)->block_counter;
;}
void astToMIR_Converter_append(struct astToMIR_Converter* astToMIR_self, struct mir_OpCode astToMIR_code, struct _global_Context* v){;
;
_global_Array_append_mir_OpCode(((astToMIR_self)->block)->code,astToMIR_code,v);
;}
void astToMIR_Converter_pop_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
(astToMIR_self)->block_counter=(astToMIR_self)->block_counter-1;;
;}
void astToMIR_Converter_push_cfg(struct astToMIR_Converter* astToMIR_self, struct astToMIR_CFG astToMIR_cfg, struct _global_Context* v){;
;
_global_Array_append_astToMIR_CFG(&((astToMIR_self)->cfgs),astToMIR_cfg,v);
struct mir_Block* astToMIR_block;;
struct mir_Block* w =(astToMIR_cfg).block;if(w != NULL){astToMIR_block = w;

;}
else if(1){
return ;
;
;}
;
(astToMIR_self)->block=astToMIR_block;;
_global_Array_append_rmir_Block((astToMIR_self)->all_blocks,astToMIR_block,v);
;}
void astToMIR_Converter_add_block(struct astToMIR_Converter* astToMIR_self, struct mir_Block* astToMIR_block, struct _global_Context* v){;
;
(astToMIR_self)->block=astToMIR_block;;
_global_Array_append_rmir_Block((astToMIR_self)->all_blocks,astToMIR_block,v);
;}
void astToMIR_Converter_pop_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
_global_Array_pop_astToMIR_CFG(&((astToMIR_self)->cfgs),v);
;}
struct astToMIR_CFG* astToMIR_Converter_current_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* v){;
;return &(*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-1,v)));
;}
struct mir_OpCode astToMIR_unsupported(struct _global_String astToMIR_mesg, struct _global_Context* v){;
_global_panic(astToMIR_mesg,v);
;return mir_Add_i32;
;}
_Bool astToMIR_is_block(struct ast_AST* astToMIR_node, struct _global_Context* v){;
;return ((astToMIR_node)->payload).tag==(ast_Block).tag;
;}

static inline unsigned int tmpastToMIRK(struct astToMIR_Converter** astToMIR_self,struct ast_AST** astToMIR_node,unsigned int* astToMIR_previous_num_vars,struct ast_AST** astToMIR_ident,struct ast_ReadInfo** astToMIR_read_info,unsigned int* astToMIR_id, struct _global_Context* v) {
if((*astToMIR_read_info)->is_global){;
(*astToMIR_self)->global_var_counter=(*astToMIR_self)->global_var_counter+1;;
return (*astToMIR_self)->global_var_counter-1;}
else{(*astToMIR_self)->var_counter=(*astToMIR_self)->var_counter+1;;
return (*astToMIR_self)->var_counter-1;}
}

static inline struct mir_OpCode tmpastToMIRL(struct astToMIR_Converter** astToMIR_self,struct ast_AST** astToMIR_node,unsigned int* astToMIR_previous_num_vars,struct ast_OperatorKind* astToMIR_op_kind,struct types_CompilerType* astToMIR_node_type,_Bool* astToMIR_is_int,_Bool* astToMIR_is_float, struct _global_Context* v) {
struct ast_OperatorKind K =*astToMIR_op_kind;
if(K.tag==0){return (*astToMIR_is_int ? mir_Add_i32 : (*astToMIR_is_float) ? mir_Add_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}else if(K.tag==1){return (*astToMIR_is_int ? mir_Mul_i32 : (*astToMIR_is_float) ? mir_Mul_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}else if(K.tag==2){return (*astToMIR_is_int ? mir_Div_i32 : (*astToMIR_is_float) ? mir_Div_f32:(astToMIR_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*astToMIR_node)->_type),v),v),_global_StringInit(0,""),v),v)));}
}
void astToMIR_Converter_convert_node(struct astToMIR_Converter* astToMIR_self, struct ast_AST* astToMIR_node, struct _global_Context* v){;
;
unsigned int astToMIR_previous_num_vars;astToMIR_previous_num_vars = (astToMIR_self)->var_counter;;
struct ast_Payload w =(astToMIR_node)->payload;if(w.tag==8){
;}
else if(w.tag==10){
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_Converter_push_block(astToMIR_self,v),NULL),v);
struct _global_Array_rast_AST x =(astToMIR_node)->nodes;
for (unsigned int y = 0;y < x.length; y++) {
struct ast_AST* astToMIR_n;astToMIR_n = *_global_Array_op_get_rast_AST(&x, y, v);
;unsigned int astToMIR_i;astToMIR_i = y;
astToMIR_Converter_convert_node(astToMIR_self,astToMIR_n,v);
}
;
;}
else if(1){
struct _global_Array_rast_AST z =(astToMIR_node)->nodes;
for (unsigned int B = 0;B < z.length; B++) {
struct ast_AST* astToMIR_n;astToMIR_n = *_global_Array_op_get_rast_AST(&z, B, v);
;unsigned int astToMIR_i;astToMIR_i = B;
astToMIR_Converter_convert_node(astToMIR_self,astToMIR_n,v);
}
;
;}
;
if(astToMIR_is_block(astToMIR_node,v)){;
(astToMIR_self)->var_counter=astToMIR_previous_num_vars;;
;};
struct ast_Payload C =(astToMIR_node)->payload;if(C.tag==5){struct ast_ReadInfo* astToMIR_read_info = C.cases.Identifier.field0;

astToMIR_Converter_append(astToMIR_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_node)->_type,*(hashMap_HashMap_op_get_uint(&((astToMIR_self)->vars),(struct _global_String)(astToMIR_read_info)->name,v))),v),v),v);
;}
else if(C.tag==7){
;}
else if(C.tag==11){
struct astToMIR_CFG astToMIR_cfg;astToMIR_cfg = *(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-2,v));;
astToMIR_Converter_append(astToMIR_self,mir_Jump((astToMIR_cfg).return_to,v),v);
;}
else if(C.tag==10){
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
struct astToMIR_CFG* astToMIR_cfg;astToMIR_cfg = astToMIR_Converter_current_cfg(astToMIR_self,v);;
unsigned int astToMIR_to;astToMIR_to = (astToMIR_cfg)->return_to;;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
astToMIR_Converter_add_block(astToMIR_self,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v),v);
;}
else if(C.tag==12){
unsigned int astToMIR_to;astToMIR_to = astToMIR_Converter_push_block(astToMIR_self,v);;
struct ast_AST* astToMIR_owner;;
struct ast_AST* D =(astToMIR_node)->owner;if(D != NULL){astToMIR_owner = D;

;}
else if(1){
_global_panic(_global_StringInit(25,"If Condition has no owner"),v);
;}
;
unsigned int astToMIR_return_to;astToMIR_return_to = (((astToMIR_owner)->nodes).length==2 ? (*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-1,v))).return_to:(astToMIR_Converter_push_block(astToMIR_self,v)));;
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_append(astToMIR_self,mir_CondJump(astToMIR_to,astToMIR_return_to,v),v);
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_return_to,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v)),v);
;}
else if(C.tag==13){
struct astToMIR_CFG* astToMIR_cfg;astToMIR_cfg = astToMIR_Converter_current_cfg(astToMIR_self,v);;
unsigned int astToMIR_to;astToMIR_to = (astToMIR_cfg)->return_to;;
unsigned int astToMIR_end_if;astToMIR_end_if = (*(_global_Array_op_get_astToMIR_CFG(&((astToMIR_self)->cfgs),(unsigned int)((astToMIR_self)->cfgs).length-2,v))).return_to;;
struct _global_Array_mir_OpCode* astToMIR_codes;astToMIR_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
astToMIR_Converter_pop_cfg(astToMIR_self,v);
astToMIR_Converter_push_cfg(astToMIR_self,astToMIR_CFGInit(astToMIR_end_if,_global_box_mir_Block(mir_BlockInit(astToMIR_to,astToMIR_codes),v)),v);
;}
else if(C.tag==9){
struct ast_AST* astToMIR_owner;;
struct ast_AST* F =(astToMIR_node)->owner;if(F != NULL){astToMIR_owner = F;

;}
else if(1){
return ;
;
;}
;
struct ast_AST* astToMIR_create;astToMIR_create = *(_global_Array_op_get_rast_AST(&((astToMIR_owner)->nodes),(unsigned int)0,v));;
struct ast_AST* astToMIR_ident;astToMIR_ident = *(_global_Array_op_get_rast_AST(&((astToMIR_create)->nodes),(unsigned int)0,v));;
struct ast_ReadInfo* astToMIR_read_info;;
struct ast_Payload G =(astToMIR_ident)->payload;if(G.tag==5){astToMIR_read_info = G.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),v);
;}
;
astToMIR_Converter_append(astToMIR_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_ident)->_type,*(hashMap_HashMap_op_get_uint(&((astToMIR_self)->vars),(struct _global_String)(astToMIR_read_info)->name,v))),v),v),v);
;}
else if(C.tag==8){
struct ast_AST* astToMIR_ident;astToMIR_ident = *(_global_Array_op_get_rast_AST(&((astToMIR_node)->nodes),(unsigned int)0,v));;
struct ast_ReadInfo* astToMIR_read_info;;
struct ast_Payload H =(astToMIR_ident)->payload;if(H.tag==5){astToMIR_read_info = H.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),v);
;}
;
unsigned int astToMIR_id;astToMIR_id = tmpastToMIRK(&astToMIR_self,&astToMIR_node,&astToMIR_previous_num_vars,&astToMIR_ident,&astToMIR_read_info,&astToMIR_id, v);;
hashMap_HashMap_insert_uint(&((astToMIR_self)->vars),(astToMIR_read_info)->name,astToMIR_id,v);
astToMIR_Converter_append(astToMIR_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit((astToMIR_read_info)->is_global,(astToMIR_ident)->_type,astToMIR_id),v),v),v);
;}
else if(C.tag==6){
struct types_CompilerType astToMIR_func_ptr;astToMIR_func_ptr = (*(_global_Array_op_get_rast_AST(&((astToMIR_node)->nodes),(unsigned int)0,v)))->_type;;
struct types_CompilerType J =astToMIR_func_ptr;if(J.vtable->type.data == types_FuncPtr_get_type(NULL,v)){struct types_FuncPtr* astToMIR_func = (struct types_FuncPtr*)J.data;
astToMIR_Converter_append(astToMIR_self,mir_FuncCall(astToMIR_func,v),v);
;}
else if(1){
_global_panic(_global_StringInit(46,"Expecting func pointer as argument to function"),v);
;}
;
;}
else if(C.tag==4){struct ast_OperatorKind astToMIR_op_kind = C.cases.Operator.field0;

struct types_CompilerType astToMIR_node_type;astToMIR_node_type = (astToMIR_node)->_type;;
_Bool astToMIR_is_int;astToMIR_is_int = types_is_kind_types_Int(astToMIR_node_type,v);;
_Bool astToMIR_is_float;astToMIR_is_float = types_is_kind_types_Float(astToMIR_node_type,v);;
astToMIR_Converter_append(astToMIR_self,tmpastToMIRL(&astToMIR_self,&astToMIR_node,&astToMIR_previous_num_vars,&astToMIR_op_kind,&astToMIR_node_type,&astToMIR_is_int,&astToMIR_is_float, v),v);
;}
else if(C.tag==3){_Bool astToMIR_is_true = C.cases.Bool.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_bool(astToMIR_is_true,v),v);
;}
else if(C.tag==1){struct _global_String astToMIR_s = C.cases.Int.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_i32((int32_t)astToMIR_atoi(_global_String_to_c_stringByValue(astToMIR_s,v),v),v),v);
;}
else if(C.tag==2){struct _global_String astToMIR_s = C.cases.Float.field0;

astToMIR_Converter_append(astToMIR_self,mir_Store_f32((float)astToMIR_atof(_global_String_to_c_stringByValue(astToMIR_s,v),v),v),v);
;}
else if(C.tag==0){
;}
;
;}
struct mir_Program astToMIR_convert(struct ast_AST* astToMIR_node, struct _global_Context* v){;
struct _global_Array_mir_Function astToMIR_functions;astToMIR_functions = _global_Array_mir_FunctionInit(0, 0, NULL, NULL);;
struct _global_Array_mir_OpCode* astToMIR_op_codes;astToMIR_op_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),v);;
struct _global_Array_rmir_Block astToMIR_all_blocks;astToMIR_all_blocks = _global_Array_rmir_BlockInit(0, 0, NULL, NULL);;
struct _global_Array_astToMIR_CFG astToMIR_cfgs;astToMIR_cfgs = _global_Array_astToMIR_CFGInit(0, 0, NULL, NULL);;
struct mir_Block* astToMIR_block;astToMIR_block = _global_box_mir_Block(mir_BlockInit(0,astToMIR_op_codes),v);;
struct astToMIR_Converter astToMIR_converter;astToMIR_converter = astToMIR_ConverterInit(0,0,hashMap_make_HashMap_uint(v),astToMIR_cfgs,astToMIR_block,0,&(astToMIR_all_blocks));;
astToMIR_Converter_push_cfg(&(astToMIR_converter),astToMIR_CFGInit(0,astToMIR_block),v);
hashMap_HashMap_insert_uint(&((astToMIR_converter).vars),_global_StringInit(3,"log"),0,v);
(astToMIR_converter).global_var_counter=(astToMIR_converter).global_var_counter+1;;
hashMap_HashMap_insert_uint(&((astToMIR_converter).vars),_global_StringInit(7,"log_int"),1,v);
(astToMIR_converter).global_var_counter=(astToMIR_converter).global_var_counter+1;;
astToMIR_Converter_convert_node(&(astToMIR_converter),astToMIR_node,v);
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block(&(astToMIR_all_blocks),(unsigned int)(astToMIR_all_blocks).length-1,v)))->code,mir_FuncReturn,v);
struct mir_Function astToMIR_main;astToMIR_main = mir_FunctionInit(_global_StringInit(4,"main"),_global_StaticArray_StaticArray_S_mir_CreateVarInit(NULL, 0),_global_StaticArray_StaticArray_S_rmir_BlockInit(astToMIR_all_blocks.data, astToMIR_all_blocks.length));;
_global_Array_append_mir_Function(&(astToMIR_functions),astToMIR_main,v);
;return mir_ProgramInit(_global_StaticArray_StaticArray_S_mir_FunctionInit(astToMIR_functions.data, astToMIR_functions.length));
;}
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_String),v);
;}
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(unsigned int),v);
;}
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_uint),v);
;}
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_OpCode),v);
;}
void _global_memcpy_astToMIR_CFG(struct astToMIR_CFG* _global_target, struct astToMIR_CFG* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct astToMIR_CFG),v);
;}
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),v);
;}
unsigned int* _global_Maybe_unwrap_ruintByValue(unsigned int* _global_self, struct _global_Context* v){;
unsigned int* _global_x;;
unsigned int* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline unsigned int* _global_Maybe_unwrap_ruint(unsigned int** x,struct _global_Context* v){
return _global_Maybe_unwrap_ruintByValue(*x,v);
}struct _global_String* _global_Maybe_unwrap_rstringByValue(struct _global_String* _global_self, struct _global_Context* v){;
struct _global_String* _global_x;;
struct _global_String* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct _global_String* _global_Maybe_unwrap_rstring(struct _global_String** x,struct _global_Context* v){
return _global_Maybe_unwrap_rstringByValue(*x,v);
}
static inline struct _global_String* tmpastToMIRM(struct _global_Array_string** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct _global_String* w =(*_global_self)->data;
if(w != NULL){struct _global_String* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct _global_String* _global_newData;_global_newData = (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),v));;
_global_memcpy_string(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),v));}
}
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRM(&_global_self,&_global_newSize,&_global_allocator, v);;
;}

static inline unsigned int* tmpastToMIRN(struct _global_Array_uint** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
unsigned int* w =(*_global_self)->data;
if(w != NULL){unsigned int* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
unsigned int* _global_newData;_global_newData = (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),v));;
_global_memcpy_uint(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),v));}
}
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRN(&_global_self,&_global_newSize,&_global_allocator, v);;
;}

static inline struct hashMap_HashBucket_uint* tmpastToMIRP(struct _global_Array_hashMap_HashBucket_uint_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct hashMap_HashBucket_uint* w =(*_global_self)->data;
if(w != NULL){struct hashMap_HashBucket_uint* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct hashMap_HashBucket_uint* _global_newData;_global_newData = (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),v));;
_global_memcpy_hashMap_HashBucket_uint_(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),v));}
}
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRP(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(struct hashMap_HashBucket_uint* _global_self, struct _global_Context* v){;
struct hashMap_HashBucket_uint* _global_x;;
struct hashMap_HashBucket_uint* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashBucket_uint* _global_Maybe_unwrap_rhashMap_HashBucket_uint_(struct hashMap_HashBucket_uint** x,struct _global_Context* v){
return _global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue(*x,v);
}void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* v){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Function),v);
;}

static inline struct mir_OpCode* tmpastToMIRQ(struct _global_Array_mir_OpCode** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_OpCode* w =(*_global_self)->data;
if(w != NULL){struct mir_OpCode* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_OpCode* _global_newData;_global_newData = (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),v));;
_global_memcpy_mir_OpCode(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),v));}
}
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRQ(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCodeByValue(struct mir_OpCode* _global_self, struct _global_Context* v){;
struct mir_OpCode* _global_x;;
struct mir_OpCode* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_OpCode* _global_Maybe_unwrap_rmir_OpCode(struct mir_OpCode** x,struct _global_Context* v){
return _global_Maybe_unwrap_rmir_OpCodeByValue(*x,v);
}
static inline struct astToMIR_CFG* tmpastToMIRR(struct _global_Array_astToMIR_CFG** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct astToMIR_CFG* w =(*_global_self)->data;
if(w != NULL){struct astToMIR_CFG* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct astToMIR_CFG* _global_newData;_global_newData = (struct astToMIR_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct astToMIR_CFG),v));;
_global_memcpy_astToMIR_CFG(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct astToMIR_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct astToMIR_CFG),v));}
}
void _global_Array_reserve_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRR(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFGByValue(struct astToMIR_CFG* _global_self, struct _global_Context* v){;
struct astToMIR_CFG* _global_x;;
struct astToMIR_CFG* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct astToMIR_CFG* _global_Maybe_unwrap_rastToMIR_CFG(struct astToMIR_CFG** x,struct _global_Context* v){
return _global_Maybe_unwrap_rastToMIR_CFGByValue(*x,v);
}
static inline struct mir_Block** tmpastToMIRS(struct _global_Array_rmir_Block** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_Block** w =(*_global_self)->data;
if(w != NULL){struct mir_Block** _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),v));;
_global_memcpy_rmir_Block(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),v));}
}
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRS(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_Block** _global_Maybe_unwrap_rrmir_BlockByValue(struct mir_Block** _global_self, struct _global_Context* v){;
struct mir_Block** _global_x;;
struct mir_Block** w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_Block** _global_Maybe_unwrap_rrmir_Block(struct mir_Block*** x,struct _global_Context* v){
return _global_Maybe_unwrap_rrmir_BlockByValue(*x,v);
}struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return ((_global_self)->data + (int64_t)_global_index);
;}
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_ruintByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rstringByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_string(_global_self,1,v);
;}
else{_global_Array_reserve_string(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rstringByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_uint(_global_self,1,v);
;}
else{_global_Array_reserve_uint(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_ruintByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Context* v){;return hashMap_HashBucket_uintInit(_global_Array_stringInit(0, 0, NULL, NULL),_global_Array_uintInit(0, 0, NULL, NULL));
;}
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,1,v);
;}
else{_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashBucket_uint_ByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

static inline struct mir_Function* tmpastToMIRT(struct _global_Array_mir_Function** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* v) {
struct mir_Function* w =(*_global_self)->data;
if(w != NULL){struct mir_Function* _global_data = w;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),v);
struct mir_Function* _global_newData;_global_newData = (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),v));;
_global_memcpy_mir_Function(_global_newData,_global_data,(*_global_self)->length,v);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,v);
return _global_newData;}else if(w == NULL){return (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),v));}
}
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* v){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(v)->allocator,v);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastToMIRT(&_global_self,&_global_newSize,&_global_allocator, v);;
;}
struct mir_Function* _global_Maybe_unwrap_rmir_FunctionByValue(struct mir_Function* _global_self, struct _global_Context* v){;
struct mir_Function* _global_x;;
struct mir_Function* w =_global_self;if(w != NULL){_global_x = w;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),v);
;}
;
;return _global_x;
;}
static inline struct mir_Function* _global_Maybe_unwrap_rmir_Function(struct mir_Function** x,struct _global_Context* v){
return _global_Maybe_unwrap_rmir_FunctionByValue(*x,v);
}void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_OpCode(_global_self,1,v);
;}
else{_global_Array_reserve_mir_OpCode(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rmir_OpCodeByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct astToMIR_CFG _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_astToMIR_CFG(_global_self,1,v);
;}
else{_global_Array_reserve_astToMIR_CFG(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rastToMIR_CFGByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_Block(_global_self,1,v);
;}
else{_global_Array_reserve_rmir_Block(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rrmir_BlockByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct astToMIR_CFG _global_Array_pop_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, struct _global_Context* v){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),v);
;};
struct astToMIR_CFG _global_tmp;_global_tmp = *(_global_Array_op_get_astToMIR_CFG(_global_self,(unsigned int)(_global_self)->length-1,v));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
struct astToMIR_CFG* _global_Array_op_get_astToMIR_CFG(struct _global_Array_astToMIR_CFG* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rastToMIR_CFGByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* v){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,v);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,v)));;
struct _global_Array_string w =(hashMap_bucket)->keys;
for (unsigned int x = 0;x < w.length; x++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&w, x, v);
;unsigned int hashMap_i;hashMap_i = x;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,v)){;
return &(*(_global_Array_op_get_uint(&((hashMap_bucket)->values),(unsigned int)hashMap_i,v)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),v),_global_StringInit(12," in hash map"),v),v);
;return (unsigned int*)0;
;}
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* v){;
struct mir_ReadInfo* _global_pointer;_global_pointer = (struct mir_ReadInfo*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct mir_ReadInfo),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* v){;
struct _global_Array_mir_OpCode* _global_pointer;_global_pointer = (struct _global_Array_mir_OpCode*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct _global_Array_mir_OpCode),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* v){;
struct mir_Block* _global_pointer;_global_pointer = (struct mir_Block*)(_global_Allocator_alloc((v)->allocator,(uint64_t)sizeof(struct mir_Block),v));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* v){;
;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,v);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,v)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,v);
_global_Array_append_uint(&((hashMap_bucket)->values),hashMap_value,v);
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* v){struct _global_Array_hashMap_HashBucket_uint_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_uint_Init(0, 0, NULL, NULL);;
struct _global_Range w =_global_RangeInit(0,hashMap_default_table_size);
for (unsigned int x = w.start; x < w.end; x++) {
unsigned int hashMap_i;hashMap_i = x;
;_global_Array_append_hashMap_HashBucket_uint_(&(hashMap_buckets),hashMap_make_HashBucket_uint(v),v);
}
;
;return hashMap_HashMap_uintInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(hashMap_buckets.data, hashMap_buckets.length));
;}
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* v){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),v);
;return (_global_Maybe_unwrap_rrmir_BlockByValue((_global_self)->data,v) + (int64_t)_global_index);
;}
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* v){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_Function(_global_self,1,v);
;}
else{_global_Array_reserve_mir_Function(_global_self,(_global_self)->capacity*2,v);
;};
;};
*(((_global_Maybe_unwrap_rmir_FunctionByValue((_global_self)->data,v) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

void astToMIRInitTypes() { 
 mirInitTypes();hashMapInitTypes();
_global_Array_mir_OpCodeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_OpCodeType.size->tag = 1;
_global_Array_mir_OpCodeType.array_type=
_global_TypeFromStruct(
mir_OpCode_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;mir_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
mir_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ReadInfoType_fields
,3
);
mir_ReadInfoType.package = _global_StringInit(3, "mir");
mir_ReadInfoType.name = _global_StringInit(8, "ReadInfo");
mir_ReadInfoType.size = sizeof(struct mir_ReadInfo);
mir_ReadInfoType_fields[0].name = _global_StringInit(9, "is_global");
mir_ReadInfoType_fields[0].offset = offsetof(struct mir_ReadInfo, is_global);
mir_ReadInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;
mir_ReadInfoType_fields[1].name = _global_StringInit(5, "_type");
mir_ReadInfoType_fields[1].offset = offsetof(struct mir_ReadInfo, _type);
mir_ReadInfoType_fields[1].field_type = 
_global_TypeFromStruct(
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
mir_ReadInfoType_fields[2].name = _global_StringInit(2, "id");
mir_ReadInfoType_fields[2].offset = offsetof(struct mir_ReadInfo, id);
mir_ReadInfoType_fields[2].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;mir_Add_i32.tag = 0;
mir_Mul_i32.tag = 1;
mir_Div_i32.tag = 2;
mir_Add_f32.tag = 3;
mir_Mul_f32.tag = 4;
mir_Div_f32.tag = 5;
mir_FuncReturn.tag = 13;
struct _global_Case* M =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 16);
M[0].name = _global_StringInit(7, "Add_i32");
M[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[1].name = _global_StringInit(7, "Mul_i32");
M[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[2].name = _global_StringInit(7, "Div_i32");
M[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[3].name = _global_StringInit(7, "Add_f32");
M[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[4].name = _global_StringInit(7, "Mul_f32");
M[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[5].name = _global_StringInit(7, "Div_f32");
M[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[6].name = _global_StringInit(9, "Store_i32");
M[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[6].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_i32_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[6].args.data[0].offset = offsetof(struct mir_OpCode_Store_i32, field0);
M[7].name = _global_StringInit(9, "Store_f32");
M[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[7].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Float_get_type(NULL,(&_global_context))
,
&rFloatType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_FloatType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_FloatType_toString
, &_global_FloatType_get_size
)
; M[7].args.data[0].offset = offsetof(struct mir_OpCode_Store_f32, field0);
M[8].name = _global_StringInit(10, "Store_bool");
M[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[8].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; M[8].args.data[0].offset = offsetof(struct mir_OpCode_Store_bool, field0);
M[9].name = _global_StringInit(6, "Create");
M[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[9].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; M[9].args.data[0].offset = offsetof(struct mir_OpCode_Create, field0);
M[10].name = _global_StringInit(4, "Read");
M[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[10].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; M[10].args.data[0].offset = offsetof(struct mir_OpCode_Read, field0);
M[11].name = _global_StringInit(6, "Assign");
M[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[11].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_ReadInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; M[11].args.data[0].offset = offsetof(struct mir_OpCode_Assign, field0);
M[12].name = _global_StringInit(8, "FuncCall");
M[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[12].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; M[12].args.data[0].offset = offsetof(struct mir_OpCode_FuncCall, field0);
M[13].name = _global_StringInit(10, "FuncReturn");
M[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
M[14].name = _global_StringInit(8, "CondJump");
M[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
M[14].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[14].args.data[0].offset = offsetof(struct mir_OpCode_CondJump, field0);
M[14].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[14].args.data[1].offset = offsetof(struct mir_OpCode_CondJump, field1);
M[15].name = _global_StringInit(4, "Jump");
M[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
M[15].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; M[15].args.data[0].offset = offsetof(struct mir_OpCode_Jump, field0);
mir_OpCodeType.tag_field.name = _global_StringInit(3, "tag");

mir_OpCodeType.tag_field.offset = offsetof(struct mir_OpCode, tag);
mir_OpCodeType.tag_field.field_type = 
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

mir_OpCodeType.size = sizeof(struct mir_OpCode);

mir_OpCodeType.package = _global_StringInit(3, "mir");
mir_OpCodeType.name = _global_StringInit(6, "OpCode");
mir_OpCodeType.cases.data = M;
mir_OpCodeType.cases.length = 16;
_global_Maybe_rmir_OpCodeType.p_type =
_global_TypeFromStruct(
mir_OpCode_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rmir_OpCodeType.nullable = 1;mir_BlockType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
mir_BlockType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_BlockType_fields
,2
);
mir_BlockType.package = _global_StringInit(3, "mir");
mir_BlockType.name = _global_StringInit(5, "Block");
mir_BlockType.size = sizeof(struct mir_Block);
mir_BlockType_fields[0].name = _global_StringInit(2, "id");
mir_BlockType_fields[0].offset = offsetof(struct mir_Block, id);
mir_BlockType_fields[0].field_type = 
_global_TypeFromStruct(
&mir_ID_Type
,
&rAliasType_VTABLE_FOR_Type
,
rAliasType_VTABLE_FOR_Type.type
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
;
mir_BlockType_fields[1].name = _global_StringInit(4, "code");
mir_BlockType_fields[1].offset = offsetof(struct mir_Block, code);
mir_BlockType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_mir_OpCode_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rmir_BlockType.p_type =
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_BlockType.nullable = 1;astToMIR_CFGType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
astToMIR_CFGType.fields = _global_StaticArray_StaticArray_S_FieldInit(
astToMIR_CFGType_fields
,2
);
astToMIR_CFGType.package = _global_StringInit(8, "astToMIR");
astToMIR_CFGType.name = _global_StringInit(3, "CFG");
astToMIR_CFGType.size = sizeof(struct astToMIR_CFG);
astToMIR_CFGType_fields[0].name = _global_StringInit(9, "return_to");
astToMIR_CFGType_fields[0].offset = offsetof(struct astToMIR_CFG, return_to);
astToMIR_CFGType_fields[0].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
astToMIR_CFGType_fields[1].name = _global_StringInit(5, "block");
astToMIR_CFGType_fields[1].offset = offsetof(struct astToMIR_CFG, block);
astToMIR_CFGType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_stringType.size->tag = 1;
_global_Array_stringType.array_type=
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;_global_Maybe_rstringType.p_type =
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
_global_Maybe_rstringType.nullable = 1;_global_Array_uintType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_uintType.size->tag = 1;
_global_Array_uintType.array_type=
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_ruintType.p_type =
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
_global_Maybe_ruintType.nullable = 1;hashMap_HashBucket_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_uintType_fields
,2
);
hashMap_HashBucket_uintType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_uintType.name = _global_StringInit(15, "HashBucket_uint");
hashMap_HashBucket_uintType.size = sizeof(struct hashMap_HashBucket_uint);
hashMap_HashBucket_uintType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_uintType_fields[0].offset = offsetof(struct hashMap_HashBucket_uint, keys);
hashMap_HashBucket_uintType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_uintType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_uintType_fields[1].offset = offsetof(struct hashMap_HashBucket_uint, values);
hashMap_HashBucket_uintType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_uint_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
hashMap_HashMap_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_uintType_fields
,1
);
hashMap_HashMap_uintType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_uintType.name = _global_StringInit(12, "HashMap_uint");
hashMap_HashMap_uintType.size = sizeof(struct hashMap_HashMap_uint);
hashMap_HashMap_uintType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_uintType_fields[0].offset = offsetof(struct hashMap_HashMap_uint, buckets);
hashMap_HashMap_uintType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_astToMIR_CFGType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_astToMIR_CFGType.size->tag = 1;
_global_Array_astToMIR_CFGType.array_type=
_global_TypeFromStruct(
astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rastToMIR_CFGType.p_type =
_global_TypeFromStruct(
astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rastToMIR_CFGType.nullable = 1;_global_Array_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rmir_BlockType.size->tag = 1;
_global_Array_rmir_BlockType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Maybe_rrmir_BlockType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
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
_global_Maybe_rrmir_BlockType.nullable = 1;astToMIR_ConverterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
astToMIR_ConverterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
astToMIR_ConverterType_fields
,7
);
astToMIR_ConverterType.package = _global_StringInit(8, "astToMIR");
astToMIR_ConverterType.name = _global_StringInit(9, "Converter");
astToMIR_ConverterType.size = sizeof(struct astToMIR_Converter);
astToMIR_ConverterType_fields[0].name = _global_StringInit(18, "global_var_counter");
astToMIR_ConverterType_fields[0].offset = offsetof(struct astToMIR_Converter, global_var_counter);
astToMIR_ConverterType_fields[0].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
astToMIR_ConverterType_fields[1].name = _global_StringInit(11, "var_counter");
astToMIR_ConverterType_fields[1].offset = offsetof(struct astToMIR_Converter, var_counter);
astToMIR_ConverterType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
astToMIR_ConverterType_fields[2].name = _global_StringInit(4, "vars");
astToMIR_ConverterType_fields[2].offset = offsetof(struct astToMIR_Converter, vars);
astToMIR_ConverterType_fields[2].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
astToMIR_ConverterType_fields[3].name = _global_StringInit(4, "cfgs");
astToMIR_ConverterType_fields[3].offset = offsetof(struct astToMIR_Converter, cfgs);
astToMIR_ConverterType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Array_astToMIR_CFG_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
astToMIR_ConverterType_fields[4].name = _global_StringInit(5, "block");
astToMIR_ConverterType_fields[4].offset = offsetof(struct astToMIR_Converter, block);
astToMIR_ConverterType_fields[4].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
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
astToMIR_ConverterType_fields[5].name = _global_StringInit(13, "block_counter");
astToMIR_ConverterType_fields[5].offset = offsetof(struct astToMIR_Converter, block_counter);
astToMIR_ConverterType_fields[5].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
astToMIR_ConverterType_fields[6].name = _global_StringInit(10, "all_blocks");
astToMIR_ConverterType_fields[6].offset = offsetof(struct astToMIR_Converter, all_blocks);
astToMIR_ConverterType_fields[6].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_rmir_Block_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_StaticArray_S_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_mir_FunctionType.size->tag = 2;
_global_StaticArray_StaticArray_S_mir_FunctionType.array_type=
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_mir_CreateVarType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_mir_CreateVarType.size->tag = 2;
_global_StaticArray_StaticArray_S_mir_CreateVarType.array_type=
_global_TypeFromStruct(
mir_CreateVar_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_rmir_BlockType.size->tag = 2;
_global_StaticArray_StaticArray_S_rmir_BlockType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_Block_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;mir_FunctionType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
mir_FunctionType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FunctionType_fields
,3
);
mir_FunctionType.package = _global_StringInit(3, "mir");
mir_FunctionType.name = _global_StringInit(8, "Function");
mir_FunctionType.size = sizeof(struct mir_Function);
mir_FunctionType_fields[0].name = _global_StringInit(4, "name");
mir_FunctionType_fields[0].offset = offsetof(struct mir_Function, name);
mir_FunctionType_fields[0].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
mir_FunctionType_fields[1].name = _global_StringInit(4, "args");
mir_FunctionType_fields[1].offset = offsetof(struct mir_Function, args);
mir_FunctionType_fields[1].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_mir_CreateVar_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_FunctionType_fields[2].name = _global_StringInit(10, "all_blocks");
mir_FunctionType_fields[2].offset = offsetof(struct mir_Function, all_blocks);
mir_FunctionType_fields[2].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_rmir_Block_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;mir_ProgramType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
mir_ProgramType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ProgramType_fields
,1
);
mir_ProgramType.package = _global_StringInit(3, "mir");
mir_ProgramType.name = _global_StringInit(7, "Program");
mir_ProgramType.size = sizeof(struct mir_Program);
mir_ProgramType_fields[0].name = _global_StringInit(9, "functions");
mir_ProgramType_fields[0].offset = offsetof(struct mir_Program, functions);
mir_ProgramType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_mir_Function_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Maybe_rhashMap_HashBucket_uint_Type.p_type =
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashBucket_uint_Type.nullable = 1;_global_Array_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashBucket_uint_Type.size->tag = 1;
_global_Array_hashMap_HashBucket_uint_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_uint_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rmir_FunctionType.p_type =
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_FunctionType.nullable = 1;_global_Array_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_FunctionType.size->tag = 1;
_global_Array_mir_FunctionType.array_type=
_global_TypeFromStruct(
mir_Function_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; }
void astToMIRInit() { 
mirInit();;
hashMapInit();;
;
;
;
;
};