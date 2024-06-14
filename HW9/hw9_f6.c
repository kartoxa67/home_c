//~ #include <stdio.h>

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (a[i] == a[j])
                return 1;
        }

    }
    return 0;
}

//~ int main(void)
//~ {
    //~ int k[5];
    //~ for(int i = 0; i < 5; i++)
        //~ scanf("%d", &k[i]);
    //~ printf("%d",is_two_same(5, &k[0]));
    //~ return 0;
//~ }

