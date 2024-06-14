#include <stdio.h>
#define ARR_SIZE 10

int multiplication_even(int a)
{
    int k = 1;
    do
    {
        if(a % 2 == 0)
            k *= a % 10;
        a /= 10;
    }
    while(a != 0);
    return k;
}

int multiplication_odd(int a)
{
    int k = 1;
    do
    {
        if(a % 2 != 0)
            k *= a % 10;
        a /= 10;
    }
    while(a != 0);
    return k;
}

int main(void)
{
    int c[ARR_SIZE];
    int count_even = 0, count_odd = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &c[i]);
        (c[i] % 2 == 0)? (count_even++):(count_odd++);
    }
    if (count_even > count_odd)
    {
        for (int i = 0; i < ARR_SIZE; i++)
        {
            if(c[i] % 2 != 0)
                c[i] = multiplication_odd(c[i]);
        }
    }
    else if(count_even <= count_odd)
    {
        for (int i = 0; i < ARR_SIZE; i++)
        {
            if(c[i] % 2 == 0)
                c[i] = multiplication_even(c[i]);
        }
    }

    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", c[i]);
    return 0;
}

