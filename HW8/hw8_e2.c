#include <stdio.h>

int main(void)
{
    enum{NUMBER_OF_ELEMENTS = 5};
    int arr[NUMBER_OF_ELEMENTS], min;

    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 1; i < NUMBER_OF_ELEMENTS; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d\n", min);
    return 0;
}

