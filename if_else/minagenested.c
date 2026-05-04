#include <stdio.h>
int main(){
    int r,s,a;
    printf("enter the age of ram: ");
    scanf("%d",&r);
    printf("enter the age of shyam: ");
    scanf("%d",&s);
    printf("enter the age of ajay: ");
    scanf("%d",&a);
    if(r<s){ //s is out of race
        if(r<a){
            printf("ram is the youngest");
        }
        else{
            printf("ajay is the youngest");
        }
    }
    else{ //r is out of race
        if(s<a){
            printf("shyam is the youngest");
        }
        else {
            printf("ajay is the youngest");
        }
    }
    return 0;
}