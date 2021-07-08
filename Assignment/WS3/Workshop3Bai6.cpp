/*print n, check n in Fibo or not*/
#include<stdio.h>
int isFibo(int n)
{
	int t1=1; int t2=1; int f=1;
	if(n==1)
	return 1;
	while (f<n)
	{
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return n==f;
}
int main()
{
	int n;
	printf("Positive Interger: ");
	do
	{
		scanf("%d", &n);
	}
	while(n<1);
	if (isFibo(n)==1)
	printf("It is in Fibo");
	else
	printf("It is out Fibo");
	return 0;
}