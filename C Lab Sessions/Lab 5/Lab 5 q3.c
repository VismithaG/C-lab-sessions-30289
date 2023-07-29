#include <stdio.h>
int main()
{
    int n,i,x=1;

    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
    {
    for (i=1;i<=n;i++)
    {
       x *= i;
    }
    }
    else
    {
        printf("Enter a positive number.");
    }
        printf("Factorial of %d is %d", n, x);
}

