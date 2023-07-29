#include<stdio.h>
int main()
{
    //question 1
    int a;
    printf("HI, HOW OLD ARE YOU? ");
    scanf("%d",&a);
    printf("\n\nWELCOME(%d)\nLET'S BE FRIENDS! \n\n",a);

    //question 2
    printf("%5d%5d%5d",2,4,8);
    printf("\n%5d%5d%5d",3,9,27);
    printf("\n%5d%5d%5d",4,16,64);
    printf("\n%5d%5d%5d\n\n",5,25,125);

    //question 3
    int d,t;
    float avg;
    printf("Enter Distance: ");
    scanf("%d",&d);
    printf("Enter Time: ");
    scanf("%d",&t);
    avg=(float)d/t;
    printf("The average speed is %.2f\n\n",avg);
    //Integer values cannot be used for avg as the value may contain decimals.

    //question 4
    int f;
    float c;
    printf("Enter value in Fahrenheit: ");
    scanf("%d",&f);
    c=(float)((5/9)*(f-32));
    printf("%d degree Fahrenheit in Celsius is %.2f degrees \n",f,c);

}
