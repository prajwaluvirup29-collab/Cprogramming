#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int josephus(int n, int k) {
    struct Node *head = NULL, *prev = NULL;

    for(int i = 1; i <= n; i++) {
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = i;

        if(head == NULL) {
            head = newNode;
            newNode->next = head;
            prev = newNode;
        } else {
            prev->next = newNode;
            newNode->next = head;
            prev = newNode;
        }
    }

    struct Node *ptr = head;

    while(ptr->next != ptr) {
        for(int i = 1; i < k-1; i++)
            ptr = ptr->next;

        struct Node *del = ptr->next;
        ptr->next = del->next;
        free(del);
        ptr = ptr->next;
    }

    return ptr->data;
}

int main() {
    int n = 7, k = 3;
    printf("Safe Position: %d", josephus(n, k));
    return 0;
}