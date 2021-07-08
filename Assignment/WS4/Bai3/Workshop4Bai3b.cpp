#include <stdio.h>
#include <stdlib.h>

void T(int *p, int *q)
{
	int t = *p; *p = *q; *q = t;
	printf("a = %d\tb = %d\n", *p, *q);
	//swap value
}
int main()
{
	int a = 7; int b = 6;
	
	T(&a, &b);
	
	return 0;
}