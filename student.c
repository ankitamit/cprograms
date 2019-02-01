#include<stdio.h>

 typedef  struct Student {

   int rollNo;
   char studentName[30];
   float percentage;
} student;

int main() {

 typedef float f;

 student s1;


 student *ptr;

 ptr = &s1;


printf("\n Enter Roll Number \n");
scanf("%d",ptr->rollNo);

printf("\n Enter Student Name \n");
scanf("%s",ptr->studentName);

printf("\n percentage of student \n");
scanf("%f",ptr->percentage);


printf("\n roll no is %d and student name is %s and percentage is %f\n",ptr->rollNo, ptr->studentName,ptr->percentage);

 f floatNumber;

 floatNumber = 12.333;

 printf("\n value of float is %f\n",floatNumber);

 return 0;





}
