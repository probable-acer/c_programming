#include <stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    if(n==0) printf("%d\n",0);
    else{
        printf("The 1st fibpnacci is 1\n");
        if(n>1) printf("The 2nd fibonacci is 1\n");
    }
    for(int i =3;i<=n;i++){
        sum = a+b;
        a = b;
        b = sum;
        printf("The %dth fibonacci is %d\n",i,sum);
    }
    return 0;
}