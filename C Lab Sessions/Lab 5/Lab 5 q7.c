#include <stdio.h>

int main()
{
    int n1=0,n2=1,nxt,c=10;

    printf("Fibonacci Series: ");

    for(int i=1;i<=c;i++)
    {
        printf("%d\n",n1);
        nxt=n1+n2;
        n1=n2;
        n2=nxt;
    }

    return 0;
}

