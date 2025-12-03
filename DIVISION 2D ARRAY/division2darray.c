#include <stdio.h>

int main() {
    int n;

    printf("Enter matrix size (1 for 1x1, 2 for 2x2, 3 for 3x3): ");
    scanf("%d", &n);

    if (n < 1 || n > 3) {
        printf("Invalid size!");
        return 0;
    }

    float A[3][3], B[3][3], Div[3][3];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    // Element-wise Division
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(B[i][j] == 0){
                printf("\nERROR: Division by zero at position (%d,%d)\n", i, j);
                return 0;
            }
            Div[i][j] = A[i][j] / B[i][j];
        }
    }

    // Display Result
    printf("\nResultant Matrix (A ÷ B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", Div[i][j]);
        }
        printf("\n");
    }

    return 0;
}
