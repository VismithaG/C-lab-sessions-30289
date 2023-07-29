#include<stdio.h>
int main()
{
    int a;
    printf("Enter Month number(1 to 12): ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:  printf("\nJanuary has 31 days");
        break;
        case 2:  printf("\nFebruary has 29 days");
        break;
        case 3:  printf("\nMarch has 31 days");
        break;
        case 4:  printf("\nApril has 30 days");
        break;
        case 5:  printf("\nMay has 31 days");
        break;
        case 6:  printf("\nJune has 30 days");
        break;
        case 7:  printf("\nJuly has 31 days");
        break;
        case 8:  printf("\nAugust has 31 days");
        break;
        case 9:  printf("\nSeptember has 30 days");
        break;
        case 10:  printf("\nOctober has 31 days");
        break;
        case 11:  printf("\nNovember has 30 days");
        break;
        case 12:  printf("\nDecember has 31 days");
        break;
        
        default : printf("\nEnter a valid number.");
        break;

    }

}