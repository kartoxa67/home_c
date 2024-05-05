#include <stdio.h>

int is_digit(char c)
{
    int k = 0;
    if (c >= '0' && c <= '9')
        k = 1;
    else
        k = 0;
    return k;
}

int main(void)
{
    char d;
    int a = 0;
    while ((d = getchar()) != '.')
    {
        a += is_digit(d);

    }
    printf("%d\n", a);
    return 0;
}

