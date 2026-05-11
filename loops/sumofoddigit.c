#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0){
        int lastdigit = n%10;
        if(lastdigit%2!=0){
            sum +=lastdigit;
        }
        n = n/10;
    }
    printf("The sum of digits are %d",sum);
    return 0;
}