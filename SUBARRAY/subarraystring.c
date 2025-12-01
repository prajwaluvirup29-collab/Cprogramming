#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100];
    char subStr[50];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);

    // Remove newline character (optional)
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter the substring to search: ");
    fgets(subStr, sizeof(subStr), stdin);

    // Remove newline
    subStr[strcspn(subStr, "\n")] = '\0';

    // strstr() returns pointer to first occurrence or NULL
    if (strstr(mainStr, subStr) != NULL) {
        printf("Substring FOUND in the main string!\n");
    } else {
        printf("Substring NOT FOUND.\n");
    }

    return 0;
}