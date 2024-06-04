#include <stdio.h>
#define NUMBER_OF_ELEMENTS 5

int main(void)
{
    int array[NUMBER_OF_ELEMENTS];
    float am;

    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        am += array[i];
    }
    am = (float)(am/NUMBER_OF_ELEMENTS);
    printf("%.3f", am);
    return 0;
}

