#include <stdio.h>
#include <math.h>

#define e 0.0001
#define M_PI 3.14159265358979323846
float cosinus(float x)
{
    x *= (M_PI / 180.);
    float k = 1, sum = 1;
    int n = 1;
    while(fabs(k) >= e)
    {
        k *= -x * x/(n * (n + 1));
        sum += k;
        n += 2;
    }
    return sum;
}
int main(void)
{
    float a;
    scanf("%f", &a);
    printf("%.3f\n", cosinus(a));
    return 0;
}

