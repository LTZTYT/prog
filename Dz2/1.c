#include <stdio.h>

int main(void){
    int a,b,c,sum;
    scanf("%d %x %o",&a, &b, &c);
    sum=a+b+c;
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM: %d\n1",a,b,c,sum);
    return 0;
}