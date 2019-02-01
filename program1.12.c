#include<stdio.h>

#define LASTCHAR '-'

int main() {

int c,lastCharacter;

lastCharacter = LASTCHAR;

while((c=getchar()) != EOF) {


 if(c != '\n' && c != '\t' && c != ' ') 
   putchar(c);
  else  {


// Handling of Double Spaces 


   if(c == ' ') {

     if(lastCharacter != ' ')
        putchar('\n');

}



}


 lastCharacter = c;

}

return 0;

}


