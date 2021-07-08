//Tạo một số thực dựa trên các phần số nguyên nhập vào

#include<stdio.h>
double makedouble(int ipart, int fraction)
{
	double d_f= fraction;
	while(d_f>=1) d_f=d_f/10;
	if(ipart<10)
	return ipart-d_f;
	return ipart+d_f;
}
int main ()
{
	int ipart;
	int fraction;
	double value;
	printf("enter ipart of real number: ");
	scanf("%d", &ipart);
	printf("enter fraction of real number: ");
	do
	{
		scanf("%d", &fraction);
	}
	while (fraction < 0);
	value = makedouble(ipart,fraction);
	printf("%lf", value);
	return 0;
}