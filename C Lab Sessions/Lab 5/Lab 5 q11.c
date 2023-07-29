#include <stdio.h> 
int main()
{
  int a, i, b = 0;
  printf("Enter a number: ");
  scanf("%d", &a);

  for (i=1; i<=a; i++)
  {
      if(a%i==0)
      {
         b++;
      }
  }

  if (b==2)
  {
        printf("%d is a Prime number",a);
  }
  else
  {
         printf("%d is not a Prime number",a);
  }
  return 0;    
}
