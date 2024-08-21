//#Include <iostream>
//#Include <Memory>
//#Include <chrono>
//#Include <aray>
// Class Timer {
// public:
// timer () {{
// m_starttimepoint = std :: chrono :: high_resolution_clock :: now ();
//}
// ~ timer () {
// stop ();
//}
// void stop () {
// Auto Endtimepoint = STD :: Chrono :: high_Resolution_Clock :: now ();
// Auto Start = STD :: Chrono :: Time_point_cast <std :: chrono :: microseconds> (m_starttimepoint) .time_since_epoch (). Count ();););); count ();); count ();););););););););););); count (););););););); count ();););); count (););); count ();););); count ();););););); count ();););); count (););););););););); count ();););););););););); count ();););); count ();););); count (););); count (););).
// Auto End = STD :: Chrono :: Time_point_cast <std :: chrono :: microseconds>
// (EndtimePoint) .time_sice_epoch (). Count ();
// Auto duration = end -start;
// double ms = duration * 0.001;
//
// std :: COUT << duration << "us (" << ms << "" ms) \ n ";
//}
// Private:
// std :: chrono :: Time_point <std :: chrono :: high_ReSolution_Clock> m_starttimepoint;
//};
// int Main ()
// {{
// // The benchmark test must be determined that it is actually the time you want to test. You can see if the assembly code is the part of your own test. The compiler will optimize the optimization
// /*int value = 0;
// {{
// Timer Timer;
// for (int i = 0; I <1000000; i ++)
// value += 2;
// std :: COUT << Value << STD :: Endl;
//}*/
// struct vector2 {{
// float x, y;
//};
// std :: COUT << "Make Shared \ N";
// {{
// std :: array <std :: Shared_ptr <vector2>, 1000> SharedptRS;
// Timer Timer;
// for (int i = 0; i <sharedptRS.Size (); i ++)
// sharedptRS [i] = std :: make_shared <vector2> ();
// // Create a new piece of memory directly on the pile, which includes two parts, which is memory (used for), belowMemory (Step of allocating a memory: First allocate memory, and then enter the allocation of memory call constructor for constructor, and you can use it after the structure)
//}
// std :: count << "New Shared \ n";
// {{
// std :: array <std :: Shared_ptr <vector2>, 1000> SharedptRS;
// Timer Timer;
// for (int i = 0; i <sharedptRS.Size (); i ++)
// sharedptRS [i] = std :: Shared_ptr <vector2> (new vector2 ());
// // First allocate a piece of memory on the pile, and then build a smart pointer control block on the pile. These two things are discontinuous, which will cause mastory fragmentation
//}
// std :: count << "Make unique \ n";
// {{
// std :: array <std :: unique_ptr <vector2>, 1000> sharedptRS;
// Timer Timer;
// for (int i = 0; i <sharedptRS.Size (); i ++)
// sharedptRS [i] = std :: make_unique <vector2> ();
//}
// std :: cin.get ();
//}