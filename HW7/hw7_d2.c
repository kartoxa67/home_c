#include <stdio.h>

int sum_rec(int n)
{
    if(n <= 1)
        return 1;
    int sum = n + sum_rec(n - 1);
    return sum;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", sum_rec(a));
    return 0;
}

