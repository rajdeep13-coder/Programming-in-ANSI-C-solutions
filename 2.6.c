#include <stdio.h>

int main() {
    int num;
    int pc = 0, nc = 0;

    printf("Enter numbers (0 to terminate):\n");

    while (1) {  //Note this step, Its imp
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num > 0) {
            pc++;
        } else {
            nc++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", pc);
    printf("Number of negative numbers: %d\n", nc);

    return 0;
}
