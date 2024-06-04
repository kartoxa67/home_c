#include <stdio.h>

int main(void)
{
    int a, c, k = 0;
    scanf("%d", &a);
    c = a;
    while (c != 0)
    {
        c /= 10;
        k++;

    }
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        arr[i] = a % 10;
        a /= 10;
    }

    for (int i = k - 1; i >= 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < k; i++)
    {
        answer = answer*10 + arr[i];
    }

    printf("\n%d", answer);
    return 0;
}

