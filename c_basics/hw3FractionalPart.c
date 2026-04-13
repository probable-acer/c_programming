#include <stdio.h>
int main(){
    float x;
    printf("Enter a decimal: ");
    scanf("%f",&x);
    int y = x;
    if(x>=0) {
        float z = x - y;
        printf("%f",z);
    }
    else {
        y -= 1;
        float z = x - y;
        printf("%f",z);
    }
    return 0;
}