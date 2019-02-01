#include<stdio.h>

int main() {


  int x[] = {1,2,3,4,5,6};

  int *p = x;

 printf("\n value of fifth element is %d\n",*(&x[0]+4));
  while(p<= &x[5]) {

   printf("\n value of x is %d\n",*p);
   p++;

}


}
