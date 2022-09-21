#include <Stdio.h>
#include <string.h>
void stringlower(char str[]);
int main()
{
   char string[1000];
   printf("Enter a string:\n");
   fgets(string,1000,stdin);

   printf("\nYour string: %s", string);
  
   stringlower(string);

   return 0;
}

// Nature of string is TSRN

void stringlower(char str[1000])
{

  int i;
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]>='A' && str[i]<='Z')
    {
      str[i] =  str[i] + 32;
    }

   }

   printf("String in lower case: %s", str);

}
