#include <stdio.h>
#include <ctype.h>
/*5 вариант*/

int main(void){
    int simv;
    long long int sum=0;
    while((simv=getchar()) != EOF && simv != '#'){
        if(isdigit(simv)){
            sum+=simv;
        }
    }
    printf("Сумма АСКИ кодов: %lld",sum);
    return 0;
}

