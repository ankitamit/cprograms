#include<stdio.h>

int main() {


double count,lines,words = 0;

lines = 0;

int c;


/*
for(count=0;(c=getchar())!= EOF;count=count+1)  {  
    if(c == '\n') {
       lines++;
       words++;
   }
   else if(c == ' ')
        words++;

}
*/

count = 0;
words = 0;
lines = 0;

while((c=getchar())!= EOF) {

     if(c == '\n') {
       lines++;
       words++;
   }
   else if(c == ' ')
        words++;

   count++;

}

printf("\n\ncount of characters  is %.0f and count of lines is %.0f and count of words is %.0f",count,++lines,words);

return 0;

}


