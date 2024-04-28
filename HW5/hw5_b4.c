#include <stdio.h>

int main(void)
{
    int d, count = 0;
    scanf("%d", &d);
    while (d > 0)
    {
        d /= 10;
        count++;
    }
    if (count == 3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

