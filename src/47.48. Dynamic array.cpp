//#Include <iostream>
//#Include <Vector>
//
// Struct vertex
// {{
// float x, y, z;
// Vertex (Float X, Float Y, Float Z): x (x), y (y), z (z) {std :: count << "build!" << std :: Endl;}
// // Here is a must -have definition of the constructor, otherwise the copy constructor will not work
// vertex (const vertex & vertex)
//: x (vertex.x), y (vertex.y), z (vertex.z)
// {{
// sTD :: COUT << "Copyied" << STD :: Endl;
//}
//};
//
// STD :: OSTREAM & Operator << (std :: OSTREAM & Stream, const vertex & vertex) {
// stream << vertex.x << "," << vertex.y << "," << vertex.z;
// Return Stream;
//}
//
// int main () {
// vertex vertices = new vertex [5];
// std :: vector <vertex> vertices; // The initialization of the constructor can be called the constructor instance of the constructor
// //vertices.push_back ({1.0F, 2.0F, 3.0F}); // In essence
///vertices.push_back ({4.0F, 5.0F, 6.0F});
// vertices.Reserve (3); // Here is just reserved space
// //vertices.push_back (1, 2, 3)); // Copy to vertice space after storage in the main stack of main
// //vertices.push_back (4, 5, 6));
// //vertices.push_back (7, 8, 9));
// vertices.emplace_back (1, 2, 3); // Directly constructed in the vertice space
// vertices.emplace_back (4, 5, 6);
// vertices.emplace_back (7, 8, 9);
// for (int i = 0; I <vertices.size (); i ++) {
// sTD :: COUT << vertices [i] << STD :: Endl;
// //}
// //vertices.erase (vertices.begin () + 1);
// for (vertex & vertex: vertices)
// sTD :: COUT << Vertex << STD :: Endl;
// std :: cin.get ();
//
// Return 0;
//}