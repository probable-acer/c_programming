#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n%15==0){
        printf("it is divsible by 5 and 3");
    }
    else{
        printf("it is not divisble by 5 and 3");
    }
    return 0;
}