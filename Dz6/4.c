#include <stdio.h>

/*9 вариант*/

int main(void){
    long long int zaproc;
    double ct1=0,ct2=0,ct3=0;
    /*0.02/запрос до 2000, 0.015/запрос от 2000 до 12000, 0.01/запрос свыше */
    if (scanf("%lld",&zaproc)!=1 || zaproc<0){
        printf("Ошибка");
        return 1;
    }
    if(zaproc<=2000){
        ct1=zaproc*0.02;
    } else if(zaproc<=12000){
        ct1=2000*0.02;
        ct2=(zaproc-2000)*0.015;
    } else {
        ct1=2000*0.02;
        ct2=10000*0.015;
        ct3=(zaproc-12000)*0.01;
    }
    double t=ct1+ct2+ct3;
    printf("Всего запросов: %lld\n",zaproc);
    printf("Ступень 1: %f\n",ct1);
    printf("Ступень 2: %f\n",ct2);
    printf("Ступень 3: %f\n",ct3);
    printf("Итого: %f\n",t);
    return 0;
}

