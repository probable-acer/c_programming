#include <stdio.h>
int main(){
    int n;
    printf("Enter a leap year : ");
    scanf("%d",&n);
    if((n%4== 0 && n%100 != 0) || (n%400 == 0)){
        printf("The given year is a leap year");
    }
    else{
        printf("The given year is not a leap year");
    }
    return 0;
}