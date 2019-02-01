#include<stdio.h>
#include<string.h>

void removeCoccurences(char *);
void strcat_1(char *,char *);
void squeeze(char *,char  *);
void squeezeAnotherWay(char *,char *);


int main() {



char string[] = "abAdefcccabJKde";

removeCoccurences(string);

char second[] = "ABCDEFGHIJKL";

printf(" value of string after  removing c is %s\n",string);
strcat(string,second);

printf(" value  of string after concatenation is %s\n",string);


squeezeAnotherWay(string,second);

printf("\n value of string after squeeze is %s\n",string);
return 0;
}


void squeeze(char str1[],char str2[]) {

 int i=0,j=0,k=0;



  while(str2[i] != '\0') {

   k = 0;
   j = 0;

    while(str1[j] != '\0')  {

        if(str2[i] != str1[j])  {  
           str1[k] = str1[j];
           k++;
   }

   j++;
}
    str1[k] = '\0';

   i++;
}

  
}

void squeezeAnotherWay(char s1[],char s2[]) {



 int k = 0, i , j;

  for(i=0;s1[i]!='\0';i++) {
   
     for(j=0;(s1[i] != s2[j] && s2[j] != '\0') ; j++);

  
   if(s2[j] == '\0')
       s1[k++] = s1[i];
}

   s1[k] = '\0';

}



void strcat_1(char str1[],char str2[]) {


  int i = 0,j=0;
  
  while(str1[i++] != '\0');

  while((str1[i++] = str2[j++])!= '\0');

}


void removeCoccurences(char string[]) {


 int i,j;


 for(i=j=0; string[i] !='\0';i++) {

    if(string[i] != 'c')
        string[j++] = string[i];
}
     
  string[j] = '\0';

}



