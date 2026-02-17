#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void reverse(struct Node** head) {
    struct Node* temp = NULL;
    struct Node* current = *head;

    while (current) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp)
        *head = temp->prev;
}
