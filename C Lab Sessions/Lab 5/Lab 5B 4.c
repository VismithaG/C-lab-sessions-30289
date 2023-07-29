#include<stdio.h>
int main()
{
    int a,c,i;
    float b;
    while(i<=5)
    {
    printf("Enter Employee Number: ");
    scanf("%d",&a);
    printf("Enter Basic Salary: ");
    scanf("%f",&b);
    
    if(b>=5000)
    {
        c++;
    }
    i++;
    }
    printf("\n");
    printf("Salary for %d is : %.2f\n",a,b);
    printf("No of Employees whose salary is >=5000 is: %d\n",c);
}
