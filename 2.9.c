#include <stdio.h>
typedef int Integer;  
typedef float RealNumber;  
typedef struct {
    char name[50];
    int age;
} Person; 

int main() {
    Integer num1 = 10, num2 = 20;
    RealNumber pi = 3.14, radius = 5.0;
    Person person1;
    person1.age = 25;
    snprintf(person1.name, sizeof(person1.name), "John Doe");
    printf("Integer values: num1 = %d, num2 = %d\n", num1, num2);
    printf("RealNumber values: pi = %.2f, radius = %.2f\n", pi, radius);
    printf("Person details: Name = %s, Age = %d\n", person1.name, person1.age);

    return 0;
}
