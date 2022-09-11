#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int i;
  int count = 0;
  

  printf("Enter the string:\n");
  fgets(str,100,stdin);

  // A = a - 32
  // a = A + 32
  // Both a and A represent the ASCII code of the given character

  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A'&& str[i]<='Z')
    {
      str[i] = str[i] + 32;
    }
  }

  printf("\nLower case: %s", str);

  

  
  return 0;


}
  
  
