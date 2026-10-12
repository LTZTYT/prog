#include <stdio.h>
#include <string.h>
int main(void) {
    char v[20];
    int width;
    scanf("%s %d",&v,&width);
    printf("%*s\n%-*s\n",width,v,width+5,v);

    return 0;
} 