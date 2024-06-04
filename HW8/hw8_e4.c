#include <stdio.h>
#define NUMBER_OF_ELEMENTS 10

void swap_arr_ptr(int* arr,int i,int j)
{
    int temp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = temp;
}

void bubble_sort(int* arr, int n)
{
    int no_swap;
    for (int i = 0; i < n; i++)
    {
        no_swap = 1;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap_arr_ptr(arr, j - 1, j);
                no_swap = 0;
            }
        }
        if(no_swap)
            break;
    }
}
int main(void)
{
    int array[NUMBER_OF_ELEMENTS], max1, max2;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
        scanf("%d", &array[i]);
    }
    bubble_sort(array, NUMBER_OF_ELEMENTS);

    max1 = array[NUMBER_OF_ELEMENTS - 1];
    max2 = array[NUMBER_OF_ELEMENTS - 2];
    printf("%d\n", max1 + max2);
    return 0;
}

