#include <stdio.h>
int main() {
    int a, b, c, gcd = 1, min;
    printf("Enter three positive numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);                 
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            gcd = i;
        }
    }
    printf("GCD is: %d\n",gcd);
    return 0;
}


//we can run the loop upto a+b+c but that will result in worst time complexity
//thus I 've sorted out the min value among the 3
