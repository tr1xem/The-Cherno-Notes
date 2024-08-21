// There is no concept of header files like C#and Java. In fact, we actually have two different types of file types:
//
// One is compiled files like C ++, a translation unit.This will have the concept of header files.
//
// In terms of C ++, header files are usually used to declare some types of functions so that they can be used in your program.
//
// Let's talk about #Pragma once below
//
// Anything that starts with#is called the pre -processor command or pre -processor instruction, which means that it will be processed first before the actual compile.
//
// Pragma is essentially a pre -processing instruction that is sent to the compiler or pre -processor.Pargma Once prevents our single header files from being included and converted into a single translation unit.
//
// The reason is that if we accidentally include a file many times and converted into a translation unit, we will get duplicate replication errors, because we will copy the entire header file multiple times.
//
// The header file protection character (supervision, guard) thing - #iFndef #define #Endif has been widely used in the past.But now we have this new pre -processing statement called Pragma ONCE. Almost every compiler supports Pragma Once, so it is not only supported by Visual Studio -GCC, CLANG, MSVC.
//
// Some include is <> Some "", because::
//
// When we compile the program, they have two different meanings. We have the ability to tell the compiler what the path of the file is.
//
// If the file we want to include is in one of the folders (in the path folder), we can use the sprite brackets to tell the compiler to search the containing path folder; the quotation marks are usually used to contain relative to the current relative to the current.File files.
//
// So brackets are only used for compilers to include paths, and quotes can do everything.However, Cherno generally uses only the current path, that is, no ... / or whatever, others are sprinkled brackets.
//
// Suggestion: If you contain something other than Visual Studio solutions, you will use sharp brackets, that is, some external dependencies that are completely related to the project.
//
// And like #include <iOSTREAM>, iOSTREAM is actually a file (although there is no suffix ...) This is what the person who wrote the C ++ standard library decided to do so.Distinguish the C ++ standard library from the C standard library.(Is there .h, such as stdlib.h, which is a method that distinguishes the C standard library and C ++ standard library).)