//Tìm số lớn nhất và số nhỏ nhất trong một số thực

#include<stdio.h>
int printMinMaxDigits(int n)
{
	int digit;
	int min; int max;
	digit = n % 10;
	n = n / 10;
	min = max = digit;
	while (n>0)
	{
		digit = n % 10;
		n = n / 10;
		if (min > digit) min = digit;
		if (max < digit) max = digit;
	}
	printf("Minimun digit: %d\n", min);
	printf("Maximun digit: %d\n", max);
	return 0;
}
int main()
{
	int n;
	printf("\nEnter an integer: ");
	do
	{
		scanf("%d", &n);
		printMinMaxDigits(n);
	}
	while (n<0);
	return 0;
}