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

// Q2. Write a Program to Calculate the Area and Circumference of a Circle by taking Radius from User.

#include <stdio.h>
int main() {
  
  // Variable declaration,
  float radius, area, circumference;
  const float PI = 3.14;

  // User input,
  printf("Enter the Radius of Your Circle : ");
  scanf("%f", &radius);

  // Operation or Calculations,
  area = PI*radius*radius;
  circumference = 2*PI*radius;

  // Final print or output,
  printf("\nThe Area of Your Circle is : %.2f units.\n", area);
  printf("The circumference of Your Circle is : %.2f units.\n", circumference);
    return 0;
}