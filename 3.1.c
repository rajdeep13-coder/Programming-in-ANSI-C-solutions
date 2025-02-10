#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter values for x, y, and z:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Before rotation: x = %d, y = %d, z = %d\n", x, y, z);
    x = x + y + z;  
    y = x - (y + z); 
    z = x - (y + z); 
    x = x - (y + z); 
    printf("After rotation: x = %d, y = %d, z = %d\n", x, y, z);
    
    return 0;
}

//Other approaches:-
//using of another temporary variable
//changing the variables in print statement as per requirement
