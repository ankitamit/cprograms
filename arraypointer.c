#include<stdio.h>

int main() {


 int A[4] = {1,2,3,4};
 
 printf("\n Base address of array is %u\n",A);
 printf("\n First element of array is %d\n", *A);


 printf("\n address of second element of array is %u\n", A+1);
 printf("\n Second element of array is %d\n", *(A+1));

 return 0;

}
