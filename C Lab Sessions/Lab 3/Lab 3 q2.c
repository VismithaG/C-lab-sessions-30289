#include <stdio.h>
int main()
{
    int n1, n2, n3, sml, lrg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    sml = n1;
    if (n2 < sml)
        sml = n2;
    if (n3 < sml)
        sml = n3;

    lrg = n1;
    if (n2 > lrg)
        lrg = n2;
    if (n3 > lrg)
        lrg = n3;

    printf("Smallest is: %d\n", sml);
    printf("Largest is: %d\n", lrg);

}