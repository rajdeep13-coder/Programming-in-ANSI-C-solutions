//Find the sine series s= x - x 3 /3! + x 5 /5! - …up to n terms
//CODE

#include <stdio.h>
#include <math.h>
int main() {
    int x, n;
    double sum, term, fact;
    printf("Enter the value of x and n terms: ");
    scanf("%d %d", &x, &n);
    sum = x;
    for (int i = 1; i < n; i++) {
        fact = 1;
        for (int j = 1; j <= (2 * i + 1); j++) {
            fact *= j;  
        }
        term = pow(x, 2 * i + 1) / fact;  
        sum += (i % 2 == 0) ? term : -term;  
    }
    printf("Sin(x) = %.6lf\n", sum);
    return 0;
}
