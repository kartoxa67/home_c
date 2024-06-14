//~ #include <stdio.h>
//~ #include <string.h>

void print_digit(char s[])
{
    int array[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            for (int j = 0; j < 10; j++)
                {
                    if (s[i] - 48 == j)
                    array[j] += 1;
                }
        }
    }
    for (int i = 0; i < 10; i++)
        if(array[i] != 0) printf("%d %d\n",i, array[i]);
}

//~ int main(void)
//~ {
    //~ char str[] = "hello 1world 2 test text 999.";
    //~ print_digit(str);
    //~ return 0;
//~ }

