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

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

struct Node* pairwiseSwap(struct Node* head) {
    if (!head || !head->next)
        return head;

    struct Node* prev = head;
    struct Node* curr = head->next;

    head = curr;

    while (1) {
        struct Node* next = curr->next;
        curr->next = prev;

        if (!next || !next->next) {
            prev->next = next;
            break;
        }

        prev->next = next->next;

        prev = next;
        curr = prev->next;
    }

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
    struct Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    printf("Before:\n");
    display(head);

    head = pairwiseSwap(head);

    printf("After Pairwise Swap:\n");
    display(head);

    return 0;
}
