#include <stdio.h>

/*18 вариант*/
/*постфикс i++ сначала используем потом добавляем у предфикс наоборот ++i сначала добавить потом использовать*/
int main(void) {
    int n;
    printf("Введите n:\n");
    scanf("%d",&n);
    int naczn=1,step=1,colelv=0;
    
    while(colelv<n && n!=0){
        printf("%d ",naczn);
        step++;
        naczn += step;
        colelv++;
    }

    return 0;
} 