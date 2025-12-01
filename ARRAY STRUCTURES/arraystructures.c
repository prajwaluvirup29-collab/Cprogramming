#include <stdio.h>

// Define a structure
struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[3];   // Array of structures
    int i;

    // Input data
    for (i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Display data
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    // Display size of structure
    printf("Size of structure Student = %lu bytes\n", sizeof(struct Student));

    // Display size of array
    printf("Size of array s = %lu bytes\n", sizeof(s));

    // Number of elements in array
    printf("Number of elements in array s = %lu\n", sizeof(s) / sizeof(s[0]));

    return 0;
}
