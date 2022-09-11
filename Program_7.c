#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];

  int i;
  int alpha=0,digit=0,car=0;
  printf("Enter a string:\n");

   fgets(str,100,stdin);

  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>='A' && str[i]<='Z') ||(str[i]>='a' && str[i]<='z' ))
    {
      alpha++;
    }

    if(str[i]>='0' && str[i]<='9')
    {
      digit++;
    }

    
  }

   car = (strlen(str)-1) - (alpha + digit);

  printf("\nAlphabets - %d \n Digits - %d \n Characters - %d", alpha,digit,car);
  
 return 0;
}
  
  
