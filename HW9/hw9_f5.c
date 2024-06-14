//~ #include <stdio.h>
int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
//~ int main(void)
//~ {
    //~ int k[25];
    //~ for(int i = 0; i < 25; i++)
        //~ scanf("%d", &k[i]);
    //~ printf("%d",find_max_array(25, &k[0]));
    //~ return 0;
//~ }

