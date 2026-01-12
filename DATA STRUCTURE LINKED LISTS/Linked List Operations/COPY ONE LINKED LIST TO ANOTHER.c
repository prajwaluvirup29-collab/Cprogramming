#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* copyList(struct Node *head) {
    if (head == NULL)
        return NULL;

    struct Node *newHead = NULL, *tail = NULL, *temp;
    while (head != NULL) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = head->data;
        temp->next = NULL;

        if (newHead == NULL)
            newHead = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        head = head->next;
    }
    return newHead;
}

void display(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *temp, *copy;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    copy = copyList(head);

    printf("Original List:\n");
    display(head);
    printf("Copied List:\n");
    display(copy);

    return 0;
}
