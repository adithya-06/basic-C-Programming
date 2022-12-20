//Collect the Name, Age, cell number of a person and display the same.
#include <stdio.h>
#include <conio.h>
int main()
{
    char name[100], cell[14];
    int age;
    printf("Enter your Name: \n");
    scanf("%s", &name);
    printf("Enter your Age: \n");
    scanf("%d", &age);
    printf("Enter your Phone Number: \n");
    scanf("%s", &cell);
    printf("Name: %s \nAge: %d \nCell Number: %s", name, age, cell);
    return(0);
}
