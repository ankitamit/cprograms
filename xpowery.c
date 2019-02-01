#include<stdio.h>

double computePower(int,int);

int main() {

double result;
int x,y;
printf("\n Enter the value of base here \n");
scanf("%d",&x);
printf("\n Enter the value of Power here \n");
scanf("%d",&y);

result =  computePower(x,y);

printf("\n value of result is %.3lf\n",result);

return 0;

}

double computePower(int x,int y) {

  double result = 1.0;

  if(y>0) { 

   while(y--)
    result *= x;
  }
   else {
   while(y++)
    result /= x;
 }
 return result;

}

