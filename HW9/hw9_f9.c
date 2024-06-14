//~ #include <stdio.h>
void swap_negmax_last(int size, int a[])
{
    int negmax = 0, pos = -1;
    for (int i = 0; i < size; i++)
    {
        if((a[i] < 0) && (pos == -1))
        {
            negmax = a[i];
            pos = i;
        }
        else if((a[i] < 0) && (pos != -1) && (a[i] > negmax))
        {
            negmax = a[i];
            pos = i;
        }

    }
    if(negmax < 0)
    {
        int t = a[pos];
        a[pos] = a[size - 1];
        a[size - 1] = t;
    }

}
//~ int main(void)
//~ {
    //~ int arr[10];
    //~ for (int i = 0; i < 10; i++)
    //~ {
        //~ scanf("%d", &arr[i]);
    //~ }
    //~ swap_negmax_last(10, arr);
    //~ for (int i = 0; i < 10; i++)
    //~ {
        //~ printf("%d ", arr[i]);
    //~ }
    //~ return 0;
//~ }

