/*
created 01.DEC.2018 by dbj@dbj.org
*/
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
/*
----------------------------------------------------------------------------
	Debug build x86 and x64 crashes with message box:
	https://snag.gy/z1hXeu.jpg

	Starting the Release build x86 x64 with F5 from VS 2017 community,
	crashes in ucrtbase.dll with the following
	info in VS2017
	https://snag.gy/nDyxUr.jpg

	Starting with CTRL+F5 does no output whatsoever, it just finishes ...
----------------------------------------------------------------------------
SDK 10.0.17763.0
VS 2017 Community 15.9.3
WIN10 PRO
*/
void c_version ()
{
	// кошка 日本
/*
warning C4133: 'initializing': incompatible types - from 'unsigned short [10]' 
to 'const char *'
const char * specimen =
		L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd";
*/
	unsigned short * specimen =
		L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd";

/*
warning C4477: 'fprintf' : format string '%S' requires an argument of 
type 'unsigned short *', but variadic argument 1 has type 'const char *'
1>d:\github\ucrt_crash_on_printf\ucrt_crash_on_printf\c_version.c(36): 
note: consider using '%hS' in the format string
1>d:\github\ucrt_crash_on_printf\ucrt_crash_on_printf\c_version.c(36): 
note: consider using '%TS' in the format string

fprintf(stdout, "\nprintf()\n\tspecimen: %S\n", specimen);

note the %wS bellow
*/
// should display: кошка 日本
	fprintf(stdout, "\nprintf()\n\tspecimen: %wS\n", specimen);

	return;
}
