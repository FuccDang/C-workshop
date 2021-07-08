//Write a program that print 20 Fibonacci numbers
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main()
{
	int arr[MAX];
	arr[0] = 0;
	arr[1] = 1;
	printf("Fibonacci series: ");
	for (int i = 2; i <= MAX + 1; i++)
	{
		arr[i] = arr[i - 1]+arr[i - 2];
		printf("%d ", arr[i]);
	}
	return 0;
}