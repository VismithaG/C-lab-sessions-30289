#include<stdio.h>
int main()
{
    int x;
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    printf("\nSelect Operators from (1.+ 2.- 3.* 4./): ");
    scanf("%d",&x);

    switch(x)
    {
        case 1: printf("Sum is %f",a+b);
        break;
        case 2: printf("Subtraction is %f",a-b);
        break;
        case 3: printf("Multiplication is %f",a*b);
        break;
        case 4: printf("Division is %.4f",a/b);
        break;
        default: printf("Enter a valid number from 1 to 4");
        break;
    }
}