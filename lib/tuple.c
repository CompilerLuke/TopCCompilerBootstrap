struct error_CompilerError* tuple_parse_tuple(struct parser_Parser* tuple_self, struct _global_Context* c){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
(tuple_self)->num_paren = (tuple_self)->num_paren+1;;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
struct error_CompilerError* d =parser_Parser_eval_till_end(tuple_self,c);if(d != NULL){struct error_CompilerError* tuple__x = d;

#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
return tuple__x;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
;}
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
else if(1){
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
;}
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/tuple.top"
;return NULL;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}

void tupleInitTypes() { 
 
 }
void tupleInit() { 
;
};