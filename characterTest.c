#include<stdio.h>

int main() {


 char name[10] = "ankit11";

 char *p = name;

 
 char *pointerVariable = "ankitbhatia";

  char *access = pointerVariable;

  
 while(*access != '\0') {

  printf("\n value of character is %c\n", *access);
  access++;
} 

 printf("\n string pointer variable is %s\n",pointerVariable); 

 return 0;

}
