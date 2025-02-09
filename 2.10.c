#include <stdio.h>

#define MAX_WD 10000
#define ATM_FEE 50
#define MIN_BAL 500

int main() {
    int b, wd, fb;

    printf("Enter balance: ");
    scanf("%d", &b);

    if (b < MIN_BAL) {
        printf("Insufficient balance. Minimum balance is Rs %d.\n", MIN_BAL);
        return 0;
    }

    printf("Enter withdrawal amount: ");
    scanf("%d", &wd);

    if (wd > MAX_WD) {
        printf("Max withdrawal limit is Rs %d.\n", MAX_WD);
        return 0;
    }

    if (b < wd + ATM_FEE) {
        printf("Insufficient balance for withdrawal and fee.\n");
        return 0;
    }

    fb = b - wd - ATM_FEE;

    printf("\nWithdrawal successful!\n");
    printf("Withdrawn: Rs %d\n", wd);
    printf("ATM fee: Rs %d\n", ATM_FEE);
    printf("Final balance: Rs %d\n", fb);

    return 0;
}


//Symbolic constants in C are created using the #define preprocessor directive.
//They allow you to define values that are used throughout your program, but these values cannot be changed during runtime. 
//This makes the code more readable and easier to maintain, as you can modify the constant in one place without searching through the entire code.







