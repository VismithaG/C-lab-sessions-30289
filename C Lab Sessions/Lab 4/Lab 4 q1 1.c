#include<stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\n%d is an even number.\n",a);
    }
    else
    {
        printf("\n%d is an odd number.\n",a);
    }
}
