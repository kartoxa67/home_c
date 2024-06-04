#include <stdio.h>
#define ARR_SIZE 10
void swap_arr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
}

void sort_up(int* arr, int m, int n)
{
    for(int i=n-1; i>=m; i--)
    {
        for(int j=m; j<i; j++)
        {
            if(arr[j]>arr[j+1])
               swap_arr(arr,j,j+1);
        }
    }
}

void sort_down(int* arr, int m, int n)
{
    for(int i=n-1; i>=m; i--)
    {
        for(int j=m; j<i; j++)
        {
            if(arr[j]<arr[j+1])
               swap_arr(arr,j,j+1);
        }
    }
}


int main(void)
{
    int array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
        scanf("%d", &array[i]);
    sort_down(array, ARR_SIZE/2, ARR_SIZE);
    sort_up(array, 0, ARR_SIZE/2);
    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", array[i]);
    return 0;
}

