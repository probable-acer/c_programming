#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the  1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    printf("enter the 3nd number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the greatest",a);
    }
    if(b>a && b>c){
        printf("%d is the greatest",b);
    }
    if(c>b && c>a){
        printf("%d is the greatest",c);
    }
    return 0;
}