#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c1 = 'A', c2 = 'F';
	char *p1 = &c1;
	char *p2 = &c2;
	
	*p1 += 3;
	//p1 = A + 3 = 10 + 3 = 13
	*p2 -= 5;
	//pm = F - 5 = 15 - 5 = 10
	printf("%d", c1 - c2);
	//%d call decimal number
	//13 - 10 = 3
	
	getchar();
	return 0;
}