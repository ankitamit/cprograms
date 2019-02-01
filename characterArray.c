#include<stdio.h>
#include<string.h>

int main() {


  char *string;
  char *string1 = "ankit";
 
  string = "bhatia";

 while(*string != '\0') { 
  printf("\n value is %c\n",*(string++));
}

 return 0;

}
