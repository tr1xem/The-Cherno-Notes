//#Include <iostream>
// class base
// {{
// public:
// base () {std :: COUT << "BASE CONSTRUCTOR \ n";}
// virtual ~ base () {std :: call << "base desructor \ n";}
// // The fictional analysis function is not a composition function, but adding a destructive function
// // This means that this class may be extended into a child class, and the destructor of the sub -class must also be called
//};
// Class Derived: Public Base
// {{
// public:
// derived () {m_array = new int [5]; std :: Cout << "" Derived Constructor \ n ";}
// ~ Derived () {delete [] m_array; std :: COUT << "Derived Destrus \ n";}
// Private:
// int* m_array;
//};
//
//
// int Main ()
// {{
// base* base = new base ();
// delete base;
//	std::cout << "--------------------\n";
// derived* derived = new derived ();
// // The derived class structure will first construct the parent class and then construct the derived classification.
// delete derived;
//	std::cout << "--------------------\n";
// base* poly = new derived (); // If unspeakable virtual functions will directly lead to memory leakage, because there is no call for successoring
// delete poly;
// std :: cin.get ();
//}