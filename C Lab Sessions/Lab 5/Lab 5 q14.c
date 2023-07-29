#include <stdio.h>
int main()
{
    int a[10],i,count=0;
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    for (i=0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("The count of even numbers in the array is: %d\n", count);

    return 0;
}

