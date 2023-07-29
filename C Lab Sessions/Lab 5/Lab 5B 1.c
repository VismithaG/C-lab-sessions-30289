#include <stdio.h>
int main()
{
    int num[10],i;
    int p=0, n=0, z=0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d",&num[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(num[i] > 0)
        {
            p++;
        }
        else if(num[i] < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }

    printf("Number of positive numbers: %d\n", p);
    printf("Number of negative numbers: %d\n", n);
    printf("Number of zeros: %d\n", z);

    return 0;
}
