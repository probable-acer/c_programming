#include<stdio.h>
int main(){
    int n; //dhbba ban gaya
    printf("Enter a number : ");
    scanf("%d",&n); //dabba mein value dala jayega by input from user
    if(n%2==0){ //even condition
        printf("Even number");
    }
    if(n%2!=0){ //odd condition
        printf("Odd number");
    }
    return 0;
}