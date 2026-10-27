#include <stdio.h>

/*27 вариант*/


int main(void){
    const int height = 5;
    for(int i=0;i<height;i++){
        for(int j=0;j<height;j++){
            if(i==j || i+j==height-1){
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}/*первый счетчик это столбцы второй строки и когда один заканчивается второй переключается и тд до конца*/
