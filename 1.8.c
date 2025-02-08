#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Enter values od a, b,c: ");
    scanf("%d,%d,%d", &a, &b, &c);
    if b==c{
        printf("\nInfinity");
    }
    else{
        x=a/(b-c);
        printf("%d\n",x);
    }
}