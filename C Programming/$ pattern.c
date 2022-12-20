#include <stdio.h>
int main()
{
    int i,j;
    char a[]="$";
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==4 && j==1)
            {
                printf("  ");
            }
            printf("%s ", a);
        }
        printf("\n");
    }
    return 0;
}

