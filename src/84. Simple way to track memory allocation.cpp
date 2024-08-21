//#Include <iostream>
//#Include <Memory>
// Struct allocativemetrics
// {{
// UINT32_T Totalallocated = 0;
// UINT32_T Totalfreed = 0;
//
// UINT32_T CurrenTusage () {Return TotalalLALLLALOCATED -Totalfreed;}
//};
//
// Static AlLocationMetrics S_ALLOCATIONMETRICS;
//// Do not use the standard library's new operator, the linkor will actually link to this function
// Void* Operator New (SIZE_T SIZE)
// {{
///*std :: count << "allocating" << SIZE << "" bytes \ n ";*/
// s_allocationMetrics.totalalLLLLALALALLLACATED += size;
// Return malloc (size);
//}
//// Do not use the standard library free operating symbol, the linkor will actually link to this function to use these two functions for memory tracking
// Void Operator Delete (Void* Memory, SIZE_T SIZE)
// {{
///*std :: count << "freezing" << SIZE << "" bytes \ n ";*/
// s_allocationMetrics.totalfreed += size;
// free (memory);
//}
// Static void PrintMemoryusage ()
// {{
// std :: COUT << "Memory usage:" << s_allocationMetrics.Currentusage () << "" "" ""
//}
//
// struct object
// {{
// int x, y, z;
//};
// int Main ()
// {{
// PrintMemoryusage ();
// std :: string string = "cherno";
// PrintMemoryusage ();
// {{
// object* obj = new object;
//
// std :: unique_ptr <object> obj = std :: make_unique <object> ();
// PrintMemoryusage ();
//}
// PrintMemoryusage ();
//}