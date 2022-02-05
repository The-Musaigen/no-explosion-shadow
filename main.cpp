#include "main.h"

memwrapper::scoped_copy<5> nop_create_shadows{ 0x73747A, "\x90\x90\x90\x90\x90" };

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReasonForCall, LPVOID lpvReserved)
{
	return TRUE;
}