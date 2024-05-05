#include <stdio.h>

int function(int x)
{
    if (x >= 2)
    {
        return(x*x + 4*x + 5);
    }
    else if (x < -2)
    {
        return(4);
    }
    else
    {
        return(x * x);
    }
}

int main(void)
{
    int a, b, max = 0;
    scanf("%d", &a);
    while(a != 0)
    {
        b = function(a);
        if (b > max)
        {
            max = b;
        }
        scanf("%d", &a);

    }
    printf("%d", max);
    return 0;
}

