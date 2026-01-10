#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* deleteAtPosition(struct Node* head, int pos) {
    if (head == NULL)
        return NULL;

    if (pos == 1) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    struct Node *del = temp->next;
    temp->next = del->next;
    free(del);

    return head;
}

void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = NULL;

    head = deleteAtPosition(head, 2);
    display(head);

    return 0;
}
