#include <stdio.h>
#define ARR_SIZE 10
int main(void)
{
    int arr1[ARR_SIZE];
    int counter = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &arr1[i]);
        if(arr1[i]/10%10 == 0)
            counter += 1;
    }
    int arr2[counter];
    int k = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        if (arr1[i]/10%10 == 0)
        {
            arr2[k] = arr1[i];
            k += 1;
        }
    }
    for(int i = 0; i < counter; i++)
        printf("%d ", arr2[i]);
    return 0;
}
