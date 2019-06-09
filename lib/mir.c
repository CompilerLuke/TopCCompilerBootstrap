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
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/mir.top"
;struct types_CompilerType X =mir_self;
if(X.tag==0){return sizeof(void);}else if(X.tag==2){return sizeof(_Bool);}else if(X.tag==1){return sizeof(struct _global_String);}else if(X.tag==4){unsigned int mir_size = X.cases.Float.field0;
return mir_size/4;}else if(X.tag==3){_Bool mir_unsigned = X.cases.Int.field0;
unsigned int mir_size = X.cases.Int.field1;
return mir_size/4;}else if(X.tag==5){struct types_StructInfo* mir_info = X.cases.Struct.field0;
_global_panic(_global_StringInit(16,"Not handled yet!"),W);
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/mir.top"
return 0;}else if(X.tag==6){struct types_FuncPtr* mir_info = X.cases.Func.field0;
return sizeof(pp___none);};
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/mir.top"
;}

#define mir_atoi(W,X) atoi(W)

#define mir_atof(Y,Z) atof(Y)
struct _global_String mir_CFG_toString(struct mir_CFG* mir_self, struct _global_Context* bb){;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"CFG "),_global_uint_toStringByValue(((mir_self)->return_to),bb),bb),_global_StringInit(0,""),bb);
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
static inline struct _global_String mir_CFG_toStringByValue(struct mir_CFG bc,struct _global_Context* bb){
return mir_CFG_toString(&bc,bb);
}struct mir_FuncScope* mir_Converter_push_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct _global_Array_mir_OpCode* mir_op_codes;mir_op_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = _global_box_____rmir_Block(_global_Array_rmir_BlockInit(0, 0, NULL, NULL),bb);;
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct _global_Array_mir_CFG mir_cfgs;mir_cfgs = _global_Array_mir_CFGInit(0, 0, NULL, NULL);;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct mir_Block* mir_block;mir_block = _global_box_mir_Block(mir_BlockInit(0,mir_op_codes),bb);;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct mir_FuncScope* mir_scope;mir_scope = _global_box_mir_FuncScope(mir_FuncScopeInit(0,mir_cfgs,mir_block,0,mir_all_blocks,hashMap_make_HashMap_uint(bb),0),bb);;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_append_rmir_FuncScope(&((mir_self)->scopes),mir_scope,bb);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
mir_FuncScope_push_cfg(mir_scope,mir_CFGInit(0,mir_block),bb);
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return mir_scope;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct mir_FuncScope* mir_Converter_pop_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return _global_Array_pop_rmir_FuncScope(&((mir_self)->scopes),bb);
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct mir_FuncScope* mir_Converter_get_scope(struct mir_Converter* mir_self, struct _global_Context* bb){;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)((mir_self)->scopes).length-1,bb));
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
unsigned int mir_FuncScope_push_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
(mir_self)->block_counter = (mir_self)->block_counter+1;;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return (mir_self)->block_counter;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_FuncScope_append(struct mir_FuncScope* mir_self, struct mir_OpCode mir_code, struct _global_Context* bb){;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_append_mir_OpCode(((mir_self)->block)->code,mir_code,bb);
#line 70 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_FuncScope_pop_block(struct mir_FuncScope* mir_self, struct _global_Context* bb){;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
(mir_self)->block_counter = (mir_self)->block_counter-1;;
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_FuncScope_push_cfg(struct mir_FuncScope* mir_scope, struct mir_CFG mir_cfg, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_append_mir_CFG(&((mir_scope)->cfgs),mir_cfg,bb);
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct mir_Block* mir_block;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct mir_Block* bc =(mir_cfg).block;if(bc != NULL){mir_block = bc;

#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
else if(1){
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
return ;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
(mir_scope)->block = mir_block;;
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_FuncScope_add_block(struct mir_FuncScope* mir_scope, struct mir_Block* mir_block, struct _global_Context* bb){;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
(mir_scope)->block = mir_block;;
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_append_rmir_Block((mir_scope)->all_blocks,mir_block,bb);
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_FuncScope_pop_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
#line 88 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_Array_pop_mir_CFG(&((mir_scope)->cfgs),bb);
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct mir_CFG* mir_FuncScope_current_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* bb){;
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return &(*(_global_Array_op_get_mir_CFG(&((mir_scope)->cfgs),(unsigned int)((mir_scope)->cfgs).length-1,bb)));
#line 92 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct mir_OpCode mir_unsupported(struct _global_String mir_mesg, struct _global_Context* bb){;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_panic(mir_mesg,bb);
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return mir_Add_i32;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
_Bool mir_is_block(struct ast_AST* mir_node, struct _global_Context* bb){;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return ((mir_node)->payload).tag==(ast_Block).tag;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct ast_AST* mir_get_rhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return (((mir_node)->nodes).length==1 ? *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)):(*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb))));
#line 102 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
struct ast_AST* mir_get_lhs_of_assign(struct ast_AST* mir_node, struct _global_Context* bb){;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;if(((mir_node)->nodes).length==1){;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct ast_AST* mir_owner;;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
else if(1){
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_panic(_global_StringInit(20,"Assign missing owner"),bb);
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
#line 108 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct ast_AST* mir_create;mir_create = *(_global_Array_op_get_rast_AST(&((mir_owner)->nodes),(unsigned int)0,bb));;
#line 110 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
return *(_global_Array_op_get_rast_AST(&((mir_create)->nodes),(unsigned int)0,bb));}
else{return *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));};
#line 106 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
unsigned int mir_Converter_get_id_of_var(struct mir_Converter* mir_self, struct _global_String mir_name, struct _global_Context* bb){;
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
int mir_i;mir_i = (int)((mir_self)->scopes).length-1;;
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;while(mir_i>=(int)0){struct mir_FuncScope* mir_scope;mir_scope = *(_global_Array_op_get_rmir_FuncScope(&((mir_self)->scopes),(unsigned int)(unsigned int)mir_i,bb));;if(hashMap_HashMap_contains_uint(&((mir_scope)->vars),mir_name,bb)){;
#line 119 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
return *(hashMap_HashMap_op_get_uint(&((mir_scope)->vars),(struct _global_String)mir_name,bb));
#line 119 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 119 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;};mir_i = mir_i-(int)1;;};
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(40,"Could not find variable convert to mir: "),(mir_name),bb),_global_StringInit(0,""),bb),bb);
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;return 0;
#line 123 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_Converter_convert_nodes(struct mir_Converter* mir_self, struct _global_StaticArray_StaticArray_S_rast_AST mir_nodes, struct _global_Context* bb){;
#line 125 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 125 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
struct _global_StaticArray_StaticArray_S_rast_AST bc =mir_nodes;
#line 126 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_self,mir_n,bb);
#line 127 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
}
;
#line 126 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;}
void mir_convert_if(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_id;mir_id = mir_FuncScope_push_block(mir_self,bb);;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_id),bb),bb),_global_StringInit(0,""),bb);;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,mir_add_global_var(mir_converter,mir_name,bb),mir_name),bb),bb),bb);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;};
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_id,NULL),bb);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb),bb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
if(!(types_CompilerType_is_typeByValue((mir_node)->_type,types_Void,bb))){;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue((mir_to),bb),bb),_global_StringInit(0,""),bb);;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,(mir_node)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;};
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
void mir_convert_while(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_check;mir_check = mir_FuncScope_push_block(mir_self,bb);;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_Jump(mir_check,bb),bb);
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_check,_global_box_mir_Block(mir_BlockInit(mir_check,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb)),bb);
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_FuncScope_push_block(mir_self,bb),NULL),bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_Array_rast_AST bc =(mir_node)->nodes;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
mir_Converter_convert_node(mir_converter,mir_n,bb);
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
}
;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 70 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_CFG* mir_check_cfg;mir_check_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_Jump((mir_check_cfg)->return_to,bb),bb);
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_add_block(mir_self,_global_box_mir_Block(mir_BlockInit(mir_to,_global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb)),bb),bb);
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
void mir_convert_else(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_CFG* mir_cfg;mir_cfg = mir_FuncScope_current_cfg(mir_self,bb);;
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_to;mir_to = (mir_cfg)->return_to;;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_end_if;mir_end_if = (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb))).return_to;;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
#line 86 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_pop_cfg(mir_self,bb);
#line 88 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_end_if,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
void mir_convert_condition(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_to;mir_to = mir_FuncScope_push_block(mir_self,bb);;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct ast_AST* mir_owner;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct ast_AST* bc =(mir_node)->owner;if(bc != NULL){mir_owner = bc;

#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
else if(1){
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
_global_panic(_global_StringInit(22,"Condition has no owner"),bb);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
unsigned int mir_return_to;mir_return_to = (((mir_owner)->nodes).length==2 ? (*(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-1,bb))).return_to:(mir_FuncScope_push_block(mir_self,bb)));;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_Array_mir_OpCode* mir_codes;mir_codes = _global_box_____mir_OpCode(_global_Array_mir_OpCodeInit(0, 0, NULL, NULL),bb);;
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_CondJump(mir_to,mir_return_to,bb),bb);
#line 109 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_push_cfg(mir_self,mir_CFGInit(mir_return_to,_global_box_mir_Block(mir_BlockInit(mir_to,mir_codes),bb)),bb);
#line 111 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
void mir_convert_block(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 117 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
if(((_global_Maybe_unwrap_rast_ASTByValue((mir_node)->owner,bb))->payload).tag==(ast_If).tag){;
#line 119 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct mir_CFG mir_cfg;mir_cfg = *(_global_Array_op_get_mir_CFG(&((mir_self)->cfgs),(unsigned int)((mir_self)->cfgs).length-2,bb));;
#line 120 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
struct _global_Maybe_types_CompilerType bc =ifValidation_block_returns_value(mir_node,bb);if(bc.tag==0){struct types_CompilerType mir_ret_typ = bc.cases.Some.field0;

#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
struct _global_String mir_name;mir_name = _global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(10,"if_result_"),_global_uint_toStringByValue(((mir_cfg).return_to),bb),bb),_global_StringInit(0,""),bb);;
#line 123 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit(1,mir_ret_typ,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)mir_name,bb)),mir_name),bb),bb),bb);
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
else if(1){
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;
#line 122 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
mir_FuncScope_append(mir_self,mir_Jump((mir_cfg).return_to,bb),bb);
#line 131 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;};
#line 119 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/controlFlowToMIR.top"
;}
void mir_convert_func_call(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct types_CompilerType mir_func_ptr;mir_func_ptr = (*(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb)))->_type;;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct types_CompilerType bc =mir_func_ptr;if(bc.tag==6){struct types_FuncPtr* mir_func = bc.cases.Func.field0;

#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_FuncScope_append(mir_self,mir_FuncCall(mir_func,bb),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
else if(1){
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
_global_log_types_CompilerType(mir_func_ptr,bb);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
_global_panic(_global_StringInit(46,"Expecting func pointer as argument to function"),bb);
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}
void mir_register_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_add_global_var(mir_converter,(mir_info)->name,bb);
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}
void mir_convert_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* bb){;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
unsigned int mir_id;mir_id = mir_Converter_get_id_of_var(mir_converter,(mir_info)->name,bb);;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_self = mir_Converter_push_scope(mir_converter,bb);;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct ast_AST* mir_args;mir_args = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
(mir_self)->num_args = ast_AST_length(mir_args,bb);;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct _global_Range bc =_global_RangeInit(0,ast_AST_length(mir_args,bb));
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int mir_i;mir_i = bd;
;mir_Converter_convert_node(mir_converter,*(ast_AST_op_get(mir_args,(unsigned int)ast_AST_length(mir_args,bb)-mir_i-1,bb)),bb);
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
}
;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct ast_AST* mir_body;mir_body = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)1,bb));;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_body)->nodes.data, (mir_body)->nodes.length),bb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct _global_Array_rmir_Block* mir_all_blocks;mir_all_blocks = (mir_Converter_pop_scope(mir_converter,bb))->all_blocks;;
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_all_blocks,(unsigned int)(mir_all_blocks)->length-1,bb)))->code,mir_FuncReturn(((mir_info)->_type)->return_type,bb),bb);
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_all_blocks);;
#line 39 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_Function mir_func;mir_func = mir_FunctionInit((mir_info)->name,(mir_info)->_type,_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_id);;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
_global_Array_append_mir_Function((mir_converter)->functions,mir_func,bb);
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}
void mir_convert_func_arg(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_name, struct types_CompilerType mir_typ, struct _global_Context* bb){;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
unsigned int mir_id;mir_id = mir_add_local_var(mir_converter,mir_name,bb);;
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
struct mir_ReadInfo* mir_info;mir_info = _global_box_mir_ReadInfo(mir_ReadInfoInit(0,mir_typ,mir_id,mir_name),bb);;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
(mir_self)->num_args = (mir_self)->num_args-1;;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_FuncScope_append(mir_self,mir_FuncArg((mir_self)->num_args,mir_info,bb),bb);
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
mir_FuncScope_append(mir_self,mir_Assign(mir_info,bb),bb);
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/funcToMIR.top"
;}

static inline struct mir_OpCode tmpmirbk(struct mir_Converter** mir_converter,struct ast_AST** mir_node,struct ast_OperatorKind* mir_op_kind,struct mir_FuncScope** mir_self,struct types_CompilerType* mir_node_type,_Bool* mir_is_int,_Bool* mir_is_float, struct _global_Context* bb) {
struct ast_OperatorKind bc =*mir_op_kind;
if(bc.tag==0){return (*mir_is_int ? mir_Add_i32 : (*mir_is_float) ? mir_Add_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==1){return (*mir_is_int ? mir_Mul_i32 : (*mir_is_float) ? mir_Mul_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==2){return (*mir_is_int ? mir_Div_i32 : (*mir_is_float) ? mir_Div_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==3){return (*mir_is_int ? mir_LT_i32 : (*mir_is_float) ? mir_LT_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}else if(bc.tag==4){return (*mir_is_int ? mir_Sub_i32 : (*mir_is_float) ? mir_Sub_f32:(mir_unsupported(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unsupported type "),types_CompilerType_toStringByValue(((*mir_node)->_type),bb),bb),_global_StringInit(0,""),bb),bb)));}
}
void mir_convert_operator(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_OperatorKind mir_op_kind, struct _global_Context* bb){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
struct types_CompilerType mir_node_type;mir_node_type = ast_op_type(mir_node,bb);;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
_Bool mir_is_int;mir_is_int = types_CompilerType_is_typeByValue(mir_node_type,types_Int(0,0,bb),bb);;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
_Bool mir_is_float;mir_is_float = types_CompilerType_is_typeByValue(mir_node_type,types_Float(0,bb),bb);;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
mir_FuncScope_append(mir_self,tmpmirbk(&mir_converter,&mir_node,&mir_op_kind,&mir_self,&mir_node_type,&mir_is_int,&mir_is_float, bb),bb);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/operatorsToMIR.top"
;}
unsigned int mir_add_global_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
(mir_converter)->global_var_counter = (mir_converter)->global_var_counter+1;;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
unsigned int mir_id;mir_id = (mir_converter)->global_var_counter-1;;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;return mir_id;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
unsigned int mir_add_local_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* bb){;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
(mir_self)->var_counter = (mir_self)->var_counter+1;;
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
unsigned int mir_id;mir_id = (mir_self)->var_counter-1;;
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
hashMap_HashMap_insert_uint(&((mir_self)->vars),mir_name,mir_id,bb);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;return mir_id;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
unsigned int mir_add_var(struct mir_Converter* mir_converter, _Bool mir_is_global, struct _global_String mir_name, struct _global_Context* bb){;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;return (mir_is_global ? mir_add_global_var(mir_converter,mir_name,bb):(mir_add_local_var(mir_converter,mir_name,bb)));
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
void mir_convert_create(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_AST* mir_ident;mir_ident = *(_global_Array_op_get_rast_AST(&((mir_node)->nodes),(unsigned int)0,bb));;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_ReadInfo* mir_read_info;;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
else if(1){
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
unsigned int mir_id;mir_id = mir_add_var(mir_converter,(mir_read_info)->is_global,(mir_read_info)->name,bb);;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
mir_FuncScope_append(mir_self,mir_Create(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,mir_id,(mir_read_info)->name),bb),bb),bb);
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
void mir_convert_assign(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_AST* mir_ident;mir_ident = mir_get_lhs_of_assign(mir_node,bb);;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_ReadInfo* mir_read_info;;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct ast_Payload bc =(mir_ident)->payload;if(bc.tag==5){mir_read_info = bc.cases.Identifier.field0;

#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
else if(1){
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
_global_panic(_global_StringInit(41,"Only single variable create are supported"),bb);
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
mir_FuncScope_append(mir_self,mir_Assign(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_ident)->_type,*(hashMap_HashMap_op_get_uint(&((mir_self)->vars),(struct _global_String)(mir_read_info)->name,bb)),(mir_read_info)->name),bb),bb),bb);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
void mir_convert_identifier(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_ReadInfo* mir_read_info, struct _global_Context* bb){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
mir_FuncScope_append(mir_self,mir_Read(_global_box_mir_ReadInfo(mir_ReadInfoInit((mir_read_info)->is_global,(mir_node)->_type,mir_Converter_get_id_of_var(mir_converter,(mir_read_info)->name,bb),(mir_read_info)->name),bb),bb),bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/varsToMIR.top"
;}
void mir_convert_string(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_str, struct _global_Context* bb){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
unsigned int mir_string_id;mir_string_id = (mir_converter)->string_literal_counter;;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
(mir_converter)->string_literal_counter = (mir_converter)->string_literal_counter+1;;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
mir_FuncScope_append(*(_global_Array_op_get_rmir_FuncScope(&((mir_converter)->scopes),(unsigned int)0,bb)),mir_StringDecl(mir_string_id,mir_str,bb),bb);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
mir_FuncScope_append(mir_Converter_get_scope(mir_converter,bb),mir_StringRef(mir_string_id,bb),bb);
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/stringToMIR.top"
;}
void mir_Converter_create_decls(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct _global_Array_rast_AST bc =(mir_node)->nodes;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct ast_AST* mir_n;mir_n = *_global_Array_op_get_rast_AST(&bc, bd, bb);
;unsigned int mir_i;mir_i = bd;
struct ast_Payload bf =(mir_n)->payload;if(bf.tag==15){struct ast_FuncInfo* mir_info = bf.cases.FuncDef.field0;

#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_register_func_def(mir_converter,mir_node,mir_info,bb);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(1){
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
}
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
void mir_Converter_convert_node(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* bb){;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct mir_FuncScope* mir_self;mir_self = mir_Converter_get_scope(mir_converter,bb);;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
unsigned int mir_previous_num_vars;mir_previous_num_vars = (mir_self)->var_counter;;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct ast_Payload bc =(mir_node)->payload;if(bc.tag==8){
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bc.tag==10){
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_if(mir_converter,mir_node,bb);
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 16 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bc.tag==14){
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_while(mir_converter,mir_node,bb);
#line 18 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
return ;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 19 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 17 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bc.tag==9){
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_Converter_convert_node(mir_converter,mir_get_rhs_of_assign(mir_node,bb),bb);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bc.tag==15){struct ast_FuncInfo* mir_info = bc.cases.FuncDef.field0;

#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_func_def(mir_converter,mir_node,mir_info,bb);
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
return ;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(1){
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_Converter_convert_nodes(mir_converter,_global_StaticArray_StaticArray_S_rast_ASTInit((mir_node)->nodes.data, (mir_node)->nodes.length),bb);
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
if(mir_is_block(mir_node,bb)){;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
(mir_self)->var_counter = mir_previous_num_vars;;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;};
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct ast_Payload bd =(mir_node)->payload;if(bd.tag==5){struct ast_ReadInfo* mir_read_info = bd.cases.Identifier.field0;

#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_identifier(mir_converter,mir_node,mir_read_info,bb);
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==15){struct ast_FuncInfo* mir_info = bd.cases.FuncDef.field0;

#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==16){
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==7){
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==11){
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_block(mir_converter,mir_node,bb);
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==10){
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==14){
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==12){
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_condition(mir_converter,mir_node,bb);
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==13){
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_else(mir_converter,mir_node,bb);
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==9){
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_assign(mir_converter,mir_node,bb);
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==18){struct _global_String mir_str = bd.cases.String.field0;

#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_string(mir_converter,mir_node,mir_str,bb);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==8){
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_create(mir_converter,mir_node,bb);
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==17){struct _global_String mir_name = bd.cases.FuncArg.field0;
struct types_CompilerType mir_typ = bd.cases.FuncArg.field1;

#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_func_arg(mir_converter,mir_node,mir_name,mir_typ,bb);
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==6){
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_func_call(mir_converter,mir_node,bb);
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==4){struct ast_OperatorKind mir_op_kind = bd.cases.Operator.field0;

#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_convert_operator(mir_converter,mir_node,mir_op_kind,bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==3){_Bool mir_is_true = bd.cases.Bool.field0;

#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_FuncScope_append(mir_self,mir_Store_bool(mir_is_true,bb),bb);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==1){struct _global_String mir_s = bd.cases.Int.field0;

#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_FuncScope_append(mir_self,mir_Store_i32((int32_t)mir_atoi(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==2){struct _global_String mir_s = bd.cases.Float.field0;

#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_FuncScope_append(mir_self,mir_Store_f32((float)mir_atof(_global_String_to_c_stringByValue(mir_s,bb),bb),bb),bb);
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
else if(bd.tag==0){
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
struct mir_Program mir_convert(struct ast_AST* mir_node, struct _global_Context* bb){;
#line 70 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct _global_Array_mir_Function* mir_functions;mir_functions = _global_box_____mir_Function(_global_Array_mir_FunctionInit(0, 0, NULL, NULL),bb);;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct mir_Converter mir_converter;mir_converter = mir_ConverterInit(0,0,_global_Array_rmir_FuncScopeInit(0, 0, NULL, NULL),mir_functions);;
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct mir_FuncScope* mir_global_scope;mir_global_scope = mir_Converter_push_scope(&(mir_converter),bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_add_global_var(&(mir_converter),_global_StringInit(7,"log_int"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_add_global_var(&(mir_converter),_global_StringInit(9,"log_float"),bb);
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_add_global_var(&(mir_converter),_global_StringInit(3,"log"),bb);
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_add_global_var(&(mir_converter),_global_StringInit(4,"main"),bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_Converter_create_decls(&(mir_converter),mir_node,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
mir_Converter_convert_node(&(mir_converter),mir_node,bb);
#line 88 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct _global_Array_rmir_Block* mir_main_all_blocks;mir_main_all_blocks = (*(_global_Array_op_get_rmir_FuncScope(&((mir_converter).scopes),(unsigned int)0,bb)))->all_blocks;;
#line 90 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
_global_Array_append_mir_OpCode((*(_global_Array_op_get_rmir_Block((struct _global_Array_rmir_Block*)mir_main_all_blocks,(unsigned int)(mir_main_all_blocks)->length-1,bb)))->code,mir_FuncReturn(types_Void,bb),bb);
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct _global_Array_rmir_Block mir_deref_all_blocks;mir_deref_all_blocks = *(mir_main_all_blocks);;
#line 93 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct mir_Function mir_main;mir_main = mir_FunctionInit(_global_StringInit(4,"main"),types_make_FuncPtr(bb),_global_StaticArray_StaticArray_S_rmir_BlockInit(mir_deref_all_blocks.data, mir_deref_all_blocks.length),mir_Converter_get_id_of_var(&(mir_converter),_global_StringInit(4,"main"),bb));;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
_global_Array_append_mir_Function(mir_functions,mir_main,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
struct _global_Array_mir_Function mir_deref_functions;mir_deref_functions = *(mir_functions);;
#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;return mir_ProgramInit(_global_StaticArray_StaticArray_S_mir_FunctionInit(mir_deref_functions.data, mir_deref_functions.length));
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/astToMIR.top"
;}
void _global_memcpy_hashMap_HashBucket_uint_(struct hashMap_HashBucket_uint* _global_target, struct hashMap_HashBucket_uint* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_uint),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline struct hashMap_HashBucket_uint* tmpmirbl(struct _global_Array_hashMap_HashBucket_uint_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct hashMap_HashBucket_uint* bc =(*_global_self)->data;
if(bc != NULL){struct hashMap_HashBucket_uint* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct hashMap_HashBucket_uint* _global_newData;_global_newData = (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_hashMap_HashBucket_uint_(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct hashMap_HashBucket_uint*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_uint),bb));}
}
void _global_Array_reserve_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbl(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_free_uint(struct _global_Array_uint* _global_self, struct _global_Context* bb){;
#line 127 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 128 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int* bc =(_global_self)->data;if(bc != NULL){unsigned int* _global_data = bc;

#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_free((void*)_global_data,bb);
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
else if(bc == NULL){
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct hashMap_HashBucket_uint hashMap_make_HashBucket_uint(struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_uint hashMap_values;hashMap_values = _global_Array_uintInit(0, 0, NULL, NULL);;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_keys).allocator = hashMap_allocator;;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_values).allocator = hashMap_allocator;;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return hashMap_HashBucket_uintInit(hashMap_keys,hashMap_values);
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
void _global_Array_append_hashMap_HashBucket_uint_(struct _global_Array_hashMap_HashBucket_uint_* _global_self, struct hashMap_HashBucket_uint _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_hashMap_HashBucket_uint_(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct hashMap_HashBucket_uint*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_memcpy_rmir_FuncScope(struct mir_FuncScope** _global_target, struct mir_FuncScope** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_FuncScope*),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_mir_OpCode(struct mir_OpCode* _global_target, struct mir_OpCode* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_OpCode),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_mir_CFG(struct mir_CFG* _global_target, struct mir_CFG* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_CFG),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_rmir_Block(struct mir_Block** _global_target, struct mir_Block** _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Block*),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_mir_Function(struct mir_Function* _global_target, struct mir_Function* _global_destination, unsigned int _global_length, struct _global_Context* bb){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct mir_Function),bb);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void hashMap_HashBucket_free_uint(struct hashMap_HashBucket_uint* hashMap_self, struct _global_Context* bb){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_free_string(&((hashMap_self)->keys),bb);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_free_uint(&((hashMap_self)->values),bb);
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_size_uint(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* bb){;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_hashMap_HashBucket_uint_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_uint_Init(0, 0, NULL, NULL);;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_buckets).allocator = hashMap_allocator;;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Range bc =_global_RangeInit(0,hashMap_size);
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bd = bc.start; bd < bc.end; bd++) {
unsigned int hashMap_i;hashMap_i = bd;
;_global_Array_append_hashMap_HashBucket_uint_(&(hashMap_buckets),hashMap_make_HashBucket_uint(hashMap_allocator,bb),bb);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return hashMap_HashMap_uintInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(hashMap_buckets.data, hashMap_buckets.length),0);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}

static inline struct mir_FuncScope** tmpmirbm(struct _global_Array_rmir_FuncScope** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_FuncScope** bc =(*_global_self)->data;
if(bc != NULL){struct mir_FuncScope** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_FuncScope** _global_newData;_global_newData = (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_rmir_FuncScope(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct mir_FuncScope**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_FuncScope*),bb));}
}
void _global_Array_reserve_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbm(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline struct mir_OpCode* tmpmirbn(struct _global_Array_mir_OpCode** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_OpCode* bc =(*_global_self)->data;
if(bc != NULL){struct mir_OpCode* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_OpCode* _global_newData;_global_newData = (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_mir_OpCode(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct mir_OpCode*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_OpCode),bb));}
}
void _global_Array_reserve_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbn(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline struct mir_CFG* tmpmirbp(struct _global_Array_mir_CFG** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_CFG* bc =(*_global_self)->data;
if(bc != NULL){struct mir_CFG* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_CFG* _global_newData;_global_newData = (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_mir_CFG(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct mir_CFG*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_CFG),bb));}
}
void _global_Array_reserve_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbp(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline struct mir_Block** tmpmirbq(struct _global_Array_rmir_Block** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Block** bc =(*_global_self)->data;
if(bc != NULL){struct mir_Block** _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_Block** _global_newData;_global_newData = (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_rmir_Block(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct mir_Block**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Block*),bb));}
}
void _global_Array_reserve_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbq(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct hashMap_HashBucket_uint* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* _global_self, unsigned int _global_index, struct _global_Context* bb){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}

static inline struct mir_Function* tmpmirbr(struct _global_Array_mir_Function** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* bb) {
struct mir_Function* bc =(*_global_self)->data;
if(bc != NULL){struct mir_Function* _global_data = bc;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),bb);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_Function* _global_newData;_global_newData = (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_mir_Function(_global_newData,_global_data,(*_global_self)->length,bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,bb);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(bc == NULL){return (struct mir_Function*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct mir_Function),bb));}
}
void _global_Array_reserve_mir_Function(struct _global_Array_mir_Function* _global_self, unsigned int _global_newSize, struct _global_Context* bb){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(bb)->allocator,bb);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpmirbr(&_global_self,&_global_newSize,&_global_allocator, bb);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void hashMap_HashMap_free_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_Context* bb){;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
hashMap_HashBucket_free_uint(&(hashMap_bucket),bb);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct _global_Array_mir_OpCode* _global_box_____mir_OpCode(struct _global_Array_mir_OpCode _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct _global_Array_mir_OpCode* _global_pointer;_global_pointer = (struct _global_Array_mir_OpCode*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_OpCode),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct _global_Array_rmir_Block* _global_box_____rmir_Block(struct _global_Array_rmir_Block _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct _global_Array_rmir_Block* _global_pointer;_global_pointer = (struct _global_Array_rmir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_rmir_Block),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct mir_Block* _global_box_mir_Block(struct mir_Block _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct mir_Block* _global_pointer;_global_pointer = (struct mir_Block*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_Block),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct hashMap_HashMap_uint hashMap_make_HashMap_uint(struct _global_Context* bb){;return hashMap_make_HashMap_size_uint(powf(2,3),(bb)->allocator,bb);
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct mir_FuncScope* _global_box_mir_FuncScope(struct mir_FuncScope _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct mir_FuncScope* _global_pointer;_global_pointer = (struct mir_FuncScope*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_FuncScope),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_Array_append_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct mir_FuncScope* _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_rmir_FuncScope(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_rmir_FuncScope(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct mir_FuncScope**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct mir_FuncScope* _global_Array_pop_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, struct _global_Context* bb){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_FuncScope* _global_tmp;_global_tmp = *(_global_Array_op_get_rmir_FuncScope(_global_self,(unsigned int)(_global_self)->length-1,bb));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct mir_FuncScope** _global_Array_op_get_rmir_FuncScope(struct _global_Array_rmir_FuncScope* _global_self, unsigned int _global_index, struct _global_Context* bb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct mir_FuncScope**)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_mir_OpCode(struct _global_Array_mir_OpCode* _global_self, struct mir_OpCode _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_mir_OpCode(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_mir_OpCode(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct mir_OpCode*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct mir_CFG _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_mir_CFG(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_mir_CFG(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct mir_CFG*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_rmir_Block(struct _global_Array_rmir_Block* _global_self, struct mir_Block* _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_rmir_Block(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_rmir_Block(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct mir_Block**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct mir_CFG _global_Array_pop_mir_CFG(struct _global_Array_mir_CFG* _global_self, struct _global_Context* bb){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct mir_CFG _global_tmp;_global_tmp = *(_global_Array_op_get_mir_CFG(_global_self,(unsigned int)(_global_self)->length-1,bb));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct mir_CFG* _global_Array_op_get_mir_CFG(struct _global_Array_mir_CFG* _global_self, unsigned int _global_index, struct _global_Context* bb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct mir_CFG*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
_Bool hashMap_HashMap_contains_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string bc =(hashMap_bucket)->keys;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
return 1;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return 0;
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
unsigned int* hashMap_HashMap_op_get_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, struct _global_Context* bb){;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string bc =(hashMap_bucket)->keys;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,bb)){;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
return &(*(_global_Array_op_get_uint(&((hashMap_bucket)->values),(unsigned int)hashMap_i,bb)));
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),bb),_global_StringInit(12," in hash map"),bb),bb);
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return (unsigned int*)0;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct mir_ReadInfo* _global_box_mir_ReadInfo(struct mir_ReadInfo _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct mir_ReadInfo* _global_pointer;_global_pointer = (struct mir_ReadInfo*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct mir_ReadInfo),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_log_types_CompilerType(struct types_CompilerType _global_s, struct _global_Context* bb){;
#line 18 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/logger.top"
_global_c_log(types_CompilerType_toString(&(_global_s),bb),bb);
#line 19 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/logger.top"
;}
struct mir_Block** _global_Array_op_get_rmir_Block(struct _global_Array_rmir_Block* _global_self, unsigned int _global_index, struct _global_Context* bb){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),bb);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct mir_Block**)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_mir_Function(struct _global_Array_mir_Function* _global_self, struct mir_Function _global_value, struct _global_Context* bb){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_mir_Function(_global_self,1,bb);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_mir_Function(_global_self,(_global_self)->capacity*2,bb);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct mir_Function*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void hashMap_HashMap_insert_uint(struct hashMap_HashMap_uint* hashMap_self, struct _global_String hashMap_key, unsigned int hashMap_value, struct _global_Context* bb){;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),bb);
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)0,bb))).keys).allocator,(bb)->allocator,bb);;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashMap_uint hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_uint(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,bb);;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bc =(hashMap_self)->buckets;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bd = 0;bd < bc.length; bd++) {
struct hashMap_HashBucket_uint hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&bc, bd, bb);
;unsigned int hashMap_i;hashMap_i = bd;
struct _global_Range bf =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int bg = bf.start; bg < bf.end; bg++) {
unsigned int hashMap_c;hashMap_c = bg;
;hashMap_HashMap_insert_uint(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,bb)),*(_global_Array_op_get_uint(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,bb)),bb);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
hashMap_HashMap_free_uint(hashMap_self,bb);
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
*(hashMap_self) = hashMap_new_hash;;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,bb);;
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_uint* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_uint_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,bb)));;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,bb);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_append_uint(&((hashMap_bucket)->values),hashMap_value,bb);
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_self)->length = (hashMap_self)->length+1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct _global_Array_mir_Function* _global_box_____mir_Function(struct _global_Array_mir_Function _global_value, struct _global_Context* bb){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct _global_Array_mir_Function* _global_pointer;_global_pointer = (struct _global_Array_mir_Function*)(_global_Allocator_alloc((bb)->allocator,(uint64_t)sizeof(struct _global_Array_mir_Function),bb));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
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
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
ifValidationInit();;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/mir/converter.top"
;
};