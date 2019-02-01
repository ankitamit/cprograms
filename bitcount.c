#include<stdio.h>

int bitcount(int);
int main() {

int x , bitCount;

printf("\n Enter the value of x\n");
scanf("%d",&x);

bitCount = bitcount(x);

printf("\n bit coun tis %d\n",bitCount);


}

int bitcount(int x) {

int bit = 0;


while(x >0) {
    x = x & (x-1);
    bit++;
}

return bit;

}
