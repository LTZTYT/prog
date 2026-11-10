#include <stdio.h>

/*9 вариант*/
void yctznach(double *a,double *b);
int main(void){
    double a=0,b=0;
    while(scanf("%lf %lf",&a,&b)==2){
        if(a==0 && b==0){
            break;
        }
        yctznach(&a,&b);
        printf("измененные значения %lf %lf\n",a,b);
    }
    return 0;
}

void yctznach(double *a,double *b){
    double crznach=(*a+*b)/2.0;
    *a=crznach;
    *b=crznach;
}