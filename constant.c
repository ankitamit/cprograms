#include<stdio.h>

int main() {


 char string[100];

 int  vowels= 0, consonants = 0;
 printf("\n Enter the string \n");

 gets(string);

 
 char *ptr = string;

 while(*ptr != '\0') {

   
 char temp = *ptr;

  if(temp == 'A' || temp == 'E'  || temp == 'I' || temp == 'O' || temp == 'U') 
   vowels++;
 else
   consonants++;

  ptr++;
}


printf("\n number of vowels is %d\n",vowels);
 printf("\n number of consonants is %d\n",consonants);
 



return 0;

}
