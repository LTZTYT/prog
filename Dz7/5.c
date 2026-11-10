#include <stdio.h>
/*13 вариант*/

long long int iter(long long int n);
long long int recurs(long long int n);

int main(void){
    long long int n=0;
    if(scanf("%lld",&n)==1 && n>=0){
        printf("Итеративный %lld\n",iter(n));
        if(n<=250000){
        printf("Рекурсивный %lld\n",recurs(n));}else{
            printf("Для рекурсии введите число меньше (<=250_000)\n");
        }
    }else{
        printf("Некорректный ввод\n");
    }
    return 0;
}

long long int iter(long long int n){
    long long int sum=0;
    for(long long int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}


long long int recurs(long long int n){
    if(n<=1){
        return n;
    }
    return n+recurs(n-1);
}