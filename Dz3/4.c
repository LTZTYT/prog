#include <stdio.h>
#include <string.h>
int main(void) {
    char arr[]="\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
    int l=strlen(arr),v=sizeof(arr);
    printf("%s\nSTRLEN: %d\nSIZEOF: %d\n",arr,l,v);
/*\t обозначает табуляции или же просто клавишу таб*/
/*до \t Hello после \t World*/
    
    return 0;
} 