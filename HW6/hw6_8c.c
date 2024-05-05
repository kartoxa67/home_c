#include <stdio.h>

char capital_ltr(char k)
{
    if (k >= 'a' && k <= 'z')
        return(putchar('A' + (k - 'a')));
    else
        return(putchar(k));
}

int main(void)
{
    char c;
    while ((c = getchar()) != '.')
    {
        capital_ltr(c);
    }

    return 0;
}
