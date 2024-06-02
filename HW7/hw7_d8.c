#include <stdio.h>

void rec(int a, int b)
{
    if(a == b)
    {
        printf("%d", a);
        return;
    }
    if (a < b)
    {
        printf("%d ", a);
        rec(++a, b);
    }
    else
    {
        printf("%d ", a);
        rec(--a, b);
    }
}

int main(void)
{
    int k, t;
    scanf("%d%d", &k,&t);
    rec(k, t);
    return 0;
}

