//Area of Triangle
#include <stdio.h>
#include <conio.h>
void main()
{
    float b, h, area;
    printf("Enter the values of base and height for the triangle ");
    scanf("%f, %f", &b, &h);
    area = (b * h) / 2;
    printf("The area of the triangle is %f", area);
    printf(" sq.units.");
    getch();
}
