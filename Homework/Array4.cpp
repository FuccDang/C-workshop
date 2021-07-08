//Write a program that have 10 elements.
//Input only character, and then capitalize

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[11];
  printf("Enter 10 characters: ");
  fgets(str, 11, stdin);
  //read string like scanf function
  for (int i = 0; str[i]!='\0'; i++)
  //run from i = 0 to the end of the string (!=null)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
  //check if the string contains numbers
  {
    str[i] = str[i] - 32;
  }
  //Using ASCII table
  }
  puts(str);
  //print the string
  getchar();
  return 0;
}