/* (a) 1
       2 2
       3 3 3
       4 4 4 4
       5 5 5 5 5 */

#include <stdio.h>
int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}



/* (b) * * * * *
         * * * *
           * * *
             * *
               *  */

#include <stdio.h>
int main() {
    int i, j, k, n = 5;
    for (i = n; i >= 1; i--) {
        for (k = 0; k < n - i; k++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

