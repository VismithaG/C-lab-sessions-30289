#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(b%a==0)
    {
        printf("\nThe first number is a multiple of the second number.");
    }
    else
    {
        printf("\nThe first number is not a multiple of the second number.");
    }
}
