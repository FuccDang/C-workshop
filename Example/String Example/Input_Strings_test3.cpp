#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1 = 10;
    int n2 = 33;
    char S[11];
    int n3 = 12;

    printf("Address of n1:%u\n", &n1);
    printf("Address of n2:%u\n", &n2);
    printf("Address of s:%u\n", S);
    printf("Address of n3:%u\n", &n3);
    printf("Enter a string: ");
    gets(S);
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
    printf("String contents: %s\n", S);
    
    getchar();
    return 0;
}