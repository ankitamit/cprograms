#include<stdio.h>

int main() {


int c, isdigits[10] = {0};



while((c=getchar()) != EOF) {


  if(c>='a' && c<= 'z') 
     putchar(c);

}

for(int i=0;i<9;i++) {

// printf("\n isdigit array %d is %d\n\n",i,isdigits[i]);
}


return 0;

}
