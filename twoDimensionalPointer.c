#include<stdio.h>
 
int main()
{

   int array[3][4] = { {1,7,3,4} ,
                       {5,6,7,8},
                       {9,10,11,12}};

  int *p = &array[0][0];

  int TOTALROWS = 12, i = 0, j = 0;

  for(i = 0; i< 3; i++ ) {

   for(j = 0;j< 4; j++) {

printf("\n value of i and j is %d and %d \n",i,j);
   printf(" \n Value  of element in array is %d\n",(*(p+i)+j));

  printf("\n value of array is %d\n",array[i][j]);
}
printf("\n\n");
}
   

  return 0;
}
