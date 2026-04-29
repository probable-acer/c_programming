#include <stdio.h>
int main(){
    int r,s,a;
    printf("enter the age of ram: ");
    scanf("%d",&r);
    printf("enter the age of shyam: ");
    scanf("%d",&s);
    printf("enter the age of ajay: ");
    scanf("%d",&a);
    int min = r;
    if(min > s) min = s;
    if(min > a) min = a;
    printf("The minimum age is : %d",min);
    return 0;
}