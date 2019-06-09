void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l);
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l);
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l);
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l);
struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* l){;
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
struct _global_EnumType* ast_payload_type;ast_payload_type = ast_Payload_get_type(NULL,l);;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((ast_payload_type)->cases),(unsigned int)(ast_self)->tag,l))).name;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
static inline struct _global_String ast_Payload_toStringByValue(struct ast_Payload m,struct _global_Context* l){
return ast_Payload_toString(&m,l);
}struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* l){;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return (ast_self)->_filename;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* l){;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return (ast_self)->_line;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* l){;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return (ast_self)->_column;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* l){;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
(ast_node)->owner = ast_self;;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
_global_Array_append_rast_AST(&((ast_self)->nodes),ast_node,l);
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
struct ast_AST** ast_AST_op_get(struct ast_AST* ast_self, unsigned int ast_index, struct _global_Context* l){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return &(*(_global_Array_op_get_rast_AST(&((ast_self)->nodes),(unsigned int)ast_index,l)));
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
unsigned int ast_AST_length(struct ast_AST* ast_self, struct _global_Context* l){;
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return ((ast_self)->nodes).length;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
struct types_CompilerType ast_op_type(struct ast_AST* ast_node, struct _global_Context* l){;
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
_global_assert(((ast_node)->payload).tag==((ast_Operator(ast_Add,l))).tag,_global_StringInit(33,"Passing incorrect node to op_type"),l);
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;return (*(_global_Array_op_get_rast_AST(&((ast_node)->nodes),(unsigned int)0,l)))->_type;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;}
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* l){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct ast_AST*),l);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline struct ast_AST** tmpastL(struct _global_Array_rast_AST** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* l) {
struct ast_AST** m =(*_global_self)->data;
if(m != NULL){struct ast_AST** _global_data = m;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),l);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct ast_AST** _global_newData;_global_newData = (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_rast_AST(_global_newData,_global_data,(*_global_self)->length,l);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,l);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(m == NULL){return (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),l));}
}
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* l){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(l)->allocator,l);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpastL(&_global_self,&_global_newSize,&_global_allocator, l);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* l){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_rast_AST(_global_self,1,l);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_rast_AST(_global_self,(_global_self)->capacity*2,l);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct ast_AST**)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),l);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct ast_AST**)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

void astInitTypes() { 
 typesInitTypes();
 }
void astInit() { 
typesInit();;
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//ast.top"
;
};