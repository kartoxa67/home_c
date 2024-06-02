#include <stdio.h>

void sequence(int n, int k)
{
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", k);
            n--;
            if(n == 0)
                return;
        }
        sequence(n, k + 1);
}

int main(void)
{
    int p;
    scanf("%d", &p);
    sequence(p, 1);
    return 0;
}

