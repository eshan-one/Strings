#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  int i;
  char temp;
  

  printf("Enter the string:\n");
  fgets(str,50,stdin);

  int j = strlen(str)-1;
  // We subtract 1 from the string lenght is because we want
  // to find the the index number of the string
  /* and for that the value of j should be the last index 
  number of the string */

  for(i=0;i<=j;i++)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    // For example: User input - "Steve"

    // str[0] = S
    // str[4] = e

    // (Values get swapped)

    // str[1] = t
    // str[3] = v

    // and thus no change for the central value
   

    
    j--;
    
  }

  printf("%s", str);

  return 0;


}
