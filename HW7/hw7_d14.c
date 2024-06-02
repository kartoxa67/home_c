#include <stdio.h>

void odd_numbers(void)
{
    int c;
    scanf("%d", &c);
    if (c != 0)
    {
        if (c % 2 != 0)
            printf("%d ", c);
        odd_numbers();
    }

}

int main(void)
{
    odd_numbers();
    return 0;
}

