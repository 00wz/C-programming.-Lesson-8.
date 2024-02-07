void sort_even_odd(int n, int a[])
{
    int even[n];
    int odd[n];
    int e = 0;
    int o = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    int i = 0;
    for(; i < e; i++)
    {
        a[i] = even[i];
    }
    for(int k = 0; k < o; k++, i++)
    {
        a[i] = odd[k];
    }
}