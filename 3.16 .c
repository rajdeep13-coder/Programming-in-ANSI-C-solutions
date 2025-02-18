#include<stdio.h>
int main(){
    int cc,nc;
    float a;
    printf("Enter customer codes: ");
    scanf("%d", &cc);
    printf("\nEnter number of calls made: ");
    scanf("%d", &nc);
    if(nc>100){
        a=(nc-100)*1.25;
    }
    printf("\n Bill: %f", a+250.0);
    return 0;
}