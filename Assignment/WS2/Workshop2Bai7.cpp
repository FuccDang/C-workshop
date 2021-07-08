//Write a program that accepted 2 input
//print out the ASCII between them

#include <stdio.h>

int main()
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
    for (c = c1 + 1; c < c2; c++)
        printf("%3c%6d%6o%6x\n", c, c, c, c);
    return 0;
}