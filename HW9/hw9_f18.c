#include <stdio.h>
#define N 10

int max_of_the_row(int a[N])
{
    int max = a[0];
    for (int i = 1; i < N; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    return max;
}

int main(void)
{
    int array[N][N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            scanf("%d", &array[i][j]);
    }
    for (int i = 0; i < N; i++)
    {
        sum += max_of_the_row(*(array + i));
    }
    printf("%d", sum);
    return 0;
}

