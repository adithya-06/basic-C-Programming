#include<stdio.h>
int main()
{
    int a,b;
    int x;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&x);
    switch(x)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);break;
    case 4	:
        printf("Division of Two Numbers is %f : ",a/(float)b);break;
    default	:
        printf(" Enter Your Correct Choice.");break;
    }
    return 0;
}
