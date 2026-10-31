#include <stdio.h>

/*3 вариант*/

int main(void){
    int co_3=0,co_5=0;
    long long int num,sum_3=0,sum_5=0;
    
    while(scanf("%lld",&num)==1 && num!=0){
        if(num%3==0){
            co_3++;
            sum_3+=num;
        }
        if(num%5==0){
            co_5++;
            sum_5+=num;
        }
    }
    if(co_3>0){
        printf("Числа кратные 3 количество: %lld и ср арифм:%f\n",co_3,(double)sum_3/co_3);
    }else printf("Звук сверчков");
    if(co_5>0){
        printf("Числа кратные 5 количество: %lld и ср арифм:%f\n",co_5,(double)sum_5/co_5);
    }else printf("Звук сверчков");
    
    return 0;
}

