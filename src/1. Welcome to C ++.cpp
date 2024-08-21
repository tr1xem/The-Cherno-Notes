// 1. The biggest reason to use C ++ is to directly control the hardware.Use C ++ code, these code are sent to the compiler to compile, the compiler compiles the code written, links and outputs the machine code with the target platform.The machine code is the instruction that your device is actually executed on the CPU.Using C ++, we can control each instruction executed by the CPU.
//
//2.c# and Java are different from CPP because they run on the virtual machine, which means that the code is first compiled into an intermediate language. When running the application on the target platform, the virtual machine is converted to the program when running to the program.Machine code.
//
//
//3.c++ is a native language.For example, the X64 compiler will output the X64 machine code, so that (can only) run on the 64 -bit CPU.The C ++ compiler is the target platform and architecture to generate the machine code. After compiling, it has become a machine language on the platform. You only need to put the machine code instruction into the CPU, and the CPU will execute these instructions.
//
// 4. Just because the code is local, it does not mean that it will be fast, and the garbage code may even be slower than the virtual machine language, such as C#or Java, because they tend to optimize system optimization during operation to run.
//