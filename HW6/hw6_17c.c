#include <stdio.h>

void is_happy_number(int n)
{
    int sum = 0, mult = 1;
    while (n > 0)
    {
        sum += n%10;
        mult *= n%10;
        n /= 10;
    }
    if (sum == mult)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int a;
    scanf("%d", &a);
    is_happy_number(a);
    return 0;
}
