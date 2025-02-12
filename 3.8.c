#include <stdio.h>

int main() {
    float u, t, a, s;
    printf("Enter initial velocity (u): ");
    scanf("%f", &u);
  
    printf("Enter time (t): ");
    scanf("%f", &t);
    
    printf("Enter acceleration (a): ");
    scanf("%f", &a);
    
    s = (u * t) + (0.5 * a * t * t);
    
    printf("The distance traveled is: %.2f\n", s);
    
    return 0;
}
