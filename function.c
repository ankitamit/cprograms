#include<stdio.h>

int getMultiplyValue(int,int);
int main() {

 int a;

 a = getMultiplyValue(5,getMultiplyValue(6,3));

 printf("\n value of multiplication is %d\n",a);
}

int getMultiplyValue(int a,  int b) {

 return a*b;
}
