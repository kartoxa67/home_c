#include <stdio.h>

int abs(int num)
{
    return(num < 0)?-num:num;
}

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", abs(num));
    return 0;
}

