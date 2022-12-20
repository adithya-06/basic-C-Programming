//Even or odd
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter a Number \n");
    scanf("%d", &a);
    if(a % 2 == 0)
    {
        printf("The Number is Even.");
    }
    else
    {
        printf("The Number is Odd.");
    }
    getch();
}
