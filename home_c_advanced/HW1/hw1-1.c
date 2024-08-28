#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int n,s, i = 0, max, count = 1;
    uint8_t flag = 0;
    scanf("%d", &n);

    while(i < n)
    {
        if(flag)
        {
            scanf("%d", &s);
            if(s == max)
                count++;
            else if(s > max)
            {
                max = s;
                count = 1;
            }

        }

        else if(!flag)
        {
            scanf("%d", &max);
            flag = 1;
        }

        i++;
    }
    printf("%d", count);
    return 0;
}

