#include <stdio.h>

/*13 вариант*/

int main(void){
    int vibor;
    double a,znach;
    /*Конвертер данных: Б→КБ, КБ→МБ, МБ→ГБ, бит→байт, выход*/
    while(1){printf("Меню\n");
    printf("1.Байт→КБ\n");
    printf("2.КБ→МБ\n");
    printf("3.МБ→ГБ\n");
    printf("4.бит→байт\n");
    printf("5.выход\n");
    if(scanf("%d",&vibor)!=1){
        printf("Ошибка требуется число");
        while(getchar()!='\n');
        continue;
    }
    if(vibor==5){printf("Вы вышли из меню"); break;}
    

    switch(vibor){
        case 1:
        printf("Введите значение");
        scanf("%lf", &znach);
        a = znach / 1024.;
        printf("%f Байт = %f КБ\n", znach, a);
        break;
        case 2:
        printf("Введите значение");
        scanf("%lf", &znach);
        a = znach / 1024.;
        printf("%f КБ = %f МБ\n", znach, a);
        break;
        case 3:
        printf("Введите значение");
        scanf("%lf", &znach);
        a = znach / 1024.;
        printf("%f МБ = %f ГБ\n", znach, a);
        break;
        case 4:
        printf("Введите значение");
        scanf("%lf", &znach);
        a = znach / 8.;
        printf("%f Бит = %f Байт\n", znach, a);
        break;
        default:
        printf("Ошибка в данном меню отсутсвует данный пункт\n");
        continue;
    }
    }
    return 0;
}

