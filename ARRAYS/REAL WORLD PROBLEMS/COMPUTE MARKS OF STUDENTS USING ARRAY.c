#include <stdio.h>

int main() {
    int n, i;
    float marks[50], sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg = sum / n;

    printf("\nTotal Marks: %.2f\n", sum);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}
