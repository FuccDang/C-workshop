#include <stdio.h>
#include <stdlib.h>

int Interface();
void clrscr();

void getprime();
int prime(int n);
//check wether the integer is prime or not

void printMinMaxDigits(int n);
//print max and min digit of an integer
int main()
{
	int n;
	
	do
	{
		n = Interface();
		switch (n)
		{
			case 1: printf("Operation 1\n"); getprime(); break;
			case 2: printf("Operation 2\n"); printMinMaxDigits(n); break;
			case 3: clrscr();
		}
	}
	while (n > 0 && n <= 3);
	printf("\nGood bye\n");
	system("pause");
	return 0;
}
int Interface()
{
	int choice;

	printf("   ==========================\n");
	printf("   |          MENU          |\n");
	printf("   ==========================\n");
	
	
	printf("\n   Choice \tOperation");
	printf("\n   ------------------------");
	printf("\n   1\t\t Check Prime");
	printf("\n   2\t\tMinMaxDigits");
	printf("\n   3\t\tClear Screen ");
	printf("\n   Other\t\tQuit ");
	printf("\n   ------------------------");
	
	printf("\n----> Choice : ");
	
	scanf("%d%*c",&choice);
	printf("\n");
	
	return choice;
}
void clrscr()
{
	system("cls || clear");
}
void getprime()
{
	int n;
	
	printf("Enter an integer: ");
	scanf("%d", &n);
	if (prime(n) == 1)
	printf("%d is a prime number.\n", n);
	else
	printf("%d is not a prime number.\n", n);
}
int prime(int n)
{
	int c;
 
	for (c = 2 ; c <= n/2 ; c++)
	
	{ 
	if (n % c == 0) 
	return 0;
	}
	return 1;
}
void printMinMaxDigits(int n)
{
	int digit;
	int min, max;
	printf("\nEnter a string of integer: ");
	scanf("%d", &n);
	digit = n % 10;
	n = n / 10;
	min = max = digit;
	while (n > 0)
	{
		digit = n % 10;
		n = n / 10;
		if (min > digit) min = digit;
		if (max < digit) max = digit;
	}
	printf("Minimun digit: %d\n", min);
	printf("Maximun digit: %d\n", max);
}