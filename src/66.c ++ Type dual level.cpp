//#Include <iostream>
// Struct Entity // If Struct is empty, at least one byte is used to address. If there is a variable, you can see it as an array
// {{
// int x, y;
// int* getpositions ()
// {{
// Return & x;
//}
//};
// int Main ()
// {{
// int a = 50;
///// double value = a; // hidden conversion two variable memory addresses are not connected
////// double value = (double) a; // explicitly converts the two variable memory addresses without connection
//////double value = *(double *) & a; // Type dual levels from int to double, 4 more without initialized bytes, the output is not controllable controlled
// // Treat the memory I already have as different types of memory, and convert a type as a pointer to other types, that is, (Double*) & A
// double & value = *(double *) & a;
// // value = 0.0; // This is to write 8 bytes in the 8 -byte space in a reference method, no problem
// sTD :: COUT << Value << STD :: Endl;
// Entity E = {5,8};
// int x = e.x;
// int y =*(int*) ((char*) & e + 4); // You can also play the structure like this, this is the direct operation of memory!
// sTD :: COUT << y << std :: Endl;
// int* posity = (int*) & e;
// int* posity = e.getpositions ();
// sTD :: COUT << Position [0] << "," << POSITION [1] << std :: Endl; // You can output elements like this, a nick
// std :: cin.get ();
//}