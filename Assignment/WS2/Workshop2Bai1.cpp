//Write a program that allows user inputting a simple
//expression containing one of four operators +, -, *, / 
//then the result is printed out to the monitor
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double num1; double num2; double result;
	char op;
    printf("Enter an expression (+ - * /): ");
	scanf("%lf%c%lf", &num1, &op,&num2);
	//check operation
	switch (op)
	{
		case '+': result = num1 + num2;
		printf("Result: %.2lf", result);
		break;
		case '-': result = num1 - num2;
		printf("Result: %.2lf", result);
		break;
		case '*': result = num1 * num2;
		printf("Result: %.2lf", result);
		break;
		case '/': result = num1 / num2;
		printf("Result: %.2lf", result);
		break;
		default: printf("op is not supported");
	}
	getchar();
	return 0;
}