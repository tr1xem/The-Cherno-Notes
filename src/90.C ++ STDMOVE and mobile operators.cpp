#include <iOSTREAM>

class string
{{
public:
String () = default;
String (const char* string) {
Printf ("create! \ n");
m_size = strlen (string);
m_data = new char [m_size];
memcpy (m_data, string, m_size);
}
String (Const String & Other) {
Printf ("Copied! \ N");
m_size = Other.m_size;
m_data = new char [m_size];
memcpy (m_data, Other.m_data, M_SIZE);
}
String (String && other) noexcept // Mobile semantics, move constructor, because there is no existing object, constructing a new object
{{
Printf ("moved! \ n");
m_size = Other.m_size;
m_data = Other.m_data;
Other.m_size = 0;
Other.m_data = nullptr;

}

String & Operator = (String && Other) Noexcept
{{
if (this! = & other) // Just call the movement to the value when the object of the two ends is not the same object
{{
Printf ("moved! \ n");
delete [] m_data; // Moving assignment must ensure that the current space of the existing object is cleared, otherwise the memory leak
m_size = Other.m_size;
m_data = Other.m_data;
Other.m_size = 0;
Other.m_data = nullptr;
}
Return *this;
}

~ String ()
{{
Printf ("Destroyed! \ N");
delete m_data; // delete [] is to release memory to each object in the array, and the string array is just a piece of memory delete.
}
void Print ()
{{
for (uINT32_T I = 0; I <m_size; i ++)
Printf ("%c", m_data [i]);
Printf ("\ n");
}
Private:
char* m_data;
uint32_t m_size;

};
Class Entity
{{
public:
Entity (Const String & Name): m_name (name)
{{

}
// Entity (String &&11): m_name ((String &&) name) {}
Entity (String &&11): m_name (std :: move (name)) {}

void Printname ()
{{
m_name.print ();
}
Private:
String m_name;
};

int Main ()
{{
// Entity Entity (String ("Cherno");
//entity.printname ();

String apple = "apple";
String Dest;

STD :: COUT << "Apple:"; ";
apple.print ();
std :: COUT << "Dest:";;
Dest.print ();
Dest = std :: move (apple);
STD :: COUT << "Apple:"; ";
apple.print ();
std :: COUT << "Dest:";;
Dest.print ();
// std :: MOVE turns an existing variable into temporary variables (right values), stealing the resources
// string string = "Hello";
// String Dest = (String &&) String; // Construct a new string with a right value construct function to construct a new string
//// String Dest (String &&); // Construction function method
// String Dest = STD :: Move (Move (String); // Construct function method, in fact, the mobile construct function will be used
//// The assignment operator will be called to a existing variable to a existing variable, such as Dest = STD :: MOVE (STRING);
std :: cin.get ();
}