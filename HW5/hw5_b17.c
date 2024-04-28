#include <stdio.h>

int main()
{
    int a, mult = 1, sum = 0;
    scanf("%d", &a);
    for (int i = 10; i <= a; i++)
    {
        int k = i;
        //printf("%d\n", k);
        while (k > 0)
        {
            mult *= k % 10;
            sum += k % 10;
            k /= 10;
        }
        if (mult == sum)
        {
            printf("%d ", i);
        }
        mult = 1;
        sum = 0;
    }
    return 0;
}

