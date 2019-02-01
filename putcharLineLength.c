#include<stdio.h>

int main() {

int c,lengthLine = 0, previousLineLength = 0, lengthLongestLine;
printf("\n Enter the lines \n");


while((c=getchar()) != EOF) {

   if(c == '\n') {

   if(lengthLine > previousLineLength) 
        previousLineLength = lengthLine;

    lengthLine = 0;
}
  
  lengthLine++;
 
}

lengthLongestLine = previousLineLength;

printf("\n Length of Longest line is %d \n",lengthLongestLine); 


return 0;
}

