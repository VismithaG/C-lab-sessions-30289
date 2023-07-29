#include <stdio.h>
int main()
{
    int x,i,sum=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&x);
        sum=sum+x;
    }
    avg=(float)sum/10;

    printf("Sum is %d\n",sum);
    printf("Average is %.2f\n",avg);
    if(avg<50)
    {
        printf("Failed!");
    }
    else
    {
        printf("Passed!");  
    }
}
