#include <stdio.h>
#include <ctype.h>
/*5 вариант*/

int main(void){
    int ch;
    while((ch=getchar())!=EOF){
        putchar(tolower(ch));
    }
    return 0;
}

