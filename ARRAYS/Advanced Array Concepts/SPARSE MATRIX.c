#include <stdio.h>

int main() {
    int a[10][10], i, j, r, c, count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
                count++;
        }
    }

    printf("\nSparse Matrix Representation:\n");
    printf("Row  Column  Value\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != 0)
                printf("%d     %d       %d\n", i, j, a[i][j]);
        }
    }

    printf("Total non-zero elements = %d\n", count);
    return 0;
}
