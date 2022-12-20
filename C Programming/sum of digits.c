//Sum of digits of a two digit number
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, x, y;
    int sum;
    printf("Enter a two digit number: ");
    scanf("%d", &a);
    x = a / 10;
    y = a % 10;
    sum = x + y;
    printf("The sum of the digits is: %d", sum);
    return(0);
}
