#include<stdio.h>

#define  MAXSIZE 50

int main() {


int array[MAXSIZE],largest,smallest,secondLargest;
int i,j,temp,number;

printf("\n Enter the number of elements\n");

scanf("%d",&number);

printf("\n Enter the elements \n");

for(i=0;i<number;i++)
scanf("%d",&array[i]);


largest = array[0];

smallest = array[0];

secondLargest = array[0];

for(i=1;i<number;i++) {

 if(largest < array[i])  {
   secondLargest = largest; 
   largest = array[i];

}
else if(largest >  array[i] && secondLargest < array[i])
  secondLargest = array[i]; 


 if(smallest > array[i]) 
     smallest = array[i];

}




printf("\n Largest Element is %d\n Second Largestis %d\n Smallest element  is %d\n",largest,secondLargest,smallest);

return 0;

}

