//CODE
#include <stdio.h>
#include<stdio.h>
int main() {
    long long b;
    int d = 0, p = 1;
    printf("Enter binary number: ");
    scanf("%lld", &b);
    while (b > 0) {
        d += (b % 10) * p;
        p *= 2;
        b /= 10;
    }
    printf("Decimal: %d\n", d);
    return 0;
}


// ALGORITHM
/*
1. Start 
2. Input the binary number `b`.  
3. Initialize `d = 0` (to store the decimal value) and `p = 1` (to represent powers of 2).  
4. While `b > 0`:  
   - Extract the last digit: `b % 10`.  
   - Multiply it by `p` and add to `d`.  
   - Update `p = p * 2`.  
   - Remove the last digit from `b`: `b = b / 10`.  
5. Output `d`.  
6. End.  */
