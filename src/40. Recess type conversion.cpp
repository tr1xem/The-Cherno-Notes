// 1. It can be initialized directly with the same type of the same type of constructor participation list, and hidden conversion will be performed, such as:
// Entity (Const STD :: String & Name): m_name (name) {}
// Entity (int x): m_x (x) {}
//
// entity e = "ydc";
// Entity e = 2;
// If you want to prohibit such implicit conversion, add Explicit before the constructor
// 2. Note that the actual type of the string constant "ydc" is char [], and sometimes it is converted to string. If it cannot be converted, the std :: string ("ydc")