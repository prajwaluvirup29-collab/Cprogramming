#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

// Recursive function to reverse list
struct Node* reverse(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct Node* newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, i;

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

    head = reverse(head);

    // Display reversed list
    printf("Reversed Linked List (Recursive):\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
