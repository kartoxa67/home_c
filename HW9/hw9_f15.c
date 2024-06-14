

int count_bigger_abs(int n, int a[])
{
    int max = a[0], count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if(((-1)*a[i]) > max)
                count++;
        }
        else
        {
            if(a[i] > max)
                count++;
        }
    }
    return count;
}


