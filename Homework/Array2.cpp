//Write a program that tells the user to input only prime numbers.
//If not prime then ask the user to input again.
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void clear()
{
	while (getchar()!='\n');
}
int checkprime(int*a,int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
    	for (int j = 2; j < a[i]/2; j++)
    		if (a[i] % j == 0)
    		++flag;
    		if (a[i] == 1)
    		++flag;
	}
	//For đầu để kêu index
	//For hai để kêu giá trị của array
	return flag;
}
//If Flag > 0 then there was an impostor among us
int main()
{
	int a[MAX];
	int f;
	
	do
	{
	printf("Enter 5 integers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
		f = checkprime(a, MAX);
	}
	while (f != 0);
	//flag = 0 then out loop
		printf("Elements of array is: \n");    
    	for (int i = 0; i < 5; i++) 
		{     
        	printf("%d ", a[i]);
		}
	
	getchar();
	return 0;
}