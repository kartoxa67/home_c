#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    uint32_t n, k;
    unsigned int n_cycle_shift;
    scanf("%d%d", &n, &k);
    n_cycle_shift = (n >> k) | (n << (32 - k));
    printf("%" PRIu32 "\n", n_cycle_shift);
    return 0;
}

