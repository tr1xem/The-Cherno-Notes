// 1, unique_ptr, cannot be copied, for example:
//
// std :: unique_ptr <entity> E = STD :: Make_unique <Entity> ();
// 2, shared_ptr, reference counting in principle, can be copied. For example, multiple pointers store the address of a certain object. Only when all pointers are destroyed, this object is destructed. Example:
//
// {{
// std :: Shared_ptr <Entity> E;
// {{
// std :: Shared_ptr <ENTITY> E2 = STD :: Make_shared <Entity> ();
// e = e2;
//} // When this scope is released, E2 is released, but the Entity object is not released because E has not been destroyed
//} // When this scope is produced, E is also destroyed, and entity is also destroyed here