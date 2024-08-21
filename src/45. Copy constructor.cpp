//#Include <iostream>
//#Include <string>
//#include <cstring>
//
//// String class copy and copy constructor
// class string {
// Private:
// char* m_buffer;
// unsigned into m_size;
// public:
// String (Const Char* String)
// {{
// m_size = strlen (string);
// m_buffer = new char [m_size+1]; // Note that the existence of empty string should not forget to release memory
// Memcpy (m_buffer, string, m_size+1);
//
//}
//: m_buffer (m_buffer), m_size (m_size) The default copy structure is shallow copy,
// // You can use = delete to delete the copy structure
// String (Const String & Other)
//: m_size (Other.m_size) // The method of deep copying
// {{
// m_buffer = new char [m_size + 1];
// memcpy (m_buffer, Other.m_buffer, m_size + 1);
//}
// ~ string ()
// {{
// delete [] m_buffer;
//}
// Char & Operator [] (unsigned int int index)
// {{
// Return this-> m_buffer [index];
//}
//
//
// Friend STD :: OSTREAM & Operator << (std :: OSTREAM & Stream, String & String);
//};
//
// std :: OSTREAM & Operator << (std :: OSTREAM & Stream, String & String) {
// stream << String.m_buffer;
// Return Stream;
//}
// int main () {
// string string = "cherno"; // Here is the hidden call constructor
// string sex = string; // This will report an error, because the shallow copy will cause the two pointer variables to access the same address, release the same memory twice, and report an error.
// Second [2] = 'A';
// std :: COUT << String << STD :: Endl;
// std :: COUT << Second << STD :: Endl;
// std :: cin.get ();
//}