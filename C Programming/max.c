//Max from 5 nos using conditional statemnts.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d, e, max, min;
    printf("Enter the First Number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    printf("Enter the Third Number: ");
    scanf("%d", &c);
    printf("Enter the Fourth Number: ");
    scanf("%d", &d);
    printf("Enter the Fifth Number: ");
    scanf("%d", &e);
    //Finding max
    if(a>b && a>c && a>d && a>e)
    {
        max=a;
    }
    else if(b>a && b>c && b>d && b>e)
    {
        max=b;
    }
    else if(c>a && c>b && c>d && c>e)
    {
        max=c;
    }
    else if(d>a && d>b && d>c && d>e)
    {
        max=d;
    }
    else if(e>a && e>b && e>c && e>d)
    {
        max=e;
    }
    //Finding min.
    if(a<b && a<c && a<d && a<e)
    {
        min=a;
    }
    else if(b<a && b<c && b<d && b<e)
    {
        min=b;
    }
    else if(c<a && c<b && c<d && c<e)
    {
        min=c;
    }
    else if(d<a && d<b && d<c && d<e)
    {
        min=d;
    }
    else if(e<a && e<b && e<c && e<d)
    {
        min=e;
    }
    printf("\n\nThe Maxmimun Number is %d", max);
    printf("\nThe Minimum Number is %d", min);
    return(0);
}

