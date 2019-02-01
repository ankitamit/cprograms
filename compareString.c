#include<string.h>
#include<stdlib.h>
#include<stdio.h>


int main() {

char string1[80],string2[80];
int i=0,j=0;

printf("\n Enter the first string\n");
scanf("%s",string1);

printf("\n Enter the Second String\n");
scanf("%s",string2);



while((string1[i] == string2[i])  && (string1[i] != '\0' && string2[i] != '\0'))  {

   i++;
}

if(string1[i] == '\0' && string2[i] == '\0')  {

 printf("\n Both are equal \n");
}
else
  printf("\n Not equal strings \n");



}

