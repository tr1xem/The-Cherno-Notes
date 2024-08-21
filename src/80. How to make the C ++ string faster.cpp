//#Include <iostream>
//#Include <string>
//
// static uint32_t s_alloccount = 0;
// Void* Operator New (SIZE_T SIZE) // The method of tracking memory is to overload New
// {{
// s_alloccount ++;
// std :: COUT << "AloCating" << SIZE << "" bytes \ n ";
// Return malloc (size);
//}
//// Void Printname (Const STD :: String & Name)
//// {
//// std :: count << name << std :: endl;
////}
// Void Printname (const std :: string_view name)
// {{
// std :: COUT << name << STD :: Endl;
//}
// int Main ()
// {{
// /*std :: string name = "bai zexin";
// Printname (name);*/
// // I wrote and assigned an 8 -byte memory once
///*Printname ("bai Zexin");*/
// std :: string name = "bai zexin";
// const char* name = "bai zexin"; // std :: string will also call and distribute, and the original C will be in the constant character area
//#IF 0
// std :: string firstName = name.substr (0, 3);
// std :: string lastname = name.substr (4); // Substr will also allocate memory once
// // Writing is still allocated 8 -byte memory once
///*std :: COUT << firstname << STD :: Endl;*/
//#Else
// // std :: string_view firstname (name.c_str (), 3);
// std :: string_view_view lastName (name.c_str () + 4, 5); // Extract the string through the view, it will not be allocated, faster!
// std :: string_view firstname (name, 3);
// std :: string_View LastName (name + 4, 5); // Extract the string through the view, it will not be allocated, faster!
//#Endif
// Printname (firstName);
// Printname (LastName);
// std :: COUT << s_alloccount << "allocations" << std :: Endl;
// std :: cin.get ();
//}