#include <stdio.h>
#include <wchar.h>
#include <locale.h>
/*27 вариант*/

int main(void){
    setlocale(LC_ALL, "");
    wint_t tznach,prznach=WEOF;
    int chet=0;
    while((tznach=getwchar())!=WEOF && tznach != L'#'){
        if(prznach != WEOF && tznach==prznach){
            chet+=1;
        }
        prznach=tznach;
    }
    printf("Итого пар:%d",chet);

    return 0;
}

