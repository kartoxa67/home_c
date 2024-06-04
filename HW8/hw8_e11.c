#include <stdio.h>
#define SIZE_ARR 10
int main(void)
{
    int array[SIZE_ARR];
    int pos;
    for (int i = 0; i < SIZE_ARR; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < SIZE_ARR - 1; i++)
    {
        pos = i;
        for (int j = i + 1; j < SIZE_ARR; j++)
        {
            if (array[pos]%10 > array[j]%10)
                pos = j;
        }
        if (pos != i)
        {
            int t = *(array + i);
            *(array + i) = *(array + pos);
            *(array + pos) = t;
        }
    }
    for (int i = 0; i < SIZE_ARR; i++)
        printf("%d ", array[i]);
    return 0;
}

