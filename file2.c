#include "file1.c"
#include<stdio.h>

int main() {

int global = 100;
//extern int global;

printf("global is a is  %d\n",++global);

}


