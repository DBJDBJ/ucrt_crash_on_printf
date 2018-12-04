// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
/*
if I do this:

#define _NO_CRT_STDIO_INLINE

I will get this:

error LNK2019: unresolved external symbol _fprintf referenced in function _main
1>d:\GitHub\ucrt_crash_on_printf\Debug\ucrt_crash_on_printf.exe 
: fatal error LNK1120: 1 unresolved externals
*/
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

#endif //PCH_H
