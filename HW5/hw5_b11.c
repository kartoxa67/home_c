#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%d", a);
    }
    else
    {
        while (a > 0)
        {
            printf("%d", a % 10);
            a /= 10;
        }
    }

    return 0;
}
