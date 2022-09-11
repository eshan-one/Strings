#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int i;
  int count = 0;

  printf("Enter the string:\n");
  fgets(str,100,stdin);

  for(i=0;str[i]!='\0';i++)
  {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    {
      count++;
    }
  }

  printf("\nThe total vowel count is %d",count);

  
  return 0;


}
