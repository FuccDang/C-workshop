//Example: Check data in string
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char S1[15]="ABC";
    char S2[15]={'a', 'b', 'c','\0'};
    int i;
    printf("Data stored in S1: \n");
    for (i=0; i<15; i++)
    printf("%d ", S1[i]);
    printf("\n");
    printf("Data stored in S2: \n");
    for (i=0; i<15; i++)
    printf("%d ", S2[i]);
    getchar();
    return 0;
}