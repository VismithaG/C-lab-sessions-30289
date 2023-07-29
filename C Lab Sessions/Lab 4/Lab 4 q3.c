#include<stdio.h>
int main()
{
    int x;
    float a;
    printf("Enter radius: ");
    scanf("%f",&a);
    printf("\nSelect function number from (1.Circumference 2.Area 3.Volume): ");
    scanf("%d",&x);

    switch(x)
    {
        case 1: printf("\nCircumference is %.2f",2*3.14*a);
        break;
        case 2: printf("\nArea is %.2f",3.14*a*a);
        break;
        case 3: printf("\nVolume is %.2f",(4/3)*3.14*a*a*a);
        break;
        default: printf("\nEnter a valid number from 1 to 3");
        break;
    }
}
