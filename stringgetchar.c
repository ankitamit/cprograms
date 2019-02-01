#include<stdio.h>
#include<string.h>

int main() {

char line[80],c;
int i = 0;

printf("\n Enter the line  of text here \n");

c=getchar();

do {

line[i] = c;
i++;

}while((c=getchar())!='\n');


printf("\n Line entered is %s\n",line);


return 0;





}
