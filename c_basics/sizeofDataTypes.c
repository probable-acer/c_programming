#include <stdio.h>
int main(){
    int a = 30 * 1000 + 2768; // int stores 2 ^ (32) numbers
    printf("%d\n",a);
    short int  b = 32768; // short stores 2 ^ (16) numbers
    printf("%d\n",b);
    long long int x = 1550000; // long long stores 2 ^ (64) numbers 
    printf("%ld",x);
    return 0;
}