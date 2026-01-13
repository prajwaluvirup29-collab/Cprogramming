#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void nthFromEnd(struct Node* head, int n) {
    struct Node *main = head, *ref = head;

    for (int i = 0; i < n; i++) {
        if (ref == NULL) {
            printf("N is greater than list length\n");
            return;
        }
        ref = ref->next;
    }

    while (ref) {
        main = main->next;
        ref = ref->next;
    }

    printf("Nth node from end is: %d\n", main->data);
}

int main() {
    struct Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);

    nthFromEnd(head, 2);

    return 0;
}
