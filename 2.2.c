#include<stdio.h>
int main(){
    float r;
    int p;
    printf("Enter the amount in rupees: ");
    scanf("%f", &r);
    p=(int)(r*100);
    printf("\n The given amount is: %d paise", p);

    return 0;
}