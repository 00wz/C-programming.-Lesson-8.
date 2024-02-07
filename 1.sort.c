void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int size, int a[])
{
    for(int i=size-1;i>0;i--)
    {
        for(int k=0;k<i;k++)
        {
            if(a[k]>a[k+1])
            {
                swap(&a[k],&a[k+1]);
            }
        }
    }
}