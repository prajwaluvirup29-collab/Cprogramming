#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c) {
        printf("Matrix is not symmetric\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}
