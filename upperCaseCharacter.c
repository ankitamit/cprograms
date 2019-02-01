#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {


 char c;

 printf("\n ENter the character \n");

 c = getchar();

 /// Check if a upper case letter or lower case or a integer
  
  if(c>='A' && c<='Z')
   printf("\n upper case letter\n");
  else if(c>='a' && c<='z')
   printf("\n Lower case letter\n");
   else if(c>=48 && c<=57)
   printf(" A number ");

 return 0;


}
