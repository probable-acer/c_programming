#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i =1;i<=n;i++){
        int sum = 0;
        int temp = i;
        while(temp!=0){
            sum += pow(temp%10,3);
            temp = temp/10;
        }
        if(sum==i) printf("%d is a armstrong number\n",i);
    }  
    return 0;
}