#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Wave print of matrix:\n");
    for(j = 0; j < c; j++) {
        if(j % 2 == 0) {
            for(i = 0; i < r; i++)
                printf("%d ", a[i][j]);
        } else {
            for(i = r - 1; i >= 0; i--)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}
