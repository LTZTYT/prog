#include <stdio.h>
#include <string.h>
int main(void) {
    char word1[15], word2[15];
    scanf("%s %s",word1,word2);
    int l=strlen(word1)+strlen(word2);
    printf("%s-%s\nTOTAL_LEN: %d\n",word1,word2,l);
    return 0;
} 
/*%s используется для чтения 1-го слова без пробелов и если больше scanf нету и человек */
/* ввел 1 слово, то ничего не будет, а если %s 1 и есть еще scanf и введено 2 слов, то тогда
 в сл сканф перебежит оно  это критично для игр в консоле*/