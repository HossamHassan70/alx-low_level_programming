# 0x18. C - Dynamic libraries
Libraries are files containing the object files of various programs that are used to make compilation much faster.
In C, there are two main types of libraries: static and dynamic.
Static libraries are specifically called in the linking phase of compilation and tend to be both bigger and
slower than dynamic libraries. For more information on static libraries.

Dynamic libraries, on the other hand, do not require the code to be copied.
They are not loaded automatically when a program starts, and are, instead, linked when the program is run.
This causes them to be more efficient and smaller than static libraries.
Dynamic libraries are also known as shared libraries because the code is shared by the programs that use it;
each program, however, maintains its own stack and heap, keeping all running programs separate from one another.
