#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* deleteAll(struct Node *head, int key) {
    struct Node *temp;

    while (head != NULL && head->data == key) {
        temp = head;
        head = head->next;
        free(temp);
    }

    struct Node *curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data == key) {
            temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
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

    head = deleteAll(head, key);
    display(head);

    return 0;
}
