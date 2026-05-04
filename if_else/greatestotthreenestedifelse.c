#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the  1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    printf("enter the 3nd number : ");
    scanf("%d",&c);
    if(a>b){ // b is out of race
        if(a>c) printf("%d is the greatest",a);
        else printf("%d is the greatest",c);
    }
    else{ //b>a // a ab sab se chota hai
        if(b>c) printf("%d is the greatest",b);
        else printf("%d is the greatest",c);
    }
    return 0;
}