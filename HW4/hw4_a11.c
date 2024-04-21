#include <stdio.h>

int main()
{

    #define N 5
    int i, a[N], max, min, sum;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 0; i < N; i++)
    {
        if (a[i]> max)
        {
            max = a[i];
        }
        if (a[i]< min)
        {
            min = a[i];
        }

    }
    sum = max + min;
    printf("%d\n", sum);
    return 0;
}
