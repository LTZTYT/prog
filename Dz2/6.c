#include <stdio.h>
#include <stdint.h>
int main(void){
    uint8_t t,tt;
    scanf("%hhu",&tt);
    t=tt+10;
    printf("ADD: %u\n",(unsigned int)t);
    t=tt*2;
    printf("MUL2: %u\n",(unsigned int)t);
    t=tt*tt;
    printf("SQR: %u\n",(unsigned int)t);
    return 0;
}/*уинт он от 0 до 255*/