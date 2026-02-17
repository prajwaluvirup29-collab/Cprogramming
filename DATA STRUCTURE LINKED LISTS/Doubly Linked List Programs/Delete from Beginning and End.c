#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void deleteBegin(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head)
        (*head)->prev = NULL;

    free(temp);
}

void deleteEnd(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;

    while (temp->next)
        temp = temp->next;

    if (temp->prev)
        temp->prev->next = NULL;
    else
        *head = NULL;

    free(temp);
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

    return 0;
}
