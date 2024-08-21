//// 1, enumeration type usage:
//#Include <iostream>
// class log
// {{
// public:
// enum level {
// levelrror = 0, levelWarning = 1, levelinfo = 2
//};
// // You can specify how many starts start from, default to 0, or you can specify the integer type: enum level: unsigned int, etc.
// // The enumeration type is actually the same as the integer, but it is named, and the size is automatically set
// // 2. When calling the enumeration variable inside the class outside, it is equivalent to the class is the scope of the scope, such as log :: levelrror.
// Private:
// level m_loglevel = levelinfo;
// public:
// Void SetLevel (Level Level)
// {{
// m_loglevel = level;
//}
// Void Warn (Const Char* MESSAGE)
// {{
// if (m_loglevel> = levelWarning)
// std :: count << "[warning]:" << MESSAGE << std :: endl;
//}
// Void Info (Const Char* Message)
// {{
// if (m_loglevel> = levelinfo)
// std :: count << "[info]:" << MESSAGE << std :: endl;
//}
// Void Error (Const Char* Message)
// {{
// if (m_loglevel> = levelerror)
// std :: count << "[error]:" << MESSAGE << STD :: Endl;
//}
//
//};
//
// int main () {
// log log;
// log.setLevel (log :: levelinfo);
// log.warn ("Hello!");
// log.error ("Hello!");
// log.info ("Hello!");
// std :: cin.get ();
//}