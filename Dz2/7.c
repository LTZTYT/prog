#include <stdio.h>
#include <stdbool.h>

int main(void){
    long double ld;
    scanf("%Lf", &ld);
    float f=(float)ld;
    double d=(double)ld;
    printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\nFLOAT+1: %.6f\nDOUBLE+1: %.6f\nLDOUBLE+1: %.6Lf\n", f, d ,ld, f+1,d+1,ld+1);
    return 0;
}/*у флоат 7 значащих знака*/