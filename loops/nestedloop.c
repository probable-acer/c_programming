#include <stdio.h>
int main(){
    int n;
    printf("enter the mumber : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int product = 1;
        for(int j = 1; j<=i;j++){
            product = product * j;
        }
        printf("the factorial for %d is %d\n",i,product);
    }
    return 0;
}