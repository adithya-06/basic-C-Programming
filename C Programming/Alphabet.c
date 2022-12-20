//To check if the given character is an alphabet
#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("Enter a Character\n");
    scanf("%c", &a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("Character is an Alphabet.");
    }
    else
    {
        printf("Character is not an Alphabet.");
    }
    getch();
}

