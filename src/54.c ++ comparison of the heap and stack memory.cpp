//// 1. Stack is usually a 2M byte size memory area pre -defined operating system
//// 2. The heap is also a pre -defined memory area of ​​the operating system, but it can grow and modify it as the application is developed
//#Include <iostream>
//#Include <string>
// Struct Vector3
// {{
// float x, y, z;
// vector3 (): x (10), y (11), z (12) {}
//};
//
// int Main ()
// {{
// {{
// int value = 5; // The allocation of memory on the stack between the stacks will have security guards to prevent cross -border from crossing the boundary from high address to low address distribution.
// int Array [5]; // The distribution array on the stack
// array [0] = 1;
// array [1] = 2;
// Array [2] = 3;
// Array [3] = 4;
// array [4] = 5;
// vector3 vector; // The allocation stack on the stack will pop up all the existence scope when all the existence is exceeded
//}
// int* hvalue = new int;
// *hvalue = 5; // Pack the integer on the pile
// int* haRray = new int [5]; // Pack the distribution array of array make_unique, make_shaRd are all stacked and allocated the Malloc function that actually calls C actually calls C.
// Malloc maintains a leisure list and allocate memory
// haRray [0] = 1;
// haRray [1] = 2;
// haRray [2] = 3;
// haRray [3] = 4;
// haRray [4] = 5;
// Vector3* hvector = new vector3 (); // Packing the assignment class
// delete hvalue;
// delete [] haRray;
// delete hvector;
// std :: cin.get ();
//}