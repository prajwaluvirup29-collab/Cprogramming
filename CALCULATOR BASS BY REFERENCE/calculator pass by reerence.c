#include <stdio.h>

// Function prototypes (pass-by-reference)
void add(int *a, int *b, int *result);
void subtract(int *a, int *b, int *result);
void multiply(int *a, int *b, int *result);
void divide(int *a, int *b, float *result);

int main() {
    int num1, num2, choice, ans;
    float divAns;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n--- Simple Calculator (Pass-by-Reference) ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 2:
            subtract(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 3:
            multiply(&num1, &num2, &ans);
            printf("Result = %d\n", ans);
            break;
        case 4:
            if (num2 != 0) {
                divide(&num1, &num2, &divAns);
                printf("Result = %.2f\n", divAns);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Functions using pass-by-reference
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

void divide(int *a, int *b, float *result) {
    *result = (float)(*a) / (*b);
}
