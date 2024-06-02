#include <stdio.h>

void numbers(int n)
{
    printf("%d ", n);
    if(n > 1)
        numbers(n - 1);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    numbers(a);
    return 0;
}

