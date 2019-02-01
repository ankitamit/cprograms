#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

float fahr, celcius;

int low, high, step;

low = 0;

high = 300;

step = 20;

fahr = low;

while(fahr <= high) {
celcius = (5.00/9)*(fahr - 32);
printf("%3.0f\t%1.8f\n",fahr, celcius);
fahr = fahr + step;
}


fahr = 0;


for(fahr = LOWER;fahr<=UPPER;fahr = fahr+STEP) {

 printf("%3.0f\t%1.8f\n",fahr, (5.0/9)*(fahr-32));

}

return 0;
}
