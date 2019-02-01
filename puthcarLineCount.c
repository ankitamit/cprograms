#include<stdio.h>

#define MAXLENGTH 5

void copy_1(char *, char *);
int getline_1(char * , int);

int main() {


char line[MAXLENGTH], longestLengthLine[MAXLENGTH];
int previousLength = 0,len,maxLength;


while((len=getline_1(line,MAXLENGTH))>0) {


printf("\n line entered is %s\n\n",line);
    
    if(len > previousLength) {
     copy_1(longestLengthLine, line);
     previousLength = len;
}
}

printf("\n Length of longest max line is %d\n", previousLength);

printf("\n Longest Length Line is %s\n",longestLengthLine);

 return 0;
}

void copy_1(char to[], char from[]) {

 int i = 0;

  while((to[i] = from[i]) != '\0')
      i++;

}


int getline_1(char line[], int n) {


 int c, i=0;



 for(i=0; i<n-1 && (c=getchar()) != EOF && c != '\n' ; i++ ) 
        line[i] = c;

 
  if(c == '\n' && i) 
   line[i] = '\0';
   
  
  return i;   
}

