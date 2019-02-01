#include<stdio.h>

#define MAXLENGTH 1000

void copy_1(char *, char *,int );
int getline_1(char * , int);

int main() {


char line[MAXLENGTH], longestLengthLine[MAXLENGTH];
int previousLength = 0,len,maxLength;

int t = 0, commentStart = 0;

while((len=getline_1(line,MAXLENGTH))>0) {


  while(t<len) {
   
   if(line[t] == '/' && line[t+1] == '*') {
       commentStart = 1;
}




   if(!commentStart)
       printf("%c",line[t]);

    if(line[t] == '*' && line[t+1] == '/' && commentStart) 
        commentStart = 0;

    t++;

}


}


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



 for(i=0; i<n-1 && (c=getchar()) != EOF && c != '\n' ; i++ )  {

        line[i] = c;

}
 
  if(c == '\n' && i) 
   line[i] = '\0';
   
  
  return i;   
}

