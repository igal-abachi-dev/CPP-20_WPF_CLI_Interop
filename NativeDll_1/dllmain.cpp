// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

BOOL APIENTRY DllMain(HMODULE hModule,// handle to DLL module
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	//_DllMainCRTStartup()->DllMain()
	//https://learn.microsoft.com/en-us/cpp/build/run-time-library-behavior?view=msvc-170
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		// Initialize once for each new process.
		// Return FALSE to fail DLL load.
	case DLL_THREAD_ATTACH:
		// Do thread-specific initialization.
	case DLL_THREAD_DETACH:
		// Do thread-specific cleanup.
	case DLL_PROCESS_DETACH:
		// Perform any necessary cleanup.
		break;
	}
	return TRUE;// Successful DLL_PROCESS_ATTACH.
}
//https://learn.microsoft.com/en-us/windows/win32/Dlls/dllmain


//https://learn.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp?view=msvc-170
