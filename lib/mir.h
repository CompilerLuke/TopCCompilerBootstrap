struct _global_AliasType mir_ID_Type;struct mir_CreateVar {
unsigned int name;
};
static inline struct mir_CreateVar mir_CreateVarInit(unsigned int name){
struct mir_CreateVar c;
c.name=name;return c;
};
struct _global_StructType mir_CreateVarType;struct _global_StructType* mir_CreateVar_get_type(struct mir_CreateVar* self, struct _global_Context* c){return &mir_CreateVarType;}
struct _global_Field* mir_CreateVarType_fields;
struct _global_Type_VTABLE rAliasType_VTABLE_FOR_Type;
struct _global_String mir_CreateVar_toString(struct mir_CreateVar* mir_self, struct _global_Context* b);

struct _global_String mir_CreateVar_toString(struct mir_CreateVar*,struct _global_Context* b);
