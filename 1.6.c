#include<stdio.h>
int main()
{
    int n;
    printf("Enter number for multiplication table: ");
    scanf("%d", &n);
    for (int i=0;i<10;i++){
        printf("\n %d", n +" * "+ i +"="+ n*i );
    }
}