#include<stdio.h>
int main(){
    int i;
    int c,f;
    pritnf("Enter 1 for C to F and 2 for nF to C");
    printf("\nEnter your choice")
    scanf("%d", &i);
    if i==1{
        printf("\n Enter Celsius value: ");
        scanf ("%d", &c);
        f=(9*c/5)+32;
        printf("%d \n", f);
    }
    else if i==2{
        printf("\n Enter Farhrenheit value: ");
        scanf ("%d", &f);
        c=(f-32)*(5/9);
        printf("%d \n", c);
    }
    else{
        printf("Wrong choice");
    }
}