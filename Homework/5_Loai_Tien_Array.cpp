//Write a program that check currency denomination of a given amount
#include <stdio.h>
int main()
{
	int money[5]= {50, 25, 10, 5, 1};
	//The largest currency must be put in the top of the list
	int a, b, i;
	printf("Enter the money: ");
	scanf("%d", &a);
	//loop
	for (i = 0; i < 5; i++)
	{
		printf("\nThe amount of %d is: %d", money[i], a/money[i]);
		a = a % money[i];
	}
	return 0;
}