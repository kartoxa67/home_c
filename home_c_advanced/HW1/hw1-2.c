#include <stdio.h>

int main(void)
{
    int c;
    int n;
    int k = 'z' - 'a';
    scanf("%d", &n);
    while((c=getchar())!='.')
    {
        if((c >= 'a') && (c <= 'z'))
            c = (c + n) % (k + 'a');
        if((c >= 'A') && (c <= 'Z'))
            c = (c + n) % (k + 'A');
        putchar(c);
    }
    return 0;
}

