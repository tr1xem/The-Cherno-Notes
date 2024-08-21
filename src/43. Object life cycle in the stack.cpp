// 1. The order of structure and destruction: The members are composed of the object before the object, and the later destruction
//
// 2. An example that can be automatically released when it can allocate memory and automatically releases when the field of functioning.

// Class scopeptr
// {{
// Private:
// Example* m_ptr;
// public:
// Scopeptr (Example* PTR): m_ptr (PTR) {}
// ~ scopeptr () {delete m_ptr;}
//};
// int Main ()
// {{
// {{
// scopeptr e = new exmple ();
//}
// std :: cin.get ();
//}
//
// This is the simplest intelligent pointer example