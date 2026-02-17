#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (!*head) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void moveLastToFront(struct Node** head) {
    if (!*head || !(*head)->next)
        return;

    struct Node* secondLast = NULL;
    struct Node* last = *head;

    while (last->next) {
        secondLast = last;
        last = last->next;
    }

    secondLast->next = NULL;
    last->next = *head;
    *head = last;
}

void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    printf("Before:\n");
    display(head);

    moveLastToFront(&head);

    printf("After Moving Last to Front:\n");
    display(head);

    return 0;
}
