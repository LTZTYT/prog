#include <stdio.h>

/*5 вариант*/
int main(void) {
    const int k=100;
    int t_cm;
    printf("Введите кол-во см\n");
    while(scanf("%d",&t_cm) == 1 && t_cm>0){
        int m=t_cm/k;
        int cm=t_cm%k;
        printf("%d м и %d см\n",m,cm);
        printf("Введите кол-во см\n");
    }
    return 0;
} /*инт это целые числа поэтому дробная часть она просто отсекается*/