//Write a program that accept non negative numbers
//Sum of its digits

#include<stdio.h>
#include<math.h>
int sumdigits(int n)
{
	int sum=0;
	do
	{
		int remainder = n%10;
		n = n/10;
		sum+=remainder;
	}
	while (n>0);
	return sum;
}
int main()
{
	int n; int S=0;
	printf("Enter number: ");
	do
	{
		scanf("%d", &n);
		if(n>=0)
		{
			S=sumdigits(n);
			printf("%d",S);
		}
	}
	while (n>=0);
	return 0;
}