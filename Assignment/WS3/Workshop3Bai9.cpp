//Đi tìm ước số chung lớn nhất và bội số chung nhỏ nhất 

#include<stdio.h>
int gcd (int a, int b)
{
	while (a != b)
	if (a>b) a -= b;
	else b -= a;
	return a;	
}
int lcm (int a, int b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int a; int b; int d; int m;
	printf("Input a and b: ");
	do
	{
		scanf("%d%d", &a, &b);
	}
	while (a<=0 || b<=0);
	d = gcd (a,b);
	m = lcm (a,b);
	printf("Greatest common divisor: %d\n ", d);
	printf("Least common mutiple: %d\n ", m);
	return 0;
}