#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is Higher.\n",a);
    }
    else if(a<b)
    {
        printf("%d is Higher.\n",b);
    }
    else
    {
        printf("Numbers are equal.\n");
    }
    return 0;
}
