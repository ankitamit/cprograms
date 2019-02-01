#include<stdio.h>

int sumOfElements(int *,  int size);


int sumOfElements(int *A,  int size) 
{

  int i, sum = 0;


 printf("\n size of array is %lu and %lu\n", sizeof(A), sizeof(A[0]));


  for(i = 0; i< size; i++) 
       sum = sum + *(A+i);

  return sum;
}


int main() {

   int A[] = {1,2,3,4,5};


   int size = sizeof(A)/sizeof(A[0]);
   int total = sumOfElements(A, size);

    printf("\n size of array is %lu and %lu\n", sizeof(A), sizeof(A[0]));

   printf("\n Total is %d\n", total);

   return 0;

}

