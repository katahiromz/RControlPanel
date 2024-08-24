#include <windows.h>
#include <shlwapi.h>

EXTERN_C
INT WINAPI
wWinMain(HINSTANCE   hInstance,
         HINSTANCE   hPrevInstance,
         LPWSTR       lpCmdLine,
         INT         nCmdShow);

INT WINAPI
WinMain(HINSTANCE   hInstance,
        HINSTANCE   hPrevInstance,
        LPSTR       lpCmdLine,
        INT         nCmdShow)
{
    return wWinMain(hInstance, hPrevInstance, PathGetArgsW(GetCommandLineW()), nCmdShow);
}
