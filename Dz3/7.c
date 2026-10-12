#include <stdio.h>
#include <string.h>

#define L "LinuxDistro"
int main(void) {
    const char arr[]="2026";
    int v=sizeof(L), f=strlen(L);
    printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %d\nSIZEOF: %d\n",L,arr,f,v);
    /* ну размер он с учетом \0, а длина не учитывает это */
    return 0;
} 