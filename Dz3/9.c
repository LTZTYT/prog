#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t w[20];
    wscanf(L"%ls",&w);
    wprintf(L"Агент %ls авторизован в системе",w);
    return 0;
} 