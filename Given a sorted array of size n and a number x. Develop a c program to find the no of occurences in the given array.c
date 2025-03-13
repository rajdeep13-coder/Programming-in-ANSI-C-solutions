#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5, 6};           //since the array is not user input, you can take any other sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, c = 0;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            c++;
        }
    }
    printf("Number of occurrences of %d is: %d\n", x, c);
    return 0;
}
