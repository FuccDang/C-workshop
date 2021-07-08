#include<stdio.h>

int validdate(int dd, int mm, int yyyy)
{
	int maxdd = 31;
	if ((dd<1) || (dd>31) || (mm < 1) || (mm> 12))
	return 0;
	if ((mm==4) || (mm=6) || (mm=9) || (mm=11))
	maxdd=30;
	//check năm nhuận
	else if (mm==2)
	{
		if ((yyyy%400==0) || (yyyy%4==0) && (yyyy%100!=0))
		
		maxdd=29;
		
		else maxdd=28;
	}
	return (dd<=maxdd);
	//return số ngày nhập lớn hơn thì return 0;
}
int main()
{
	int dd; int mm; int yyyy;
	printf("Please Input dd/mm/yyyy: ");
	scanf("%d/%d/%d",&dd,&mm,&yyyy);
	if (validdate(dd,mm,yyyy))
	printf("valid date");
	else
	printf("invalid date");
	return 0;
}
