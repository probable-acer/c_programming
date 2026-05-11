#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int result = 0;
    int reverse = n;
    while(reverse != 0){
        int remainder = reverse%10;
        result = result * 10 +  remainder;
        reverse /= 10;
    }
    printf("the number and its reverse sum is : %d",result + n);
    return 0;
}