#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    b = a%10 + (a/10)%10 + (a/100)%10;
    printf("%d", b);
    return 0;
}

