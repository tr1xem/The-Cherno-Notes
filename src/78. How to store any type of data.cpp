//// C ++ 17's new features STD :: ANY believes that it is not useful to use STD :: Variant and void*
//#Include <iostream>
//#Include <avy>
// Void* Operator New (SIZE_T SIZE)
// {{
// Return malloc (size);
//}
// Struct CustomClass
// {{
// std :: string s0, s1; // This class exceeds 32 bytes
//};
// int Main ()
// {{
// std :: Any Data;
// data = 2;
// data = CustomClass (); // When exceeding 32 bytes, then std :: Any will call new dynamic allocation of memory
// data = "cherno";
// data = std :: string ("cherno");
// sTD :: ANY can access any data
// std :: string string = std :: Any_cast <std :: string> (data);
// // If data is not a type you want to change, it will throw a type of conversion exception
// std :: string & string = std :: Any_cast <std :: string &> (data);
// // Use reference must be introduced in Templates.
// std :: cin.get ();
//}