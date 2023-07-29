#include <stdio.h>

int main() {
    char l;
    
    printf("ASCII values for all letters in lowercase:\n"); 
    for (l='a';l<='z';l++)
    {
        printf("%c:%d  ",l,l);
    }

    printf("\n\nASCII values for all letters in uppercase:\n");
    for (l='A';l<='Z';l++)
    {
        printf("%c:%d  ",l,l);
    }
    
    return 0;
}
