#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (((a > b)&&(a > c)) == 1)
    {
        printf("%d", a);
    }

    else
    {
        if (((b > c)) == 1)
        {
            printf("%d", b);
        }

        else
        {
            printf("%d", c);
        }
    }
    return 0;
}

