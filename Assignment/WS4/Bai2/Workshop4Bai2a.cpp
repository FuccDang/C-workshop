#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 7, m = 8;
	int *p1 = &n;
	int *p2 = &m;
	
	*p1 += 12 - m + (*p2);
	//p1 = 7 + 12 - 8 + 8 = 19
	*p2 = m + n - 2 * (*p1);
	//p2 = 8 + 19 - 2 * 19 = -11
	printf("%d", m + n);
	// -11 + 19 = 8
	
	getchar();
	return 0;
}