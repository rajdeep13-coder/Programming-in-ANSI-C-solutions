#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    int r,d;
    printf("Enter coordinates of first point: ");
    scanf("%d, %d", &x1, &y1);
    printf("\nEnter coordinates of second point: ");
    scanf("%d, %d", &x2, &y2);
    r=(x2-x1)*(x2-x1)-(y2-y1)*(y2-y1);
    d=r.sqrt();
    printf("\n%d", d);
}