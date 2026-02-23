#include <stdio.h>
#include <stdlib.h>

struct Node {
    int row, col, value;
    struct Node* next;
};

struct Node* insert(struct Node* head, int r, int c, int v) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->row = r;
    temp->col = c;
    temp->value = v;
    temp->next = head;
    return temp;
}

void display(struct Node* head) {
    while (head) {
        printf("Row:%d Col:%d Value:%d\n", head->row, head->col, head->value);
        head = head->next;
    }
}

int main() {
    struct Node* matrix = NULL;

    matrix = insert(matrix, 0, 1, 5);
    matrix = insert(matrix, 1, 2, 8);
    matrix = insert(matrix, 2, 0, 3);

    display(matrix);

    return 0;
}