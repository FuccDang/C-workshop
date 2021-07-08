#include <stdio.h>
#include <stdlib.h>
#define ENTER 10

int Interface();
void clrscr();

void getFibo();
//print Fibo to desire number

void getdate();
int validdate(int dd, int mm, int yyyy);
//check if date is valid
void getVowel();
//check if whether the aharacter is vowel or not
void getdistance();
//check distance between two character and print acsii

int main()
{
	int n;
	
	do
	{
		n = Interface();
		switch (n)
		{
			case 1: printf("Operation 1\n"); getFibo(); break;
			case 2: printf("Operation 2\n"); getdate(); break;
			case 3: printf("Operation 3\n"); getVowel(); break;
			case 4: printf("Operation 4\n"); getdistance(); break;
			case 5: clrscr();
		}
	}
	while (n > 0 && n <= 5);
	printf("\nGood bye\n");
	
	system("pause");
	return 0;
}
int Interface()
{
	int choice;
	
	printf("\n\n");
	printf("   ==================================\n");
	printf("   |              MENU              |\n");
	printf("   ==================================\n");
	
	
	printf("\n   Choice\t\t   Operation");
	printf("\n   ----------------------------------");
	printf("\n   1\t\t\t  Count Fibo ");
	printf("\n   2\t\t\t  Check Date ");
	printf("\n   3\t\t\t Check Vowel ");
	printf("\n   4\tDistance between 2 character ");
	printf("\n   5\t\t\tClear Screen ");
	printf("\n   Other\t\t\tQuit ");
	printf("\n   ----------------------------------");
	
	printf("\n----> Choice : ");
	
	scanf("%d%*c",&choice);
	printf("\n");
	
	return choice;
}
void clrscr()
{
	system("cls || clear");
}
void getFibo()
{
	int t1 = 0, t2 = 1, t = 0, n;
    printf("\nEnter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("\nFibonacci Series: %d, %d, ", t1, t2);
    t = t1 + t2;

    while (t <= n)
	{
        printf("%d, ", t);
        t1 = t2;
        t2 = t;
        t = t1 + t2;
    }
}
void getdate()
{
	int dd; int mm; int yyyy;
	
	printf("Please Input dd/mm/yyyy: ");
	scanf("%d/%d/%d",&dd,&mm,&yyyy);
	if (validdate(dd,mm,yyyy))
	printf("valid date");
	else
	printf("invalid date");
}
int validdate(int dd, int mm, int yyyy)
{
	int maxdd = 31;
	if ((dd<1) || (dd>31) || (mm < 1) || (mm> 12))
	return 0;
	if ((mm==4) || (mm=6) || (mm=9) || (mm=11))
	maxdd=30;
	else if (mm==2)
	{
		if ((yyyy%400==0) || (yyyy%4==0) && (yyyy%100!=0)) maxdd=29;
		else maxdd=28;
	}
	return dd<=maxdd;
}
void getVowel()
{
	char c;
    int lowercase_vowel, uppercase_vowel;
    
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
}
void getdistance()
{
	char c1, c2, c;
    int d;
    printf("Enter character 1: ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Enter character 2: ");
    scanf("%c",&c2);
    if (c1 > c2)
    {
        int t = c1; 
            c1 = c2; 
            c2 = t;
    }
    d = c2 - c1;
    printf("The distance between %c and %c: %d\n", c1, c2, d);
    printf("Char   Dec   Oct    Hex\n");
    for (c = c1; c <= c2; c++)
        printf("%3c%6d%6o%6x\n", c, c, c, c);
}