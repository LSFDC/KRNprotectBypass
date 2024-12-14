#include <windows.h>
#include "lib/CFramework.h"
#include "lib/CTools.h"
#include "Offset.h"

static void NProtectBypass()
{
    CTools* Tools = new CTools();
    CFramework* Framework = new CFramework();
    while (1)
    {
        if (Tools->TerminateProcessByName("GameGuard.des")) {
            Framework->DetourFunction((PBYTE)nInitStart, (DWORD)nInitComplete, 5);
            Framework->DetourFunction((PBYTE)n23, (DWORD)n23JMP, 5);
            Framework->DetourFunction((PBYTE)n24, (DWORD)n24JMP, 5);
        }

        Sleep(20);
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);

        CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)NProtectBypass, nullptr, NULL, nullptr);
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
