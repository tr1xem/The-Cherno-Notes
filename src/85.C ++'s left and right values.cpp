//// Left value: Located value, a temporary value of the right value
//#Include <iostream>
//// int GetValue ()
//// {
//// Return 10;
////}
/// int & getValue () // Left value reference
//// {
//// static int value = 10;
//// return value;
////}
//// Void SetValue (const into) // Write this way to support the left and right value INT & Value only supports the left
//// {
////
////}
// Void Printname (Const STD :: String & Name) // This way of writing is compatible with temporary right values ​​and actual left value variables
// {{
// std :: count << "[lvaluue]" name << std :: endl;
//}
// Void Printname (Const STD :: String && NAME) // This writing is a right value reference, which cannot pass the left value but can pass the right value.
// {// If this writing exists, then the compatibility of the above compatibility is still preferred to use this
// std :: COUT << "[rvalue]" name << std :: endl;
//}
// int Main ()
// {{
// // int i = 10; // Most of the time on the left, the right value is on the right
///// 10 = i; // 10 There is no location, and data cannot be stored at 10
//// int a = i; // Left value = the value of the left value
///// int i = getValue (); // GetValue returns a temporary right value
///// GetValue () = 10; // The right value cannot be assigned, but the back left value reference can be assigned
// // setvalue (i); // The parameter is the left value
// // setValue (10); // The parameter is the right value. When the function is called, the right value will be used to create a left value
// //// Can not bind the left value reference to a right value. The left value reference can only be the left value
//// int & a = 10; // Can't reference it on the left value like this
// const ins & a = 10; // This is the case. Special rules, the compiler uses your storage to create a variable (left value), and then assign it to that reference
// std :: string firstName = "bai";
// std :: string lastname = "zexin";
//
// std :: string fullname = firstName + LastName;
// Printname (FullName); // FullName is the left value
// Printname (FirstName + LastName); // FirstName + LastName is the right value
// std :: cin.get ();
//}