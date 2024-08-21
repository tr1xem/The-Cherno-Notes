//#Include <iostream>
//
// int Main ()
// {{
// int* array = new int [50]; // The 200 -byte memory 50* 4 is allocated, and only 200 bytes of memory are allocated
// int ** a2d = new int* [50]; // Allocate 200 bytes of memory, in fact, doing the same thing
// Array [0] = 0; // Array [0] is an int
// a2d [0] = nullptr; // A2D [0] is an int* is pointer
// for (int i = 0; i <50; i ++)
// a2d [i] = new int [50];
// // This definition method actually creates 50 separate buffers, and 50 integers in each buffer will cause memory fragments (Cache Miss)
// a2d [0] [0] = 0;
// a2d [0] [1] = 0;
// A2D [0] [2] = 0;
// delete [] A2D; // This way of writing will cause memory leaks, and you cannot access A2D [i] for delete
// // The correct deletion method is shown below:
// for (int i = 0; i <50; i ++)
// delete [] a2d [i];
// delete [] A2D;
//
// // You can also handle the two -dimensional array like this
// int * array = new int [50 * 50];
// for (int i = 0; i <5; i ++)
// for (int j = 0; j <5; j ++)
// ARRAY [j + 5 * i] = 2; // Increase 1 each time I increase, and you will jump forward 5 elements. This way is much faster than the above
// std :: cin.get ();
//
//
//}