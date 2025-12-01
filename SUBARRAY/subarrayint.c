#include <stdio.h>

int main() {
    int mainArr[50], subArr[50];
    int n, m, i, j, found;

    // Read main array
    printf("Enter size of main array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &mainArr[i]);

    // Read sub array
    printf("Enter size of sub array: ");
    scanf("%d", &m);

    printf("Enter %d elements: ", m);
    for (i = 0; i < m; i++)
        scanf("%d", &subArr[i]);

    // Search logic
    found = 0;
    for (i = 0; i <= n - m; i++) {
        int match = 1;  // assume subarray matches

        for (j = 0; j < m; j++) {
            if (mainArr[i + j] != subArr[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            found = 1;
            break;
        }
    }

    // Result
    if (found)
        printf("Subarray FOUND starting at index %d\n", i);
    else
        printf("Subarray NOT found.\n");

    return 0;
}
