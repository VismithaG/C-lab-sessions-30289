#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter: ");
    scanf("%c",&a);
    switch(a)
    {
        case 'A':
        case 'a':  printf("\n%c is a Vowel",a);
        break;
        case 'E':
        case 'e':  printf("\n%c is a Vowel",a);
        break;
        case 'I':
        case 'i':  printf("\n%c is a Vowel",a);
        break;
        case 'O':
        case 'o':  printf("\n%c is a Vowel",a);
        break;
        case 'U':
        case 'u':  printf("\n%c is a Vowel",a);
        break;
        default : printf("\n%c is Not a vowel.",a);
        break;

    }

}
