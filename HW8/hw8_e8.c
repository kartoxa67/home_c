#include <stdio.h>
#define ARR_SIZE 12

void invert_thirds(int *array, int p, int count)
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
    int c = ARR_SIZE/3;
    for (int i = 0; i < ARR_SIZE; i++)
        scanf("%d", &k[i]);

    invert_thirds(k, 0, c);
    invert_thirds(k, c, 2 * c);
    invert_thirds(k, 2 * c, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", k[i]);
    return 0;
}

