//Factorial of given number
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, f=1;
    printf("Enter the number to get it's Factorial.\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        f = f * i;
    }
    printf("%d", f);
    return(0);
}










