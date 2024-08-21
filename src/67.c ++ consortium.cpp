//#Include <iostream>
// Struct Vector2
// {{
// float x, y;
//};
//
// Struct Vector4
// {{
// flow x, y, z, w;
// vector2 & geta () ()
// // {
// // return *(vector2 *) & x;
// //}
// Union
// {{
// struct
// {{
// float x, y, z, w;
//};
// struct
// {{
// vector2 a, b; // a and x, y's memory is the same B will be the same memory as ZW
//};
//};
//};
//
// Void PrintVector2 (Const Vector2 & Vector)
// {{
// std :: count << vector.x << "," "vector.y << std :: endl;
//}
// int Main ()
// {{
//struct union
// // {
// Union // Union is generally used for dual levels
// // {
// Float A;
// // int b;
//};
//};
// // union u;
//U.A = 2.0F;
// // std :: count << u.a << "," << u.b << std :: endl;
/////U.B is actually the integer of the memory explained by the floating point number, the type dual level
// vector4 vector = {1.0F, 2.0F, 3.0F, 4.0F};
// //vector.x = 2.0F; // Anonymous structure can be accessed without writing the structure of the structure
// Printvector2 (vector.a);
// PrintVector2 (vector.b);
// vector.z = 500.0F;
//	std::cout << "--------------------" << std::endl;
// Printvector2 (vector.a);
// PrintVector2 (vector.b);
// std :: cin.get ();
//}