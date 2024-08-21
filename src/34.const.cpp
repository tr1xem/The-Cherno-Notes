// 1. CONST is placed before the variable type, and it cannot be changed by default, such as: const into a = 20;
//
// 2. CONST placed before the type of pointer, the value of the address referred to by the default pointer cannot be changed, such as: const int* p = new int; then* p cannot be changed, and the other way is: int Const* p p= new int;
//
// 3. After the const is placed in the type of pointer, the default pointer cannot be changed, such as: int* const p = & a;
//
// 4. CONST is placed behind the member function ({front), which means that this function cannot modify the value.Change, such as: int get () const {}
//
// 5. Const In the function parameter list of the function, if it is copied and reference
//
// 6. If you want to change the variable in the Const member function, modify the variable to Mutable