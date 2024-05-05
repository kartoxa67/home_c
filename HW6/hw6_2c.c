#include <stdio.h>

int power(int n, int p)
{
    int pwr = 1;
    for (int i = 1; i <= p; i++)
    {
        pwr *= n;
    }
    return pwr;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}

