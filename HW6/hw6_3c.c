#include <stdio.h>

int middle(int a, int b)
{
    return((a + b)/2);
}

int main(void)
{
    int c, d;
    scanf("%d%d", &c, &d);
    printf("%d", middle(c, d));
    return 0;
}

