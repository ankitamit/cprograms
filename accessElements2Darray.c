#include<stdio.h>
#define ROWS 2
#define COLUMNS 5

int main() {


 int array[ROWS][COLUMNS] =  {{1,2,3,4,5}, 
                             {6,7,8,9,10}};

 int i,j,*p;

 p = &array[0][0];

 
 for(i=0;i<ROWS;i++) {


  for(j=0;j<COLUMNS;j++) {

   
  printf("\n value  of array element is %d\n", *(p+ i*COLUMNS+ j));

}
}

 return 0;
}

