#include<stdio.h>
int main()
{
    
    int i,marks[10];
    int total=0;
    float average;

for(i=0;i<10;i++)
{
    printf("Enter marks: ");
    scanf("%d",&marks[i]);
    total+=marks[i];
}
average=total/i;
printf("total is %d\n",total);
printf("average is %.2f\n",average);

if (average<50)
{
    printf("fail");
}
else
{
    printf("pass");
}

}
