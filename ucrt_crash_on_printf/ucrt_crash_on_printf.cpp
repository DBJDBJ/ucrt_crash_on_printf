
/* 
created 01.DEC.2018 by dbj@dbj.org
*/
#include "pch.h"
#include <iostream>

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

extern "C" void c_version();

static void cpp_version() {
	// кошка 日本
	static auto specimen =
		L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd";

	// should display: кошка 日本
	// but is crashes instead
	// ::fprintf(stdout, "\nprintf()\n\tspecimen: %S\n", specimen);

	// this also crashes
	std::cout << "\n" << "\nstd::cout\n\tspecimen: " << specimen;
}

int main()
{

	auto result = _setmode(_fileno(stdout), _O_U8TEXT);
	if (result == -1) {
		perror(__FUNCSIG__ " -- EXIT -- Cannot _setmode(_fileno(stdout), _O_U8TEXT)");
		exit(EXIT_FAILURE);
	}

	//c_version();
	cpp_version();

	exit(EXIT_SUCCESS);
}
