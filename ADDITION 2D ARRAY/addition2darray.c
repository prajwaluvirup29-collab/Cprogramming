#include <stdio.h>

int main() {
    int n;

    printf("Enter matrix size (1 for 1x1, 2 for 2x2, 3 for 3x3): ");
    scanf("%d", &n);

    if(n < 1 || n > 3){
        printf("Invalid size!");
        return 0;
    }

    int A[3][3], B[3][3], Sum[3][3];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display Result
    printf("\nResultant Matrix (A + B):\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}