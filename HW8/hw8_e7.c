#include <stdio.h>
#define ARR_SIZE 10

void reverse_halves(int *array, int p, int count)
{
    for (int i = p, j = count - 1; i < j; i++, j--)
    {
        int inv = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = inv;

    }
}

int main(void)
{
    int k[ARR_SIZE];
    int c = ARR_SIZE/2;
    for (int i = 0; i < ARR_SIZE; i++)
        scanf("%d", &k[i]);

    reverse_halves(k, 0, c);
    reverse_halves(k, c, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", k[i]);
    return 0;
}

