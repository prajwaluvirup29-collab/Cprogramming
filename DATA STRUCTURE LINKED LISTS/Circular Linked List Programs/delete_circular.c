#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void deleteBegin(struct Node **head) {
    if(*head == NULL) return;

    struct Node *temp = *head;
    struct Node *last = *head;

    while(last->next != *head)
        last = last->next;

    if(last == *head) {
        *head = NULL;
    } else {
        last->next = temp->next;
        *head = temp->next;
    }

    free(temp);
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

    return 0;
}