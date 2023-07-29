#include <stdio.h>
int main()
{
    int marks[10],i,sum=0,max,min;
    float avg;
    printf("Enter marks for 10 students:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter marks for student : ");
        scanf("%d", &marks[i]);
        sum += marks[i];

        if (i == 0)
        {
            max = marks[i];
            min = marks[i];
        }
        else
        {
            if (marks[i] > max)
            {
                max = marks[i];
            }
            if (marks[i] < min)
            {
                min = marks[i];
            }
        }
    }

    avg=(float)sum / 10;

    printf("Maximum Mark: %d\n",max);
    printf("Minimum Mark: %d\n",min);
    printf("Average Mark: %.2f\n",avg);

    return 0;
}
