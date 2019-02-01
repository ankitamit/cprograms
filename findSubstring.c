#include<stdio.h>
#include<string.h>

#define MAXLEN 100

int getline_2(char *, int );
int strFindIndex(char *, char *);

int main() {


char str[MAXLEN];
int index;

  while(getline_2(str,MAXLEN)>0) {
     index = strFindIndex(str,"ould");     
      
  printf("\n Line entered is %s\n\n",str);
  printf("\n Substring \"ould\" found at index %d\n\n",index);

}

}


int strFindIndex(char string[], char substring[]) {


 int i=0,j=0,index=-1,k=0,found= 0,finalIndex=-1;



  while(string[i] != '\0') {

   

  for(k=i,j=0,index=i;string[k] == substring[j] && substring[j] != '\0' && string[k] != '\0'; j++,k++);


   if(substring[j] == '\0')   { 
        found = 1;
        finalIndex = index;
}

   i++;
}


  if(found)
   return finalIndex;
  else
   return -1;

}

int getline_2(char str[],int maxLength) {



 char c;
 
 int i =0;

   while(i < maxLength-1 && (c=getchar())!= EOF && c !='\n') {

       str[i] = c;
       i++;
}

    str[i]='\0';
    

  return i;

}

