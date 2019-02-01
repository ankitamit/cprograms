#include<stdio.h> 
int main() 
{ 
  // size of arr[] is 6 as it is '\0' terminated  
  char arr[5] = "geeks"; 
  
  printf("%lu", sizeof(arr)); 
 
 int i = 0;

  while(arr[i] != '\0')  {

 printf("\n character is %c\n",arr[i]);
 i++;
}
  return 0; 
} 
