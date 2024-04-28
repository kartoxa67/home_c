#include <stdio.h>

int main(void)
{
    int d, sum = 0;
    scanf("%d", &d);
    while (d > 0)
    {
        sum += d % 10;
        d /= 10;
    }
    printf("%d\n", sum);
    return 0;
}

