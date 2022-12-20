//odd numbers 1-100
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a;
    for(i=0; i<=49; i++)
    {
        a = (i*2)+1;
        printf("%d\t ", a);
    }
    return(0);
}
