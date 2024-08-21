// 1. Static outside the class: It means that this variable (function) in the link stage is only seen in the compilation unit (.obj) where it is located, that is, in the Link stage, the static variable in this file cannot be found in other files.
//
// 2. If you want to define a variable in the A file, and use it in the B file, use Extern to declare in the B file.
//
// 3. Pay attention to the situation that contains the Include header file: equivalent to copying the header file.So INCLUDE is equivalent to in the same compilation unit.