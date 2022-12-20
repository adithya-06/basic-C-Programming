#include <stdio.h>
int main()
{
    int a;
    printf("1.Mumbai\n2.Delhi\n3.Kolkata\n4.Chennai\n\nEnter the number to select the location.\n");
    scanf("%d", &a);
    if(a==1)
    {
        printf("\nTariff charges are Rs7000.");
    }
    else if(a==2)
    {
        printf("\nTariff charges are Rs3000.");
    }
    else if(a==3)
    {
        printf("\nTariff charges are Rs5000.");
    }
    else if(a==4)
    {
        printf("\nTariff charges are Rs4000.");
    }
    else
    {
        printf("\nEnter a valid response.");
    }
    return 0;
}
