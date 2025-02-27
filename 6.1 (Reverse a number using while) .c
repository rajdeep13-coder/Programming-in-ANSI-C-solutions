#include <stdio.h>
int main() {
    int num, rnum = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        r = num % 10;
        rnum = rnum * 10 + r;
        num = num/ 10;
    }
    printf("Reversed Number: %d\n", rnum);
    return 0;
}
