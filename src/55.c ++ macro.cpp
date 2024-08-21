//// 1. The pre -processing stage is actually a text editing stage, pure text replacement
//#Include <iostream>
//#Include <string>
//#IF 0
//#define wait std :: cin.get ()
///#define log (x) std :: count << x << STD :: Endl;
//// When using this method below, you must introduce C/C ++ in the project to introduce a macro definition Release version without output a useless log debug to debug the output
///#Ifdef PR_DEBUG, it is best not to use this way because this switching macro definition must annotate the code
////#define PR_DEBUG == 1
/#if PR_DEBUG == 1 // This kind of switch is only changed to the value defined above
//#define log (x) std :: count << x << sTD :: Endl;
////#Else
//#Elif Defined (pr_release) // Recommended writing
//#Define Log (x)
//#Endif
//
//#Endif
//// The macro -definition cross -line definition method \ is the righteousness of the Enter. Do not add an empty grid later, but directly ENTER
//#Define main into main () \
// {\
// std :: cin.get (); \
//}
//
//// int main ()
//// {
/////std:cin.get ();
//// log ("hello");
//// Wait;
////}
// map