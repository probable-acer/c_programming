#include <stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin");
    }
    else if(x==0){
        printf("the point lies in y-axis");
    }
    else if(y==0){
        printf("the point lies in x-axis");
    }
    else{
        printf("the point does not lie in the x-axis or y-axis");
    }
    return 0;
}