#include<stdio.h>

#define LASTCHARACTER '-'
int main() {


int c, lastCharacter;

lastCharacter = LASTCHARACTER;


while((c=getchar()) != EOF) {




   if(c == ' ') {


      if(lastCharacter != ' ')
           putchar(c);
}
  else 
     putchar(c);



lastCharacter = c; 

}


return 0;

}

