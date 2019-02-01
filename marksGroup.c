#include<stdio.h>

#define MAXSTUDENTS 50

#define GROUP 11


int main() {



int marks[MAXSTUDENTS],i,total,group[GROUP]={0},temp,low,high;


printf("\n Enter the number of Students \n\n");

scanf("%d",&total);


for(i=0;i<total;i++) {
   printf("\n Enter the mark of %d student \n\n",i+1);
   scanf("%d",&marks[i]);

  temp = (int)marks[i]/10;
  group[temp]++;   
}


printf("\n\n GROUP  RANGE  FREQUENCY \n\n");

for(i=0;i<11;i++) {


low = i*10;
high = low+9;

if(low == 100)
  high  = 100;

printf("%2d %3d to %3d %2d\n\n",i,low,high,group[i]);

}

return 0;
}
