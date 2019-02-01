#include<stdio.h>

#define  MAXSIZE 50

int main() {


int array[MAXSIZE],i,j,temp,number;

printf("\n Enter the number of elements\n");

scanf("%d",&number);

printf("\n Enter the elements \n");

for(i=0;i<number;i++)
scanf("%d",&array[i]);


//Sorting starts from here 

for(i=0;i<number;i++) {

  for(j=i+1;j<number;j++) {

 if(array[i]<array[j]) {

 temp = array[i];
 array[i] = array[j];
 array[j] = temp;

}
}
}


printf("\n The elements of  the array are now \n\n");

for(i=0;i<number;i++)
 printf(" %d\n",array[i]);





return 0;

}

