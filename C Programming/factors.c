//To find factors of a number.
#include <stdio.h>
int main()
{
    int n, i, a, b, z;
    printf("Enter a Number: ");
    scanf("%d", &n);
    z=n;
    if(z>0)
    {
        printf("The factors of %d are: ", z);
        for (i = n; i >= 2; i--)
        {
            a = z % i;
            b = z / i;
            if(a==0)
            {
                printf("%d, ",b);
            }
        }
        printf("%d.", z);
        for(i=n-1; i>=2; i--)
        {
            a = z % i;
            if (a==0)
            {
                printf("\nIt is a composite number");break;
            }
        }
        if(a!=0)
        {
            printf("\nIt is a prime number.");
        }
    }
    else
    {
        printf("Enter a vaild number greater than 0.");
    }
    return(0);
}
