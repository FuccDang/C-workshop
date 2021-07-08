#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int a, int b)
{
	int x;
	x = a + b;
	return x;
}
int sub(int a, int b)
{
	int y;
	y = a - b;
	return y;
}
int mult(int a, int b)
{
	int n;
	n = a * b;
	return n;
}
int dv(int a, int b)
{
	int m;
	m = a / b;
	return m;
}
int menu()
{
	int choice;
	printf("\n1 - Sum");
	printf("\n2 - Subtraction");
	printf("\n3 - Multiply");
	printf("\n4 - Subtraction");
	printf("\nOthers - Quit");
	printf("\nPlease choose: ");
	scanf("%d", &choice);
	return choice;
}
int main()
{
	int a, b, userChoice;
	do
	{
		userChoice = menu();
		switch(userChoice)
		{
			case 1:
				printf("Enter 2 number: ");
				scanf("%d %d", &a, &b);
				printf("%d + %d = %d", a, b, sum(a,b));
				break;
			case 2:
				printf("Enter 2 number: ");
				scanf("%d %d", &a, &b);
				printf("%d - %d = %d", a, b, sub(a,b));
				break;
			case 3:
				printf("Enter 2 number: ");
				scanf("%d %d", &a, &b);
				printf("%d * %d = %d", a, b, mult(a,b));
				break;
			case 4:
				printf("Enter 2 number: ");
				scanf("%d %d", &a, &b);
				printf("%d / %d = %d", a, b, dv(a,b));
				break;
				default: printf("Good bye!");
		}
	}
	while (userChoice > 0 && userChoice < 5);
	return 0;	
}