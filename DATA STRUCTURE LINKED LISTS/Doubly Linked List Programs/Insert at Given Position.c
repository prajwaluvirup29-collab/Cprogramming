#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertPos(struct Node** head, int data, int pos) {
    struct Node* newNode = malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = data;

    if (pos == 1) {
        newNode->prev = NULL;
        newNode->next = *head;
        if (*head) (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (!temp) return;

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next)
        temp->next->prev = newNode;

    temp->next = newNode;
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

    insertPos(&head, 10, 1);
    insertPos(&head, 20, 2);
    insertPos(&head, 15, 2);

    display(head);

    return 0;
}
