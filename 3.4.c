#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length and breath: ");
    scanf("%d, %d", &l, &b);
    printf("\nArea: %d" l*b);
    printf("\nPerimeter: %d" 2*(l+b));

    return 0;
}