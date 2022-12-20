//To check if the given alphabet is a vowel or not using if-else-if.
#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a letter.\n");
    scanf("%c", &a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("The letter is a vowel.");
    }
    else if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("The letter is a consonant.");
    }
    else
    {
        printf("Enter a valid letter.");
    }
    return(0);
}


