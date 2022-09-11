#include<stdio.h>

int main()
{
  char str[100];
  char character;

  printf("Enter the string:\n");
  fgets(str,100,stdin);
  
  printf("\nYour string: %s", str);

  // asking the user to input a character
  printf("\nEnter your character:\n");
  scanf("%c",&character);
  printf("\nYour character: %c", character);

  // Checking whether each character in the string (user input)
  // is equal to the character (also entered by the user)

  int i;
  int count = 0;

  for(i=0;str[i];i++)
  {
    if(str[i]==character)
    {
      count++;
    }
  }

  printf("\nOccurrence of %c in %s is %d",character,str,count);

  
  return 0;


}
