//Write a program that allows the user to input 10 numbers at most in the array.
//Check min and max and the amount of its appear

#include <stdio.h>
#include <stdlib.h>

int getMax(int*a, int n)
{
	int max;
	max = a[0];
	for (int i = 0; i < n; i++)
	{
		if(a[i] > max) max = a[i];
	}
	return max;
}
int getMin(int*a, int n)
{
	int min;
	min = a[0];
	for (int i = 0; i < n; i++)
	{
	
		if(a[i] < min) min = a[i];
	}
	return min;
}
void count(int*a, int n)
{
	int max= getMax(a,n);
	int min= getMin(a,n);
	
	int countMax = 0, countMin = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == max) countMax++;
		if(a[i] == min) countMin++;
	}
	printf("\nThe %d appear %d times", getMax(a,n), countMax);
	printf("\nThe %d appear %d times", getMin(a,n), countMin);
}
int main()
{
	int n = 10, a[10], min, max;
	printf("Enter 10 integers: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = getMin(a,n);
	max = getMax(a,n);
	printf("\nMaximun number is %d ", max);
	printf("\nMinimun number is %d ", min);
	count(a,n);
	
	getchar();
	return 0;
}