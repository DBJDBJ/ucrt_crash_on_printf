# ucrt_crash_on_printf

### after _setmode(_fileno(stdout), _O_U8TEXT), using printf crashes the program

Made by dbj@dbj.org 

----------------------------------------------------------------------------

Debug build x86 and x64 crashes with message box:
	https://snag.gy/z1hXeu.jpg

	Startigng the Release build x86 x64 with F5 from VS 2017 community,
	crashes in ucrtbase.dll with the following
	info in VS2017
	https://snag.gy/nDyxUr.jpg

	Starting with CTRL+F5 does no output whatsoever, it just finishes ...

----------------------------------------------------------------------------
SDK 10.0.17763.0
VS 2017 Community 15.9.3
WIN10 PRO
