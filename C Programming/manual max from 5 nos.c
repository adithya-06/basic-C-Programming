//manual method finding max from 5 nos.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d, e, max;
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
    //finding max.
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    max=a;
                }
                else
                {
                    max=e;
                }
            }
            else
            {
                if(d>e)
                {
                    max=d;
                }
                else
                {
                    max=e;
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    max=c;
                }
                else
                {
                    max=e;
                }
            }
            else
            {
                if(d>e)
                {
                    max=d;
                }
                else
                {
                    max=e;
                }
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(c>d)
            {
                if(c>e)
                {
                    max=c;
                }
                else
                {
                    max=e;
                }
            }
            else
            {
                if(d>e)
                {
                    max=d;
                }
                else
                {
                    max=e;
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    max=c;
                }
                else
                {
                    max=e;
                }
            }
            else
            {
                if(d>e)
                {
                    max=d;
                }
                else
                {
                    max=e;
                }
            }
        }
    }
    printf("\n\nThe maximum value is %d", max);
    return(0);
}





































