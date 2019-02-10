name = r"C:\Users\User\Desktop\TopCCompiler\bin\topc.py"

import subprocess
subprocess.call([r"C:\Users\User\AppData\Local\Programs\Python\Python36-32\python.exe", name, "debug", "-c"])

args = "C:\\Users\\User\\Desktop\\llvm\\build\RelWithDebInfo\\bin\\llvm-config --ldflags --libs core analysis native bitwriter all-targets"
configs = subprocess.check_output(args)
configs = configs.decode('ascii')
configs = configs.replace("\n", " ")


print(configs)

args = ("clang++ " + configs + " bin/TopCCompilerBootstrap.o -g -o bin/TopCCompilerBootstrap.exe")
print(args)
subprocess.call(args)

subprocess.call("bin/TopCCompilerBootstrap.exe")
