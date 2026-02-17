#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertBegin(struct Node** head, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head)
        (*head)->prev = newNode;

    *head = newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void display(struct Node* head) {
    while (head) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertBegin(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    display(head);

    return 0;
}
