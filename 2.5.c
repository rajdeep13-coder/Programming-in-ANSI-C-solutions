#include <stdio.h>

int main() {
    float pr, ps;
    printf("Enter price of rice: ");
    scanf("%f", &pr);
    printf("Enter price of sugar: ");
    scanf("%f", &ps);
    printf("\n *** LIST OF ITEMS ***");
    printf("\n Items             Price");
    printf("\n Rice              Rs %.2f", pr);
    printf("\n Sugar             Rs %.2f", ps);

    return 0;
}
