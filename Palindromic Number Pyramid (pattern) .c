#include <stdio.h>
int main() {
    int n, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {    //for space
            printf("  ");
        }

        for(j = i; j <= 2 * i - 1; j++) {         //for increasing numbers
            printf("%d ", j);
        }

        for(j = 2 * i - 2; j >= i; j--) {         //for decreasing numbers
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}


//output
/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4  (n terms)*/
