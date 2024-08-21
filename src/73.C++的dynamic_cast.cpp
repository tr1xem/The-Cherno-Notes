//// dynamic_cast determines that our actual type conversion is an effective type conversion. For example, the conversion of base classes and derivatives, usually the base class conversion needs to be used.
//#Include <iostream>
//#Include <string>
// Class Entity {
// public:
// Virtual void Printname () {} // Let this class has a deficiency function table and becomes polymorphic type
//};
// Class Player: Public Entity {
//
//};
// Class Enemy: Public Entity {
//
//};
// int Main ()
// {{
// player* player = new player ();
// Entity* Actuallyplayer = Player;
// Entity* Actuallynemy = New Enemy ();
// Player* p = (Player*) Actuallynemy; // It must be manually guaranteed to be a player type, because the physical class may be the ENEMY class
///// The mandatory conversion here is dangerous, because E1 is actually ENEMY
// // Using dynamic_cast can automatically detect it. The conversion requires a polymorphic type, that is, the virtual function, and use RTTI to store information about your own information
// // Do not turn off RTTI, so
// player* p0 = dynamic_cast <player*> (actuallynemy);
// // p0 Return 0 to prove that it is not feasible to convert an ENEMY into player
// if (p0)
// {{
// // What can be checked what the type is, similar to C# IS and Java
//}
// player* p1 = dynamic_cast <player*> (actuallyplayer);
// // P1 returns a non -0 certificate to convert a player to player feasible
//
//}