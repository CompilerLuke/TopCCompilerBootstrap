void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_free_uint(struct _global_Array_uint* _global_self, struct _global_Context* W);
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Allocator* hashMap_allocator, struct _global_Context* W);
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* W);
void _global_memcpy_rmir_FuncScope(struct mir_FuncScope** _global_target, struct mir_FuncScope** _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_CFG(struct mir_CFG* _global_target, struct mir_CFG* _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* W);
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* W);
void hashMap_HashBucket_free_uint(struct hashMap_HashBucket_uint* hashMap_self, struct _global_Context* W);
struct hashMap_HashMap_uint hashMap_make_HashMap_size_uint(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* W);
void _global_Array_reserve_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* W);
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* W);
void hashMap_HashMap_free_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_Context* W);
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* W);
struct _global_Array_rmir_Block* _global_box_____rmir_Block(struct _global_Array_rmir_Block _global_value, struct _global_Context* W);
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* W);
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* W);
struct mir_FuncScope* _global_box_mir_FuncScope(struct mir_FuncScope _global_value, struct _global_Context* W);
void _global_Array_append_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct mir_FuncScope* _global_value, struct _global_Context* W);
struct mir_FuncScope* _global_Array_pop_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct _global_Context* W);
struct mir_FuncScope** _global_Array_op_get_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* W);
void _global_Array_append_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct mir_CFG _global_value, struct _global_Context* W);
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* W);
struct mir_CFG _global_Array_pop_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct _global_Context* W);
struct mir_CFG* _global_Array_op_get_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_index, struct _global_Context* W);
_Bool hashMap_HashMap_contains_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* W);
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* W);
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* W);
void _global_log_types_CompilerType(struct types_CompilerType _global_s, struct _global_Context* W);
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* W);
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* W);
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* W);
struct _global_Array_mir_Function* _global_box_____mir_Function(struct _global_Array_mir_Function _global_value, struct _global_Context* W);
unsigned int mir_calc_size(struct types_CompilerType mir_self, struct _global_Context* W){;
;struct types_CompilerType X =mir_self;
if(X.tag==0){return sizeof(void);}else if(X.tag==2){return sizeof(_Bool);}else if(X.tag==1){return sizeof(struct _global_String);}else if(X.tag==4){unsigned int mir_size = X.cases.Float.field0;
return mir_size/4;}else if(X.tag==3){_Bool mir_unsigned = X.cases.Int.field0;
unsigned int mir_size = X.cases.Int.field1;
return mir_size/4;}else if(X.tag==5){struct types_StructInfo* mir_info = X.cases.Struct.field0;
_global_panic(_global_StringInit(16,"Not handled yet!"),W);
return 0;}else if(X.tag==6){struct types_FuncPtr* mir_info = X.cases.Func.field0;
return sizeof(pp___none);};
;}

#define mir_atoi(W,X) atoi(W)

#define mir_atof(Y,Z) atof(Y)
struct _global_String mir_CFG_toString(struct mir_CFG* mir_self, struct _global_Context* bb){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"CFG "),_global_uint_toStringByValue(((mir_self)->return_to),bb),bb),_global_StringInit(0,""),bb);
;}
static inline struct _global_String mir_CFG_toStringByValue(struct mir_CFG bc,struct _global_Context* bb){
return mir_CFG_toString(&bc,bb);
}struct mir_FuncScope* mir_Converter_push_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
struct _global_Array_mir_OpCode* mir_op_codes;mir_op_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = _global_box_____rmir_Block(_global_Array_rmir_BlockInit(0, 0, NULL, NULL),bb);;
struct _global_Array_mir_CFG mir_cfgs;mir_cfgs = _global_Array_mir_CFGInit(0, 0, NULL, NULL);;
struct mir_Block* mir_block;mir_block = _global_box_mir_Block(mir_BlockInit(0,mir_op_codes),bb);;
struct mir_FuncScope* mir_scope;mir_scope = _global_box_mir_FuncScope(mir_FuncScopeInit(0,mir_cfgs,mir_block,0,mir_all_blocks,hashMap_make_HashMap_uint(bb),0),bb);;
_global_Array_append_rmir_FuncScope(&((mir_self)->scopes),mir_scope,bb);
mir_FuncScope_push_cfg(mir_scope,mir_CFGInit(0,mir_block),bb);
;return mir_scope;
;}
struct mir_FuncScope* mir_Converter_pop_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
;return _global_Array_pop_rmir_FuncScope(&((mir_self)->scopes),bb);
;}
struct mir_FuncScope* mir_Converter_get_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
;return *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)((mir_self)->scopes).length-1,bb));
;}
unsigned int mir_FuncScope_push_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
(mir_self)->block_counter = (mir_self)->block_counter+1;;
;return (mir_self)->block_counter;
;}
void mir_FuncScope_append(struct mir_FuncScope* mir_self, struct mir_OpCode mir_code, struct _global_Context* bb){;
;
_global_Array_append_mir_OpCode(((mir_self)->block)->code,mir_code,bb);
;}
void mir_FuncScope_pop_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
(mir_self)->block_counter = (mir_self)->block_counter-1;;
;}
void mir_FuncScope_push_cfg(struct mir_FuncScope* mir_scope, struct mir_CFG mir_cfg, struct _global_Context* bb){;
;
_global_Array_append_mir_CFG(&((mir_scope)->cfgs),mir_cfg,bb);
struct mir_Block* mir_block;;
struct mir_Block* bc =(mir_cfg).block;if(bc != NULL){mir_block = bc;

;}
else if(1){
return ;
;
;}
;
(mir_scope)->block = mir_block;;
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
;}
void mir_FuncScope_add_block(struct mir_FuncScope* mir_scope, struct mir_Block* mir_block, struct _global_Context* bb){;
;
(mir_scope)->block = mir_block;;
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
;}
void mir_FuncScope_pop_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
_global_Array_pop_mir_CFG(&((mir_scope)->cfgs),bb);
;}
struct mir_CFG* mir_FuncScope_current_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
;return &(*(_global_Array_op_get_mir_CFG(&((mir_scope)->cfgs),(unsigned int)((mir_scope)->cfgs).length-1,bb)));
;}
struct mir_OpCode mir_unsupported(struct _global_String mir_mesg, struct _global_Context* bb){;
_global_panic(mir_mesg,bb);
;return mir_Add_i32;
;}
_Bool mir_is_block(struct ast_AST* mir_node, struct _global_Context* bb){;
;return ((mir_node)->payload).tag==(ast_Block).tag;
;}
struct ast_AST* mir_get_rhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
;return (((mir_node)->nodes).length==1 ? *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)):(*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb))));
;}
struct ast_AST* mir_get_lhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
;if(((mir_node)->nodes).length==1){;
struct ast_AST* mir_owner;;
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

;}
else if(1){
_global_panic(_global_StringInit(20,"Assign missing owner"),bb);
;}
;
struct ast_AST* mir_create;mir_create = *(_global_Array_op_get_rast_AST(&((mir_owner)->nodes),(unsigned int)0,bb));;
return *(_global_Array_op_get_rast_AST(&((mir_create)->nodes),(unsigned int)0,bb));}
else{return *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));};
;}
unsigned int mir_Converter_get_id_of_var(struct mir_Converter* mir_self, struct _global_String mir_name, struct _global_Context* bb){;
;
int mir_i;mir_i = (int)((mir_self)->scopes).length-1;;
;while(mir_i>=(int)0){struct mir_FuncScope* mir_scope;mir_scope = *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)(unsigned int)mir_i,bb));;if(hashMap_HashMap_contains_uint(&((mir_scope)->vars),mir_name,bb)){;
return *(hashMap_HashMap_op_get_uint(&((mir_scope)->vars),(struct _global_String)mir_name,bb));
;
;};mir_i = mir_i-(int)1;;};
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(40,"Could not find variable convert to mir: "),(mir_name),bb),_global_StringInit(0,""),bb),bb);
;return 0;
;}
void mir_Converter_convert_nodes(struct mir_Converter* mir_self, struct _global_StaticArray_StaticArray_S_rast_AST mir_nodes, struct _global_Context* bb){;
;
struct _global_StaticArray_StaticArray_S_rast_AST bc =mir_nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_self,mir_n,bb);
}
;
;}
void mir_convert_if(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_FuncScope_push_block(mir_self,bb);;
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_id),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,mir_add_global_var(mir_converter,mir_name,bb),mir_name),bb),bb),bb);
;};
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_id,NULL),bb);
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_pop_cfg(mir_self,bb);
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb),bb);
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_to),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
;};
;}
void mir_convert_while(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_check;mir_check = mir_FuncScope_push_block(mir_self,bb);;
mir_FuncScope_append(mir_self,mir_Jump(mir_check,bb),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_check,_global_box_mir_Block(mir_BlockInit(mir_check,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb)),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_FuncScope_push_block(mir_self,bb),NULL),bb);
struct _global_Array_rast_AST bc =(mir_node)->nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_converter,mir_n,bb);
}
;
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_pop_cfg(mir_self,bb);
struct mir_CFG* mir_check_cfg;mir_check_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
mir_FuncScope_append(mir_self,mir_Jump((mir_check_cfg)->return_to,bb),bb);
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb),bb);
;}
void mir_convert_else(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
unsigned int mir_end_if;mir_end_if = (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb))).return_to;;
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_pop_cfg(mir_self,bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_end_if,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
;}
void mir_convert_condition(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_to;mir_to = mir_FuncScope_push_block(mir_self,bb);;
struct ast_AST* mir_owner;;
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

;}
else if(1){
_global_panic(_global_StringInit(22,"Condition has no owner"),bb);
;}
;
unsigned int mir_return_to;mir_return_to = (((mir_owner)->nodes).length==2 ? (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-1,bb))).return_to:(mir_FuncScope_push_block(mir_self,bb)));;
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
mir_FuncScope_append(mir_self,mir_CondJump(mir_to,mir_return_to,bb),bb);
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_return_to,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
;}
void mir_convert_block(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
if(((_global_Maybe_unwrap_rast_ASTByValue((mir_node)->owner,bb))->payload).tag==(ast_If).tag){;
struct mir_CFG mir_cfg;mir_cfg = *(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb));;
struct _global_Maybe_types_CompilerType bc =ifValidation_block_returns_value(mir_node,bb);if(bc.tag==0){struct types_CompilerType mir_ret_typ = bc.cases.Some.field0;

struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue(((mir_cfg).return_to),bb),bb),_global_StringInit(0,""),bb);;
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,mir_ret_typ,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
;}
else if(1){
;}
;
mir_FuncScope_append(mir_self,mir_Jump((mir_cfg).return_to,bb),bb);
;};
;}
void mir_convert_func_call(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct types_CompilerType mir_func_ptr;mir_func_ptr = (*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)))->_type;;
struct types_CompilerType bc =mir_func_ptr;if(bc.tag==6){struct types_FuncPtr* mir_func = bc.cases.Func.field0;

mir_FuncScope_append(mir_self,mir_FuncCall(mir_func,bb),bb);
;}
else if(1){
_global_log_types_CompilerType(mir_func_ptr,bb);
_global_panic(_global_StringInit(46,"Expecting func pointer as argument to function"),bb);
;}
;
;}
void mir_register_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
mir_add_global_var(mir_converter,(mir_info)->name,bb);
;}
void mir_convert_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_Converter_get_id_of_var(mir_converter,(mir_info)->name,bb);;
mir_self = mir_Converter_push_scope(mir_converter,bb);;
struct ast_AST* mir_args;mir_args = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
(mir_self)->num_args = ast_AST_length(mir_args,bb);;
struct _global_Range bc =_global_RangeInit(0,ast_AST_length(mir_args,bb));
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int mir_i;mir_i = bd;
;mir_Converter_convert_node(mir_converter,*(ast_AST_op_get(mir_args,(unsigned int)ast_AST_length(mir_args,bb)-mir_i-1,bb)),bb);
}
;
struct ast_AST* mir_body;mir_body = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb));;
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_body)->nodes.data, (mir_body)->nodes.length),bb);
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = (mir_Converter_pop_scope(mir_converter,bb))->all_blocks;;
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_all_blocks,(unsigned int)(mir_all_blocks)->length-1,bb)))->code,mir_FuncReturn(((mir_info)->_type)->return_type,bb),bb);
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_all_blocks);;
struct mir_Function mir_func;mir_func = mir_FunctionInit((mir_info)->name,(mir_info)->_type,_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_id);;
_global_Array_append_mir_Function((mir_converter)->functions,mir_func,bb);
;}
void mir_convert_func_arg(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_name, struct types_CompilerType mir_typ, struct _global_Context* bb){;
;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_id;mir_id = mir_add_local_var(mir_converter,mir_name,bb);;
struct mir_ReadInfo* mir_info;mir_info = _global_box_mir_ReadInfo(mir_ReadInfoInit(0,mir_typ,mir_id,mir_name),bb);;
(mir_self)->num_args = (mir_self)->num_args-1;;
mir_FuncScope_append(mir_self,mir_FuncArg((mir_self)->num_args,mir_info,bb),bb);
mir_FuncScope_append(mir_self,mir_Assign(mir_info,bb),bb);
;}

static inline struct mir_OpCode tmpmirK(struct mir_Converter** mir_converter,struct ast_AST** mir_node,struct ast_OperatorKind* mir_op_kind,struct mir_FuncScope** mir_self,struct types_CompilerType* mir_node_type,_Bool* mir_is_int,_Bool* mir_is_float, struct _global_Context* bb) {
struct ast_OperatorKind bc =*mir_op_kind;
if(bc.tag==0){return (*mir_is_int ? mir_Add_i32 : (*mir_is_float) ? mir_Add_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==1){return (*mir_is_int ? mir_Mul_i32 : (*mir_is_float) ? mir_Mul_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==2){return (*mir_is_int ? mir_Div_i32 : (*mir_is_float) ? mir_Div_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==3){return (*mir_is_int ? mir_LT_i32 : (*mir_is_float) ? mir_LT_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==4){return (*mir_is_int ? mir_Sub_i32 : (*mir_is_float) ? mir_Sub_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}
}
void mir_convert_operator(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_OperatorKind mir_op_kind, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct types_CompilerType mir_node_type;mir_node_type = ast_op_type(mir_node,bb);;
_Bool mir_is_int;mir_is_int = types_CompilerType_is_typeByValue(mir_node_type,types_Int(0,0,bb),bb);;
_Bool mir_is_float;mir_is_float = types_CompilerType_is_typeByValue(mir_node_type,types_Float(0,bb),bb);;
mir_FuncScope_append(mir_self,tmpmirK(&mir_converter,&mir_node,&mir_op_kind,&mir_self,&mir_node_type,&mir_is_int,&mir_is_float, bb),bb);
;}
unsigned int mir_add_global_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
(mir_converter)->global_var_counter = (mir_converter)->global_var_counter+1;;
unsigned int mir_id;mir_id = (mir_converter)->global_var_counter-1;;
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
;return mir_id;
;}
unsigned int mir_add_local_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
(mir_self)->var_counter = (mir_self)->var_counter+1;;
unsigned int mir_id;mir_id = (mir_self)->var_counter-1;;
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
;return mir_id;
;}
unsigned int mir_add_var(struct mir_Converter* mir_converter, _Bool mir_is_global, struct _global_String mir_name, struct _global_Context* bb){;
;
;
;return (mir_is_global ? mir_add_global_var(mir_converter,mir_name,bb):(mir_add_local_var(mir_converter,mir_name,bb)));
;}
void mir_convert_create(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct ast_AST* mir_ident;mir_ident = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
struct ast_ReadInfo* mir_read_info;;
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
;}
;
unsigned int mir_id;mir_id = mir_add_var(mir_converter,(mir_read_info)->is_global,(mir_read_info)->name,bb);;
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,mir_id,(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_assign(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
struct ast_AST* mir_ident;mir_ident = mir_get_lhs_of_assign(mir_node,bb);;
struct ast_ReadInfo* mir_read_info;;
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
;}
;
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)(mir_read_info)->name,bb)),(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_identifier(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_ReadInfo* mir_read_info, struct _global_Context* bb){;
;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_node)->_type,mir_Converter_get_id_of_var(mir_converter,(mir_read_info)->name,bb),(mir_read_info)->name),bb),bb),bb);
;}
void mir_convert_string(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_str, struct _global_Context* bb){;
;
;
unsigned int mir_string_id;mir_string_id = (mir_converter)->string_literal_counter;;
(mir_converter)->string_literal_counter = (mir_converter)->string_literal_counter+1;;
mir_FuncScope_append(*(_global_Array_op_get_rmir_FuncScope(&((mir_converter)->scopes),(unsigned int)0,bb)),mir_StringDecl(mir_string_id,mir_str,bb),bb);
mir_FuncScope_append(mir_Converter_get_scope(mir_converter,bb),mir_StringRef(mir_string_id,bb),bb);
;}
void mir_Converter_create_decls(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct _global_Array_rast_AST bc =(mir_node)->nodes;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
struct ast_Payload bf =(mir_n)->payload;if(bf.tag==15){struct ast_FuncInfo* mir_info = bf.cases.FuncDef.field0;

mir_register_func_def(mir_converter,mir_node,mir_info,bb);
;}
else if(1){
;}
;
}
;
;}
void mir_Converter_convert_node(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
;
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
unsigned int mir_previous_num_vars;mir_previous_num_vars = (mir_self)->var_counter;;
struct ast_Payload bc =(mir_node)->payload;if(bc.tag==8){
;}
else if(bc.tag==10){
mir_convert_if(mir_converter,mir_node,bb);
;}
else if(bc.tag==14){
mir_convert_while(mir_converter,mir_node,bb);
return ;
;
;}
else if(bc.tag==9){
mir_Converter_convert_node(mir_converter,mir_get_rhs_of_assign(mir_node,bb),bb);
;}
else if(bc.tag==15){struct ast_FuncInfo* mir_info = bc.cases.FuncDef.field0;

mir_convert_func_def(mir_converter,mir_node,mir_info,bb);
return ;
;
;}
else if(1){
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
;}
;
if(mir_is_block(mir_node,bb)){;
(mir_self)->var_counter = mir_previous_num_vars;;
;};
struct ast_Payload bd =(mir_node)->payload;if(bd.tag==5){struct ast_ReadInfo* mir_read_info = bd.cases.Identifier.field0;

mir_convert_identifier(mir_converter,mir_node,mir_read_info,bb);
;}
else if(bd.tag==15){struct ast_FuncInfo* mir_info = bd.cases.FuncDef.field0;

;}
else if(bd.tag==16){
;}
else if(bd.tag==7){
;}
else if(bd.tag==11){
mir_convert_block(mir_converter,mir_node,bb);
;}
else if(bd.tag==10){
;}
else if(bd.tag==14){
;}
else if(bd.tag==12){
mir_convert_condition(mir_converter,mir_node,bb);
;}
else if(bd.tag==13){
mir_convert_else(mir_converter,mir_node,bb);
;}
else if(bd.tag==9){
mir_convert_assign(mir_converter,mir_node,bb);
;}
else if(bd.tag==18){struct _global_String mir_str = bd.cases.String.field0;

mir_convert_string(mir_converter,mir_node,mir_str,bb);
;}
else if(bd.tag==8){
mir_convert_create(mir_converter,mir_node,bb);
;}
else if(bd.tag==17){struct _global_String mir_name = bd.cases.FuncArg.field0;
struct types_CompilerType mir_typ = bd.cases.FuncArg.field1;

mir_convert_func_arg(mir_converter,mir_node,mir_name,mir_typ,bb);
;}
else if(bd.tag==6){
mir_convert_func_call(mir_converter,mir_node,bb);
;}
else if(bd.tag==4){struct ast_OperatorKind mir_op_kind = bd.cases.Operator.field0;

mir_convert_operator(mir_converter,mir_node,mir_op_kind,bb);
;}
else if(bd.tag==3){_Bool mir_is_true = bd.cases.Bool.field0;

mir_FuncScope_append(mir_self,mir_Store_bool(mir_is_true,bb),bb);
;}
else if(bd.tag==1){struct _global_String mir_s = bd.cases.Int.field0;

mir_FuncScope_append(mir_self,mir_Store_i32((int32_t)mir_atoi(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
;}
else if(bd.tag==2){struct _global_String mir_s = bd.cases.Float.field0;

mir_FuncScope_append(mir_self,mir_Store_f32((float)mir_atof(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
;}
else if(bd.tag==0){
;}
;
;}
struct mir_Program mir_convert(struct ast_AST* mir_node, struct _global_Context* bb){;
struct _global_Array_mir_Function* mir_functions;mir_functions = _global_box_____mir_Function(_global_Array_mir_FunctionInit(0, 0, NULL, NULL),bb);;
struct mir_Converter mir_converter;mir_converter = mir_ConverterInit(0,0,_global_Array_rmir_FuncScopeInit(0, 0, NULL, NULL),mir_functions);;
struct mir_FuncScope* mir_global_scope;mir_global_scope = mir_Converter_push_scope(&(mir_converter),bb);;
mir_add_global_var(&(mir_converter),_global_StringInit(7,"log_int"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(9,"log_float"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(3,"log"),bb);
mir_add_global_var(&(mir_converter),_global_StringInit(4,"main"),bb);
mir_Converter_create_decls(&(mir_converter),mir_node,bb);
mir_Converter_convert_node(&(mir_converter),mir_node,bb);
struct _global_Array_rmir_Block* mir_main_all_blocks;mir_main_all_blocks = (*(_global_Array_op_get_rmir_FuncScope(&((mir_converter).scopes),(unsigned int)0,bb)))->all_blocks;;
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_main_all_blocks,(unsigned int)(mir_main_all_blocks)->length-1,bb)))->code,mir_FuncReturn(types_Void,bb),bb);
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_main_all_blocks);;
struct mir_Function mir_main;mir_main = mir_FunctionInit(_global_StringInit(4,"main"),types_make_FuncPtr(bb),_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_Converter_get_id_of_var(&(mir_converter),_global_StringInit(4,"main"),bb));;
_global_Array_append_mir_Function(mir_functions,mir_main,bb);
struct _global_Array_mir_Function mir_deref_functions;mir_deref_functions = *(mir_functions);;
;return mir_ProgramInit(_global_StaticArray_StaticArray_S_mir_FunctionInit(mir_deref_functions.data, mir_deref_functions.length));
;}
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_uint),bb);
;}

static inline struct hashMap_HashBucket_uint* tmpmirL(struct _global_Array_hashMap_HashBucket_uint_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct hashMap_HashBucket_uint* bc =(*_global_self)->data;
if(bc != NULL){struct hashMap_HashBucket_uint* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct hashMap_HashBucket_uint* _global_newData;_global_newData = (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));;
_global_memcpy_hashMap_HashBucket_uint_(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));}
}
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirL(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
void _global_Array_free_uint(struct _global_Array_uint* _global_self, struct _global_Context* bb){;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
unsigned int* bc =(_global_self)->data;if(bc != NULL){unsigned int* _global_data = bc;

_global_free((void*)_global_data,bb);
;}
else if(bc == NULL){
;}
;
;}
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
struct _global_Array_uint hashMap_values;hashMap_values = _global_Array_uintInit(0, 0, NULL, NULL);;
(hashMap_keys).allocator = hashMap_allocator;;
(hashMap_values).allocator = hashMap_allocator;;
;return hashMap_HashBucket_uintInit(hashMap_keys,hashMap_values);
;}
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,1,bb);
;}
else{_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct hashMap_HashBucket_uint*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_memcpy_rmir_FuncScope(struct mir_FuncScope** _global_target, struct mir_FuncScope** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_FuncScope*),bb);
;}
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_OpCode),bb);
;}
void _global_memcpy_mir_CFG(struct mir_CFG* _global_target, struct mir_CFG* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_CFG),bb);
;}
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),bb);
;}
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Function),bb);
;}
void hashMap_HashBucket_free_uint(struct hashMap_HashBucket_uint* hashMap_self, struct _global_Context* bb){;
_global_Array_free_string(&((hashMap_self)->keys),bb);
_global_Array_free_uint(&((hashMap_self)->values),bb);
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_size_uint(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
;
struct _global_Array_hashMap_HashBucket_uint_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_uint_Init(0, 0, NULL, NULL);;
(hashMap_buckets).allocator = hashMap_allocator;;
struct _global_Range bc =_global_RangeInit(0,hashMap_size);
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int hashMap_i;hashMap_i = bd;
;_global_Array_append_hashMap_HashBucket_uint_(&(hashMap_buckets),hashMap_make_HashBucket_uint(hashMap_allocator,bb),bb);
}
;
;return hashMap_HashMap_uintInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(hashMap_buckets.data, hashMap_buckets.length),0);
;}

static inline struct mir_FuncScope** tmpmirM(struct _global_Array_rmir_FuncScope** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_FuncScope** bc =(*_global_self)->data;
if(bc != NULL){struct mir_FuncScope** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_FuncScope** _global_newData;_global_newData = (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));;
_global_memcpy_rmir_FuncScope(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));}
}
void _global_Array_reserve_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirM(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_OpCode* tmpmirN(struct _global_Array_mir_OpCode** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_OpCode* bc =(*_global_self)->data;
if(bc != NULL){struct mir_OpCode* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_OpCode* _global_newData;_global_newData = (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));;
_global_memcpy_mir_OpCode(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));}
}
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirN(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_CFG* tmpmirP(struct _global_Array_mir_CFG** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_CFG* bc =(*_global_self)->data;
if(bc != NULL){struct mir_CFG* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_CFG* _global_newData;_global_newData = (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));;
_global_memcpy_mir_CFG(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));}
}
void _global_Array_reserve_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirP(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}

static inline struct mir_Block** tmpmirQ(struct _global_Array_rmir_Block** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Block** bc =(*_global_self)->data;
if(bc != NULL){struct mir_Block** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));;
_global_memcpy_rmir_Block(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));}
}
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirQ(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct mir_Function* tmpmirR(struct _global_Array_mir_Function** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Function* bc =(*_global_self)->data;
if(bc != NULL){struct mir_Function* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
struct mir_Function* _global_newData;_global_newData = (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));;
_global_memcpy_mir_Function(_global_newData,_global_data,(*_global_self)->length,bb);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
return _global_newData;}else if(bc == NULL){return (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));}
}
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpmirR(&_global_self,&_global_newSize,&_global_allocator, bb);;
;}
void hashMap_HashMap_free_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_Context* bb){;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
hashMap_HashBucket_free_uint(&(hashMap_bucket),bb);
}
;
;}
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* bb){;
struct _global_Array_mir_OpCode* _global_pointer;_global_pointer = (struct _global_Array_mir_OpCode*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_OpCode),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct _global_Array_rmir_Block* _global_box_____rmir_Block(struct _global_Array_rmir_Block _global_value, struct _global_Context* bb){;
struct _global_Array_rmir_Block* _global_pointer;_global_pointer = (struct _global_Array_rmir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_rmir_Block),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* bb){;
struct mir_Block* _global_pointer;_global_pointer = (struct mir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_Block),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* bb){;return hashMap_make_HashMap_size_uint(powf(2,3),(bb)->allocator,bb);
;}
struct mir_FuncScope* _global_box_mir_FuncScope(struct mir_FuncScope _global_value, struct _global_Context* bb){;
struct mir_FuncScope* _global_pointer;_global_pointer = (struct mir_FuncScope*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_FuncScope),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_Array_append_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct mir_FuncScope* _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_FuncScope(_global_self,1,bb);
;}
else{_global_Array_reserve_rmir_FuncScope(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_FuncScope**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct mir_FuncScope* _global_Array_pop_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct _global_Context* bb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
;};
struct mir_FuncScope* _global_tmp;_global_tmp = *(_global_Array_op_get_rmir_FuncScope(_global_self,(unsigned int)(_global_self)->length-1,bb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_FuncScope** _global_Array_op_get_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_FuncScope**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_OpCode(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_OpCode(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_OpCode*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct mir_CFG _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_CFG(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_CFG(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_CFG*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rmir_Block(_global_self,1,bb);
;}
else{_global_Array_reserve_rmir_Block(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_Block**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct mir_CFG _global_Array_pop_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct _global_Context* bb){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
;};
struct mir_CFG _global_tmp;_global_tmp = *(_global_Array_op_get_mir_CFG(_global_self,(unsigned int)(_global_self)->length-1,bb));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct mir_CFG* _global_Array_op_get_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_CFG*)(_global_self)->data + (int64_t)_global_index);
;}
_Bool hashMap_HashMap_contains_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
struct _global_Array_string bc =(hashMap_bucket)->keys;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
return 1;
;
;};
}
;
;return 0;
;}
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
struct _global_Array_string bc =(hashMap_bucket)->keys;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
return &(*(_global_Array_op_get_uint(&((hashMap_bucket)->values),(unsigned int)hashMap_i,bb)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),bb),_global_StringInit(12," in hash map"),bb),bb);
;return (unsigned int*)0;
;}
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* bb){;
struct mir_ReadInfo* _global_pointer;_global_pointer = (struct mir_ReadInfo*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_ReadInfo),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
void _global_log_types_CompilerType(struct types_CompilerType _global_s, struct _global_Context* bb){;
_global_c_log(types_CompilerType_toString(&(_global_s),bb),bb);
;}
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* bb){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
;return ((struct mir_Block**)(_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* bb){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_mir_Function(_global_self,1,bb);
;}
else{_global_Array_reserve_mir_Function(_global_self,(_global_self)->capacity*2,bb);
;};
;};
*((((struct mir_Function*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* bb){;
;
;
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),bb);
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)0,bb))).keys).allocator,(bb)->allocator,bb);;
struct hashMap_HashMap_uint hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_uint(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,bb);;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
struct _global_Range bf =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
for (unsigned int bg = bf.start; bg < bf.end; bg++) {
unsigned int hashMap_c;hashMap_c = bg;
;hashMap_HashMap_insert_uint(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,bb)),*(_global_Array_op_get_uint(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,bb)),bb);
}
;
}
;
hashMap_HashMap_free_uint(hashMap_self,bb);
*(hashMap_self) = hashMap_new_hash;;
;};
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,bb);
_global_Array_append_uint(&((hashMap_bucket)->values),hashMap_value,bb);
(hashMap_self)->length = (hashMap_self)->length+1;;
;}
struct _global_Array_mir_Function* _global_box_____mir_Function(struct _global_Array_mir_Function _global_value, struct _global_Context* bb){;
struct _global_Array_mir_Function* _global_pointer;_global_pointer = (struct _global_Array_mir_Function*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_Function),bb));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

void mirInitTypes() { 
 ifValidationInitTypes();
mir_ID_Type.name = _global_StringInit(2, "ID");
mir_ID_Type.package = _global_StringInit(3, "mir");
mir_ID_Type.real_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_mir_OpCodeType.size = malloc(sizeof(struct _global_ArraySize));
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
;mir_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ReadInfoType_fields
,4
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
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
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
;
mir_ReadInfoType_fields[3].name = _global_StringInit(4, "name");
mir_ReadInfoType_fields[3].offset = offsetof(struct mir_ReadInfo, name);
mir_ReadInfoType_fields[3].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;mir_Add_i32.tag = 0;
mir_Sub_i32.tag = 1;
mir_Mul_i32.tag = 2;
mir_Div_i32.tag = 3;
mir_LT_i32.tag = 4;
mir_Add_f32.tag = 5;
mir_Sub_f32.tag = 6;
mir_Mul_f32.tag = 7;
mir_Div_f32.tag = 8;
mir_LT_f32.tag = 9;
struct _global_Case* bd =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 23);
bd[0].name = _global_StringInit(7, "Add_i32");
bd[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[1].name = _global_StringInit(7, "Sub_i32");
bd[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[2].name = _global_StringInit(7, "Mul_i32");
bd[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[3].name = _global_StringInit(7, "Div_i32");
bd[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[4].name = _global_StringInit(6, "LT_i32");
bd[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[5].name = _global_StringInit(7, "Add_f32");
bd[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[6].name = _global_StringInit(7, "Sub_f32");
bd[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[7].name = _global_StringInit(7, "Mul_f32");
bd[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[8].name = _global_StringInit(7, "Div_f32");
bd[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[9].name = _global_StringInit(6, "LT_f32");
bd[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
bd[10].name = _global_StringInit(9, "Store_i32");
bd[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[10].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_i32_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[10].args.data[0].offset = offsetof(struct mir_OpCode_Store_i32, field0);
bd[11].name = _global_StringInit(9, "Store_f32");
bd[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[11].args.data[0].arg_type = 
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
; bd[11].args.data[0].offset = offsetof(struct mir_OpCode_Store_f32, field0);
bd[12].name = _global_StringInit(10, "Store_bool");
bd[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[12].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; bd[12].args.data[0].offset = offsetof(struct mir_OpCode_Store_bool, field0);
bd[13].name = _global_StringInit(6, "Create");
bd[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[13].args.data[0].arg_type = 
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
; bd[13].args.data[0].offset = offsetof(struct mir_OpCode_Create, field0);
bd[14].name = _global_StringInit(4, "Read");
bd[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[14].args.data[0].arg_type = 
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
; bd[14].args.data[0].offset = offsetof(struct mir_OpCode_Read, field0);
bd[15].name = _global_StringInit(6, "Assign");
bd[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[15].args.data[0].arg_type = 
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
; bd[15].args.data[0].offset = offsetof(struct mir_OpCode_Assign, field0);
bd[16].name = _global_StringInit(7, "FuncArg");
bd[16].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[16].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[16].args.data[0].offset = offsetof(struct mir_OpCode_FuncArg, field0);
bd[16].args.data[1].arg_type = 
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
; bd[16].args.data[1].offset = offsetof(struct mir_OpCode_FuncArg, field1);
bd[17].name = _global_StringInit(8, "FuncCall");
bd[17].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[17].args.data[0].arg_type = 
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
; bd[17].args.data[0].offset = offsetof(struct mir_OpCode_FuncCall, field0);
bd[18].name = _global_StringInit(10, "FuncReturn");
bd[18].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[18].args.data[0].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; bd[18].args.data[0].offset = offsetof(struct mir_OpCode_FuncReturn, field0);
bd[19].name = _global_StringInit(8, "CondJump");
bd[19].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[19].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[19].args.data[0].offset = offsetof(struct mir_OpCode_CondJump, field0);
bd[19].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[19].args.data[1].offset = offsetof(struct mir_OpCode_CondJump, field1);
bd[20].name = _global_StringInit(4, "Jump");
bd[20].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[20].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[20].args.data[0].offset = offsetof(struct mir_OpCode_Jump, field0);
bd[21].name = _global_StringInit(9, "StringRef");
bd[21].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bd[21].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[21].args.data[0].offset = offsetof(struct mir_OpCode_StringRef, field0);
bd[22].name = _global_StringInit(10, "StringDecl");
bd[22].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
bd[22].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; bd[22].args.data[0].offset = offsetof(struct mir_OpCode_StringDecl, field0);
bd[22].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; bd[22].args.data[1].offset = offsetof(struct mir_OpCode_StringDecl, field1);
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
mir_OpCodeType.cases.data = bd;
mir_OpCodeType.cases.length = 23;
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
_global_TypeFromStruct(
_global_AliasType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
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
_global_Maybe_rmir_BlockType.nullable = 1;mir_CFGType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
mir_CFGType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_CFGType_fields
,2
);
mir_CFGType.package = _global_StringInit(3, "mir");
mir_CFGType.name = _global_StringInit(3, "CFG");
mir_CFGType.size = sizeof(struct mir_CFG);
mir_CFGType_fields[0].name = _global_StringInit(9, "return_to");
mir_CFGType_fields[0].offset = offsetof(struct mir_CFG, return_to);
mir_CFGType_fields[0].field_type = 
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
mir_CFGType_fields[1].name = _global_StringInit(5, "block");
mir_CFGType_fields[1].offset = offsetof(struct mir_CFG, block);
mir_CFGType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Maybe_rmir_Block_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_Array_mir_CFGType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_mir_CFGType.size->tag = 1;
_global_Array_mir_CFGType.array_type=
_global_TypeFromStruct(
mir_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rmir_CFGType.p_type =
_global_TypeFromStruct(
mir_CFG_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rmir_CFGType.nullable = 1;_global_Array_rmir_BlockType.size = malloc(sizeof(struct _global_ArraySize));
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
_global_Maybe_rrmir_BlockType.nullable = 1;_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type.size = malloc(sizeof(struct _global_ArraySize));
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
;hashMap_HashBucket_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
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
;hashMap_HashMap_uintType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_uintType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_uintType_fields
,2
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
;
hashMap_HashMap_uintType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_uintType_fields[1].offset = offsetof(struct hashMap_HashMap_uint, length);
hashMap_HashMap_uintType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;mir_FuncScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
mir_FuncScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FuncScopeType_fields
,7
);
mir_FuncScopeType.package = _global_StringInit(3, "mir");
mir_FuncScopeType.name = _global_StringInit(9, "FuncScope");
mir_FuncScopeType.size = sizeof(struct mir_FuncScope);
mir_FuncScopeType_fields[0].name = _global_StringInit(11, "var_counter");
mir_FuncScopeType_fields[0].offset = offsetof(struct mir_FuncScope, var_counter);
mir_FuncScopeType_fields[0].field_type = 
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
mir_FuncScopeType_fields[1].name = _global_StringInit(4, "cfgs");
mir_FuncScopeType_fields[1].offset = offsetof(struct mir_FuncScope, cfgs);
mir_FuncScopeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_mir_CFG_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_FuncScopeType_fields[2].name = _global_StringInit(5, "block");
mir_FuncScopeType_fields[2].offset = offsetof(struct mir_FuncScope, block);
mir_FuncScopeType_fields[2].field_type = 
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
mir_FuncScopeType_fields[3].name = _global_StringInit(13, "block_counter");
mir_FuncScopeType_fields[3].offset = offsetof(struct mir_FuncScope, block_counter);
mir_FuncScopeType_fields[3].field_type = 
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
mir_FuncScopeType_fields[4].name = _global_StringInit(10, "all_blocks");
mir_FuncScopeType_fields[4].offset = offsetof(struct mir_FuncScope, all_blocks);
mir_FuncScopeType_fields[4].field_type = 
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
;
mir_FuncScopeType_fields[5].name = _global_StringInit(4, "vars");
mir_FuncScopeType_fields[5].offset = offsetof(struct mir_FuncScope, vars);
mir_FuncScopeType_fields[5].field_type = 
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
mir_FuncScopeType_fields[6].name = _global_StringInit(8, "num_args");
mir_FuncScopeType_fields[6].offset = offsetof(struct mir_FuncScope, num_args);
mir_FuncScopeType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_rmir_FuncScopeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rmir_FuncScopeType.size->tag = 1;
_global_Array_rmir_FuncScopeType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_FuncScope_get_type(NULL,(&_global_context))
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
;_global_Maybe_rrmir_FuncScopeType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
mir_FuncScope_get_type(NULL,(&_global_context))
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
_global_Maybe_rrmir_FuncScopeType.nullable = 1;_global_Array_mir_FunctionType.size = malloc(sizeof(struct _global_ArraySize));
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
;mir_FunctionType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_FunctionType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_FunctionType_fields
,4
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
mir_FunctionType_fields[1].name = _global_StringInit(5, "_type");
mir_FunctionType_fields[1].offset = offsetof(struct mir_Function, _type);
mir_FunctionType_fields[1].field_type = 
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
;
mir_FunctionType_fields[3].name = _global_StringInit(2, "id");
mir_FunctionType_fields[3].offset = offsetof(struct mir_Function, id);
mir_FunctionType_fields[3].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
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
_global_Maybe_rmir_FunctionType.nullable = 1;mir_ConverterType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
mir_ConverterType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_ConverterType_fields
,4
);
mir_ConverterType.package = _global_StringInit(3, "mir");
mir_ConverterType.name = _global_StringInit(9, "Converter");
mir_ConverterType.size = sizeof(struct mir_Converter);
mir_ConverterType_fields[0].name = _global_StringInit(18, "global_var_counter");
mir_ConverterType_fields[0].offset = offsetof(struct mir_Converter, global_var_counter);
mir_ConverterType_fields[0].field_type = 
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
mir_ConverterType_fields[1].name = _global_StringInit(22, "string_literal_counter");
mir_ConverterType_fields[1].offset = offsetof(struct mir_Converter, string_literal_counter);
mir_ConverterType_fields[1].field_type = 
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
mir_ConverterType_fields[2].name = _global_StringInit(6, "scopes");
mir_ConverterType_fields[2].offset = offsetof(struct mir_Converter, scopes);
mir_ConverterType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Array_rmir_FuncScope_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
mir_ConverterType_fields[3].name = _global_StringInit(9, "functions");
mir_ConverterType_fields[3].offset = offsetof(struct mir_Converter, functions);
mir_ConverterType_fields[3].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
_global_Array_mir_Function_get_type(NULL,(&_global_context))
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
; }
void mirInit() { 
;
ifValidationInit();;
;
;
;
;
};