#include<stdio.h>
#include<string.h>
#include<ctype.h>

int atoi(char *);
void upToLow(char *);

int main() {


char s[] = "12345";

int intValue = atoi(s);

printf("\n returned value is *** %d\n",intValue);

char string[] = "1234abcABCntsxYZ";


upToLow(string);

printf("\n upper to LowerCase value is %s\n",string);



return 0;
}

int atoi(char s[]) {

 int i = 0, expr=0;

 for(i=0;s[i]>='0' && s[i]<='9'; i++) {

  expr = 10*expr + (s[i]-'0'); 
}

 return expr;
}

void upToLow(char s[]) {

 int i = 0;
 while(s[i] != '\0') {
    
          if(isdigit(s[i]))        //  if(s[i] >= 'A' && s[i] <= 'Z') 
         s[i]  = s[i] - 'A' + 'a'; 
      i++;
    }

}   

