#include<stdio.h>

void fun1(int );

int  main() {

fun1(10);

}

void fun1(int n) 
{ 

   int i = 0;

   for (i = 0; i < n; i++) 
     printf(" * "); 

printf("\n");
   
   if (n > 1) 
     fun1(n-1); 

} 
