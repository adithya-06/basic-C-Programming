//Program to print the specific arithmetic operations of the given two numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    int sum, subtraction, multiplication;
    float division;
    printf("Enter the Two Numbers to get their arithmetic operations: ");
    scanf("%d, %d", &a, &b);
    printf("To add enter 1\nTo subtract enter 2\nTo multiply enter 3\nTo divide enter 4: ");
    scanf("%d", &c);
    sum = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / (float)b;
    if(c==1)
    {
        printf("\nThe addition of the two numbers is %d.", sum);
        
    }
    else if(c==2)
    {
        printf("\nThe subtractionof the two numbers is %d.", subtraction);
    }
    else if(c==3)
    {
        printf("\nThe multiplication of the two numbers is %d.", multiplication);
    }
    else if(c==4)
    {
        printf("\nThe division of the two numbers is %f.", division);
    }
    else
    {
        printf("\nEnter vaid input.");
    }
    getch();
}












