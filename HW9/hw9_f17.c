#include <stdio.h>
#define N 5

int the_trace_of_the_matrix(int a[N][N])
{
    int trace = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i == j)
                trace += a[i][j];
        }
    }
    return trace;
}
int main(void)
{
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            scanf("%d", &array[i][j]);
    }
    printf("%d\n", the_trace_of_the_matrix(array));
    return 0;
}

