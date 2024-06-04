#include <stdio.h>
#define NUMBER_OF_ELEMENTS 12

float arithmetic_mean(int *arr, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    sum = (float)(sum / n);
    return sum;
}

int main(void)
{
    int array[NUMBER_OF_ELEMENTS];
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%.2f\n", arithmetic_mean(array, NUMBER_OF_ELEMENTS));
    return 0;
}

