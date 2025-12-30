#include <stdio.h>

int main() {
    int a[10][10], i, j, n;
    int mainSum = 0, antiSum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                mainSum += a[i][j];
            if (i + j == n - 1)
                antiSum += a[i][j];
        }
    }

    printf("Sum of main diagonal = %d\n", mainSum);
    printf("Sum of anti-diagonal = %d\n", antiSum);

    return 0;
}
