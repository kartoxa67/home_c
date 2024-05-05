#include <stdio.h>

int number_system(int n, int p)
{
    int t = 0, i = 1;
    while (n > 0)
    {
        t += (n % p) * i;
        i *= 10;
        n /= p;
    }
    return t;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", number_system(a, b));
    return 0;
}

