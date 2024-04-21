#include <stdio.h>

int main()
{

    #define N 5
    int i, a[N], max;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < N; i++)
    {
        if (a[i]> max)
        {
            max = a[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
