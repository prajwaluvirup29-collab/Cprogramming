#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void create(struct Node **head, int n) {
    struct Node *temp = NULL, *newNode;
    int val;

    for(int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;

        if(*head == NULL) {
            *head = newNode;
            newNode->next = *head;
            temp = newNode;
        } else {
            temp->next = newNode;
            newNode->next = *head;
            temp = newNode;
        }
    }
}