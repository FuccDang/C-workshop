//Write a program that swap 2 integers
//terminated when input 0

#include<stdio.h>
int main()
{
	int x, y;
	do
	{
		printf("enter number of x and y: ");
		scanf("%d", &x);
		scanf("%d", &y);
		int t=x; x=y; y=t;
		printf("x = %d\n", x);
		printf("y = %d\n", y);
	}
	while (x!=0 && y!=0);
	return 0;
}