#include <stdio.h>
#include <ctype.h>
/*27 вариант*/

int main(void){
    int simv=0,co_3=0,co_t=0,co_vn=0;
    while((simv=getchar())!=EOF && simv!='\n'){
        co_t++;
        if(isdigit(simv)){
            co_vn++;
        }else{
            if(co_vn==3){
                co_3++;
            } co_vn=0;
        }
    
    } 
    printf("тройки %d\n", co_3);
    printf("всего символов %d\n", co_t);
    return 0;
}

