#include<stdio.h>
int main(){
  int pp,ys,d,sv;
  printf("Enter Purchase Price: ");
  scanf ("%d", &pp);
  printf("\nEnter Years of Service: ");
  scanf("%d", &ys);
  printf("\nEnter Annual Depreciation: ");
  scanf("%d", &d);
  sv=pp/(d*ys);
  printf("\nSalvage Value is: %d", sv);

  return 0;
}
