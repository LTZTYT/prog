#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, ""); /*обозначает что берет локальные настройки системы*/
    char c[]="Сбой матрицы";
    wchar_t w[]=L"Сбой матрицы";
    printf("char -> sizeof: %d bytes, strlen: %d\n",sizeof(c),strlen(c));
    printf("wchar -> sizeof: %d bytes, wcslen: %d\n",sizeof(w),wcslen(w));
    return 0;
} 