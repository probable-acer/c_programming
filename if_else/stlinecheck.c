#include <stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("enter first point: ");
    scanf("%f %f",&x1,&y1);
    printf("enter second point: ");
    scanf("%f %f",&x2,&y2);
    printf("enter third point: ");
    scanf("%f %f",&x3,&y3); 
    float m1 = (y2 - y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x1);
    if(m1 == m2) printf("The points lie in the same straight line");
    else printf("The points do not lie in the same straight line");
    return 0;
}