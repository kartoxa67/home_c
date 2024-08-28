#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t mask = 0, n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < k; i++)
    {
        mask |= (1 << i);
        //printf("mask[%d]%d\n", i, mask);
    }
    n = n & mask;
    printf("%d\n", n);
    return 0;
}

