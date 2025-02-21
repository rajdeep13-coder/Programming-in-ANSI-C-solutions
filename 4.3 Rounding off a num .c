#include<stdio.h>
#include<math.h>
int main(){
  double n;
  printf("Enter value: ");
  scanf("%lf", &n);
  int r=round(n);
  printf("Rounded value: %d\n", r);
  return 0;
}
