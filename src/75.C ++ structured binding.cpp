//// C ++ 17 characteristic structured binding
//#Include <iostream>
//#Include <Tuple>
//#Include <string>
// std :: Tuple <std :: string, int> createPerson ()
// {{
// Return {"cherno", 24};
//}
// int Main ()
// {{
// tuple value the first way, tuple can engage in several array elements
// /*STD :: Top <std :: string, int> figure = createPerson ();
// std :: string & name = std :: get <0> (Person);
// int age = std :: get <1> (Person);*/
//
// Tuple value takes the second method
// std :: string name;
// int Age;
// sTD :: tie (name, Age) = Createperson ();
//
// C ++ 17 structured binding characteristics
// Auto [name, age] = createPerson ();
// std :: count << name << "," << Age << std :: Endl;
//}