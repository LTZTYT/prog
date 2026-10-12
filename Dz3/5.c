#include <stdio.h>
#include <string.h>
int main(void) {
    char v;
    scanf("%c",&v);
    printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n",v,v,v,v-32,v+1,v-1);
    return 0;
} 