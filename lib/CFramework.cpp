#include "CFramework.h"

void* CFramework::DetourFunction(BYTE *src, DWORD dst, const int len)
{
	BYTE *jmp = (BYTE*)malloc(len+5);
	DWORD dwBack;
	VirtualProtect(src, len, PAGE_EXECUTE_READWRITE, &dwBack);
	memcpy(jmp, src, len);  
	jmp += len;
	jmp[0] = 0xE9;
	*(DWORD*)(jmp+1) = (DWORD)(src+len - jmp) - 5;
	src[0] = 0xE9;
	*(DWORD*)(src+1) = (DWORD)(dst - (DWORD)src) - 5;
	for (int i=5; i<len; i++)  src[i]=0x90;
	VirtualProtect(src, len, dwBack, &dwBack);
	return (jmp-len);
}



char* CFramework::GetStringFromAddress(int a)
{
	if(!IsBadReadPtr((LPVOID)a, 4))
		return (char*)reinterpret_cast<int*>(a);
	return NULL;
}
int CFramework::ToIntFromString(char* str)
{
	return (int)str;
}