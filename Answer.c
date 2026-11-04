// Q1. Write a program to display the Sum and Product of two numbers by taking input from user.

#include <stdio.h>
int main() {

  // Variable declaration,
  int num1, num2, sum, product;

  // User input,
  printf("Enter Your First Number : ");
  scanf("%d", &num1);
  printf("Enter Your Second Number : ");
  scanf("%d", &num2);

  // Operation or Calculations,
  sum = num1+num2;
  product = num1*num2;

  // Final print or output,
  printf("\nThe Sum is : %d\n", sum);
  printf("The Product is : %d\n", product);
  
    return 0;
}