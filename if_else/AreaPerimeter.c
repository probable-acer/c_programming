#include <stdio.h>
int main(){
    int l,b;
    printf("enter the length : ");
    scanf("%d",&l);
    printf("enter the breadth : ");
    scanf("%d",&b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    if(area>perimeter){
        printf("area is greater than the perimeter");
    }
    else {
        printf("area is not greater than the perimeter");
    }
    return 0;
}