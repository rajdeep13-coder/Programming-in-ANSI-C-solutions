#include <stdio.h>
#include <math.h>

int main() {
    float D, S, H, EOQ, TBO;
    
    printf("Enter the demand rate (D): ");
    scanf("%f", &D);
    
    printf("Enter the setup cost per order (S): ");
    scanf("%f", &S);
    
    printf("Enter the holding cost per unit per year (H): ");
    scanf("%f", &H);
    
    EOQ = sqrt((2 * D * S) / H);
    TBO = sqrt((2*S)/(D*H));
    
    printf("\nEconomic Order Quantity (EOQ): %.2f\n", EOQ);
    printf("Time Between Orders (TBO): %.2f years\n", TBO);
    
    return 0;
}
