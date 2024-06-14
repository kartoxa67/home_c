#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[1000];
    char *ptr_c = c, ch;
    int i = 0, count = 1;

    while ((ch = getchar()) != '.')
        ptr_c[i++] = ch;
    ptr_c[i] = '\0';
    for (int j = 0; j < strlen(c); j++)
    {
        if(c[j] == c[j + 1])
            count++;
        else if(c[j] != c[j + 1])
        {
            printf("%c%d", c[j], count);
            count = 1;
        }

    }
    return 0;
}

