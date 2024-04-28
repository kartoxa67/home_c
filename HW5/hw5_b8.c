#include <stdio.h>

int main(void)
{
    int d, count = 0;
    scanf("%d", &d);
    while (d > 0)
    {
        if (d % 10 == 9)
        {
            count += 1;
        }
        d = d / 10;
    }
    if (count == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

