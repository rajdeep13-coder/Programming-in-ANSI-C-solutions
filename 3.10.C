#include <stdio.h>
#include <math.h>

int main() {
    float L, R, C, fd;
    const float PI = 3.14;
    
    printf("Enter the inductance (L in Henrys): ");
    scanf("%f", &L);
    
    printf("Enter the resistance (R in Ohms): ");
    scanf("%f", &R);
    
    for (C = 0.01; C <= 0.1; C += 0.01) {
        float term = (1 / (L * C)) - (pow(R, 2) / (4 * pow(C, 2)));
        
        if (term > 0) {
            fd = sqrt(term);
            printf("%.2f\t%.4f\n", C, fd);
        } else {
            printf("%.2f\tDamping too high (No oscillation)\n", C);
        }
    }
    
    return 0;
}
