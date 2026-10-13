#include <stdio.h>
#include <string.h>
int main(void) {
    char arr[20]="SibSUTIS";
    int l=sizeof(arr),s=strlen(arr),v=l-s-1;
    printf("SIZEOF: %d\nSTRLEN: %d\nFREE_BYTES: %d\n",l,s,v);
    char arrr[20]="СибГУТИ";
    int ll=sizeof(arrr),ss=strlen(arrr),vv=ll-ss-1;
    printf("SIZEOF: %d\nSTRLEN: %d\nFREE_BYTES: %d\n",ll,ss,vv);
    return 0;
} /*sizeof смотрит на вес, а стрлен на кол-во байт */
