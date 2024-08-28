#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t n, res = 0;

    scanf("%d", &n);
    uint32_t arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        res ^= arr[i];
    }
    printf("%d\n", res);
    return 0;
}

