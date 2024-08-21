//// CI continuous integration refers to the process of continuous integrated code during development, and build automation and integrated testing, similar to Jenkins of Makefile
//// Static analysis, check the source code, try to find out the problem, analyze your programming intention
//#Include <iostream>
//
// Void Printsum (int a, int b)
// {{
// sTD :: COUT << a << " +" << b << "=" << (a + b) << std :: Endl;
//}
//
// int Main ()
// {{
// int value = 0;
// Printsum (Value ++, Value ++); // What should happen without defined behavior C ++ standards?
// C ++ 14 Release 0+0 = 0, because the compiler MSVC allows parallel debug 0+1 = 1
// // C ++ 17 defines two parameters one by one calculation one by one
// Printsum (++ value, ++ value);
// C ++ 14 Debug Release 2+2 = 4 Unfinifcted Behavior C ++ Standard does not really define this. What should happen?
//
// std :: cin.get ();
//}