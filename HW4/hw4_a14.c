#include <stdio.h>

int main(void)
{
    int a, d1, d2, d3, max;
    scanf("%d", &a);
    d1 = a%10;
    d2 = (a/10)%10;
    d3 = (a/100);
    max = d1;
    if (d2 > max)
    {
        max = d2;
        if (d3 > max)
        {
            max = d3;
        }
        printf("%d", max);
    }
    else
    {
        if (d3 > max)
        {
            max = d3;
        }
        printf("%d", max);
    }

    return 0;
}

