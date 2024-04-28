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
    for (int i = 0; i < count; i++)
    {
        m[i] = d % 10;
        d /= 10;
    }
    for (int i = 0; i < count; i++)
    {
        int j = i+1;
        while (j < count)
        {
            if (m[i] == m[j])
            {
                printf("YES\n");
                return 0;
            }
            j++;
        }
    }
    printf("NO\n");
    return 0;
}

