#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2, riyal, i;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0) {                                          //You can skip this line
        printf("This is not a quadratic equation.\n");     //You can skip this line
        return 0;                                          //You can skip this line
    }
    
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", r1);        //You can simply print "Root1= %lf\n", r1       0.2 is to take upto 2 decimal place, \n for next line 
        printf("Root 2 = %.2lf\n", r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        r2 = r1;
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", r1);
    } else {
        riyal = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        printf("Roots are imaginary.\n");
        printf("Root 1 = %.2lf +- %.2lfi\n", riyal, i);
    }
    
    return 0;
}
