//#Include <iostream>
//
// class string
// {{
// public:
// string () = default;
// String (Const Char* String) {
// Printf ("create! \ n");
// m_size = strlen (string);
// m_data = new char [m_size];
// memcpy (m_data, string, m_size);
//}
// String (Const String & Other) {
// Printf ("Copied! \ N");
// m_size = Other.m_size;
// m_data = new char [m_size];
// memcpy (m_data, Other.m_data, m_size);
//}
// string (string && other) noexcept // mobile semantics, move constructor function
// {{
// Printf ("moved! \ n");
// m_size = Other.m_size;
// m_data = Other.m_data;
// Other.m_size = 0;
// Other.m_data = Nullptr;
//}
// ~ string ()
// {{
// Printf ("Destroyed! \ N");
// delete m_data; // delete [] is to release memory to each object destruction in the array, and the string array is just a piece of memory delete.
//}
// void print ()
// {{
// for (uint32_t i = 0; i <m_size; i ++)
// Printf ("%c", m_data [i]);
// Printf ("\ n");
//}
// Private:
// char* m_data;
// uint32_t m_size;
//
//};
// Class Entity
// {{
// public:
// Entity (Const String & Name): m_name (name)
// {{
//
//}
// Entity (String &&11): m_name ((string &&) name) {}
// Entity (string &&11): m_name (std :: move (name)) {}
// void Printname ()
// {{
// m_name.print ();
//}
// Private:
// string m_name;
//};
//
// int Main ()
// {{
// Entity Entity (String ("Cherno");
// Entity.printname ();
// std :: cin.get ();
//}