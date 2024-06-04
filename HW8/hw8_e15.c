#include <stdio.h>
#define ARR_SIZE 10

int main(void)
{
    int array[ARR_SIZE];
    int count_pos = 0, count_neg = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] > 0)
            count_pos += 1;
        else if(array[i] < 0)
            count_neg += 1;
    }
    int arr1[count_pos], arr2[count_neg];
    int count1 = 0, count2 = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if(array[i] > 0)
        {
            arr1[count1] = array[i];
            count1 += 1;
        }
        else if (array[i] < 0)
        {
            arr2[count2] = array[i];
            count2 += 1;
        }
    }
    for (int i = 0; i < count1; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < count2; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

