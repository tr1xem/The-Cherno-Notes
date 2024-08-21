//// Multi -threaded std :: Asnyc and Future header file
//// Working thread: Some things can be completed independently, and when it will end, it is not important. After completion, you can get some feedback or some loaded resources. If you process a large amount of data, you must consider it.consider
//// 1. You can use all cores to load things, even if we need to load everything immediately, it will be faster.
//// 2. Load what we need, when other things are available, flow in, such as the game first enters the game screen, but some still have not completed the loading
//// for (const auto & file: Meshfilepaths)
//// m_meshes.push_back (Mesh :: load (File));
//// Put the above for parallelization. You can use the Parfor C ++ without this function
//#Include <future>
// static std :: mutex s_meshesmutex;
// std :: vector <std :: future <void >> m_futures;
//// 1. Why can't you pass the reference?
//// The parameters of the thread function are moved or copied.If the reference parameter needs to be passed to the thread function, it must be packaged (for example
// Static void loadmesh (std :: vector <Mesh >>* Meshes, std :: string filepath)
// {{
// Auto Mesh = Mesh :: load (filepath);
//
// std :: lock_guard <std :: mutex> lock (s_meshesmutex);
// meshes-> push_back (mesh);
//}
// for (const auto & file: Meshfilepaths)
// {{
// async means multi -threaded, and defered represents C ++ according
///*std :: async (std :: launch :: async, loadmesh, m_meshes, file);*/
// // async actually returns a std :: future, which must be retained. If it is not retained, it will be destroyed
// // When destruction, you need to ensure that the process is actually completed, which means that it is not actually parallel, because in an iteration of this for loop, this function is actually waiting in the structure function of STD :: FUTURE waiting for the structure function of the structure function.The completion of the loadMesh task
// // If there is no return value, after a for cycle, the temporary object will be destructed, and the destructor needs to wait for the thread to end, so it is the same as the order.For external variables, then the survival period is outside the for loop, so the object will not be destructed, and there is no need to wait for the thread to end.*/
// m_futures.push_bakc (std :: Async (std :: launch :: async, loadmesh, & m_meshes, file));
// // Really done parallel
//}