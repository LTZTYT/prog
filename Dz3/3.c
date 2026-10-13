#include <stdio.h>
#include <string.h>
int main(void) {
    char name[20];
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name); /* используем %20s типо создаем строку огр 20 байт и по умол оно сдвигает все вправо */
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",strlen(name)+5,name);
    
    return 0;
} 
