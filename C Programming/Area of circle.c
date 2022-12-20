//Area of Circle
#include <stdio.h>
#include <conio.h>
const float pi = 3.14;
void main()
{
    float area;
    int r;
    printf("Enter the Radius of the Circle");
    scanf("%d", &r);
    area = pi * r * r;
    printf("The area of the Circle is %f", area);
    getch();
}

