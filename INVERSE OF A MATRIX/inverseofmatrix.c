#include <stdio.h>

int main() {
    int n;

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    float a[n][n], inv[n][n];

    // Input matrix
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &a[i][j]);
            inv[i][j] = (i == j) ? 1 : 0;  // Identity matrix
        }
    }

    // Gauss-Jordan elimination
    for (int i = 0; i < n; i++) {
        // If diagonal element is zero, swap with a below row
        if (a[i][i] == 0) {
            int swap = 0;
            for (int k = i + 1; k < n; k++) {
                if (a[k][i] != 0) {
                    for (int j = 0; j < n; j++) {
                        float temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;

                        temp = inv[i][j];
                        inv[i][j] = inv[k][j];
                        inv[k][j] = temp;
                    }
                    swap = 1;
                    break;
                }
            }
            if (!swap) {
                printf("Matrix is singular, inverse does not exist.\n");
                return 0;
            }
        }

        // Make the diagonal element 1
        float diag = a[i][i];
        for (int j = 0; j < n; j++) {
            a[i][j] /= diag;
            inv[i][j] /= diag;
        }

        // Make all other rows 0 in current column
        for (int k = 0; k < n; k++) {
            if (k != i) {
                float factor = a[k][i];
                for (int j = 0; j < n; j++) {
                    a[k][j] -= factor * a[i][j];
                    inv[k][j] -= factor * inv[i][j];
                }
            }
        }
    }

    // Print inverse matrix
    printf("Inverse of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.3f ", inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}
