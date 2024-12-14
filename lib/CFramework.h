#ifndef _Framework_H
#define _Framework_H

#include "../Header.h"

class CFramework {
public:
	class CFeature
	{
	public:
		char Key[256];
		DWORD Val;
		void* Ptr;
		CFeature(char* chKey, DWORD dwVal)
		{
			strcpy_s(this->Key, strlen(chKey) + 1, chKey);
			this->Val = dwVal;
			this->Ptr = (void*)&this->Val;
		}
	};
	void* DetourFunction(BYTE *src, DWORD dst, const int len);
	DWORD GetStringValue(char* Key);
	void SetStringValue(char* Key,DWORD dwVal);
	void* GetStringPtr(char* Key);
	char* GetStringFromAddress(int a);
	int ToIntFromString(char* str);
};
extern CFramework* Framework;
#endif