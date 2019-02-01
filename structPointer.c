#include <stdio.h>
 struct person
{
   int age;
   float weight;
};

int main()
{

    struct person *personStr, person1= {21,56.78};
    personStr = &person1;            // Referencing pointer to memory address of person1

 personStr->age = 12222;

 // 1st way of accessing variable of Struct Person

   
  printf("\n age is %d and weight is %f\n",personStr->age, personStr->weight);

 printf("\n age is %d and weight is %f\n", (*personStr).age, (*personStr).weight);
    

    return 0;
}
