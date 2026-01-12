#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp;
    int n, value, min, max;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    min = max = head->data;
    temp = head;

    while (temp != NULL) {
        if (temp->data < min) min = temp->data;
        if (temp->data > max) max = temp->data;
        temp = temp->next;
    }

    printf("Minimum: %d\nMaximum: %d\n", min, max);
    return 0;
}
