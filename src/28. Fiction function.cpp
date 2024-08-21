// 1. Use Virtual to mark in front of the base function; when the function is to be replaced, set the corresponding function of the base class to the virtual function v table mapping
// C ++ 11 Use override to rewrite the mark at the end of the subclass function.
//
// 2. A simple example:
// Class Entity
// {{
// public:
// virtual std :: string getName () {Return "Entity";}
//};
// Class Player: Public Entity
// {{
// Private:
// std :: string m_name;
// public:
// player (const std :: string name): m_name (name) {}
// std :: string getname () override {return m_name;}
//};
// Void Printname (Entity* Entity)
// {{
// std :: COUT << Entity-> getname () << std :: Endl;
//}
// int Main ()
// {{
// player *p = new player ("ydc");
// Printname (p);
// std :: cin.get ();
//}
//#Include <iostream>
// Class Entity {
// public:
// virtual std :: string getname () {Return "Entity";}
// virtual std :: string getname () = 0; // Pure deficiency function must be realized in the subclass
// virtual std :: string getName () {Return "Entity";}
//};
//
// Class Player: Public Entity
// {{
// Private:
// std :: string m_name;
// public:
// Player (const std :: string & name): m_name (name) {}
// std :: string getname () override {return m_name;}
//};
// Void Printname (Entity* P) {
// std :: count << P-> getname () << STD :: Endl;
//}
// int main () {
// Entity* E = New Entity ();
// Entity* E = New Player ("");
///*std :: count << E-> getName () << STD :: Endl;*/
// Printname (e);
// player* p = new player ("cherno");
// sTD :: COUT << P-> getName () << STD :: Endl;
// Printname (p);
// std :: cin.get ();
// Return 0;
//}
// 1. Add the "= 0" logo behind the virtual function as a pure virtual function, then this base class is an abstract class, which cannot be instantiated. If the subclass does not implement this pure virtual function, it cannot be instantiated.
//
// 2, an example, if B inherits A from A, if the A pointer is used when creating the object B, the non -deficiency function of A is called, and the virtual function of B is called; if the B pointer B is used, the non -deficiency function of B is called B, bThe virtual function.That is, call rules: pointer determines the non -fiction function, the object determines the call function call function
//#Include <iostream>
// class a
// {{
// public:
// void print ()
// {{
// std :: count << "a \ n";
//}
// Virtual void vprint ()
// {{
// std :: COUT << "va \ n";
//}
//};
// Class B: Public A
// {{
// public:
// void print ()
// {{
// std :: COUT << "b \ n";
//}
// void vprint () override
// {{
// std :: COUT << "vb \ n";
//}
//};
// int Main ()
// {{
// a* ab = new b ();
// b* bb = new b ();
// ab-> prop ();
// bb-> ​​prop ();
// ab-> vprint ();
// bb-> ​​vprint ();
// std :: cin.get ();
//}