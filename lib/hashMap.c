unsigned int hashMap_hash_string(struct _global_String hashMap_s_key, unsigned int hashMap_table_size, struct _global_Context* c){;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_h;hashMap_h = 0;;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_o;hashMap_o = 31415;;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_t;hashMap_t = 27183;;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
char* hashMap_key;hashMap_key = _global_String_to_c_stringByValue(hashMap_s_key,c);;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Range d =_global_RangeInit(0,(hashMap_s_key).length);
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int f = d.start; f < d.end; f++) {
unsigned int hashMap_i;hashMap_i = f;
;hashMap_h = (hashMap_o*hashMap_h+(unsigned int)(*(((hashMap_key + (int64_t)hashMap_i)))))%hashMap_table_size;;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
hashMap_o = hashMap_o*hashMap_t%(hashMap_table_size-1);;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return hashMap_h;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
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
;
};