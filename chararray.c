#include<stdio.h>

void print(char* C);

int main() {

 char C[20] = "Hello";

 char *c2 = C;

 printf("\n size of c is %lu\n", sizeof(C));

 print(C);

 return 0;
}


void print(char *C) {

 int i = 0;

 while(*(C) != '\0') {

  printf("%c\n", *C);
  C++;
  }

 printf("\n");

}

