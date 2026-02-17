#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void deletePos(struct Node** head, int pos) {
    struct Node* temp = *head;

    if (pos == 1) {
        *head = temp->next;
        if (*head) (*head)->prev = NULL;
        free(temp);
        return;
    }

    for (int i = 1; i < pos && temp; i++)
        temp = temp->next;

    if (!temp) return;

    if (temp->prev)
        temp->prev->next = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
}
