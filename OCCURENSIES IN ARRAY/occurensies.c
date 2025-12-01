#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its occurrences: ");
    scanf("%c", &ch);

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d time(s) in the array.\n", ch, count);

    return 0;
}
