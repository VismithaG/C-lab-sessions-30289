#include <stdio.h>
int main() {
    int num,x,rem,r=0;
    printf("Enter a three-digit integer: ");
    scanf("%d",&num);
    x = num;
    while (x != 0)
    {
       rem = x % 10;
       r += rem * rem * rem;
       x /= 10;
    }

    if (r == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

