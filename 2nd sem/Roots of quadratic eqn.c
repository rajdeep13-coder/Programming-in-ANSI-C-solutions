#include <stdio.h>
#include <math.h>        //imp for mathematical library functions like sqrt()
int main() {
    float a, b, c, d, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and distinct roots: %.2f %.2f", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %.2f %.2f", r1, r1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Complex roots: %.2f+%.2fi %.2f-%.2fi", real, imag, real, imag);   //simply print, no need to give .2 unless mentioned  upto decimal places
    }

    return 0;
}
