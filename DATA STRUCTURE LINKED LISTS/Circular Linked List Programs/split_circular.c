#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void split(struct Node *head, struct Node **head1, struct Node **head2) {
    struct Node *slow = head, *fast = head;

    while(fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }

    *head1 = head;
    *head2 = slow->next;

    slow->next = *head1;

    struct Node *temp = *head2;
    while(temp->next != head)
        temp = temp->next;

    temp->next = *head2;
}