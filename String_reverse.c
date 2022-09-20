#include <Stdio.h>
#include <string.h>

void stringrev(char str[]);
int stringlen(char str[]);
// Nature of the fucntion is TSRN;

int main()
{
  char string[1000];
  printf("Enter the string:\n");
  scanf("%s", string);

  printf("\nThe reversed string is:\n");

  stringrev(string);
  
  
  return 0;
}
// Function to rverse a string
// Nature: TSRS

void stringrev(char str[1000])
{
  
  int i,j;
  char temp;
  

  stringlen(str);

  j = stringlen(str) - 1;

  for(i=0;i<=j;i++)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    j--;
    
  }
  printf("%s", str);
  
}

// Function to calculate length of a string

int stringlen(char str[1000])
{
  int i, count = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    count++;
  }

  return count;
}
