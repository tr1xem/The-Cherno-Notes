// C ++ 17 Features
//#Include <iostream>
//#Include <fstream>
//#Include <optional> How to deal with data that may exist or may not exist
//// std :: string readfileasstring (Const STD :: String & FilePath, BOOL OUTSUCCESS)
//// {
//// std :: ifstream stream (filepath);
//// if (stream)
//// {
//// std :: string result;
//// // Read File
//// stream.close ();
//// Outsuccess = true;
//// Return Result;
////}
//// Outsuccess = false;
//// return std :: string ();
////}
// std :: optional <std :: string> Readfileasstring (const std :: string & filepath)
// {{
// std :: ifstream stream (filepath);
// if (stream)
// {{
// std :: string result;
// // Read File
// stream.close ();
// Return Result;
//}
// Return {};
//}
//
// int Main ()
// {{
// /*BOOL FILEOPENEDSUCCCESSFULLLLL = fal
// std :: string data = readfileasstring ("data.txt", fileopenedSuccessfully);*/
// std :: optional <std :: string> data = readfileasstring ("data.txt");
// sTD :: Optional <std :: String> is used to determine whether to read the data of the file successfully
// std :: string value = data.value_or ("not present");
// std :: COUT << Value << STD :: Endl;
// // If the data does exist in STD :: Optional, returns the corresponding string, if there is no existence, it returns not present
// Auto Data1 = Readfileasstring ("Data.txt");
// // std :: optional <int> Count;
// int C = Count.Value_or (100); // If the number of count value is extracted from the file existence, otherwise use the default counting value
// if (data.has_value ()) read the data and return true, otherwise return false
// if (data)
// {{
// std :: string & s = *data;
// std :: COUT << "File Read SuccessFully! \ N";
//}
// Else
// {{
//
//data.value ();
// std :: COUT << "File Could not be open! \ n";
//}
// std :: cin.get ();
// // if (data == "")
// // {
// // The file is empty
// //}
// // if (! FileopenedsuccessFully)
// // {
// // The file is empty
// //}
//}