#include <stdio.h>
#include <stdint.h>
/*12 вариант*/
/*во float переводим чтобы у нас дробная часть не отрезалась*/
int main(void) {
    uint16_t u,r;
    scanf("%hu %hu",&u, &r);
    float res=(float)u/(float)r;
    printf("результат %.2f\n",res);
    printf("uint16_t: %llu\n",(unsigned long long)sizeof(uint16_t));
    printf("float: %llu\n",(unsigned long long)sizeof(float));
    
    return 0;
} 