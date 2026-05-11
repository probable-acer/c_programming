#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int result = 0;
    while(n!=0){
        int remainder = n%10;
        result = result * 10 +  remainder;
        n /= 10;
    }
    printf("the reversed number is : %d",result);
    return 0;
}