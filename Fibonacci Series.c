//CODE
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        if (n >= 1) {
            printf("%d ", first);
        }
        if (n >= 2) {
            printf("%d ", second);
        }
        
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    
    return 0;
}



/* #LOGIC
The Fibonacci series follows a simple pattern:

1. Start with two numbers: 0 and 1.
2. The next number is found by adding the previous two numbers.
3. Keep repeating this process to get the next numbers in the series.

For example:
- Start with 0, 1.
- Next number: 0 + 1 = 1, so the series is now 0, 1, 1.
- Next: 1 + 1 = 2, so 0, 1, 1, 2.
- Next: 1 + 2 = 3, so 0, 1, 1, 2, 3.
- Next: 2 + 3 = 5, so 0, 1, 1, 2, 3, 5.
- And so on...

This pattern continues forever! 😊*/
