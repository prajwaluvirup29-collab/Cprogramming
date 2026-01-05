#include <stdio.h>

int main() {
    int n, i;
    int marks[50], freq[101] = {0}; // Marks 0-100

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of student %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);
        freq[marks[i]]++;
    }

    printf("\nHistogram (Marks Distribution):\n");
    for(i = 0; i <= 100; i++) {
        if(freq[i] > 0) {
            printf("Marks %d: ", i);
            for(int j = 0; j < freq[i]; j++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}
