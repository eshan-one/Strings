#include<stdio.h>
int main()
{
  char str[50];
  int i;
  int count = -1;

  printf("Enter a string:\n");
  fgets(str,50,stdin);

  for(i=0;str[i];i++)
  {
    count++;
  }

  printf("\nLength of the string is: %d", count);

  return 0;
}
