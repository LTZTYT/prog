#include <stdio.h>

/*13 вариант*/
double calc(double a,double b);

int main(void){
    double a,b;
    while(scanf("%lf %lf",&a,&b)==2){
        printf("%.4f\n",calc(a,b));
    }
    return 0;
}


double calc(double a,double b){
    return (a * a * a + b * b * b) / (a + b);
}
/*Добл берем т.к с ним вычислении более точные*/
/*ретурн он выкл функцию и то возвращает в то место откуда запросили*/