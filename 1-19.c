#include<stdio.h>

#define MAXLENGTH 1000

void copy_1(char *, char *,int );
int getline_1(char * , int);

int main() {


char line[MAXLENGTH], longestLengthLine[MAXLENGTH];
int previousLength = 0,len,maxLength;


while((len=getline_1(line,MAXLENGTH))>0) {
     copy_1(longestLengthLine, line,len-1);

 printf("\n Reverse String is %s\n",longestLengthLine);


}

printf("\n Length of longest max line is %d\n", previousLength);

printf("\n Longest Length Line is %s\n",longestLengthLine);

 return 0;
}

void copy_1(char to[], char from[],int length) {

 int i = 0;

  while(length >= 0) {
     to[i] = from[length];
     length--;
     i++;
}

  i++;
  to[i] = '\0';
}


int getline_1(char line[], int n) {


 int c, i=0;



 for(i=0; i<n-1 && (c=getchar()) != EOF && c != '\n' ; i++ ) 
        line[i] = c;

 
  if(c == '\n' && i) 
   line[i] = '\0';
   
  
  return i;   
}

