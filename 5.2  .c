#include <stdio.h>

int main() {
    int s = 0, c = 0;
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) 
        { 
            s=s+ i;
            c= c+1;  //c++
        }
    }

    printf("Number of integers divisible by 7: %d\n", c);
    printf("Sum of these integers: %d\n", s);

    return 0;
}
