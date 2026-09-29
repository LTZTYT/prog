#include <stdio.h>
int main(){
    int reactor_core=12,r2=reactor_core*2,r3=reactor_core*reactor_core;
    printf("[");
    printf("%d",reactor_core);
    printf(",");
    printf(" ");
    printf("%d",r2);
    printf(",");
    printf(" ");
    printf("%d",r3);
    printf("]");
    printf("\n");

    return 0;
}