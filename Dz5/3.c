#include <stdio.h>

/*3 вариант*/


int main(void){
    int n;
    while(scanf("%d",&n)==1 && n>0){
        double sum=0.0;
        for(int i=1;i<=n;i++){
            double a=1.0/(i* i * i);
            sum+=a;
        }
        printf("SUM:%.6f\n",sum);
    }
    return 0;
}/* если не сделать 0.0, то деление будет делать целочислен.*/ 
