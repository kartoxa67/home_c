#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    ((a + b > c) && (b + c > a) && (c + a > b))?printf("YES\n"):printf("NO\n");
    return 0;
}

