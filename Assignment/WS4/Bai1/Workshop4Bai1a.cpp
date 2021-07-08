#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 7, m = 6;
	int *pn = &n;
	int *pm = &m;
	
	*pn = *pm + 2 * m - 3 * n;
	//pn = 6 + 2 * 6 - 3 * 7 = -3
	*pm -= *pn;
	//pm = 6 - (-3) = 9
	printf("%d", m + n);
	//9 + (-3) = 6
	
	getchar();
	return 0;
}