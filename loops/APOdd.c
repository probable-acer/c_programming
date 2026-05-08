#include <stdio.h>
int main(){
    int n;
    printf("Enter a numner : ");
    scanf("%d",&n);
    for(int i = 1;i<=2*n-1;i++){
        printf("%d ",i);
    }
    return 0;
}