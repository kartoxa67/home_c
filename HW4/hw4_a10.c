#include <stdio.h>

int main()
{

    #define N 5
    int i, a[N], min;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < N; i++)
    {
        if (a[i]< min)
        {
            min = a[i];
        }
    }
    printf("%d\n", min);
    return 0;
}

