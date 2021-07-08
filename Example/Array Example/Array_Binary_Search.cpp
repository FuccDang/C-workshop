#include <stdio.h>
#include <stdlib.h>

int binarysearch(int x, int a[], int n)
//x là số cần tìm
//a[] là array
//n là số lượng phần tử trong array
{
	int i = 0, j = n-1, c;
	while (i <= j)
	{
		c = (i+j)/2;
		if (x == a[c]) return c;
		if (x < a[c]) j = c-1;
		else i = c+1; 
	}
	return -1;
}
int main()
{
	int a[] = {1, 4 , 8, 10, 12, 16, 22, 24 };
	int n = 8, x1 = 22, x2 = 7;
	int pos1 = binarysearch(x1, a, n);
	int pos2 = binarysearch(x2, a, n);
	
	if (pos1 >= 0)
		printf("\nPosition of value %d is: %d", x1, pos1);
	else
		printf("\n%d does not exist!", x1);
		
	if (pos2 >= 0)
		printf("\nPosition of value %d is: %d", x2, pos2);
	else
		printf("\n%d does not exist!", x2);
	
	getchar();
	return 0;
}