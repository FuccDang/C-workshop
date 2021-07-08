#include<stdio.h> /*Nhap n, n>2, in prime tu 2 => n*/
#include<math.h>
int prime (int n)
{
	int m = sqrt(n); int i;
	if (n<2) m = 0;
	for (i=2; i<=m; i++)
		if(n%i==0)
		return 0;
	return 1;
}
int main()
{
	int n; int m; int i;
	printf("Enter positive interger: ");
	scanf("%d", &n);
	printf("Prime interger between 2 and %d: ", n);
	if (n<=3)
	printf("error!");
	for (i=3; i<n;i++)
	{
		m = prime(i);
		if ( m==1)
		printf("%d ", i);
	}
	return 0;
}
