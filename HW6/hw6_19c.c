#include <stdio.h>

int digit_to_num(char c)
{
    int k;
    if (c >= '0' && c <= '9')
        k = c - 48;
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
        a += digit_to_num(d);

    }
    printf("%d\n", a);
    return 0;
}

