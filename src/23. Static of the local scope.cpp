// 1. Static variables in the function cannot be accessed outside the function domain, but this function is called multiple times, and its value is memory, which means that after the function calls are over, the memory is still not released, which has been extended.life cycle.An example applied to this method is a singles Singleton:
// class singleton {
// public:
// Static Singleton & Get ()
// {{
// Static Singleton Instance;
// Return Instance;
//}
// void hello () {};
//};
//
// int main () {
// singleton :: get (). Hello ();
//}
// If you do not define Instance as static, after the GET () action domain is over, the instance will be destroyed. Because the reference of Singleton is returned, it will cause reference errors. If it is returned to copy, there is no problem.