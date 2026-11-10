#include <stdio.h>

/*3 вариант*/
double srznach(double a,double b);
int main(void){
    double a,b;
    while(scanf("%lf %lf",&a,&b)==2){
        if(a==0 && b==0){
            break;
        }
        printf("Ср значение %lf\n",srznach(a,b));
    }
    return 0;
}

double srznach(double a,double b){
    return (a+b)/2.;
}