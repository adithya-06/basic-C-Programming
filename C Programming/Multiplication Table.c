//Print multiplication table of given number
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number for the table: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    return(0);
}