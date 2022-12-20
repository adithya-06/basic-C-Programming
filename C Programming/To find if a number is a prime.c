//To find if a number is prime or not.
#include <stdio.h>
int main()
{
    int n, i, a, z;
    printf("Enter a Number: ");
    scanf("%d", &n);
    z=n;
    for (i = n-1; i >= 2; i--)
    {
        a = z % i;
        if(a==0)
        {
            printf("The number is not a prime number.");break;
        }
    }
    if(a!=0)
    {
        printf("The number is a prime number.");
    }
    return(0);
}


