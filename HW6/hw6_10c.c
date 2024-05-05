#include <stdio.h>

void print_simple(int n)
{
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n/i;

        }
    }
    return;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    print_simple(a);
    return 0;
}

