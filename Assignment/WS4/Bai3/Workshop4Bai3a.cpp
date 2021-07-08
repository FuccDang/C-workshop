#include <stdio.h>
#include <stdlib.h>

int t(int x, int y, int z)
{
	int k  = 2 * x + 3 * y + 5 * z;
	//2 * 6 + 3 * 7 + 5 * 5 = 58
	
	return k%13;
	//58 % 13 = 6
}
int main()
{
	int x = 7, y = 6, z = 5;
	int L = t(y, x ,z);
	
	printf("result: %d", L);
	
	return 0;
}