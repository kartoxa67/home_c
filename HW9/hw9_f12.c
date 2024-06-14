//~ #include <stdio.h>

void change_max_min(int size, int a[])
{
    int min = a[0], max = a[0], pos_min = 0, pos_max = 0;
    for (int i = 1; i < size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            pos_min = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            pos_max = i;
        }
    }
    int  t = a[pos_min];
    a[pos_min] = a[pos_max];
    a[pos_max] = t;
}

//~ int main(void)
//~ {
    //~ int a[10];
    //~ for (int i = 0; i < 10; i++)
    //~ {
        //~ scanf("%d", &a[i]);
    //~ }
    //~ change_max_min(10, a);
    //~ for (int i = 0; i < 10; i++)
    //~ {
        //~ printf("%d ", a[i]);
    //~ }
    //~ return 0;
//~ }

