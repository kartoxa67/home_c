#include <stdio.h>

int main(void)
{
    int a, even_n = 0, odd_n = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        if (a % 2 == 0)
        {
            even_n += 1;
        }
        else
        {
            odd_n += 1;
        }
        a /= 10;
    }
    printf("%d %d", even_n, odd_n);
    return 0;
}

