#include<stdio.h>

struct stores {

char name[20];
float price;
int quantity;
};

struct stores getIncrement(struct stores a, float,int);

int main() {

 

  float price_incr=12.2;
  int quantity_incr=3;

  struct stores a = {"ankitbhatia",122.30,5};
  
  struct stores b =  getIncrement(a,price_incr,quantity_incr);
  

 printf("\n\nQuanity is %d\n",b.quantity);
 printf("\n\n Price is %f\n",b.price);
 
 return 0; 
}

struct stores getIncrement(struct stores a, float price_incr,int quan_incr) {
     a.price += price_incr;
     a.quantity += quan_incr;
     return a;
}
