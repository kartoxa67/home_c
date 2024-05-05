#include <stdio.h>
#include <stdint.h>

uint64_t grain(int g)
{
    uint64_t k = 1;
    if (g != 1)
    {
        for (int i = 2; i <= g; i++)
        {
            k *= 2;
        }
        return k;
    }

    return k;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%llu", grain(a));
    return 0;
}

