#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {



  char string[10] = "ankat";
  char string2[10]= "ankzt";


 strncat(string,"ankit22",3);

 printf("\n string is %s\n",string);

 int i =0;

 while(string[i] != '\0') {

   putchar(string[i]); 
}
  strncpy(string,"ankit222",3);

   string[4] = '\0';

  printf("new string is %s\n",string); 

// strcpy(string,"ankit222");

// printf("\n value of string is %s and length is %lu\n",string,strlen(string));
   

  //strcat(strcat(string," layout"),string2);

  int compare = strncmp(string,string2,3);

  printf("\n Compare request is %d\n",compare);

 printf("\n String after concatenation is %s\n",string);














}
