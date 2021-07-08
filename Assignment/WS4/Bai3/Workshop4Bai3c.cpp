#include <stdio.h>
#include <stdlib.h>

int T(int *p, int *q)
{
	int t = (*p) + (*q) > 12 ? 5 : 6;
	//if t > 12 then 5 else 6
	//3 + 4 = 7 < 12 => t = 6
	
	return 2 * t % 5;
	//return 2 * 6 % 5 = 2
}
int main()
{
	int a = 3, b = 4, c;
	
	c = T(&a,&b);
	
	printf("C is %d", c);
	
	return 0;
}