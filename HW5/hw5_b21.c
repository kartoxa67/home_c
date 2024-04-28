#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != '.')
    {
        if (c >= 'A' && c <= 'Z')
            putchar('a' + (c - 'A'));
        else
            putchar(c);
    }
    return 0;
}

