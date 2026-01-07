#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp1, *temp2;
    struct Node *newNode;
    int n, i, t;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
    }

    // Sort linked list (Bubble sort logic)
    for (temp1 = head; temp1 != NULL; temp1 = temp1->next) {
        for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next) {
            if (temp1->data > temp2->data) {
                t = temp1->data;
                temp1->data = temp2->data;
                temp2->data = t;
            }
        }
    }

    // Display sorted list
    printf("Sorted Linked List (Ascending Order):\n");
    temp1 = head;
    while (temp1 != NULL) {
        printf("%d -> ", temp1->data);
        temp1 = temp1->next;
    }
    printf("NULL\n");

    return 0;
}
