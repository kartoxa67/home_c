#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t n, bin, count = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        bin = n % 2;
        if(bin == 1)
            count++;
        n /= 2;
    }
    printf("%d\n", count);
    return 0;
}

