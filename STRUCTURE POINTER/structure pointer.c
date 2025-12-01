#include <stdio.h>

// Structure definition
struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;      // normal structure variable
    struct Student *ptr;   // structure pointer

    // Assign pointer to structure
    ptr = &s;

    // Input using pointer
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    // Display using pointer
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}rt