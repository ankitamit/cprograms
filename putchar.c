#include <stdio.h>

int main() {


char c;

c = getchar();

//printf("it is %d %c",c,c);

putchar(c);

printf("next here \n");

c = getchar();

putchar(c);

printf("next next here \n");

c = getchar();
putchar(c);
//exit;


while (c != EOF) {
printf(" character is \n\n");
putchar(c);
c = getchar();
}



}

