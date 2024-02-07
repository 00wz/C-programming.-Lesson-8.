int is_two_same(int size, int a[])
{
    int max = a[0];
    int min = a[0];
    for(int i = 1; i < size; i++)
    {
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }

    int countArrayLength=max-min+1;
    int countArray[countArrayLength];

    for(int i = 0; i < size; i++)
    {
        countArray[a[i]-min]++;
    }

    for(int i = 0; i < countArrayLength; i++)
    {
        if(countArray[i] > 1)
            return 1;
    }
    
    return 0;
}