#include <stdio.h>
#include <math.h>

void is_prime(int n)
{
    if (n <= 1)
    {
        printf("NO\n");
        return;
    }
    if (n == 2)
    {
        printf("YES\n");
        return;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
        printf("NO\n");
        return;
        }
    }
    printf("YES\n");
    return;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    is_prime(a);
    return 0;
}

