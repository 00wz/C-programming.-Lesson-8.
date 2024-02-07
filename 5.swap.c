void change_max_min(int size, int a[])
{
    int* max = &a[0];
    int* min = &a[0];
    for(int i = 1; i < size; i++)
    {
        if(a[i]<*min)
            min = &a[i];
        if(a[i]>*max)
            max = &a[i];
    }

    int temp = *max;
    *max = *min;
    *min = temp;
}