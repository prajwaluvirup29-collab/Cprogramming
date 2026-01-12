#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* merge(struct Node *l1, struct Node *l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data < l2->data) {
        l1->next = merge(l1->next, l2);
        return l1;
    } else {
        l2->next = merge(l1, l2->next);
        return l2;
    }
}

struct Node* createSortedList(int n) {
    struct Node *head = NULL, *temp, *newNode;
    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
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
    int n1, n2;
    struct Node *l1, *l2, *merged;

    printf("Enter nodes in sorted list 1: ");
    scanf("%d", &n1);
    l1 = createSortedList(n1);

    printf("Enter nodes in sorted list 2: ");
    scanf("%d", &n2);
    l2 = createSortedList(n2);

    merged = merge(l1, l2);

    printf("Merged Sorted List:\n");
    display(merged);

    return 0;
}
