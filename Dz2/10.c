#include <stdio.h>
#include <stdint.h>

int main(void){
    int a;
    uint8_t b;
    float c;
    scanf("%x %hho %f", &a, &b,&c);/*пишем hho т.к программа ждет 4 байта,а uint8_t - 1 байт и у нас все криво иначе пойдем. Можно через инт и потом уже b перевести в uint8*/
    uint16_t cheksum=a+b;
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\nVOLTAGE: %.2f\nCHECKSUM: %u\n",a,b,b,c,cheksum);


    return 0;
}