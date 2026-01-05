#include <stdio.h>

int main() {
    int n, i, j, rank[50];
    float marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        rank[i] = 1; // Initialize rank
    }

    // Compute ranks
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(marks[j] > marks[i])
                rank[i]++;
        }
    }

    printf("\nLeaderboard:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d: Marks = %.2f, Rank = %d\n", i + 1, marks[i], rank[i]);
    }

    return 0;
}
