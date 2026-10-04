#include <stdio.h>
#include <stdint.h>
int main(void){
    printf("INT8: size=%zu, min=%d, max=%d, values=%d\n",sizeof(int8_t),INT8_MIN,INT8_MAX,INT8_MAX-INT8_MIN+1);
    printf("UINT8: size=%zu, min=%d, max=%d, values=%d\n",sizeof(uint8_t),0,UINT8_MAX,UINT8_MAX+1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%d\n",sizeof(int16_t),INT16_MIN,INT16_MAX,INT16_MAX-INT16_MIN+1);
    printf("UINT16: size=%zu, min=%d, max=%d, values=%d\n",sizeof(uint16_t),0,UINT16_MAX,UINT16_MAX+1);
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n",sizeof(int32_t),INT32_MIN,INT32_MAX,(long long)INT32_MAX-(long long)INT32_MIN+1LL);
    printf("UINT32: size=%zu, min=%d, max=%u, values=%lld\n",sizeof(uint32_t),0,UINT32_MAX,(long long)UINT32_MAX+1LL);
    return 0;
}/*различие u символов в том что без u идут и -+ ,а u идет от 0 до +*/
