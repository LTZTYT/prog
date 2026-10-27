#include <stdio.h>

/*9 вариант*/


int main(void){
    double arr[8],sum_poloj=0.0;
    int h=8;
    for(int i=0;i<h;i++){
        scanf("%lf",&arr[i]);
    }
    for(int i =0;i<h;i++){
        if(arr[i]>0){
            sum_poloj+=arr[i];
        }
    }
    for(int i =0;i<h;i++){
        printf("%.2f ",arr[i]);
    } printf("\n");
    printf("Сумма положительных:%.2f",sum_poloj);

    return 0;
}/*арр это поезд, а i указатель сколько шагов сделать чтобы дойти до нужного вагона, если вы стоите уже у поезда, то вам надо сделать 0 шагов, чтобы дойти до 1 вагона*/
