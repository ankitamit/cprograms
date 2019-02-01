#include<string.h>

#include<stdio.h>

#include<stdlib.h>

int main() {

  
 char  first_name[20]= "ankit";
 char second_name[20] = "bhatia";


 char third_string[20];

 int i,j,k;


 for(i=0;first_name[i]!='\0';i++) {
   third_string[i] = first_name[i];
}

  third_string[i] = ' ';
  i++;

 for(j=0;second_name[j]!='\0';j++) {
   third_string[i+j] = second_name[j];
}



 printf("\n The third string is %s\n",third_string);


}
