#include <stdio.h>
int main(void){
    int a=10,b=010,c=0x10;
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n",a,b,c);
    printf("INT_SUFFIX: %d %d %d %d\n",sizeof(10),sizeof(10u),sizeof(10LL),sizeof(10ULL));
    printf("FLOAT_SUFFIX: %d %d %d\n",sizeof(0.1f),sizeof(0.1),sizeof(0.1L));
    printf("FLOAT_EQ: %d\n",0.1f==0.1);
    char v='A';
    printf("CHAR_FORMS: %d %d %d\n",v,'\x41','\101');
    printf("CHAR_LIT_VAR_STR: %d %d %d\n",sizeof('A'),sizeof(v),sizeof("A"));
/*ну 0.1 считается как добл, а с припиской ф как флоат у флоат 4 бита у дабл 8бит*/
    return 0;
}