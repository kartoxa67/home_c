#include <stdio.h>
#define NUMBER_OF_ELEMENTS 10

int main(void)
{
    int array[NUMBER_OF_ELEMENTS], sum = 0;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
            sum += array[i];
    }
    printf("%d\n", sum);
    return 0;
}

