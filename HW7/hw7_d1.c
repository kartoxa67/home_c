#include <stdio.h>

void print_rec(int n)
{
    if(n > 1)
        print_rec(n - 1);
    printf("%d ", n);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    print_rec(a);
    return 0;
}

