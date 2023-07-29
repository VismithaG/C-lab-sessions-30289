#include<stdio.h>
int main()
{
    float r,d,c,a;

    printf("Enter radius of a circle(r): ");
    scanf("%f",&r);

    printf("\n Diameter = 2*r\n Circumference = 2*3.14159*r\n Area = 3.14159*r*r\n\n");

    d=2*r;
    c=2*3.14159*r;
    a=3.14159*(r*r);

    printf("Diameter is %.4f\n",d);
    printf("Circumference is %.4f\n",c);
    printf("Area is %.4f\n",a);
}
