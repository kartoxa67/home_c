//~ #include <stdio.h>
//~ #define SIZE 5
void sort_array(int size, int a[])
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
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
    //~ sort_array(SIZE, &arr[0]);
    //~ return 0;
//~ }

