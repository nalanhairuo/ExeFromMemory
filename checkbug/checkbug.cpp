#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
int main(void)
{
    MessageBox(NULL, _T("check my exe"), _T("just a test"), NULL);
    return 0;
}
