#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s[10];
    float sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        sum += s[i].marks;
    }
    for (int i = 0; i < 10; i++) {
        printf("Name: %s Roll: %d Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    printf("Average Marks = %.2f\n", sum / 10);
    return 0;
}
// This program takes input for 10 students' names, roll numbers, and marks,
// stores them in a structure, and then prints the details along with the average marks.