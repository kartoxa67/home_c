#include <stdio.h>

void grow_up(int n)
{
    while (n > 9)
    {
        int k = n % 10;
        if (k <= ((n/10)%10))
        {
            printf("NO\n");
            return;
        }
        n /= 10;
    }
    printf("YES\n");
}

int main(void)
{
    int a;
    scanf("%d", &a);
    grow_up(a);
    return 0;
}

