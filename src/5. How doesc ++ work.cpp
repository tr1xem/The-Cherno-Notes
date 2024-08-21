// 1. Take VS as an example. Configure Configurations is just a series of rules when building a project. The solution platform Platforms refers to the target platform of the code you compiled. Win32 is actually the same as X86.
//
// 2. Each CPP file in the project will be compiled, but the header files will not be compiled.The content of the header file comes in during pre -processing.
//
//3.Visual Studio Compiles a file separately: Ctrl + F7
//
//4. The Error List window ofvisual Studio basically analyzes the Output window, then finds the word ERROR, grabs this part of the information to display it, and then puts it in the error list, so it is recommended to see the Output window.
//
//5.5.java The concept of files exist, the name of the Java class must be bound to the file name, the file directory level is associated with the Package, Java determines the corresponding file existence; while the concept file of C ++ does not exist file only determines the method of compiling the source code, Just need to determine the file type such as .h/.cpp/.c
//
//6.Building includes compilation and links.LINKER (link) means connecting all Obj files in a file
//
// 7. Declaration: This symbol, this function exists.
//
// 8. Definition: What is this function.

/*#Include <iOSTREAM>

void log (const char* message);

int Main () {
Log ("Hello World!");
std :: cin.get ();
}*/