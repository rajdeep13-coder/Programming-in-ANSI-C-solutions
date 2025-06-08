#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;          //3rd term= 1st term + 2nd term
        a = b;              //1st term = 2nd term
        b = c;              //2nd term = 3rd term
    }
    return 0;
}
