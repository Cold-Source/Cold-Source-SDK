#include <windows.h>
#include <cstdio>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nShowCmd)
{
    char exePath[MAX_PATH];
    GetModuleFileNameA(nullptr, exePath, MAX_PATH);
    char* lastSlash = strrchr(exePath, '\\');
    if (lastSlash)
        *lastSlash = '\0';

    char dllPath[MAX_PATH];
    _snprintf_s(dllPath, MAX_PATH, _TRUNCATE, "%s\\bin\\launcher.dll", exePath);

    char binDir[MAX_PATH];
    _snprintf_s(binDir, MAX_PATH, _TRUNCATE, "%s\\bin", exePath);
    SetDllDirectoryA(binDir);

    HMODULE hLauncher = LoadLibraryA(dllPath);
    if (!hLauncher) {
        DWORD errorCode = GetLastError();
        char message[512];
        _snprintf_s(message, sizeof(message), _TRUNCATE,
            "Cannot load %s\nError code: %lu", dllPath, errorCode);
        MessageBoxA(nullptr, message, "Launcher Error", MB_ICONERROR);
        return 1;
    }

    auto LauncherMain = reinterpret_cast<int(WINAPI*)(HINSTANCE, HINSTANCE, LPSTR, int)>(
        GetProcAddress(hLauncher, "LauncherMain"));
    if (!LauncherMain) {
        MessageBoxA(nullptr, "No LauncherMain in launcher.dll", "Error", MB_ICONERROR);
        FreeLibrary(hLauncher);
        return 1;
    }

    return LauncherMain(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
}