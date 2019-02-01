#include<stdio.h>

int main() {

 int x = 5;

 int array[] = {1,2,4,5};


 int *p;


 p = &array[0];


  printf("\n value  of pointer p is %d\n",*p);
  
  
  printf("\n value  of second element  p is %d\n",*(++p));
 printf("\n value  of third element  p is %d\n",*++p);
 printf("\n value  of fourth element is  %d\n",*++p);
 printf("\n value  of fifth element  is %d\n",*++p);

  

}
