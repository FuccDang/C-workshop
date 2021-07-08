#include <stdio.h>
#include <stdlib.h>

void ascSelectionSort(int*a, int n)
{
	int minIndex;
	int i, j;
	//var for looping
	for (i = 0; i < n - 1; i++)
	{
		minIndex = i;
		for (j = i+1; j < n; j++)
		if (a[minIndex] > a[j]) minIndex = j;
		if (minIndex > i)
		{
			int t = a[minIndex];
			a[minIndex] = a[i];
			a[i] = t;
		}
	}
}
void print(int*a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	printf("%d ", a[i]);
}
int main()
{
	int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int n = 10;
	
	ascSelectionSort(a, n);
	print(a, n);
	
	getchar();
	return 0;
}