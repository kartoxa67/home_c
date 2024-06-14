#include <stdio.h>

int main(void)
{
    char bf[3];
    int i = 0;
    char *ptr = bf, ch;
    while((ch = getchar()) != '\n')
        ptr[i++] = ch;
    ptr[i] = '\0';
    if (((bf[0] % 2 != 0) && (bf[1] % 2 == 0)) || ((bf[0] % 2 == 0) && (bf[1] % 2 != 0)))
        printf("WHITE");
    else
        printf("BLACK");
    return 0;
}

