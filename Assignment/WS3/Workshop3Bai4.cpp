//Write a C program that will accept a positive integer then print out its factorial.
//giai thừa
#include<stdio.h>
#include<math.h>
double factorial(int n)
{
	double p=1;
	int i;
	for (i=2;i<=n;i++) p*=i;
	return p;
}
int main()
{
	int n;
	printf("Positive interger: ");
	do
	{
		scanf("%d", &n);
	}
	while (n<0);
	printf("%.2lf", factorial(n));
	return 0;
}