#include<stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);

    switch(a%2)
    {
        case 0 : printf("\n%d is an even number.\n",a);
        break;
        case 1 :
        case -1 : printf("\n%d is an odd number.\n",a);
        break;
        default : printf("Invalid input");
        break;

    }
}
