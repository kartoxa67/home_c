#include <stdio.h>

int number_of_ones(int n)
{
    int count_one = n % 2;

    if (n == 0)
        return 0;
    return count_one += number_of_ones(n / 2);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d",number_of_ones(a));
    return 0;
}

