#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void splitList(struct Node *head, struct Node **first, struct Node **second) {
    struct Node *slow = head, *fast = head->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *first = head;
    *second = slow->next;
    slow->next = NULL;
}

void display(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *temp, *first, *second;
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

    splitList(head, &first, &second);

    printf("First Half:\n");
    display(first);
    printf("Second Half:\n");
    display(second);

    return 0;
}
