struct error_CompilerError {
struct _global_String filename;
unsigned int line;
struct _global_String mesg;
unsigned int column;
};
static inline struct error_CompilerError error_CompilerErrorInit(struct _global_String filename,unsigned int line,struct _global_String mesg,unsigned int column){
struct error_CompilerError c;
c.filename=filename;c.line=line;c.mesg=mesg;c.column=column;return c;
};
struct _global_StructType error_CompilerErrorType;struct _global_StructType* error_CompilerError_get_type(struct error_CompilerError* self, struct _global_Context* c){return &error_CompilerErrorType;}
struct _global_Field* error_CompilerErrorType_fields;

struct error_CompilerError* error_CompilerError_before(struct error_CompilerError* error_self, struct _global_String error_mesg, struct _global_Context* b);
struct _global_String error_CompilerError_toString(struct error_CompilerError* error_self, struct _global_Context* c);

struct _global_String error_CompilerError_toString(struct error_CompilerError*,struct _global_Context* c);
