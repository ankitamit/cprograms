#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {


   char string[30] = "aneekit11 bhatia ankidt";


   char *p;

    p = strstr(string,"ankit");

printf("substring is %s",p); 
   
  if(p)  {
  
    strcpy(p,"bhatia");
}
  else
   printf(" Not found ");

 printf("\n string is %s\n",string);

 return 0;


}
