#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int temp = number;
    int numDigits = 0;
    while (temp != 0) {
        numDigits++;
        temp /= 10; 
    }
    temp = number;
    printf("Line 1: ");
    printf("%d\n", temp);
    for (int i = 1; i < numDigits; i++) {
        temp = number;
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }

        temp = temp % divisor; 
        printf("Line %d: %d\n", i + 1, temp);
    }
    printf("Last line: %d\n", number % 10);
    
    return 0;
}
