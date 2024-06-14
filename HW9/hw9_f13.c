//~ #include <stdio.h>

int count_between(int from, int to, int size, int a[])
{
    int count = 0;
    if (from > to)
    {
        int t = from;
        from = to;
        to = t;
    }

    for (int i = 0; i < size; i++)
    {
        if ((a[i] >= from) && (a[i] <= to))
            count ++;
    }
    return count;
}

//~ int main(void)
//~ {
    //~ int a[10];
    //~ for (int i = 0; i < 10; i++)
    //~ {
        //~ scanf("%d", &a[i]);
    //~ }
    //~ printf("%d", count_between(4, 6, 10, a));
    //~ return 0;
//~ }

