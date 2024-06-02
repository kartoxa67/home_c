#include <stdio.h>

void prime_multiplier(int n, int i)
{
    for (; ;i++)
    {
        if (n == 1)
        {
            return;
        }
        if (n % i == 0)
        {
            printf("%d ", i);
            prime_multiplier(n / i, i);
            return;

        }


    }
}

int main(void)
{
    int a, i = 2;
    scanf("%d", &a);
    prime_multiplier(a, i);
    return 0;
}

