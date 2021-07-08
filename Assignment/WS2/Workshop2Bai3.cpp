//Write a C program that will print out sum of integers inputted 
//from the keyboard until the value 0 is inputted

#include <stdio.h>
int main()
{
    int a, sum = 0; 
    printf("Enter integers number: ");

    while (a != 0) 
    {
    	scanf("%d", &a);
        sum = sum + a;
    }

    printf("Sum of integers entered: %d", sum);

    return 0;
}