#include<stdio.h>

int main() {

int p = 100;

int *p1 = &p;

int **p2 = &p1;

printf("\n Value of p2 is %u and %u and it is %d",*p2,&p,**p2);


}
