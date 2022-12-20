//To check if given Alphabet is a vowel or not using switch case.
#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter a letter.\n");
    scanf("%c", &a);
    if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
    {
        switch(a)
    {
        case 'a': printf("The letter is a vowel."); break;
        case 'e': printf("The letter is a vowel."); break;
        case 'i': printf("The letter is a vowel."); break;
        case 'o': printf("The letter is a vowel."); break;
        case 'u': printf("The letter is a vowel."); break;
        case 'A': printf("The letter is a vowel."); break;
        case 'E': printf("The letter is a vowel."); break;
        case 'I': printf("The letter is a vowel."); break;
        case 'O': printf("The letter is a vowel."); break;
        case 'U': printf("The letter is a vowel."); break;
        default: printf("The letter is a consonant"); break;
    }
    }
    else
    {
        printf("Enter a vaid letter.");
    }
    return(0);
}    
    
    
    
    
    
    

