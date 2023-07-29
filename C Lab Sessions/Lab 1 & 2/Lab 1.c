#include<stdio.h>
int main()
{
    printf("Name: Vismitha Gunasekara\nSchool name: Lyceum International Collage\n");
    printf("*\n**\n***\n****\n*****\n");

    int a=1;
    float b=2.00;
    double c=3.0;
    char d='A';
    printf("%d %.2f %lf %c\n",a,b,c,d);

    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    printf("The sum is %d\n",x+y);

    float p,q,avg,sum=0;
    printf("Enter 2 numbers (fractions): ");
    scanf("%f %f",&p,&q);
    sum=p+q;
    avg=(float)sum/2;
    printf("Average is %.2f\n",avg);

    char nm[20];
    int by,age;
    printf("Enter student name: ");
    scanf("%s",&nm[20]);
    printf("Enter Birth Year: ");
    scanf("%d",&by);
    age = 2023-by;
    printf("\n%s you are %d years old\n",nm[20],age);
    
}
