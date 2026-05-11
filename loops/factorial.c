#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int product = 1;
    for(int i = 1;i<=n;i++){
        product = product * i;
    }
    if(n==0) printf("the factorial is : 1");
    else printf("the factorial is : %d",product);
    return 0;
}