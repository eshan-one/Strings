#include<Stdio.h>
#include<string.h>

int stringlen(char str[]);
// Nature of the fucntion is TSRS;
// note that the datatype of the function is an integer 
// as only an inetger value is returned by that function to main
int main()
{
  char string[1000];
  printf("Enter the string:\n");
  scanf("%s",string);

  stringlen(string);

  printf("\nLength of the string is %d", stringlen(string));
  return 0;

}

int stringlen(char str[1000])
{
  int i, count = 0;

  for(i=0;str[i]!='\0';i++)
  {
    count++;
  }

  return count;
}



