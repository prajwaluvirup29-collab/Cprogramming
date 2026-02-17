#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void create(struct Node** head, int n) {
    int val;
    struct Node *newNode, *temp = NULL;

    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (*head == NULL)
            *head = newNode;
        else {
            temp->next = newNode;
            newNode->prev = temp;
        }
        temp = newNode;
    }
}

int main() {
    struct Node* head = NULL;
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    create(&head, n);

    printf("Doubly Linked List Created.\n");
    return 0;
}
