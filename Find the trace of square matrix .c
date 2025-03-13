//M1, 2D ARRAY

#include<stdio.h>
int main() {
    int n, s = 0; 

    printf("Enter the dimension of square matrix: ");
    scanf("%d", &n);
    int arr[n][n]; 
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        s += arr[i][i];
    }
    printf("Trace of the matrix = %d\n", s);
    return 0;
}





//M2, Taking 1 ROW at a time

#include<stdio.h>
int main() {
    int n, s = 0, value;
    printf("Enter the dimension of square matrix: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter row no %d : ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &value);
            if (i == j) {
                s += value; 
            }
        }
    }
    printf("Trace of the matrix = %d\n", s);
    return 0;
}
