#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d %d", i, i * i);
        printf(" %d\n", i * i * i);
    }
    return 0;
}

