#include<stdio.h>

int main() {

float largest(float  [],int );

float array[] = {1.0,12.2,13.45,56.57,4.00};

printf("\n largest array element is %f\n",largest(array,5));


return 0; 

}


float largest(float array[],int n) {


 int i = 0;
 float largest = array[0];

  for(i=1;i<n;i++ ) {


 if(largest < array[i])
  largest = array[i];

}

 return largest;
}
