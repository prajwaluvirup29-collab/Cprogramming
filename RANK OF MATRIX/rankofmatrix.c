#include <stdio.h>

#define MAX 10   // maximum matrix size

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    float A[MAX][MAX];
    
    printf("Enter elements of the matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    int rank = n;

    // Convert to Row Echelon Form
    for (int row = 0, col = 0; row < m && col < rank; col++) {

        // Find pivot in current column
        int pivot = row;
        while (pivot < m && A[pivot][col] == 0)
            pivot++;

        if (pivot == m) {
            // No pivot — reduce rank by 1
            for (int i = 0; i < m; i++)
                A[i][col] = A[i][rank - 1];
            rank--;
            col--;
            continue;
        }

        // Swap row with the pivot row
        if (pivot != row) {
            for (int j = 0; j < rank; j++) {
                float temp = A[row][j];
                A[row][j] = A[pivot][j];
                A[pivot][j] = temp;
            }
        }

        // Eliminate below pivot
        for (int i = row + 1; i < m; i++) {
            float factor = A[i][col] / A[row][col];
            for (int j = col; j < rank; j++)
                A[i][j] -= factor * A[row][j];
        }

        row++;
    }

    printf("\nRank of the matrix = %d\n", rank);

    return 0;
}
