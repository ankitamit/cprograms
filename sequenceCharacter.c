#include<stdio.h>
#include<string.h>

int main() {


char string[] = "CPROGRAMMING";
int i;

for(i=0;string[i]!='\0';i++) {

printf("%-12.*s\n",i+1,string);

}

for(i=12;i>0;i--) {
 printf("%.*s\n",i,string);
}
return 0;






}
