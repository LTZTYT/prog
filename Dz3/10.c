#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t w1[50],w2[50],w3[50];
    wscanf(L"%ls %ls %ls",&w1,&w2,&w3);
    wprintf(L"%-15ls|%20ls|%.5ls\n",w1,w2,w3);
    return 0;
} 