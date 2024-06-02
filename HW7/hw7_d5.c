#include <stdio.h>

void binary_sys(int n)
{
    if (n / 2 != 0)
        binary_sys(n / 2);
    printf("%d", n % 2);
}
int main(void)
{
    int a;
    scanf("%d", &a);
    binary_sys(a);
    return 0;
}

