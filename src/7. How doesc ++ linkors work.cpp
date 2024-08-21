// The main focus of the link now is to find where each symbol and function are and connect them.Applications need to know where the entrance point (Entry Point is usually). When you actually run your application, C ++ Run Time Library will say: This is the Main function, I want to jump here here, And then start the code.
//
// Press Ctrl + F7 in VS. Only compilation will occur, and the link will never happen.But if it is built or F5 runs, it will compile and then link.
//
// Syntax error (compile) tells us that the error is in the compilation stage.LNK represents the link link, telling us that the error is in the link stage.
//
// Custom Entry Point (a EXE must have Entry Point):
//
// Link error:
//
// Unexpicious external symbols Unresolved External Symbol —— when the linker cannot find what it needs.(If you never call a function, you do not need a link at all)

#include <iOSTREAM>
// include find a file calld iostream, it takes the content of the iostream file and paste it here.
// include is a header
// We Include IOSTREAM BeCAUSE We Need the Declaration of the Function 'CIN' AND 'COUT'
#include "7log.h"
// Pre -Process Statement the Happen Before The Actual Compilation
// void log (const text* message);

// int Multiply (int a, int b) {{
// log ("multiply");
// Return a * b;
//}

// Static int Multiply (int a, int b) {{
// log ("multiply");
// Return a * b;
//}
// int Main ()
// {{
// sTD :: COUT << Multiply (5, 8) << STD :: Endl;
// std :: cin.get ();
//}
// As above, in a program, if we call LOG in the function, but Main does not call Multiply. If the log is not found by the link, it will still report an error -because the Multiply function may be by other translation units.Call!Therefore, links are still needed.
//
// As long as we make the Multiply function into static, that is, the Static int Multiply (int a, int B), then this indicates that this function is only declared in this translation unit.Therefore, even though the log function is not defined in other translation units, because it only exists in Multiply, and Multiply is a static and the current translation unit has not been called, it indicates that Multiply has never been called!Therefore, no link is required, and no link error will be obtained.
// Of course, repeated definitions will make the linker do not know which function to reach the link, so it will make an error.For example, a function is defined in a header file 7log.h: the log function is called in log.cpp and math.cpp and includes the log.h header file (note, the header file INCLUDE just copy and paste the content of the header file contentCome here), because each is a translation unit, there are two LOG functions defined, and the linkor will still not know which function to call, and there will be errors.
// Repair measures:
//1.stative
// When the header file code is posted, this function is only the internal function of the file, so both log.cpp and math.cpp have their respective log functions and are not visible to other obj files.
//2.inline
// Inline means to obtain our actual function body and replace the function call to the function body (directly posted in).
// 3. Put it in other translation units, the header file is only declared
//
// Links need to take away all our target files and link them together.It will also be pulled into any other libraries we may use, such as the C Run Time Library, C ++ standard library, API of the platform, etc., Linking is very common from many different places.
//
// There are other different links: static links and dynamic links (49th lesson and 50th lesson, dynamic library DLL static library lib)