#include <stdio.h>
#define ARR_SIZE 10
int main(void)
{
    int k[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++)
        scanf("%d", &k[i]);
    int t = k[ARR_SIZE - 1];

    for (int i = ARR_SIZE - 1; i > 0; i--)
    {
        k[i] = k[i - 1];
    }
    k[0] = t;
    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", k[i]);
    return 0;
}

