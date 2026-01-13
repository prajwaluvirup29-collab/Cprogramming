#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
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
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int isSorted(struct Node* head) {
    if (head == NULL)
        return 1;

    while (head->next != NULL) {
        if (head->data > head->next->data)
            return 0;
        head = head->next;
    }
    return 1;
}

int main() {
    struct Node* head = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        append(&head, val);
    }

    if (isSorted(head))
        printf("Linked list is sorted\n");
    else
        printf("Linked list is not sorted\n");

    return 0;
}
