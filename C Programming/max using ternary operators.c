//Finding maximum of three numbers using tertany operators.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    a>b?(a>c?printf("%d is the largest number.", a):printf("%d is the largest number.", c)):
    (b>c?printf("%d is the largest number", b):printf("%d is the largest number", c));
    return 0;
}

