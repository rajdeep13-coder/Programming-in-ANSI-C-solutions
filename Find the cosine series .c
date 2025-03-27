//Find the cosine series s= 1 - x^2 /2! + x^4 /4! - …up to n terms
//CODE

#include <stdio.h>
int main() {
    int x, n, sign = 1;
    double sum = 1, term = 1;
    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i < n; i++) {
        term *= (1.0 * x * x) / (2 * i * (2 * i - 1));
        if (sign == 1) {
            sum -= term;  // Subtract if sign is 1
            sign = -1;     // Flip sign
        } else {
            sum += term;  // Add if sign is -1
            sign = 1;      // Flip sign
        }
    }
    printf("Cos(x) = %.6lf\n", sum);
    return 0;
}

    
  
  
