#include <stdio.h>

int main(void)
{
    int d, a, count = 0;
    scanf("%d", &a);
    d = a;
    while (a > 0)
    {
        a /= 10;
        count ++;
    }
    int m[count];
    for (int i = count - 1; i >= 0; i--)
    {
        m[i] = d % 10;
        d /= 10;
    }
    for (int i = 0; i < count - 1; i++)
    {
        if (m[i] >= m[i+1])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
