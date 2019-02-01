#include<stdio.h>

int main() {


    int array[10];

 int *p = &array[0],n;

 printf("\n Enter the number of elements \n");
 scanf("%d",&n);

printf("\n Enter the elements \n");
  for(int i = 0;i<n; i++) {
   scanf("%d",(p+i));
}

printf("\n Elements are \n");

 for(int i=0;i<n; i++) 
  printf("%d\n",array[i]);

}
