#include <stdio.h>
#define NUMBER_OF_ELEMENTS 10

int main(void)
{
    int array[NUMBER_OF_ELEMENTS], min, max, pos_min = 1, pos_max = 1;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &array[i]);
    }
    min = array[0];
    max = array[0];
    for (int i = 1; i < NUMBER_OF_ELEMENTS; i++)
    {
        if (min > array[i])
        {
            min = array[i];
            pos_min = i + 1;
        }
        if (max < array[i])
        {
            max = array[i];
            pos_max = i + 1;
        }
    }
    printf("%d %d %d %d\n", pos_max, max, pos_min, min);
    return 0;
}

