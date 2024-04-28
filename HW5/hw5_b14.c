#include <stdio.h>

int main(void)
{
    int a, count = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        count += 1;
        scanf("%d", &a);
    }
    printf("%d", count);
    return 0;
}

