#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createList(int n) {
    struct Node *head = NULL, *temp, *newNode;
    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

struct Node* concatenate(struct Node *head1, struct Node *head2) {
    if (head1 == NULL) return head2;

    struct Node *temp = head1;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head2;
    return head1;
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
    struct Node *head1, *head2, *head;

    printf("Enter number of nodes in list 1: ");
    scanf("%d", &n1);
    head1 = createList(n1);

    printf("Enter number of nodes in list 2: ");
    scanf("%d", &n2);
    head2 = createList(n2);

    head = concatenate(head1, head2);
    printf("Concatenated List:\n");
    display(head);

    return 0;
}
