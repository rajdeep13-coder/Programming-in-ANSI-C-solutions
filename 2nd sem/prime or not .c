#include<stdio.h>
int main(){
  int n,f=0,i=1;
  printf("Enter a Number: ");
  scanf("%d", &n);
  while (i<=n){
    if(n%i==0)
      f=f+1;
    i=i+1;
  }
  if(f==2)
    printf("\n%d is a Prime Number",n);
  else
    printf("\n%d is not a Prime Number",n);
  return 0;
}
