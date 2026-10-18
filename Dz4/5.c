#include <stdio.h>

/*28 вариант*/
double kb_to_mb(double kb){
    const double k=1024;
    return kb/k;
}
int main(void) {
    double kbb;
    
    while(scanf("%lf",&kbb)==1){
        double mb= kb_to_mb(kbb);
        printf("Мб: %.2f\n",mb);
    }
    return 0;
} /*double используем чтобы уменьшить потери в вычислениях*/
/*scanf==1 она проверяет сколько чисел введено и если там не то что надо она выкл цикл */