#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,s;
    int r,area;
    printf("Enter values of a, b and c: ");
    scanf("%d, %d , %d", &a, &b, &c);
    s=(a+b+c)/2;
    r=s*(s-a)*(s-b)*(s-c);
    area=r.sqrt();
    printf("\nArea of the triangle:%d ", area);

}