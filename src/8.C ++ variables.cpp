// The variable allows us to name the data (data) stored in memory and continue to use it.When a variable is created, it will be stored in memory -two places: heap and stack.
//
// Cherno explains that the only difference between different variable types in C ++ is the only difference between different variable types is size size (how much memory does this variable take for).This is actually the only difference between these original data types.
//
// The actual size of the data type depends on the compiler -different compilers will be different.The size of the type is determined by the compiler.
//
// The size of the data (byte):
//
// Char 1, SHORT 2, Int 4, long usually 4, depending on the compiler, long long is usually 8
//
// You can add UNSIGNED to any of the five commonly used above. It will remove the symbol bit and set a larger number.
//
// Char traditionally used to store characters, not just numbers (of course, can also store numbers).It can also be distributed to other types of storage.Therefore, the use of data type depends only on programmers.
//
// Story decimal:
//
// Float 4, Double 8, in fact, there are long double and so on
//
// There is a F that it will declare that this is a floating point:
//
// BOOL 1 byte -because the addressing memory is processed, which means that we need to retrieve the value of our BOOL variable from the memory, we have no way to address the content of only one bit bit.We can only address bytes.Therefore, we cannot create variables with only one bit, because we need to be able to access it, and we can only access bytes now.
//
// (Computers cannot distinguish between True and FALSE, so general 0 represents false instead of 0)
//
// Therefore, we can cleverly use the amount of 8 BOOL meaning in one byte, such as BitSet
//
// Operations: Sizeof, tell us how many bytes are.So Sizeof (Bool) printed 1, indicating that Bool takes up a byte.
//
// With these original data types, it can be converted to pointer and reference.