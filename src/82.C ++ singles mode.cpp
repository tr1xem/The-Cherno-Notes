//// Want to have functions applied to a certain global dataset, and we just want to reuse them, use the class as the naming space, call certain functions, do not require a single case class to work like ordinary classes, just a kind ofOrganize a bunch of global variables and static functions
//#Include <iostream>
//
//// class singleton
//// {
//// public:
//// Singleton (Const Singleton &) = DELETE;
//// static singleton & get ()
//// {
//// return s_instance;
////}
///// // Need a static function, return this specific type of reference or pointer
////
//// void function () {}
//// Private:
//// singleton () {} // The constructor must be private because it is not allowed to be instantiated
//// static singleton s_instance; // Create the only static instance
////};
////
//// Singleton singleton :: s_instance;
// Class Random
// {{
// public:
// random (const Random &) = delete;
// static random & get ()
// {{
// static random s_instance;
// Return s_instance;
//}
// // Need a static function, return this specific type of reference or pointer
//
//*float float () {Return m_randomgenrator;}*/
// static float float () {Return get (). iFloat ();}
// Private:
// random () {} // The constructor must be private, because it is not allowed to be instantiated
// Float M_RANDOMGENATOR = 0.5F;
/*Static Random s_instance;*/// Create the sole static instance
// float ifloat () {Return m_randomgenerator;}
//};
//
//// rate random :: s_instance;
// int Main ()
// {{
///*float number = random :: get (). float ();*/
//*Auto & Random = Random :: get (get ();
// float number = random.float ();*/
// // singleton :: get (). Function ();
// // singleton instance = singleton :: get ();
// //instance.function (); In order to prevent such a copy of the single instance, the copy structure must be deleted
// float number = random :: float ();
// std :: COUT << Number << STD :: Endl;
// std :: cin.get ();
//}