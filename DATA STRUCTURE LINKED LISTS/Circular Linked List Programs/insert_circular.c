#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if(*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while(temp->next != *head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = *head;
}

void insertBegin(struct Node **head, int data) {
    insertEnd(head, data);
    *head = (*head)->next;
}

void display(struct Node *head) {
    if(head == NULL) return;

    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(head)\n");
}

int main() {
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertBegin(&head, 5);

    display(head);

    return 0;
}