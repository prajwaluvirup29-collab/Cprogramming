#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* deleteFirst(struct Node *head, int key) {
    if (head == NULL)
        return head;

    if (head->data == key) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *curr = head;
    while (curr->next != NULL && curr->next->data != key) {
        curr = curr->next;
    }

    if (curr->next != NULL) {
        struct Node *temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }

    return head;
}

void display(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *temp;
    int n, value, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    printf("Enter value to delete: ");
    scanf("%d", &key);

    head = deleteFirst(head, key);
    display(head);

    return 0;
}
