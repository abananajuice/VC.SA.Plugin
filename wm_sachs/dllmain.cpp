﻿#include <windows.h>

#include "CPlugin.h"

BOOL WINAPI DllMain(HMODULE hDllHandle, DWORD dwReason, LPVOID lpreserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		return (CPlugin::CheckResourceFile(hDllHandle) && CPlugin::CheckGameVersion());
	}

	return TRUE;
}
