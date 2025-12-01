#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[120];

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    // Copy first name into full name
    strcpy(full, first);

    // Add space
    strcat(full, " ");

    // Add last name
    strcat(full, last);

    // Display
    printf("\nFull Name: %s\n", full);

    return 0;
}
