unsigned int hashMap_default_table_size;unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* c){;
;
unsigned int hashMap_h;hashMap_h = 0;;
unsigned int hashMap_o;hashMap_o = 31415;;
unsigned int hashMap_t;hashMap_t = 27183;;
char* hashMap_key;hashMap_key = _global_String_to_c_stringByValue(hashMap_s_key,c);;
struct _global_Range d =_global_RangeInit(0,(hashMap_s_key).length);
for (unsigned int f = d.start; f < d.end; f++) {
unsigned int hashMap_i;hashMap_i = f;
;hashMap_h=(hashMap_o*hashMap_h+(unsigned int)(*(((hashMap_key + (int64_t)hashMap_i)))))%hashMap_table_size;;
hashMap_o=hashMap_o*hashMap_t%(hashMap_table_size-1);;
}
;
;return hashMap_h;
;}

void hashMapInitTypes() { 
 
hashMap_Hash_Type.name = _global_StringInit(4, "Hash");
hashMap_Hash_Type.package = _global_StringInit(7, "hashMap");
hashMap_Hash_Type.real_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; }
void hashMapInit() { 
hashMap_default_table_size = 1003;;
;
};