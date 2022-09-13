#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];

  int i,j,n;
  int temp;

  printf("Enter a string:\n");

  fgets(str,100,stdin);

  // In order to caluclate the array size we need to 
  /* calculate the string length */

  n = strlen(str) - 1;

// similar logic for sorting an array of a given size
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)

    {
      if (str[i] > str[j])
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }

  }
  printf("\nSorted string in ascending order is\n");

  for(i=0;str[i]!='\0';i++)
  {
    printf("%c", str[i]);
  }

  return 0;
} 
  
