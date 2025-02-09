#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter two numbers: ");
    scanf("%f, %f", &a, &b);
    if b!=0 {
        float c= a/b;
        printf("The division of %.2f and %.2f is: %.2f\n", a, b, c);
    }
    else{
        printf("Infinity");
    }
}