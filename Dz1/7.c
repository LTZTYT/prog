#include <stdio.h> /*Сделали 2 функции чтобы много раз одно и тоже не писать и сократить код*/
void load_mem(){
    printf("MEM_OK");
}
void load_cpu(){
    printf("CPU_OK");
}
int main(){
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END\n");
    return 0;
}