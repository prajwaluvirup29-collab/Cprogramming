#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void displayForward(struct Node* head) {
    struct Node* temp = head;
    while (temp) {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL) break;
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayReverse(struct Node* head) {
    struct Node* temp = head;

    while (temp && temp->next)
        temp = temp->next;

    while (temp) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    struct Node *n1, *n2, *n3;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));

    n1->data = 10; n1->prev = NULL; n1->next = n2;
    n2->data = 20; n2->prev = n1; n2->next = n3;
    n3->data = 30; n3->prev = n2; n3->next = NULL;

    head = n1;

    printf("Forward:\n");
    displayForward(head);

    printf("Reverse:\n");
    displayReverse(head);

    return 0;
}
