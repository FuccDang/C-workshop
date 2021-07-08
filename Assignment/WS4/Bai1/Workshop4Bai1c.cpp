#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x = 3.2, y = 5.1;
	double *p1 = &x;
	double *p2 = &y;
	
	*p1 += 3 - 2 * (*p2);
	//p1 = 3.2 + 3 - 2 * 5.1 = -4
	*p2 -= 3 * (*p1);
	//pm = 5.1 - 3 * -4 = 17.1
	printf("%.2lf", x + y);
	//%d call decimal number
	//17.1 - 4 = 13.1
	
	getchar();
	return 0;
}