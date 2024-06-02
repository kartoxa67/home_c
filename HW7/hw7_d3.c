#include <stdio.h>

void numbers_rec(int n)
{
    printf("%d ", n%10);
    if (n / 10 != 0)
        numbers_rec(n/10);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    numbers_rec(a);
    return 0;
}

