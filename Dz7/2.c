#include <stdio.h>
#include <ctype.h>
/*27 вариант*/

int main(void){
    int simv=0,co_3=0,co_t=0,co_vn=0;
    while((simv=getchar())!=EOF && simv!='\n'){
        co_t++;
        if(isdigit((unsigned char)simv)){
            co_vn++;
        }else{
            if(co_vn==3){
                co_3++;
            } co_vn=0;
        }
    
    }
    if(co_vn==3){
        co_3++;
    /*делаем для того чтобы когда в конце ввода было 123 программа не забыла и вписала*/
    }
    printf("тройки %d\n", co_3);
    printf("всего символов %d\n", co_t);
    return 0;
}

