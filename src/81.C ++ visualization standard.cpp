//#Include <iostream>
//#Include <string>
//#Include <chrono>
//#Include <cmath>
//#include <algorithm>
//#Include <fstream>
//
//#Include <THREAD>
//
// Struct Profileresult
// {{
// std :: string name;
// Long Long Start, End;
// UINT32_T Threadid;
//};
//
// Struct InstrumentationSection
// {{
// std :: string name;
//};
//
// Class Instrumentor
// {{
// Private:
// InstrumentationSection* m_currentSession;
// std :: OFSTREAM m_outputstream;
// int m_profilecount;
// public:
// instrumentor ()
//: m_currentSession (nullptr), m_profileCount (0)
// {{
//}
//
// Void BeginSession (Const STD :: String & Name, Const STD :: String & filepath = "results.json"))
// {{
// m_outputstream.open (filepath);
// writeheader ();
// m_currenTology = New InstrumentationAssion {name};
//}
//
// Void EndSession ()
// {{
// writefooter ();
// m_outputstream.close ();
// delete m_currentSession;
// m_currentSession = nullptr;
// m_profilecount = 0;
//}
//
// Void writeProfile (const print & result)
// {{
// if (m_profilecount ++> 0)
// m_outputstream << ",";;
//
// std :: string name = result.name;
// std :: replace (name.begin (), name.end (), '"', '\' ');
//
// m_outputstream << "{";;
// m_outputstream << "\" cat \ ": \" function \ ","
// m_outputstream << "\" dur \ ":" << (result.end -result.start) << ',';
// m_outputstream << "\" name \ ": \" << name << "\", "
// m_outputstream << "\" pH \ ": \" x \ ","
// m_outputstream << "\" pid \ ": 0,";
// m_outputstream << "\" tid \ ":" << Result.threadid << ","
// m_outputstream << "\" ts \ ":" << Result.start;
// m_outputstream << "}";
//
// m_outputstream.flush ();
//}
//
// void writeheader ()
// {{
// m_outputstream << "{\" otherdata \ ": {}, \" traceevents \ ": [";;;;
// m_outputstream.flush ();
//}
//
// Void WriteFooter ()
// {{
// m_outputstream << "]}";
// m_outputstream.flush ();
//}
//
// Static Instrumentor & Get ()
// {{
// Static Instrumentor Instance;
// Return Instance;
//}
//};
//// instrumentation insert pile, inject our code and analyze
// Class InstrumentationTimer {
// Private:
// const char* m_name;
// std :: chrono :: Time_point <std :: chrono :: Steady_Clock> m_starttimepoint;
// Bool M_Stopped;
// public:
// InstrumentationTimer (Const Char* name): m_name (name), m_stopped (false)
// {{
// m_starttimepoint = std :: chrono :: high_resolution_clock :: now ();
//}
// ~ InstrumentationTimer ()
// {{
// if (! M_stopped)
// stop ();
//}
// void stop ()
// {{
// Auto Endtimepoint = STD :: Chrono :: high_Resolution_Clock :: now ();
//
// Long Long Start = STD :: Chrono :: Time_point_cast <std :: chrono :: microseconds> (m_starttimepoint) .time_since_epoch (). Count ();
// Long Long End = STD :: Chrono :: Time_point_cast <std :: chrono :: microseconds> (Endtimepoint) .time_since_epoch (). Count ();
// // sTD :: COUT << m_name << ":" END -Start << "us \ n";
// uINT32_T Threadid = STD :: Hash <std :: ID> {} (std :: This_thread :: get_id ());
// Instrumentor :: get (). WriteProfile ({m_name, start, end, threadid});
// m_stopped = true;
//}
// ~ ~ instrumentationTimer ()
// // {
// if (! m_stopped)
// stop ();
// //}
//};
//// The macro replacement function is written in the following way
//#Define Profiling 1
//#If Profiling
//#Define Profile_Scope (name) InstrumentationTimer Timer ## __ line __ (name)
////#define propile_function () propile_scope (__function __) // Pre -edited translator automatic acquisition function name, only function name
// #Define Profile_function () Profile_scope (__funcsig__) // Pre -compiled interpreter automatic acquisition function signatures include parameters that include parameters
///#define propile_scope (__function__) instrumentationtimer timer ## __ line __ (__function__)
//// This definition is not a macro in front of the macro __function__
//#Else
//#Define Profile_Scope (name)
//#Define Profile_function ()
//#Endif
// void function1 ()
// {{
// Profile_function ();
// for (int i = 0; i <1000; i ++)
// std :: count << "Hello World #" << I << std :: Endl;
//}
//
// void function2 () ()
// {{
// Profile_function ();
// for (int i = 0; i <1000; i ++)
// std :: count << "Hello World #" << sqrt (i) << STD :: Endl;
//}
//
// void runbenchmarks () ()
// {{
// Profile_function ();
// std :: Cout << "Running Benchmarks ...";;
//
// std :: thread a ([]] () {function1 ();});
// std :: Thread B (Function2);
//
// a.join ();
// b.join ();
//}
//
// int Main ()
// {{
// instrumentor :: get (). BeginSession ("Profile");
// // Create a new file with a given file name, we use result.json here by default parameters
// function1 ();
// function2 ();
// runbenchmarks ();
// incumentor :: get (). EndSession ();
// std :: cin.get ();
//}