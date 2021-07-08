#include<stdio.h>

int main() {
  
  int after = 0;
  int number;
  printf("Enter number\n");
  fflush(stdout);
  //     +--- consumes leading white-space
  //     | +- record number of characters scanned
  scanf("%d%n", &number, &after);
  printf("%d\n", after);
  if (after > 0) {
    printf("No of digits: %d\n", after);
    printf("Value read  : %d\n", number);
  } else {
    puts("Invalid input");
  }
}