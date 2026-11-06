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

// Q3. A person has some currency notes of different denominations, such as ₹1, ₹2, ₹10, ₹20, ₹50, ₹100 and ₹500. Write a program that takes the number of notes of each denomination from the user and calculates the total amount of money.

#include <stdio.h>
int main() {

  // Variable declaration,
  int one, two, five, ten, twenty, fifty, hundred, five_hundred;

  // User input,
  printf("Enter Number of notes of Rupees 1, you have : ");
  scanf("%d", &one);
  printf("Enter Number of notes of Rupees 2, you have : ");
  scanf("%d", &two);
  printf("Enter Number of notes of Rupees 5, you have : ");
  scanf("%d", &five);
  printf("Enter Number of notes of Rupees 10, you have : ");
  scanf("%d", &ten);
  printf("Enter Number of notes of Rupees 20, you have : ");
  scanf("%d", &twenty);
  printf("Enter Number of notes of Rupees 50, you have : ");
  scanf("%d", &fifty);
  printf("Enter Number of notes of Rupees 100, you have : ");
  scanf("%d", &hundred);
  printf("Enter Number of notes of Rupees 500, you have : ");
  scanf("%d", &five_hundred);

  // Amount Collection
  int total_one = one*1;
  int total_two = two*2;
  int total_five = five*5;
  int total_ten = ten*10;
  int total_twenty = twenty*20; 
  int total_fifty = fifty*50;
  int total_hundred = hundred*100;
  int total_five_hundred = five_hundred*500;

  // Sum of total Amount
  int total_amount = total_one + total_two + total_five + total_ten + total_twenty + total_fifty + total_hundred + total_five_hundred;

  // Final print or output,
  printf("\n Your total Amount is “ %d ”\n", total_amount);
  
    return 0;
}