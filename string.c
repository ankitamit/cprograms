#include<stdio.h>
#include<string.h>

int main() {

 char name[7] = {'a','n','k','i','t','b','\0'};

 char name2[10];

 printf("\n ENTER THE string here \n");
 scanf("%[^\n]",name2);

 printf("string1 is %s and string2 is %s\n",name,name2);

 return 0;


}
