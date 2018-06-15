#include <windows.h>
#include <stdlib.h>
#include <io.h>
#include <sys/stat.h>
// #include "myhelp.h"

wchar_t* UTF8toUTF16(LPCSTR pIN)
{
    int len = MultiByteToWideChar(CP_UTF8,
                                  0,
                                  pIN,
                                  -1,
                                  NULL,
                                  0);
    wchar_t* pOut = malloc(len*sizeof(wchar_t));
    int ret = MultiByteToWideChar(CP_UTF8,
                                  0,
                                  pIN,
                                  -1,
                                  pOut,
                                  len);
    if(ret != len)
    {
        free(pOut);
        return NULL;
    }
    return pOut;
}
int mmystat(const char* pFile, struct stat* sb)
{
    wchar_t* wfn = UTF8toUTF16(pFile);
    int ret = wstat(wfn, sb);	/* don't merge into if; see "ret =" above */
    free(wfn);
    return ret;
}
int myopen(const char* inname, int flags)
{
    wchar_t* wfn = UTF8toUTF16(inname);
    int ret = _wopen(wfn,flags);
    free(wfn);
    return ret;
}
