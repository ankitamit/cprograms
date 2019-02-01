#include<stdio.h>

int rightRot(int,int);

int main() {


int x ,n;

printf("\n Enter the value of x and n \n");

scanf("%d%d",&x,&n);

printf("hello ankit it is %d",2<<5);

printf("\n value of %d rotated  by %d is %d\n\n",x,n,rightRot(x,n));

}

int rightRot(int x,int n) {
 return x >> n;
}
