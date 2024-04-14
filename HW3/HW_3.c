#include <stdio.h>

int main()
{
    int a, b, c;
    float d;
    scanf("%d%d%d", &a, &b, &c);
    d = ((float)a + (float)b + (float)c)/3;
    printf("%.2f", d);
    return 0;
}

