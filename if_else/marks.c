#include <stdio.h>
int main(){
    int n;
    printf("enter the percentage : ");
    scanf("%d",&n);
    if(n>80){
        printf("A grade\n");
    }
    if(n>60){
        printf("B grade\n");
    }
    if(n>40){
        printf("C grade\n");
    }
    else{
        printf("D grade\n");
    }
    return 0;
}