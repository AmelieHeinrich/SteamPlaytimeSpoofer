//
// > Notice: Floating Trees Inc. @ 2025
// > Create Time: 2025-08-31 16:07:55
//

#include <windows.h>
#include <iostream>
#include <steam/steam_api.h>

static const char* EXE_NAME = "YOUR_EXE_NAME_HERE";

int WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nShowCmd
)
{
    if (!SteamAPI_Init()) {
        std::cerr << "SteamAP_Init failed!\n";
        return 1;
    }

    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    if (!CreateProcess(EXE_NAME, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
        std::cerr << "Failed to launch exe!\n";
        SteamAPI_Shutdown();
        return 1;
    }

    while (WaitForSingleObject(pi.hProcess, 100) == WAIT_TIMEOUT) {
        SteamAPI_RunCallbacks();
        Sleep(1000);
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    SteamAPI_Shutdown();
    
    return 0;
}

