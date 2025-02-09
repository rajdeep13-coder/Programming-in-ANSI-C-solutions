#include<stdio.h>
int main(){
  float a,b;
  int s;
  printf("Enter two float values: ");
  scanf("%f, %f", &a, &b);
  s=(int)(a+b);
  printf("\nInput values are: %f and %f", a, b);
  printf("\nSum of the values is %d", s);
  return 0;
}
  
