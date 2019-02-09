struct _global_Array_char {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
char* data;
};
static inline struct _global_Array_char _global_Array_charInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,char* data){
struct _global_Array_char c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_charType;struct _global_ArrayType* _global_Array_char_get_type(struct _global_Array_char* self, struct _global_Context* c){return &_global_Array_charType;}
struct _global_ArrayType* _global_Array_char_get_typeByValue(struct _global_Array_char self, struct _global_Context* c){return &_global_Array_charType;}
struct _global_ArrayType _global_Array_charType;struct _global_PointerType _global_Maybe_rcharType;struct _global_PointerType* _global_Maybe_rchar_get_type(char*** self, struct _global_Context* c){return &_global_Maybe_rcharType;}
struct _global_PointerType* _global_Maybe_rchar_get_typeByValue(char** self, struct _global_Context* c){return &_global_Maybe_rcharType;}
struct _global_Type_VTABLE rCharType_VTABLE_FOR_Type;struct stringBuilder_StringBuilder {
struct _global_Array_char chars;
};
static inline struct stringBuilder_StringBuilder stringBuilder_StringBuilderInit(struct _global_Array_char chars){
struct stringBuilder_StringBuilder d;
d.chars=chars;return d;
};
struct _global_StructType stringBuilder_StringBuilderType;struct _global_StructType* stringBuilder_StringBuilder_get_type(struct stringBuilder_StringBuilder* self, struct _global_Context* c){return &stringBuilder_StringBuilderType;}
struct _global_Field* stringBuilder_StringBuilderType_fields;

void stringBuilder_StringBuilder_append(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_String stringBuilder_s, struct _global_Context* b);
void stringBuilder_StringBuilder_shorten(struct stringBuilder_StringBuilder* stringBuilder_self, unsigned int stringBuilder_num, struct _global_Context* c);
struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_Context* d);

struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder*,struct _global_Context* d);
struct stringBuilder_StringBuilder stringBuilder_make_StringBuilder(struct _global_Context* f);
