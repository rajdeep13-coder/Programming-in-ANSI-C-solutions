#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0){
        printf("\n The given number %d is EVEN as it is divisible by 2", n);
    }
    else if(n%2!=0){
        printf("\n The given number %d is ODD as it is  not divisible by 2", n);
    }
    else{
        printf("\n:/");
    }
    return 0;
}