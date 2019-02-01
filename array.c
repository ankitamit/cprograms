#include<stdio.h>

int main() {

int arr[5], i; 
  
  printf("Size of integer in this compiler is %u\n", sizeof(int)); 
  
  for (i=0; i<5; i++) 
    // The use of '&' before a variable name, yields 
    // address of variable. 
    printf("Address arr[%d] is %u\n", i, &arr[i]); 
  
  return 0;




}




