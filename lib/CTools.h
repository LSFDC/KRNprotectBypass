#ifndef _TOOLS_H
#define _TOOLS_H

#include "../Header.h"

class CTools
{
public:
	bool CheckCheatEngine();
	char* TrimWhiteSpace(char *str);
	HANDLE GetHandleByName(LPCTSTR module);
	bool TerminateProcessByName(LPCTSTR module);
	DWORD GetProcID(LPCTSTR module);
	wchar_t* GetLPCWSTR(char* str);
};

extern CTools* Tools;
#endif