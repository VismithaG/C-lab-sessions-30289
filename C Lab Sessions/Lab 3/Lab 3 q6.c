#include <stdio.h>
int main()
{
    char chara[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    int num = sizeof(chara) / sizeof(char);

    printf("Character\tInteger Equivalent\n");

    for (int i = 0; i < num; i++)
    {
        printf("%c\t\t%d\n", chara[i], (int) chara[i]);
    }

    return 0;
}
