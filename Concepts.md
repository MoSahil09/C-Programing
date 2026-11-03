# C-Programing

## 1. BASICS OF C

### What is Programing ?
Programing is a process in which, we tell a machine to perform a specific task or solve a pirticular problem, by creating a sequence of step wise instruction. \
• But a computer only understand a sequence of **Binaly digit** (the 0's and 1's), so, we have a intermediate called **Compiler** (It translate Human readable source code to computer understandable Binary code).

### Why C ?
Because C is the foundation for other languages like C++, Java, and JavaScript borrowed heavily from C.

### Basic structure of C ↓
```c
#include <stdio.h>
int main() {
    printf("This is Mo Sahil...");
  return 0;
}
```
• *#include <stdio.h>* — Includes the Standard Input/Output library, which provides functions like *printf()*. \
• *int main()* — Defines the *main()* function, where the execution of a C program begins, and specifies that it returns an integer.\
• *{* — Marks the beginning of the *main()* function's body.\
• *printf("This is Mo Sahil...");* — Prints the text This is Mo Sahil... to the console.\
• *return 0;* — Ends the *main()* function and indicates successful program execution to the operating system.\
• *}* — Marks the end of the *main()* function's body.

## 2. VARIABLES AND DATATYPES

### Variables :
Variables are the container that store data of some specific datatype.\
**Rules for variable**\
• Variables are case sensitive.\
• First symbol ia an alphabet or ' _ '\
• No blank space.\
• No Other symbol than ' _ ' \
EXAMPLE : A = 10, Fact = true, string_name = Hello.

### Datatypes :
In C language, data types define what type of data a variable can store. \
• **int** (Intiger), < 4 byte >\
• **char** (Character), < 1 byte >\
• **float** (Decimal Number), < 4 byte >\
• **double** (Long Decimal Number), < 8 byte >\
• **bool** (true/false), < 1 byte >

**Combined Example** \
• int num1 = 10;\
• float num2 = 10.25;\
• double PI = 3.141279675347124;\
• char grade = 'A';\
• bool yes = true;

### How to use Variable in C :
```c
#include <stdio.h>
int main() {
  int num1 = 10;
  printf("The Number Stored in num1 is “%d”\n", num1);
    return 0;
}
```
*OUTPUT : The Number Stored in **num1** is “10”*

### Constant in C :
A constant in C is a fixed value that does not change during the execution of a program. \
• Used to store a constant value which is use in program repeatedly. \
EXAMPLE : π, e, etc.

## 3. OPERATORS

### i. Arithmetic Operators :
These operators perform mathematical calculations.

| Operator | Meaning | Example |
| --- | --- | --- |
| + | Addition | a + b |
| - | Subtraction | a - b |
| * | Multiplication | a * b |
| / | Division | a / b |
| % | Display Reminder | a % b |

```c
#include <stdio.h>
int main()
{
    int a = 10, b = 3;
    printf("Addition = %d\n", a+b);
    printf("Subtraction = %d\n", a-b);
    printf("Multiplication = %d\n", a*b);
    printf("Division = %d\n", a/b);
    printf("Modulus = %d\n", a%b);
    return 0;
}
```

### ii. Relational Operators :
It is used to compare two things.

| Operator | Meaning | Example |
| --- | --- | --- |
| == | Equal to | a == b |
| != | Not Equal to | a != b |
| > | Greater than | a > b |
| < | Less than | a < b |
| >= | Greater & Equal to | a >= b |
| <= | Less & Equal to | a <= b |

```c
#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("%d\n", a==b);
    printf("%d\n", a!=b);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", a>=b);
    printf("%d\n", a<=b);
    return 0;
}
```

### iii. Logical Operators :

| Operator | Meaning | Example |
|---|---|---|
| && | Logical AND | a && b |
| ll | Logical OR | a ll b |
| ! | Logical NOT | a != b |

```c
#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("%d\n", a>5 && b<10);
    printf("%d\n", a>15 || b<10);
    printf("%d\n", !(a>5));
    return 0;
}
```
