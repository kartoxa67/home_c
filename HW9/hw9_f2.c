//~ #include <stdio.h>
//~ #define SIZE 5
void sort_even_odd(int n, int a[])
{
    {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((a[j] % 2 != 0) && a[j + 1] % 2 == 0)
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }

    }
}
}
//~ int main(void)
//~ {
    //~ int arr[SIZE];
    //~ for (int i = 0; i < SIZE; i++)
    //~ {
        //~ scanf("%d", &arr[i]);

    //~ }
    //~ sort_even_odd(SIZE, &arr[0]);
    //~ for (int i = 0; i < SIZE; i++)
    //~ {
        //~ printf("%d ", arr[i]);
    //~ }
    //~ return 0;
//~ }

