#include <stdio.h>

void even_number(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    if (sum % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int a;
    scanf("%d", &a);
    even_number(a);
    return 0;
}

