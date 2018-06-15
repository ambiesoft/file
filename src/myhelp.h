#ifndef MYHELP_H
#define MYHELP_H

#include <windows.h>

wchar_t* UTF8toUTF16(LPCSTR pIN);
int mmystat(const char* pFile, struct stat* sb);
int myopen(const char* inname, int flags);

#endif // MYHELP_H
