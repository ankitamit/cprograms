#include<stdio.h>

struct book {

 char month[30];
 float price;
 int year;
 char  name[20];

  struct booknew {
    int newBookPrice;
} booknew;
};

int main() {


 struct book b1,*b,array[100]; 
 b = & b1;

 printf("\n Enter Month, price, year and name \n");

 scanf("%s%f%d%s",array[0].month,&array[0].price,&array[0].year,array[0].name);

   
 array[0].booknew.newBookPrice = 1226;

 printf("\n Month is %s\n",array[0].month);
 printf("\n Price is %f\n",array[0].price);
 printf("\n year is %d\n",array[0].year);
  printf("\n name  is %s\n",array[0].name);


 printf("\n New Book price is %d\n",array[0].booknew.newBookPrice);

}
