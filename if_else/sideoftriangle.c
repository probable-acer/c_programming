#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the  1st side : ");
    scanf("%d",&a);
    printf("enter the 2nd side : ");
    scanf("%d",&b);
    printf("enter the 3nd side : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Valid Triangle");
    }
    else {
        printf("Invalid Triangle");
    }
    return 0;
}