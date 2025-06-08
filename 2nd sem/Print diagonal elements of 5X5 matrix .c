#include <stdio.h>

int main() {
    int a[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf("%d", &a[i][j]);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i == j || i + j == 4)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
// This program reads a 5x5 matrix and prints its diagonal elements.
// The main diagonal elements are those where the row index equals the column index (i == j),