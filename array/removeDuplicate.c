#include<stdio.h>

#define MAXLENGTH 100

int main() {



int array[MAXLENGTH],i,j,number,temp,x;

printf("\n Enter the number of elements in array\n\n");
scanf("%d",&number);


printf("\n Enter the elements of array\n\n");


for(i=0;i<number;i++)
scanf("%d",&array[i]);

//Sorting  the array elements in increasing order

for(i=0;i<number;i++) {

for(j=i+1;j<number;j++) {


 if(array[i] >  array[j]) {


   temp = array[i];
   array[i] = array[j];
   array[j] = temp;

}

}

}


// Printing elements of array 

printf("\n ELement of array is \n\n");

for(i=0;i<number;i++) 
printf("%d",array[i]);



// Removing the Duplicates



j=1;
i=0;


while(i<number) {
 

   if(array[i] == array[j]) {

   for(x=j;x<number;x++)
       array[x] = array[x+1];
     number--;
  }else {
   i++;
   j++;
}
}


for(i=0;i<number;i++) {
 printf("\n number is %d\n",array[i]);
}


return 0;

}
