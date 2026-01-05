#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[3];   // Array of pointers
    int i, j;

    // Allocate different sizes for each row
    arr[0] = (int *)malloc(2 * sizeof(int));
    arr[1] = (int *)malloc(3 * sizeof(int));
    arr[2] = (int *)malloc(4 * sizeof(int));

    // Assign values
    for (i = 0; i < 2; i++)
        arr[0][i] = i + 1;

    for (i = 0; i < 3; i++)
        arr[1][i] = i + 10;

    for (i = 0; i < 4; i++)
        arr[2][i] = i + 20;

    // Display jagged array
    printf("Jagged Array Elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < (i + 2); j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (i = 0; i < 3; i++)
        free(arr[i]);

    return 0;
}
