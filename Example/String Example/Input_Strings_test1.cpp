#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 10;
    char S[11] = "Hello";
    int m = 9;
    printf("n = %d, S = %s, m = %d\n", n, S, m);
    scanf("%s", S);
    printf("n = %d, S = %s, m = %d\n", n, S, m);
    getchar();
    return 0;
}