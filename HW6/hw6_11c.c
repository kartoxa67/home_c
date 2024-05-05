#include <stdio.h>

int nod(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return t;
}

int main()
{
    int a, b;
    scanf("%d%d",&a, &b);
    printf("%d", nod(a, b));
    return 0;
}

