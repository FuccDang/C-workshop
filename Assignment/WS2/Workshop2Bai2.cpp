//Write a program which will compute income tax of a people

#include <stdio.h>
#include <stdlib.h>

int main()
{
	long pa = 9000000, pd = 3600000;
	long tf, n, ti, m;
	printf("Your income this year: ");
	scanf("%ld", &m);
	printf("Number of dependents: ");
	scanf("%ld", &n);
	tf = 12 * (pa + n * pd);
	//tax free income for 12 months
	printf("Tax-free income: %ld\n", tf);
	ti = m - tf;
	//ti = taxable income
	if (ti <= 0)
	{
		printf("Taxable income: 0\n");
		printf("Income tax: 0\n");
	}
	else if (ti > 0 && ti <= 5000000)
	{
    	printf("Taxable income: %ld\n", ti);
		ti = ti*5/100;
		//Diện 1
    	printf("Income tax: %ld\n", ti);
	}
	else if (ti >= 5000001 && ti <= 10000000)
	{
    	printf("Taxable income: %ld\n", ti);
		ti = (ti - 5000001)*10/100 + (5000000 - 0)*5/100;
		//Diện 2 = (TI - cho mốc đầu của diện 2)*10% và cộng cho diện 1
    	printf("Income tax: %ld\n", ti);
	}
    else if (ti >= 10000001 && ti <= 18000000)
	{
    	printf("Taxable income: %ld\n", ti);
		ti = (ti - 10000001)*15/100 + (10000000 - 5000001)*10/100 + (5000000 - 0)*5/100;
		//Diện 3 = (TI - cho mốc đầu của diện 3)*15% và cộng cho diện 1 và diện 2
    	printf("Income tax: %ld\n", ti);
	}
    else
	{
		printf("Taxable income: %ld\n", ti);
		ti = (ti - 18000000)*20/100 + (18000000 - 10000001)*15/100 + (10000000 - 5000001)*10/100 + (5000000 - 0)*5/100;
		//Diện 4 = (TI - cho mốc đầu của diện 4)*20% và cộng cho diện 1 và diện 2 và diện 3
    	printf("Income tax: %ld\n", ti);
	}
	return 0;    
}
