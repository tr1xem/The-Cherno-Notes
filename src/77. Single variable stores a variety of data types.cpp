//// C ++ 17 Features
//#Include <iostream>
//#Include <string>
//#Include <variant>
//#include <optional>
// enum errorCode
// {{
// None = 0, notfound = 1, noaccess = 2
//};
// std :: variant <std :: string, int> readfileasstring () // Read the successful reading is character, otherwise it is Errtype
// {{
// Return {};
//}
// int Main ()
// {{
// std :: variant <std :: string, int> data;
// // Union's memory is the maximum value of the type
// STD :: Variant creates a class, put the two data structures in the class class
// std :: COUT << SIZEOF (int) << \ n "; // 4
// std :: COUT << SIZEOF (STD :: String) << "\ n"; // 28
// std :: COUT << SIZEOF (DATA) << "\ n"; // 32
// data = "cherno";
// data.index (); // 0, return to the index corresponding to the current type of data
// std :: COUT << std :: get <std :: string> (data) << "\ n";
// if (Auto* Value = STD :: get_if <sTd :: String> (& Data))
// {{
// std :: string & v = *value;;;
//}
// Else
// {{
//
//}
// // If you can't get this type to return 0, if you can get the pointer returned to this type
// data = 2;
// data.index (); // 1, return to the index of current data corresponding type
// std :: COUT << STD :: get <int> (data) << "\ n";
// std :: cin.get ();
//}