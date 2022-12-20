// To find a given number is positive or negative
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    if(a>0)
    {
        printf("The Number is a positive interger.");
    }
    else if(a<0)
    {
        printf("The Number is a negative interger.");
    }
    else if(a=0)
    {
        printf("0 is neither positive nor negative inteeger.");
    }
    else
    {
        printf("Enter a valid Number.");
    }
    getch();
}
