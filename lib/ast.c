void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l);
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l);
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l);
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l);
struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* l){;
struct _global_EnumType* ast_payload_type;ast_payload_type = ast_Payload_get_type(NULL,l);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((ast_payload_type)->cases),(unsigned int)(ast_self)->tag,l))).name;
;}
static inline struct _global_String ast_Payload_toStringByValue(struct ast_Payload m,struct _global_Context* l){
return ast_Payload_toString(&m,l);
}struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_filename;
;}
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_line;
;}
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* l){;
;return (ast_self)->_column;
;}
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* l){;
;
(ast_node)->owner = ast_self;;
_global_Array_append_rast_AST(&((ast_self)->nodes),ast_node,l);
;}
struct ast_AST** ast_AST_op_get(struct ast_AST* ast_self, unsigned int ast_index, struct _global_Context* l){;
;
;return &(*(_global_Array_op_get_rast_AST(&((ast_self)->nodes),(unsigned int)ast_index,l)));
;}
unsigned int ast_AST_length(struct ast_AST* ast_self, struct _global_Context* l){;
;return ((ast_self)->nodes).length;
;}
struct types_CompilerType ast_op_type(struct ast_AST* ast_node, struct _global_Context* l){;
_global_assert(((ast_node)->payload).tag==((ast_Operator(ast_Add,l))).tag,_global_StringInit(33,"Passing incorrect node to op_type"),l);
;return (*(_global_Array_op_get_rast_AST(&((ast_node)->nodes),(unsigned int)0,l)))->_type;
;}
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct ast_AST*),l);
;}

static inline struct ast_AST** tmpastq(struct _global_Array_rast_AST** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* l) {
struct ast_AST** m =(*_global_self)->data;
if(m != NULL){struct ast_AST** _global_data = m;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),l);
struct ast_AST** _global_newData;_global_newData = (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));;
_global_memcpy_rast_AST(_global_newData,_global_data,(*_global_self)->length,l);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,l);
return _global_newData;}else if(m == NULL){return (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));}
}
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(l)->allocator,l);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpastq(&_global_self,&_global_newSize,&_global_allocator, l);;
;}
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rast_AST(_global_self,1,l);
;}
else{_global_Array_reserve_rast_AST(_global_self,(_global_self)->capacity*2,l);
;};
;};
*((((struct ast_AST**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),l);
;return ((struct ast_AST**)(_global_self)->data + (int64_t)_global_index);
;}

void astInitTypes() { 
 typesInitTypes();
 }
void astInit() { 
typesInit();;
;
;
};