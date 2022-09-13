#include<stdio.h>
#include<string.h>

int main()
{
 char a[10], b[10];
 int i;
 printf("Enter a string:\n");
 fgets(a,10,stdin);


 for(i=0;a[i]!='\0';i++)
 {
   b[i] = a[i];
   printf("%c", a[i]);
 }
 
 printf("\nCopied Elemnts :\n");
 

 for (i = 0; b[i] != '\0'; i++)
 {
   printf("%c", b[i]);
 }

return 0;

}
