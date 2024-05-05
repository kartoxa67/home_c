#include <stdio.h>

int sum(int k)
{
    int s = 0;
    for (int i = 1; i <= k; i++)
    {
        s += i;
    }
    return s;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d",sum(a));
    return 0;
}

