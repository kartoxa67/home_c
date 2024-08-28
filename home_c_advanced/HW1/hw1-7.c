#include <stdio.h>
#include <inttypes.h>
#define NUMBER_OF_BITS 8
#define SIZE 32

int main(void)
{
    uint32_t n, k1, k2;
    scanf("%d", &n);
    k1 = ~(n >> (SIZE - NUMBER_OF_BITS));
    k1 <<= (SIZE -NUMBER_OF_BITS);
    k2 = (n << NUMBER_OF_BITS) >> NUMBER_OF_BITS;
    n = k1 | k2;
    printf("%" PRIu32 "\n", n);
    return 0;
}

