#include <stdio.h>
#include <string.h>

void numerals_count(void)
{
    char c[1000];
    int array[10] = {0};
    char *ptr_c = c, ch;
    int i = 0, k = 0;

    while ((ch = getchar()) != '\n')
        ptr_c[i++] = ch;
    ptr_c[i] = '\0';
    for (int j = 0; j < strlen(c); j++)
    {
        for (k = 0; k < 10; k++)
        {
            if ((c[j] - 48) == k)
                array[k] ++;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if(array[j] != 0)
            printf("%d %d\n",j, array[j]);
    }
}


int main(void)
{
    numerals_count();
    return 0;
}
