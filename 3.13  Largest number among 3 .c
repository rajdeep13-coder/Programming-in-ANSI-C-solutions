//Using If-else
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    } 
    else {
        printf("The largest number is: %d\n", c);
    }
    return 0;
}


//Using Tenary operator
#include <stdio.h>
int main() {
    int a, b, c, l;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    l = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", l);
    return 0;
}


//Using Bitwise
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = a ^ ((a ^ b) & -(a < b));  
    largest = largest ^ ((largest ^ c) & -(largest < c));  
    printf("The largest number is: %d\n", largest);
    return 0;
}


//Arithmatic Method
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a + b + abs(a - b)) / 2;  
    largest = (largest + c + abs(largest - c)) / 2; 
    printf("The largest number is: %d\n", largest);
    return 0;
}


