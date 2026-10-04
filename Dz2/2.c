#include <stdbool.h>
#include <stdio.h>
int main(void){
    int a,b;
    bool c,d;
    scanf("%d %d", &a, &b);
    c=a; /*потому что в языке С все что не 0 будет true, а труе это 1 */
    d=b;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %zu\nFLAGS_SUM: %d\n",c,d,sizeof(bool),c+d);
    return 0;
}