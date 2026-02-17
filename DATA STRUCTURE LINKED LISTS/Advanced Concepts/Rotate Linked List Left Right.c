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

void rotateLeft(struct Node** head, int k) {
    if (!*head || k == 0) return;

    struct Node* temp = *head;
    int count = 1;

    while (count < k && temp) {
        temp = temp->next;
        count++;
    }

    if (!temp) return;

    struct Node* kthNode = temp;

    while (temp->next)
        temp = temp->next;

    temp->next = *head;
    *head = kthNode->next;
    kthNode->next = NULL;
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

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);

    printf("Before Rotation:\n");
    display(head);

    rotateLeft(&head, 2);

    printf("After Left Rotation:\n");
    display(head);

    return 0;
}
