//Program to print the arithmetic operations of the given two numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    int sum, subtraction, multiplication;
    float division;
    printf("Enter the Two Numbers to get their arithmetic operations: ");
    scanf("%d, %d", &a, &b);
    sum = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / (float)b;
    printf("The sum of the Two Numbers is: %d \nThe Subtraction of the Two Numbers is: %d \nThe Multiplication of the Two Numbers is: %d \nThe Division of the Two Numbers is: %f", sum, subtraction, multiplication, division);
    getch();
}