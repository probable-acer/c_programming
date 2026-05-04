#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("it is divsible by 5 or 3 but not 15");
        }
        else{
            printf("it is divsible by 5 or 3 and 15");
        }
    }
    else{
        printf("it is not divisble by 5 or 3 or 15");
    }
    return 0;
}