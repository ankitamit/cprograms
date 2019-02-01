#include<stdio.h>

#define MAXWORDS 100
#define LASTCHAR '-'

int main() {

int c,i,j=0,countCharacters=0,words[MAXWORDS]={0}, lastCharacter = LASTCHAR ;


while((c=getchar()) != EOF) {


 if(c == ' ')   {

   if(lastCharacter == ' ')
      continue;
} 
 

  if( c == ' ' || c == '\n' || c == '\t')  {

     words[j]= countCharacters;
     countCharacters = 0;
     j++;
}
  else
    countCharacters++; 


 lastCharacter = c;

printf("counted here now ");

}
// Printing Vertical Histogram Here

for(i=0;i<j;i++) { 
  printf(" count of word %d is %d ",i,words[i]);
}

for(i=0;i<j;i++) {


   

}








 return 0;



}



