#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("it is divsible by 5 or 3");
    }
    else{
        printf("it is not divisble by 5 or 3");
    }
    return 0;
}