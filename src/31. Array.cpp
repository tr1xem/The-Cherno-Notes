// 1. Seeking the length of the array (int): sizeof (a) /sizeof (int)
//
// 2. Allocate the memory of the array on the stack and heap:
//
// (Stack: Automatic release of leaving the scope; Dack: Delete must be released manually)
// int a [5]; // Stack: The value of A's name is an address, the value of this address is the first element of the array, the printed element address
// int* p = new int [5]; // Pack: P's value is an address, the value of this address is the first element address of the array, the printed element address