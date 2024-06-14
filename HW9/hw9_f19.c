#include <stdio.h>
#define ARR_SIZE 5

int arithmetic_mean(int a[ARR_SIZE][ARR_SIZE])
{
    int am = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        for (int j = 0; j < ARR_SIZE; j++)
        {
            if(i == j)
                am += a[i][j];
        }
    }
    am /= ARR_SIZE;
    return am;
}

int main(void)
{
    int array[ARR_SIZE][ARR_SIZE];
    int count = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        for (int j = 0; j < ARR_SIZE; j++)
            scanf("%d", &array[i][j]);
    }
    int k = arithmetic_mean(array);
    for (int i = 0; i < ARR_SIZE; i++)
    {
        for (int j = 0; j < ARR_SIZE; j++)
        {
            if ((array[i][j] > 0) && (array[i][j] > k))
                count++;
        }
    }
    printf("%d", count);
    return 0;
}

