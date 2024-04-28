#include <stdio.h>

int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        sum += a % 10;
        a = a/10;
    }
    sum == 10? printf("YES\n"):printf("NO\n");
    return 0;
}

