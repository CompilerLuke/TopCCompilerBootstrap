struct puintcrnonep  { unsigned int field0;void* field1; };
struct puintcrnonep puintcrnonepInit(unsigned int field0,void* field1) {struct puintcrnonep tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

void print_type_to_string(struct _global_Type print_kind, void* print_ptr, struct _global_String print_tab, struct stringBuilder_StringBuilder* print_s, struct _global_Context* b);
