#include <stdio.h>
#include <math.h>
/*5 вариант*/
#define pi 3.1415926535897932

int main(void){
    double a=0,b=pi,h=0.5;
    int iter=1;
    for(double x=a;x<=b;x+=h){
        double y = sin(x);
        printf("итерация %d | X=%.4f | Y=%.4f\n",iter,x,y);
        iter++;
    }

    return 0;
}
/*аналогия можно представить в с тем что вам надо пройти 1 м и вы шагаете по 10 см и 1 мм, а вам надо <=метру и вы расчитываете на 10 шагов, а на деле 9 получается*/