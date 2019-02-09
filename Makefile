run:
	topc build -c
	clang++  `llvm-config --cxxflags --ldflags --libs core analysis native bitwriter x86 x86asmparser x86asmprinter x86codegen x86desc x86disassembler x86info --system-libs` bin/TopCCompilerBootstrap.o -o bin/TopCCompilerBootstrap
	./bin/TopCCompilerBootstrap