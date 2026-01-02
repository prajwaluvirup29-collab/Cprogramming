#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        int temp = a[i][i];
        a[i][i] = a[i][n - i - 1];
        a[i][n - i - 1] = temp;
    }

    printf("Matrix after interchanging diagonals:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
