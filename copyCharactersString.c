#include<stdio.h>
#include<string.h>

int main() {

char string1[80],string2[80];
int i;

printf("\n Enter the string1 \n");
gets(string1);

for(i=0;string1[i]!='\0';i++) {
   string2[i] = string1[i];
}
string2[i] = '\0';

printf("\n String2 is %.10s\n",string2);

return 0;
}

