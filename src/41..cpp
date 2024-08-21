//// 1. Example: Use Operator + as a function name, as a member function
//
// VEC2 ADD (Const VEC2 & Other) Const
// {{
// Return VEC2 (m_x + Other.m_X, M_y + Other.m_y);
//}
// VEC2 Operator+(Const VEC2 & Other) Const
// {{
// Return add (Other);
//}
//// 2. For << Re -loading example: non -member function
//
// std :: OSTREAM & Operator << (std :: OSTREAM & Stream, Const VEC2 & V)
// {{
// stream << v.m_x << "," v.m_y << sTD :: Endl;
// Return Stream;
//}
//// 3, for == and!= The heavy load:
//
// BOOL Operator == (Const VEC2 & Other) Const
// {{
// return m_x == other.m_x && m_y == other.m_y;
//}
// Bool Operator! = (Const VEC2 & Other) const
// {{
// Return! (*this == Other);
//}
/// Pay attention to the* this here, representing the object object itself