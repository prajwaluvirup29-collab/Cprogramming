#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void swapNodes(struct Node** head, int x, int y) {
    if (x == y) return;

    struct Node *prevX = NULL, *currX = *head;
    while (currX && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }

    struct Node *prevY = NULL, *currY = *head;
    while (currY && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }

    if (!currX || !currY) return;

    if (prevX)
        prevX->next = currY;
    else
        *head = currY;

    if (prevY)
        prevY->next = currX;
    else
        *head = currX;

    struct Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
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

    printf("Before Swap:\n");
    display(head);

    swapNodes(&head, 2, 4);

    printf("After Swap:\n");
    display(head);

    return 0;
}
