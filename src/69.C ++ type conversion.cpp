//#Include <iostream>
// class base
// {{
// public:
// base () {}
// virtual ~ base () {}
//};
// Class Derived: Public Base
// {{
// public:
// derived () {}
// ~ derived () {}
// Private:
//
//};
//
// Class AnotherClass: Public Base
// {{
// public:
// anotherclass () {};
// ~ anotherClass () {};
//};
//
// int Main ()
// {{
// double value = 5.25;
// int a = (int) value; // Different type conversion
// double a = (int) value + 5.3; // C language style explicit type conversion
// double s = static_cast <int> (value) + 5.3;
// // C ++ language style type conversion, do not do anything that can not be done in any C language style conversion
// anotherClass *s = Reinterpret_Cast <notherclass *> (& Value);
// // static_cast Static type conversion, compilation and detection, which is ordinary type conversion
// ReinterPret_cast This type conversion is to force the memory as other types of memory.
// const_cast Remove or add variable const limited
// derived* derived = new derived ();
// base* base = derived; // base is actually an instance of the Derived class
// anotherClass* AC = dynamic_cast <notherclass*> (base);
// if (! AC)
// std :: COUT << "is not that class!" << STD :: Endl;
// derived* ace = dynamic_cast <derived*> (base);
// if (ACE)
// std :: COUT << "is that class!" << STD :: Endl;
// dynamic_cast often detects whether the object of a pointer is an instance of a certain class, if it is not returned 0, otherwise 1
// // sTD :: COUT << a <<s std :: endl;
//
//}