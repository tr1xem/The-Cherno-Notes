// 1. Input parameter pass reference
// 2. Enter parameter pass pointer
//
//
// 3-5 is only applicable to the same type to return multiple values
// 3. Create (new) an array of std :: string Save the return value and then return to this array String with a pointer to receive the address
// 4. Use STD :: Array to store it on the stack and return to faster
// 5. Use std :: vector stored on the pile and return to slower

// 6. Use tuple <std :: string, std :: string, int> #include <utility> to provide Make_tuple tools
//#Include <Functional> Provide Tuple definition
// Return std :: Make_tuple (String1, String2, int1) Back to Tuple type
// STD :: Get <0> (Sources) take out the first element of the tuple instance of Sources
// 7. Use pair <int, int> similar to above.
// 8. Return Return {String1, String2} with the structure can be returned in a way that the structure is assigned