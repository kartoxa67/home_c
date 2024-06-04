#include <stdio.h>

int main(void)
{
    int a, k, c;
    scanf("%d", &a);
    c = a;
    while (c != 0)
    {
        c /= 10;
        k++;
    }
    int arr[k];
    for (int i = k - 1; i >= 0; i--)
    {
        arr[i] = a % 10;
        a /= 10;
    }

    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);
    return 0;
}

