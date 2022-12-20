// A program to accept three numbers from user and display the max value.
#include <stdio.h>
#include <conio.h>
int main()
{
   int a, b, c;
   printf("Enter the First Number: \n");
   scanf("%d", &a);
   printf("Enter the Second Number: \n");
   scanf("%d", &b);
   printf("Enter the Third Number: \n");
   scanf("%d", &c);
   if(a>b)
   {
       if(a>c)
       {
           printf("%d is the largest Number", a);
       }
       else
       {
           printf("%d is the largest Number", c);
       }
   }
   else
   {
       if(b>c)
       {
           printf("%d is the largest Number", b);
       }
       else
       {
           printf("%d is the largest Number", c);
       }
   }
   return(0);
}



