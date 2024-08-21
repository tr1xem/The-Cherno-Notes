///// 15 characters (including) below will be buffer in the stack, 16 characters or above will call Heap Malloc to allocate memory
//#Include <iostream>
//#Include <string>
//
// Void* Operator New (SIZE_T SIZE)
// {{
// sTD :: COUT << "allocating" << SIZE << "bytes \ n"; // Output in the debug mode, in fact, it should be output.
// // This is just a problem caused by debugging string
// Return malloc (size);
//}
// int Main ()
// {{
// std :: string name = "Cherno Small St"; // There are only six characters, which are only stored in the cache area of ​​static distribution, and will not touch the heap memory
// std :: cin.get ();
// Return 0;
//}