#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:\n");

    for (i=0;i<10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }

    printf("\nThe array is:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

