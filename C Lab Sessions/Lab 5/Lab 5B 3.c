#include <stdio.h>
int main()
{
    float prices[10],sum=0,avg;
    int count=0,i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter price for an item : ");
        scanf("%f",&prices[i]);
        sum += prices[i];

        if(prices[i] > 200)
        {
            count++;
        }
    }

    avg=(float)sum/10;

    printf("\nAverage value of an item: %.2f\n", avg);
    printf("\nNumber of items with price greater than 200: %d\n", count);

    return 0;
}

