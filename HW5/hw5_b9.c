#include <stdio.h>

int main(void)
{
    int d;
    scanf("%d", &d);
    while (d > 0)
    {
        if (d % 2 == 1)
        {
            printf("NO\n");
            return 0;
        }
        d /= 10;
    }
    printf("YES\n");
    return 0;
}

