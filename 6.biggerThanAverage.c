#include <stdio.h>
#define SIDE 5
#define LENGTH SIDE*SIDE

void scanArray(int* arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void printArray(int* arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%d ",arr[i]);
	}
}

float average_diagonal(int side, int arr[side][side])
{
	float sum = 0.f;
	for(int i = 0; i < side; i++)
	{
		sum += arr[i][i];
	}
	return sum / (float)side;
}

int bigger_than_average(int side, int arr[side][side])
{
	int length = side * side;
	float average = average_diagonal(side, arr);
	int count = 0;
	for(int i = 0; i < length; i++)
	{
		if(arr[0][i] > 0 && arr[0][i] > average)
		{
			count++;
		}
	}
	return count;
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);
	int count = bigger_than_average(SIDE, arr);
    printf("%d\n", count);
}