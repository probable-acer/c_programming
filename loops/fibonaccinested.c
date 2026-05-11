#include <stdio.h>
int main(){
    int n;
    printf("enter the mumber : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int a = 1;
        int b = 1;
        int sum = 1;
        for(int j = 1; j<=(i-2);j++){
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("the %dth fibonacci is %d\n",i,sum);
    }
    return 0;
}